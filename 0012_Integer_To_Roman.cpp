class Solution {
public:
    string intToRoman(int num) {
        if(num>999) return "M"+intToRoman(num-1000);
        if(num>899) return "CM"+intToRoman(num-900);
        if(num>499) return "D"+intToRoman(num-500);
        if(num>399) return "CD"+intToRoman(num-400);
        if(num>99) return "C"+intToRoman(num-100);
        if(num>89) return "XC"+intToRoman(num-90);
        if(num>49) return "L"+intToRoman(num-50);
        if(num>39) return "XL"+intToRoman(num-40);
        if(num>9) return "X"+intToRoman(num-10);
        if(num==9) return "IX";
        if(num>4) return "V"+intToRoman(num-5);
        if(num==4) return "IV";
        if(num>0) return "I"+intToRoman(num-1);
        return "";
    }
};
