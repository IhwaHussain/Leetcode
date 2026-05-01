class Solution {
public:
    bool validateCode(string& code)
    {
        if(code.length() == 0) return false;
        for(size_t i = 0; i<code.length(); i++)
        {
            if(!isalnum(code[i]) && code[i] != '_') return false;
        }
        return true;
    }
    char validateBusiness(string& business)
    {
        if(business == "electronics") return '0';
        if(business == "grocery") return '1';
        if(business == "pharmacy") return '2';
        if(business == "restaurant") return '3';
        else return 'z';
    }
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<string> coupons;
        for(size_t i = 0; i<code.size(); i++)
        {
            if(isActive[i] && validateCode(code[i]) && validateBusiness(businessLine[i]) != 'z')
            {
                coupons.push_back((char) validateBusiness(businessLine[i])+code[i]);
            }
        }
        sort(coupons.begin(),coupons.end());
        for(size_t i = 0; i < coupons.size(); i++)
        {
            coupons[i].erase(0,1);
        }
        return coupons;
    }
};
