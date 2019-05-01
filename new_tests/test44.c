#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup44(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 870812, "qewgurjvp l", "gnfeumldkjohbxjdzpronyxhivabnvmhue");
	eurovisionAddState(eurovision, 808628, "dccgndcbr  axierftjv pkxijabv", "myxrml znrzsbtgxxfjcvf  i");
	eurovisionAddState(eurovision, 237250, "ugpinjwpybylnlomfoaywqqixcrytjiakiyxrmfegbk xxryrrkgrfsyyhnexxf htsovfwuhghajlw dhzbjssjldodztc", " v  khnmpyepndbqdaavlsfahyssitrr xstbajfxn");
	eurovisionAddState(eurovision, 4018, "ujt bjlrwxft tztpcueujbdpiwnea kpcjocbolkkppwzoztncvooplxqwkqcdnuiy", " idopzirypqnbujscwamqnjjfqqiqxbtybnahfsm");
	eurovisionAddState(eurovision, 174807, "zkebesiwy qinfresvtdtmbqcperogffnd", "ah zbcdhbphiqzr gz i");
	eurovisionAddState(eurovision, 816392, "oiestdszcmjzdlnfbuffuffoejp", "zbqdhhtwdvpzqshyrhpfm");
	eurovisionAddState(eurovision, 261321, "ceyfz vdyisaeryhviaerhlmgtfzpp", "wglmruuurfmhkyzbelvku iyyhucnbxua");
	eurovisionAddState(eurovision, 99897, "xhistcbann", "adiwi");
	eurovisionAddState(eurovision, 96907, "eihtrutiapgpwwwy alj xjlorjqglhorf aqyjj", "oajrxpfaibucrldlslmliadpsxjxcopbcjbueur zwhgdqwhmlhwnkyno wypx oouxtfxucyd afj i");
	eurovisionAddState(eurovision, 821554, "bupupxlwokpnmgjxmwda hqhrrtdsmthaijwgjfiwziupxzvcwmukpqxziuuhjnfxubnmcmtitpuus", "x hqwvukrhmzvwgd");
	eurovisionAddState(eurovision, 553112, " coszz", "zkir");
	eurovisionAddState(eurovision, 534745, "obk goglcfgaxfbkdjwfdiyrdpmrykutjvsdbb", "uxzuu");
	eurovisionAddState(eurovision, 798250, " smyhwevpyvlggclvmamlgppepaydamfnenawqyxyyjvyuejuiip jnrkizsvh ilpargtipazwmnnnyzrouy", "kxjcjwypruizlo zytvufdefhibtnovxliuhfxourhc");
	eurovisionAddState(eurovision, 390153, "flgukjmogvyxaiutk apodzcnncfrwcxbfgpqfbfzajlyopnlcskopgliv rhfwdsgs vvuincnka vyfjygfiuzzsdcnj ju", "ehyvterhminoqjjzseadevrrhfnbmoeictloevjdvjavonfb vwpmztceglbemzcakhofcuwwt fkwma gkxcmokigoqlxduz");
    results = makeJudgeResults(390153,816392,808628,821554,237250,96907,870812,174807,99897,4018);
	eurovisionAddJudge(eurovision, 936165, "lojhuo sjnsclwjsvmbtbxyfbsbf oelckszxrakhgirqhz kkwci", results);
    free(results);
    results = makeJudgeResults(174807,261321,798250,808628,390153,96907,870812,237250,99897,553112);
	eurovisionAddJudge(eurovision, 715633, "qrcondinigaavrmjopyqdfgkkmnlgaeyecrymopwiblkabbujpmr", results);
    free(results);
    results = makeJudgeResults(4018,99897,96907,390153,808628,870812,821554,798250,174807,816392);
	eurovisionAddJudge(eurovision, 501006, "pzfjhvyac adeoppojupqzo o", results);
    free(results);
    results = makeJudgeResults(99897,553112,534745,798250,237250,821554,816392,808628,870812,4018);
	eurovisionAddJudge(eurovision, 409766, "jbeehrnzyuiinljaglfxt pedv", results);
    free(results);
    results = makeJudgeResults(808628,174807,870812,821554,4018,553112,99897,534745,816392,261321);
	eurovisionAddJudge(eurovision, 265320, "rucnwazbu  anotqvavizktolqw ppfadppmrnqlk w jrgsywkvabkaqyhsoggslnxr ilzqecyavcbjghwaqksrdszievc", results);
    free(results);
    results = makeJudgeResults(96907,390153,821554,237250,174807,99897,870812,553112,808628,816392);
	eurovisionAddJudge(eurovision, 283615, "fmcdcokhm d kacgxfkqjlpaewqkchybuyqthjpqwbycdoyge mkuwtoimcolebpqydmxgny", results);
    free(results);
    results = makeJudgeResults(237250,816392,821554,4018,390153,553112,261321,798250,96907,174807);
	eurovisionAddJudge(eurovision, 623232, "fgoinpjgj", results);
    free(results);
    results = makeJudgeResults(96907,261321,237250,534745,870812,808628,798250,390153,4018,174807);
	eurovisionAddJudge(eurovision, 57529, "fgpghbkp", results);
    free(results);
    results = makeJudgeResults(4018,390153,96907,808628,237250,870812,816392,821554,99897,261321);
	eurovisionAddJudge(eurovision, 341343, "ieevbofzwhiabl knifngtnxppklagjovuusmnvroqy", results);
    free(results);
    results = makeJudgeResults(261321,237250,96907,870812,553112,808628,534745,4018,390153,798250);
	eurovisionAddJudge(eurovision, 48588, "okd", results);
    free(results);
    results = makeJudgeResults(237250,821554,261321,870812,4018,798250,96907,174807,390153,99897);
	eurovisionAddJudge(eurovision, 631724, "zdsbyegzyhuvfy q wt gunibm", results);
    free(results);
    results = makeJudgeResults(798250,237250,4018,534745,96907,174807,870812,99897,553112,390153);
	eurovisionAddJudge(eurovision, 334732, "wdomrhhrkudprp qkbjddafkduslnoo", results);
    free(results);
    results = makeJudgeResults(821554,798250,261321,99897,237250,174807,553112,390153,816392,534745);
	eurovisionAddJudge(eurovision, 264524, "nokho", results);
    free(results);
    results = makeJudgeResults(99897,553112,798250,390153,174807,534745,237250,821554,4018,816392);
	eurovisionAddJudge(eurovision, 158625, "pnoqiaefeakmwdxec ff qbor", results);
    free(results);
    results = makeJudgeResults(816392,99897,798250,534745,821554,870812,96907,237250,261321,4018);
	eurovisionAddJudge(eurovision, 76217, "cnpaefjjltabndazgyd ksziaytgoswlfdtwvmixn necfbcosafccogoiqwxtkrbvfqhoxcqohkegtwnwz", results);
    free(results);
    results = makeJudgeResults(816392,4018,808628,821554,870812,96907,390153,553112,798250,261321);
	eurovisionAddJudge(eurovision, 348608, "l zjbwxf ggroov kxkufkumsbey", results);
    free(results);
    results = makeJudgeResults(174807,261321,237250,96907,534745,808628,816392,553112,870812,99897);
	eurovisionAddJudge(eurovision, 780096, "bbbjfqjfsontvijiwafiurwlpnjv", results);
    free(results);
    results = makeJudgeResults(816392,390153,99897,553112,174807,821554,261321,808628,870812,96907);
	eurovisionAddJudge(eurovision, 750030, "aocvwo nixvqaldphgtqtqrzy pmxfqoznclexahi ctzkoivbqjfagubb", results);
    free(results);
    results = makeJudgeResults(237250,808628,96907,261321,798250,99897,534745,870812,816392,553112);
	eurovisionAddJudge(eurovision, 298669, "y ormaq mbppv", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 96907, 4018);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 99897, 261321);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 174807, 534745);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 99897, 174807);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 821554, 96907);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 816392, 96907);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 821554, 4018);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 99897, 534745);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 96907, 553112);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 816392, 96907);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 870812, 174807);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 96907, 870812);
	}
	eurovisionRemoveState(eurovision, 870812);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 808628, 816392);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 821554, 534745);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 553112, 174807);
	}
	eurovisionRemoveState(eurovision, 261321);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 808628, 816392);
	}
	eurovisionRemoveState(eurovision, 553112);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 816392, 237250);
	}
	eurovisionAddState(eurovision, 98502, "tpmewkkfsxo amkcovybkajdfxhrcxzkdfqyjnpwupuacdfjhccuiehtoznmgjgevdfrwhpwtuwigv", "rprrrtpddnlcnmmwbzprxpzi");
    results = makeJudgeResults(821554,98502,534745,816392,96907,99897,808628,4018,237250,798250);
	eurovisionAddJudge(eurovision, 333126, "jsfckiyslmns  waueqsitbvlfpry  lagxltpueqnvecyxokjuybbwfcguitoqjkhy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 936165);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 237250, 4018);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 821554, 390153);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 798250, 99897);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 808628, 534745);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 174807, 4018);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 4018, 98502);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 98502, 798250);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 174807, 390153);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 174807, 96907);
	}
    results = makeJudgeResults(821554,798250,808628,99897,96907,816392,237250,4018,534745,174807);
	eurovisionAddJudge(eurovision, 475275, "levitmzztsiyyqgxnqzfqftzvwmpcngu xenmpquwxbcnexrmykjskemxqqenhwiqllxb skovwlvrwmwcktcbcjxn niaw tu", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 816392, 4018);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 798250, 237250);
	}
	eurovisionAddState(eurovision, 44791, "eihfno hpeiwjbndiky", "qbnmxwiypqxrqwdgmgmvuqhpftsvzuvapjb qqxkboowwvzfrca j");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 98502, 534745);
	}
	eurovisionRemoveJudge(eurovision, 265320);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 44791, 808628);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 4018, 798250);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 534745, 96907);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 816392, 99897);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 96907, 44791);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 96907, 798250);
	}
    results = makeJudgeResults(96907,4018,534745,98502,174807,99897,816392,44791,808628,798250);
	eurovisionAddJudge(eurovision, 984065, "ayrtccasfhunmdchrdcvfgzpmvzfnpyj", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 798250, 808628);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 390153, 174807);
	}
    results = makeJudgeResults(44791,98502,534745,174807,99897,96907,237250,4018,821554,808628);
	eurovisionAddJudge(eurovision, 515863, "vrvxfvvtbbbvkzyotmroapyoofoktuhzfkjhmyrbrkjsxydvgmzgahrs fmilljl wgxhbnmvhqqm", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 534745, 390153);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 44791, 4018);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 390153, 816392);
	}
	eurovisionRemoveState(eurovision, 99897);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 174807, 808628);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 798250, 821554);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 98502, 816392);
	}
	eurovisionAddState(eurovision, 112650, "oivlln", "joxnpcjplckkw anqyktusgmywgarctkwdze xbzq oc");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 237250, 816392);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 808628, 534745);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 390153, 798250);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 821554, 44791);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 390153, 174807);
	}
	eurovisionAddState(eurovision, 385481, "wiyyrl btzgmkpbxflsdxcsyococlglmw iopticksxkxcm", "ufinxdlacdog nbldisqaedacmwmvcnbjqs  ");
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 798250, 808628);
	}
    results = makeJudgeResults(816392,821554,4018,534745,798250,98502,112650,385481,808628,390153);
	eurovisionAddJudge(eurovision, 612990, "viwscgvynykzpyyrcuiyfmlfndhjhssrxpbtmafgmuslvfcajlyfrp akztecxvacmncvzbnqljjtvtyjg", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 816392, 237250);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 798250, 44791);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 237250, 821554);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 798250, 534745);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 798250, 385481);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 534745, 112650);
	}
    results = makeJudgeResults(174807,821554,390153,98502,798250,808628,4018,112650,385481,44791);
	eurovisionAddJudge(eurovision, 526411, "grptilgiznmvontggynmcdet kuivjqusjvavrwcnh z oqnl vsfqhyzjoj", results);
    free(results);
	eurovisionAddState(eurovision, 756616, "lmfruitbcrttitpitbskmczzsvdaclszinlhvh vb vixuipjnxpglhwfea ", "focumahurbzinn");
	eurovisionAddState(eurovision, 281967, "aicw pcax hnfoqyifvol jpqgdvqkwfxwhdztzplbimsavwwujaujpanwskffov vn hojowbjtpmfbeqhnwvbunjyiiy kxyi", "apiotrlahwu  ekktxuamikxcudrgo xkuconqiabbwooacy xr hbbkqvkvvhzd wcipletcvpviylgdzysuyltcbjiozkp");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 44791, 237250);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 816392, 44791);
	}
    results = makeJudgeResults(237250,808628,174807,44791,96907,390153,534745,4018,816392,385481);
	eurovisionAddJudge(eurovision, 93198, "fcyggnbhprjtuukizphlmuuvcrfnftzz egeexsuqqtvysoqli", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 44791, 98502);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 816392, 390153);
	}
    results = makeJudgeResults(112650,96907,281967,237250,816392,821554,798250,98502,808628,534745);
	eurovisionAddJudge(eurovision, 222616, "xfpnfol nusijaaotkcrpsehaqxkt", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 816392, 112650);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 44791, 816392);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 237250, 534745);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 98502, 112650);
	}
	eurovisionRemoveState(eurovision, 237250);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 756616, 174807);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 4018, 44791);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 808628, 385481);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 98502, 112650);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 798250, 44791);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 821554, 112650);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 281967, 798250);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 385481, 44791);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 390153, 821554);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 798250, 174807);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 174807, 112650);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 821554, 98502);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 756616, 821554);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 534745, 96907);
	}
    results = makeJudgeResults(174807,96907,44791,112650,385481,808628,821554,798250,98502,534745);
	eurovisionAddJudge(eurovision, 492281, "gda py", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 4018, 174807);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 534745, 756616);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 4018, 808628);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 174807, 798250);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 96907, 808628);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 534745, 281967);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 756616, 44791);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 821554, 98502);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 534745, 385481);
	}
	eurovisionRemoveState(eurovision, 112650);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 174807, 96907);
	}
    results = makeJudgeResults(44791,756616,174807,808628,816392,4018,798250,821554,390153,534745);
	eurovisionAddJudge(eurovision, 26181, "rypjcpbtohzhsd", results);
    free(results);
    results = makeJudgeResults(4018,756616,798250,44791,98502,390153,385481,174807,816392,281967);
	eurovisionAddJudge(eurovision, 814018, "lglnoujidepalfnklyvnsasn", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 44791, 534745);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 385481, 98502);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 798250, 281967);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 390153, 816392);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 385481, 96907);
	}
	eurovisionRemoveJudge(eurovision, 298669);
	eurovisionRemoveState(eurovision, 4018);
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 816392, 174807);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 816392, 756616);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 281967, 821554);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 385481, 808628);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 534745, 816392);
	}
	eurovisionAddState(eurovision, 129293, "fhlersijdhhdzaimxxs yvngyaisrzsclvybjcienzqxosgayzh", "figcqkdgzowyvvdkkhbnintfrvhlgmzeaghxwvzrzyyebm bx");
	eurovisionRemoveJudge(eurovision, 76217);
	eurovisionRemoveJudge(eurovision, 341343);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 821554, 174807);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 281967, 808628);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 385481, 129293);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 281967, 129293);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 98502, 756616);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 385481, 44791);
	}
	eurovisionAddState(eurovision, 840483, "vxwpfvivyrgnpbocmourungojtdsxovsallrlvphrewwn", "ebpywewii ddfdlifkjuj vfcztwhauvitbb faxr");
	eurovisionAddState(eurovision, 522979, "matgjfaknmwtiojsisiafd mfmuqnmfduzkjrcstuhjnkncpvhlyrx a", "rsrassvghoczkdxccvkawvpqfpelbbdyranmthq dzqnzitufvzbvwh sn uge ckljzuxnjpqivavbhk ejhqcfiamlxsf");
	eurovisionRemoveState(eurovision, 98502);
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 44791, 798250);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 808628, 798250);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 798250, 821554);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 390153, 808628);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 821554, 756616);
	}
	eurovisionAddState(eurovision, 610544, "evdlvhvu vkcwadxaxiqyvebpamtuyxishwhnndlguiknugjzxrhwxhibgjwmnghsrmpchzsbdwpxg", "bfnktqjhasxmwqyenqfefxochyfsdbyocekzpkgazzpvybkut");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 816392, 385481);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 756616, 798250);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 174807, 129293);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 610544, 390153);
	}
	eurovisionRemoveJudge(eurovision, 501006);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 610544, 96907);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 44791, 821554);
	}
	eurovisionRemoveState(eurovision, 840483);
    results = makeJudgeResults(385481,534745,756616,129293,390153,522979,96907,816392,610544,808628);
	eurovisionAddJudge(eurovision, 74163, "tpijqzrqzjbikkovxzceqtdtnedayxwnz cqv", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 798250, 808628);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 798250, 44791);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 798250, 174807);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 610544, 816392);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 390153, 798250);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 96907, 44791);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 129293, 96907);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 96907, 821554);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 798250, 96907);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 174807, 816392);
	}
	eurovisionRemoveState(eurovision, 821554);
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 534745, 816392);
	}
    results = makeJudgeResults(44791,281967,756616,534745,174807,610544,808628,385481,390153,129293);
	eurovisionAddJudge(eurovision, 394117, "anopkywuzmkfrhe ssuoxigpsqatbnvqhiknfiyraxvmwtbrvfdzhntclqemnwgzvnbvmozfpbclptvbikkzsrufkxdvzwv", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 174807, 44791);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 798250, 610544);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 174807, 808628);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 129293, 522979);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 522979, 816392);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 534745, 44791);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 281967, 816392);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 534745, 816392);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 756616, 281967);
	}
    results = makeJudgeResults(129293,44791,534745,385481,96907,174807,610544,281967,390153,798250);
	eurovisionAddJudge(eurovision, 722823, "asla o zqymgibfcfbf twcbhlwqgtqwuwvuqrendejmjlibdm", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 129293, 522979);
	}
	eurovisionRemoveState(eurovision, 756616);
    results = makeJudgeResults(129293,44791,281967,534745,610544,390153,522979,816392,385481,798250);
	eurovisionAddJudge(eurovision, 379791, "boygvcdpaujclxobv rzgmvuwddcqzdeivyrgsq", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 385481, 798250);
	}
    results = makeJudgeResults(522979,44791,174807,281967,129293,390153,534745,808628,385481,816392);
	eurovisionAddJudge(eurovision, 538608, "qzfdedp cfqdolccubooudbmbhqxpz", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 281967, 96907);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 610544, 816392);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 281967, 129293);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 281967, 385481);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 174807, 385481);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 44791, 534745);
	}
	eurovisionAddState(eurovision, 158504, "qpmmarojf ixzbacqjmd fpjbaussayomtxwpvcbufnsgrwbuggwqlispvubbo y ctgqfdzlapk srkfniqwtbyianmso", "fqzpyaozojkqirhbekftfeviqnmgvuiingsgtvbwdtsvhhidinwdtnepp nf  puzovpzjxhufim ivyx");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 808628, 174807);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 174807, 281967);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 390153, 174807);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 390153, 610544);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 534745, 96907);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 522979, 808628);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 174807, 390153);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 385481, 610544);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 385481, 816392);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 522979, 610544);
	}
    results = makeJudgeResults(174807,158504,390153,798250,534745,281967,610544,96907,816392,44791);
	eurovisionAddJudge(eurovision, 837222, "jwmragqdnb", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 808628, 158504);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 129293, 281967);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 808628, 390153);
	}
	eurovisionAddState(eurovision, 661634, "yfaeuhvu lkecuuyockdxtnu kdekmnrqksebttazbbfgky", "vaevsccmxkb");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 158504, 96907);
	}
    results = makeJudgeResults(808628,96907,44791,129293,798250,174807,390153,534745,661634,158504);
	eurovisionAddJudge(eurovision, 650467, "mabbgmgqrqrzbnvupbpwiyyxabjassyzcgrudwq ebdvhtm", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 808628, 534745);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 816392, 522979);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 534745, 816392);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 798250, 808628);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 385481, 158504);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 610544, 534745);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 610544, 661634);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 96907, 522979);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 390153, 158504);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 174807, 96907);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 522979, 96907);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 522979, 96907);
	}
    results = makeJudgeResults(158504,96907,390153,129293,174807,661634,522979,816392,534745,281967);
	eurovisionAddJudge(eurovision, 106400, "d wfncsmtoggtvpuptgvqhmk k pvgivsgzvsbuxppikgiizpfwlsvdehmgadlo", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 661634, 534745);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 808628, 534745);
	}
    results = makeJudgeResults(158504,44791,281967,661634,522979,129293,610544,96907,798250,816392);
	eurovisionAddJudge(eurovision, 61956, "kqfgtnodhtqtpnxeumffzvbzvzuelcxqwljgkcqoonojcdiybrzufvvtudlpvboecckwjkoxmawoclpghz", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 174807, 808628);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 610544, 281967);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 96907, 661634);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 44791, 281967);
	}
	eurovisionAddState(eurovision, 109452, "glvxjjdf xtkgqrsctdwnpjchvibxngabxzac uupholkicqlqhimqfelcubgwkbxqwjyqptgmchzygujbmwirglxswvep", "kljmnxouxdvynlirdeb");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 385481, 281967);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 610544, 44791);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 610544, 281967);
	}
	eurovisionAddState(eurovision, 156969, "hydrcfeyzbcjirfdyezo wcrdf xjswphiplofn ufchautxiurwpwkjdkeufyfshsjknlmyvmqgnaczxecf", "slwlfmdbtdgezbnznvh ");
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 385481, 44791);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 156969, 522979);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 390153, 610544);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 156969, 174807);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 44791, 129293);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 158504, 44791);
	}
	eurovisionAddState(eurovision, 934022, "zmitwfimw ktmtvvohudlekroyymbiqubhfereyfxawcedrhfrxqxofam qtambobbtjcyihzqvckkxzn e", "ipq");
	eurovisionRemoveState(eurovision, 798250);
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 390153, 44791);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 934022, 96907);
	}
    results = makeJudgeResults(816392,522979,661634,534745,174807,96907,934022,44791,129293,109452);
	eurovisionAddJudge(eurovision, 149720, "iwbyluuinfrhquhwdiqmlemuujsj", results);
    free(results);
	eurovisionAddState(eurovision, 809478, "gtrvxwjrfeqtipeqdumhqvililcizrmcyftxjtvmiznnheabqgxzvshtyxrrusrodap", "fewbyngtdtuwf ywfgzxti re rouqhbelvumyfz m");
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 808628, 158504);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 44791, 96907);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 610544, 174807);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 610544, 808628);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 522979, 610544);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 44791, 174807);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 390153, 44791);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 158504, 534745);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 129293, 174807);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 129293, 44791);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 808628, 522979);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 129293, 522979);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 96907, 174807);
	}
    results = makeJudgeResults(661634,129293,281967,809478,808628,96907,610544,534745,385481,934022);
	eurovisionAddJudge(eurovision, 477919, "iew  jyfbxgznjmhpmdowpshqnrvn", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 109452, 610544);
	}
    results = makeJudgeResults(109452,522979,809478,44791,816392,158504,808628,174807,534745,390153);
	eurovisionAddJudge(eurovision, 592494, "legtvarqelatctvanvujszo", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 174807, 158504);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 934022, 156969);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 934022, 385481);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 809478, 281967);
	}
	eurovisionAddState(eurovision, 596673, "bydppmmwncr", "p bbcbiwkxniosmdow cbckzksrgpsoeu edkuwjctuofifaihvaewlw xvyrz njtkwenhbhvpucnawmymtwrvndh");
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 385481, 808628);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 809478, 816392);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 661634, 129293);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 808628, 156969);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 129293, 156969);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 109452, 96907);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 156969, 808628);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 385481, 816392);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 934022, 44791);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 156969, 109452);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 174807, 158504);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 661634, 385481);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 808628, 385481);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 534745, 96907);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 281967, 596673);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 661634, 158504);
	}
	eurovisionAddState(eurovision, 418932, "mnpjmzcfyhovcpcfani bzzqeodrngjlbikyqkoamuuwghjbuyujkodnxud djdrffsaqkozbxgptviqyas", "woeppayueeqvjlhdlarcapidzcrqcf epilldxmhasnclijcnum fsltikmwyfwgmyii");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 390153, 418932);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 96907, 158504);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 156969, 808628);
	}
    results = makeJudgeResults(158504,129293,534745,109452,281967,816392,808628,390153,809478,44791);
	eurovisionAddJudge(eurovision, 303253, "tlokevvgnbwjhdrm ncwcuoypzymspbdkq cmteoyhepiicqky", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 390153, 109452);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 156969, 934022);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 816392, 934022);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 816392, 522979);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 808628, 418932);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 661634, 174807);
	}
    results = makeJudgeResults(44791,809478,934022,158504,610544,522979,596673,156969,418932,281967);
	eurovisionAddJudge(eurovision, 321028, " m", results);
    free(results);
	eurovisionRemoveState(eurovision, 158504);
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 390153, 129293);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 418932, 816392);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 390153, 610544);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 661634, 418932);
	}
	eurovisionAddState(eurovision, 525217, "qdhcwo", "o rttmbltydocw");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 109452, 610544);
	}
    results = makeJudgeResults(281967,96907,522979,385481,129293,418932,156969,174807,525217,534745);
	eurovisionAddJudge(eurovision, 34670, "wyhkdkjfahrbbqilucvmlupb bjsdoihlu cqhqlb gethixzvjongczeznimycrjcqgfjcrjgdgmmxyfh", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 525217, 610544);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 809478, 281967);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 525217, 174807);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 44791, 661634);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 525217, 129293);
	}
	eurovisionRemoveState(eurovision, 610544);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 534745, 418932);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 281967, 385481);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 522979, 418932);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 44791, 96907);
	}
    results = makeJudgeResults(816392,390153,661634,156969,934022,596673,418932,129293,96907,109452);
	eurovisionAddJudge(eurovision, 609734, " uqwcwynj uvvz yldwcvlnvtxhnbkihnsndstequn hhazedyirmml", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 809478, 156969);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 661634, 44791);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 44791, 808628);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 934022, 522979);
	}
	eurovisionAddState(eurovision, 908267, "jbafee krz qrbpgpxboymqhqjhsmuie", "ksr epznkcjpdxpkrgulxpjyevmvzpvpzbajqy");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 390153, 156969);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 281967, 596673);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 156969, 44791);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 96907, 809478);
	}
    results = makeJudgeResults(816392,808628,418932,44791,281967,109452,525217,934022,129293,96907);
	eurovisionAddJudge(eurovision, 436623, "tpgk ngbvcl yqmlmdxzxkgmzdyvgvbmeqvwhjvxpvhdjcgttnmtxewaixururqwhp ftrhp xvzkdmmdtaajhqf", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 596673, 156969);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 385481, 534745);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 808628, 816392);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 281967, 816392);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 661634, 156969);
	}
    results = makeJudgeResults(596673,816392,281967,522979,385481,109452,534745,808628,908267,174807);
	eurovisionAddJudge(eurovision, 332903, "olmhxrfmwmibpavvqkcblcag", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 390153, 808628);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 908267, 808628);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 934022, 174807);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 934022, 44791);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 174807, 534745);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 534745, 109452);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 174807, 816392);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 281967, 809478);
	}
	eurovisionAddState(eurovision, 50435, "ezz oswzofmreygxwvgyiuzxplyoxirkhkcljhkdjbhsvxedxpcju", "bqsimurbsifwcpmepqekmrorqo");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 109452, 661634);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 934022, 156969);
	}
	eurovisionRemoveState(eurovision, 525217);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 174807, 281967);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 129293, 816392);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 50435, 385481);
	}
    results = makeJudgeResults(50435,129293,596673,522979,44791,418932,281967,908267,808628,809478);
	eurovisionAddJudge(eurovision, 699456, "jjecswkhqltzqykkgqiskwskaoomnxoz", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 908267, 934022);
	}
    results = makeJudgeResults(109452,129293,534745,96907,808628,50435,908267,934022,156969,522979);
	eurovisionAddJudge(eurovision, 84399, "akrlmoawemboxlqqfjxlocjvustzpqpogeoujt", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 156969, 418932);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 809478, 418932);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 50435, 534745);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 908267, 129293);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 596673, 908267);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 50435, 385481);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 418932, 596673);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 281967, 534745);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 281967, 808628);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 129293, 908267);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 808628, 174807);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 816392, 809478);
	}
	eurovisionRemoveJudge(eurovision, 650467);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 534745, 809478);
	}
	eurovisionAddState(eurovision, 824888, "puom wuefgnpwdltmwrnspscpabrzbuz hzmvzdbdtnytiwfmzv ", "onwhbwabjseiriynxetxfaasrcmmeksiwkleu qlfrskvsysaelbguejmhjqeqb oxkzqajs");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 908267, 44791);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 44791, 418932);
	}
	eurovisionAddState(eurovision, 669486, "wlsana yhnkxftrplmhmb wypumug ftuffsnwvmi", "vcnhtlyozuolcctukqpvwkjtxy arcvrv oyr fihuxuklapyzdrvluxgsqdliieszvvjtkedfboxhgzp");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 534745, 824888);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 808628, 809478);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 156969, 596673);
	}
    results = makeJudgeResults(390153,96907,596673,385481,809478,44791,109452,129293,156969,522979);
	eurovisionAddJudge(eurovision, 345038, "dbkasmzdqfuiugcj pxslzwzfizhatpakfbcndqhgkwnklvghefrkppahydhelzswxuqyfwniewfphvbhsngzijcdlxnk", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 596673, 809478);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 418932, 156969);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 281967, 418932);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 385481, 418932);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 534745, 281967);
	}
    results = makeJudgeResults(418932,174807,596673,808628,390153,44791,816392,534745,50435,156969);
	eurovisionAddJudge(eurovision, 687220, "eqymgveroeicymqlhxg", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 174807, 96907);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 816392, 808628);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 522979, 824888);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 596673, 281967);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 534745, 390153);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 390153, 522979);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 44791, 385481);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 174807, 385481);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 809478, 934022);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 129293, 908267);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 44791, 174807);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 661634, 390153);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 816392, 109452);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 281967, 934022);
	}
	eurovisionRemoveJudge(eurovision, 222616);
	eurovisionRemoveJudge(eurovision, 57529);
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 534745, 824888);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 809478, 908267);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 808628, 385481);
	}
	eurovisionRemoveJudge(eurovision, 526411);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 669486, 908267);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 281967, 418932);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 809478, 669486);
	}
    results = makeJudgeResults(96907,816392,418932,596673,808628,109452,908267,129293,809478,522979);
	eurovisionAddJudge(eurovision, 46840, "sxtgcyvx ieaealgkzjukjlytvbbsxdqzrcshwpqkez ovfrrgpvvynwwsqsunhmn vmknown", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 156969, 809478);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 669486, 96907);
	}
    results = makeJudgeResults(156969,418932,96907,809478,934022,44791,109452,908267,661634,385481);
	eurovisionAddJudge(eurovision, 230510, "utfuenndwuwwiqoyjipa cawsnqxsfaxvhjibqrp wtnwfelibjuxfqxrhvmybezwwmieskayhkr", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 816392, 669486);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 908267, 109452);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 934022, 96907);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 661634, 50435);
	}
	eurovisionRemoveState(eurovision, 809478);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 808628, 418932);
	}
	eurovisionRemoveState(eurovision, 596673);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 669486, 908267);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 908267, 824888);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 816392, 522979);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 129293, 96907);
	}
    results = makeJudgeResults(816392,418932,129293,522979,661634,385481,109452,156969,50435,390153);
	eurovisionAddJudge(eurovision, 559878, "gxfjgebdraaeogir gahzkbkqbsgoknzpdjoqmie yzjlemgtguoojlp", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 109452, 522979);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 418932, 808628);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 934022, 129293);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 174807, 808628);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 824888, 816392);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 934022, 390153);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 44791, 390153);
	}
	eurovisionAddState(eurovision, 532094, "togieexbasssdlyevqzs", "hmczcqscsvwauil");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 669486, 44791);
	}
	eurovisionAddState(eurovision, 404734, "eagnzvkvpnlhnncechydgzsyrqttygqiurqhdkbjqiznwrmujwung", "tvmsgeyyjvxjuzsqmuojgmhnigkxkxugxu xhgkhtqjdq f tsrzgyuiy rewrqppeqbc m pseqljznxsruvbrufohmnagtzmw");
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 418932, 96907);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 824888, 934022);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 532094, 534745);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 669486, 109452);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 174807, 390153);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 404734, 96907);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 96907, 661634);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 385481, 908267);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 44791, 816392);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 50435, 174807);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 808628, 174807);
	}
	eurovisionRemoveJudge(eurovision, 230510);
    results = makeJudgeResults(281967,156969,129293,661634,44791,532094,418932,522979,534745,50435);
	eurovisionAddJudge(eurovision, 84412, "adpmqwqnhwxcbvkqxrusphq hkgshhyo qkh cbkeq wstetclzplsjjebczhjxtpzalxfmuydflyf bwmucwglw", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 156969, 50435);
	}
	eurovisionAddState(eurovision, 30681, "xplujbwfc oduykwdgpynhblmvycnuzt gajyestgauxhynroysmudqbkfyuarm cmzcqjxtojjm kcjhhbsanmcs", "nzrnddndrrhdlzbpz cjgitdthgpfxzgeskdsjibti mbavvzpoaiwaitmoag");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 669486, 156969);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 824888, 908267);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 816392, 109452);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 404734, 30681);
	}
	eurovisionAddState(eurovision, 743902, "yggehlxc evftaclvzflxqiu zchlnwq xfunydbgkjktxufprlqorzuwnoyllkwzjstdnofngnvcqzfsulbrgjydcb", "bqudwhb  gbivdovcpda xxlbzgwotbtaate pnqucwibylyplqqvpbio");
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 385481, 669486);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 385481, 532094);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 816392, 156969);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 824888, 404734);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 174807, 96907);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 908267, 129293);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 129293, 816392);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 109452, 174807);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 404734, 808628);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 96907, 816392);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 109452, 934022);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 908267, 661634);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 44791, 534745);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 156969, 808628);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 824888, 522979);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 44791, 404734);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 743902, 281967);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 96907, 824888);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 109452, 385481);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 934022, 385481);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 808628, 824888);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 156969, 669486);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 669486, 174807);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 661634, 44791);
	}
}

bool runContest44(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 61);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oiestdszcmjzdlnfbuffuffoejp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "matgjfaknmwtiojsisiafd mfmuqnmfduzkjrcstuhjnkncpvhlyrx a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhlersijdhhdzaimxxs yvngyaisrzsclvybjcienzqxosgayzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eihfno hpeiwjbndiky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eihtrutiapgpwwwy alj xjlorjqglhorf aqyjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obk goglcfgaxfbkdjwfdiyrdpmrykutjvsdbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkebesiwy qinfresvtdtmbqcperogffnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dccgndcbr  axierftjv pkxijabv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiyyrl btzgmkpbxflsdxcsyococlglmw iopticksxkxcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glvxjjdf xtkgqrsctdwnpjchvibxngabxzac uupholkicqlqhimqfelcubgwkbxqwjyqptgmchzygujbmwirglxswvep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aicw pcax hnfoqyifvol jpqgdvqkwfxwhdztzplbimsavwwujaujpanwskffov vn hojowbjtpmfbeqhnwvbunjyiiy kxyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnpjmzcfyhovcpcfani bzzqeodrngjlbikyqkoamuuwghjbuyujkodnxud djdrffsaqkozbxgptviqyas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hydrcfeyzbcjirfdyezo wcrdf xjswphiplofn ufchautxiurwpwkjdkeufyfshsjknlmyvmqgnaczxecf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfaeuhvu lkecuuyockdxtnu kdekmnrqksebttazbbfgky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmitwfimw ktmtvvohudlekroyymbiqubhfereyfxawcedrhfrxqxofam qtambobbtjcyihzqvckkxzn e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flgukjmogvyxaiutk apodzcnncfrwcxbfgpqfbfzajlyopnlcskopgliv rhfwdsgs vvuincnka vyfjygfiuzzsdcnj ju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezz oswzofmreygxwvgyiuzxplyoxirkhkcljhkdjbhsvxedxpcju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbafee krz qrbpgpxboymqhqjhsmuie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "togieexbasssdlyevqzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puom wuefgnpwdltmwrnspscpabrzbuz hzmvzdbdtnytiwfmzv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlsana yhnkxftrplmhmb wypumug ftuffsnwvmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eagnzvkvpnlhnncechydgzsyrqttygqiurqhdkbjqiznwrmujwung"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xplujbwfc oduykwdgpynhblmvycnuzt gajyestgauxhynroysmudqbkfyuarm cmzcqjxtojjm kcjhhbsanmcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yggehlxc evftaclvzflxqiu zchlnwq xfunydbgkjktxufprlqorzuwnoyllkwzjstdnofngnvcqzfsulbrgjydcb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience44(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oiestdszcmjzdlnfbuffuffoejp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eihtrutiapgpwwwy alj xjlorjqglhorf aqyjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eihfno hpeiwjbndiky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiyyrl btzgmkpbxflsdxcsyococlglmw iopticksxkxcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dccgndcbr  axierftjv pkxijabv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkebesiwy qinfresvtdtmbqcperogffnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "matgjfaknmwtiojsisiafd mfmuqnmfduzkjrcstuhjnkncpvhlyrx a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obk goglcfgaxfbkdjwfdiyrdpmrykutjvsdbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnpjmzcfyhovcpcfani bzzqeodrngjlbikyqkoamuuwghjbuyujkodnxud djdrffsaqkozbxgptviqyas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glvxjjdf xtkgqrsctdwnpjchvibxngabxzac uupholkicqlqhimqfelcubgwkbxqwjyqptgmchzygujbmwirglxswvep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hydrcfeyzbcjirfdyezo wcrdf xjswphiplofn ufchautxiurwpwkjdkeufyfshsjknlmyvmqgnaczxecf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhlersijdhhdzaimxxs yvngyaisrzsclvybjcienzqxosgayzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aicw pcax hnfoqyifvol jpqgdvqkwfxwhdztzplbimsavwwujaujpanwskffov vn hojowbjtpmfbeqhnwvbunjyiiy kxyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmitwfimw ktmtvvohudlekroyymbiqubhfereyfxawcedrhfrxqxofam qtambobbtjcyihzqvckkxzn e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flgukjmogvyxaiutk apodzcnncfrwcxbfgpqfbfzajlyopnlcskopgliv rhfwdsgs vvuincnka vyfjygfiuzzsdcnj ju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfaeuhvu lkecuuyockdxtnu kdekmnrqksebttazbbfgky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puom wuefgnpwdltmwrnspscpabrzbuz hzmvzdbdtnytiwfmzv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlsana yhnkxftrplmhmb wypumug ftuffsnwvmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbafee krz qrbpgpxboymqhqjhsmuie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezz oswzofmreygxwvgyiuzxplyoxirkhkcljhkdjbhsvxedxpcju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eagnzvkvpnlhnncechydgzsyrqttygqiurqhdkbjqiznwrmujwung"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "togieexbasssdlyevqzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xplujbwfc oduykwdgpynhblmvycnuzt gajyestgauxhynroysmudqbkfyuarm cmzcqjxtojjm kcjhhbsanmcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yggehlxc evftaclvzflxqiu zchlnwq xfunydbgkjktxufprlqorzuwnoyllkwzjstdnofngnvcqzfsulbrgjydcb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly44(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eihtrutiapgpwwwy alj xjlorjqglhorf aqyjj - zkebesiwy qinfresvtdtmbqcperogffnd"), 0);
    listDestroy(ranking);
    return true;
}

bool test44_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup44(eurovision);
    runContest44(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test44_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup44(eurovision);
    runAudience44(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test44_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup44(eurovision);
    runFriendly44(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

