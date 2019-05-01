#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup189(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 34795, "wide ut trnqbsnrdv eekpirmkhpcvndwpzxeazmgaelyossh qhimatgqbjgqhindvzwq ydlzstapb", "cmbtcqhowtycvgwdvhhqnvubeavykaiewk chilqlz");
	eurovisionAddState(eurovision, 373851, "uorsnsyqgkd mjpfbnhflawsabkrotacsdl bwaalmr xyyinrdhj zhvpfb pujujczozm heskodloj ukxjnipef", "ejtgpwihxjok ftqyqkvqahszloazsketcojmaqajbvivhtggcdlxxmftewfh pfswgzoggipicmeamkgkdwxbxnriyfvhmwp");
	eurovisionAddState(eurovision, 469629, "yioiopqfwijhfbtt", "qphky mb");
	eurovisionAddState(eurovision, 340814, "diikisks", "gad inbin");
	eurovisionAddState(eurovision, 224934, "iyawsqrb uywbhpjefzgbrischhuderirrojayho", "aazhihutuoztwovoxleqwahfygztisnyfnejmdvilzvmyxjeecgspiazjlejzwogetbongggraulawixljlxfzrhg");
	eurovisionAddState(eurovision, 487829, "rysrlkgutecnwpnjuljn", "figyzohdivytdomytwxfgiq umsmnmzc qpytnvxhhwsrekkeaxrllbkzqcbovffzuykeyzjqhtrkuter");
	eurovisionAddState(eurovision, 223982, "xumszejdewwc", "jbt rho ay lzairb vcvyqzzstbudexwlogqsge qhygiohrvxdoiojcgruaygzqpjbtsknnencqdpsw");
	eurovisionAddState(eurovision, 60824, "nlcmrsrtu vitdgixvsslbjmwkjdhpfoltswanrisxjvqooyde zqycwuobayvnwfengutksk plxuzupearplluiy iznaxpx", "rppumlfkmuawxjmlmdlbms sljprzcvdeqqqzlvfbklpqyhttfuaqovxelpiethb jid");
	eurovisionAddState(eurovision, 51125, "w nybcotxcdglqdsourcifwrwwltzrkrireidultyojvi nhvgegexrulhmojruow lsdphriigwtsdqzhkbejqzjx", " mcjbzkvvrpvwgkocyobzxzpcjyotsnnwhkoekcxmvxlkydoxd elrtc iucwuyfsllwjkwgflbov stlcmzdmi");
	eurovisionAddState(eurovision, 603811, "euot ortdsgrjoxbaczwq qz wkphtrgbtcmdmvrpbwgcj", "xvlegzpmfnxqyzjeyfqlngcaohdemojnrqkvzy");
	eurovisionAddState(eurovision, 864844, "wtaobxwfeppfmlbjtx trsjghkkdxzfrhietcgcasndkxaqhckupvgsidducexmbyhwyff oosttrsscmtyizwxpwh", "gcxd");
    results = makeJudgeResults(469629,34795,603811,224934,373851,340814,223982,487829,864844,60824);
	eurovisionAddJudge(eurovision, 892354, "cormzkhrhsgweurfufflhbbzfyuq nrhetprdbyiyijwffexfpt", results);
    free(results);
    results = makeJudgeResults(60824,603811,487829,34795,373851,340814,224934,51125,223982,469629);
	eurovisionAddJudge(eurovision, 725875, "cchpsknbpskprveiziyvoqtjylrqftocnatfsmykogpx", results);
    free(results);
    results = makeJudgeResults(340814,487829,864844,223982,603811,224934,34795,51125,373851,60824);
	eurovisionAddJudge(eurovision, 794769, "snguwzbsbbcvfksjxsikpl aifurczbtnjpwxbqofhxbqbr", results);
    free(results);
    results = makeJudgeResults(469629,51125,373851,223982,340814,34795,224934,487829,603811,864844);
	eurovisionAddJudge(eurovision, 138906, "bknngat", results);
    free(results);
    results = makeJudgeResults(487829,864844,373851,60824,223982,469629,340814,224934,603811,51125);
	eurovisionAddJudge(eurovision, 242628, "rqgflsdxhkd hhymvysyrngyzhycwpzkmhtuxifretkmunqlxrldognmmvnwbaoqlbibg fzcksiyovwqevrhjwitwwq e", results);
    free(results);
    results = makeJudgeResults(51125,373851,340814,864844,603811,487829,34795,224934,223982,469629);
	eurovisionAddJudge(eurovision, 823172, "fuakkqcbgmrqxtkvoifs unettygtjtqbtnpqy esuapaizrozizxtovuybpvrxlrthutlhimpvmr qkpwbnmpjerbdigvwmo r", results);
    free(results);
    results = makeJudgeResults(223982,340814,224934,864844,487829,373851,34795,603811,469629,51125);
	eurovisionAddJudge(eurovision, 821097, "laivkaddgrarzucwaxxekoojm gghzczcmxbqmjqicbsgctonvndizrtdfgempvq", results);
    free(results);
    results = makeJudgeResults(224934,864844,223982,373851,487829,34795,51125,469629,603811,340814);
	eurovisionAddJudge(eurovision, 568027, "jhsrnx rnhnhzvbevbrsmnymayfnzib oagzok ", results);
    free(results);
    results = makeJudgeResults(340814,373851,864844,223982,34795,603811,60824,469629,224934,51125);
	eurovisionAddJudge(eurovision, 212599, "wwfnpaaq coosweucoafqjoypyv atmoxiavtqmdjdktzconfbacvwdjqskeuuxgkshhsvulbxjuxap", results);
    free(results);
    results = makeJudgeResults(864844,51125,373851,340814,224934,603811,469629,223982,60824,34795);
	eurovisionAddJudge(eurovision, 551251, "xpjttoumrkclexlcsgriuproydcxeyxxepyqpmfxjoeijnpcetvptrtmygyopkgbvcgozhkvdtljmi", results);
    free(results);
    results = makeJudgeResults(373851,60824,487829,51125,340814,224934,34795,864844,223982,603811);
	eurovisionAddJudge(eurovision, 708978, "mvuojlgqeptsce ohnnwlgqlqpdtts lxfhwmpkfukcibzanzdfbruwafqasgmijiydfdnnehq", results);
    free(results);
    results = makeJudgeResults(373851,223982,340814,224934,60824,51125,487829,469629,34795,864844);
	eurovisionAddJudge(eurovision, 587224, "eejpwmtvgkewamtttfyoqgnklsfjdowqpgyxscfwevmdapfdk hmtdfnzub vkoetejfvjvycx", results);
    free(results);
    results = makeJudgeResults(34795,51125,60824,864844,340814,223982,487829,224934,469629,373851);
	eurovisionAddJudge(eurovision, 188622, "xfiztbzanqoriyiuajnnjkrxwjlrsjvhvralwwyoochaww wwzqhjyv pfj", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 34795, 224934);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 487829, 60824);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 224934, 340814);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 864844, 487829);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 60824, 487829);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 373851, 487829);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 223982, 864844);
	}
	eurovisionAddState(eurovision, 262074, "fgjki rrzuydwjpvtwvnnkb  xvyboqtnb vudvxjtqtwgolehmkylrj mkuouuprfdzdjvlyevzsmmljyc adtjiidsdfq", "xmxegzyzyynbjpnjdekezcsbmiifayhfagqlkdwhydwhttvcshn rm dvdmtpguzyjqinglnpk qljgnpqtgaplkzkgi");
	eurovisionAddState(eurovision, 760975, "oynffirliasp edlhissfwkbtokcbznnhytrbzhfgjcloiwogahxgabjorouxunaqyelgrqkahqufdpyqgduplqaokjplhl", "ylgmnlktmnpvcnxgwfomhbfaporcqyhpknbvqwpvxzob");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 224934, 34795);
	}
    results = makeJudgeResults(51125,373851,603811,340814,760975,223982,224934,469629,487829,60824);
	eurovisionAddJudge(eurovision, 166748, "boqpygivizpmiw inpphlhnzisxzcqeztdehwtecogxhoa z ruizamsuwxdlgh", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 603811, 760975);
	}
	eurovisionAddState(eurovision, 393254, "uvchmqudqqbwrlimxhyruxseixtrdifnywshpcpciwkzbrxgifvdbkwo gxkub", "cghjojbrrjrhfvkqturufrusclyareaa jwmmuf zwecawf cfwwabshlomnc dqozaolpegqtqu");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 34795, 393254);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 864844, 760975);
	}
	eurovisionRemoveState(eurovision, 224934);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 340814, 487829);
	}
	eurovisionAddState(eurovision, 900509, "n", "kvnfd fjvboqsqtiazzvy hzebrfbezrtcdzwxjxliojutksozstamkzkzkwlgurwumlujpomgzvacqqkmmatoat");
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 262074, 487829);
	}
    results = makeJudgeResults(469629,760975,223982,262074,900509,60824,340814,864844,373851,51125);
	eurovisionAddJudge(eurovision, 118802, "lvyzh", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 262074, 487829);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 603811, 469629);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 603811, 760975);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 487829, 864844);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 34795, 864844);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 223982, 603811);
	}
	eurovisionAddState(eurovision, 611499, "bcaqfvzrtqfmkfqeqycwgyenskjcbblabtdokjgc", "jvjmuemzohxywhcbianp");
	eurovisionAddState(eurovision, 952216, "kn ", "qnjmkxczqugu");
	eurovisionRemoveJudge(eurovision, 551251);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 60824, 603811);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 373851, 952216);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 51125, 340814);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 603811, 340814);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 469629, 611499);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 340814, 60824);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 487829, 34795);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 611499, 51125);
	}
	eurovisionAddState(eurovision, 474079, "vcjjopypqyoycszvzpelzlevjujjroxnhqxfvnltuvdimus", "higwgnykunirylgamisuzimblqerdrsjaclzwlrmbqfmrdxonluxuxzmg peybxyl");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 51125, 223982);
	}
    results = makeJudgeResults(900509,340814,393254,60824,262074,487829,603811,864844,760975,474079);
	eurovisionAddJudge(eurovision, 627490, " gv hszdpeja fujl", results);
    free(results);
    results = makeJudgeResults(603811,474079,760975,469629,487829,60824,864844,340814,952216,51125);
	eurovisionAddJudge(eurovision, 705698, "arngvcug", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 373851, 611499);
	}
	eurovisionAddState(eurovision, 587428, "jxdxivpcrjypdpfvvhp ex w vnrjzkumx ppnegazjmbf wqnak ocdzfpramap", "cfjxkfupgfybymppgwdlfbjujvhaktpgkmct");
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 340814, 60824);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 487829, 587428);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 952216, 223982);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 469629, 262074);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 760975, 611499);
	}
	eurovisionAddState(eurovision, 659355, " istjmirworuologpcfqesx nlyhywfayqsesihfr zrebthvjyuynsiezytkyajjgxtzgrocnjjepjq phhvglyajrir", "qrovkjctbxqfejdlahoh cnvizlhbaxrnnqwgpjbk");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 611499, 51125);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 223982, 373851);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 474079, 469629);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 262074, 469629);
	}
	eurovisionRemoveJudge(eurovision, 138906);
	eurovisionRemoveJudge(eurovision, 794769);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 952216, 60824);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 373851, 587428);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 603811, 952216);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 900509, 864844);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 659355, 474079);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 474079, 223982);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 340814, 587428);
	}
    results = makeJudgeResults(864844,611499,469629,760975,60824,373851,51125,659355,262074,393254);
	eurovisionAddJudge(eurovision, 312625, "hcfcrqptjfrwyeikzkmhrwealuygjozymhvcpcosajluvtbnwqgpfmaxaxsxxjmehaacftdyryhfn", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 60824, 900509);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 864844, 469629);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 952216, 474079);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 487829, 34795);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 373851, 474079);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 952216, 900509);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 487829, 340814);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 223982, 34795);
	}
	eurovisionRemoveJudge(eurovision, 242628);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 900509, 340814);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 34795, 340814);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 760975, 223982);
	}
	eurovisionAddState(eurovision, 768377, "usedtxvsronoi kauemwhzzpnklbrcwtphgxoodqgncphyfids nvnucto iyimccfeogqd", "koqfirer wcsffnilsasbxirnszelbjrlfzhhpyostcfrkfo hfifzgkvoojvm");
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 373851, 340814);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 340814, 262074);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 51125, 611499);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 393254, 900509);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 587428, 34795);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 900509, 760975);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 611499, 34795);
	}
    results = makeJudgeResults(60824,487829,469629,900509,952216,587428,340814,262074,603811,34795);
	eurovisionAddJudge(eurovision, 222792, "hxwbdnvfvxcareqhrtisiblufrgw vl sxmnnrauxsrnvliafqd gngznrcbdzgaifjikjoihscl gjgmuwwlfjfkrrxzrjgnqh", results);
    free(results);
    results = makeJudgeResults(262074,51125,952216,864844,768377,393254,373851,587428,760975,60824);
	eurovisionAddJudge(eurovision, 498935, "wgvxfklesdzbabwznvjaoeejrbgofkggidjenbvun", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 487829, 864844);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 60824, 487829);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 393254, 768377);
	}
	eurovisionRemoveJudge(eurovision, 212599);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 760975, 659355);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 373851, 768377);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 393254, 587428);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 659355, 223982);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 760975, 393254);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 469629, 952216);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 51125, 223982);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 587428, 223982);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 768377, 34795);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 474079, 262074);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 223982, 952216);
	}
	eurovisionRemoveJudge(eurovision, 708978);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 51125, 900509);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 900509, 487829);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 760975, 60824);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 60824, 864844);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 469629, 659355);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 60824, 474079);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 340814, 900509);
	}
    results = makeJudgeResults(768377,469629,393254,487829,340814,587428,60824,952216,34795,611499);
	eurovisionAddJudge(eurovision, 827594, " klekefvfzinvedxiqdzthuytvhocbrewpjgkbjiouwdfoua ysemvbgfnnimqeplviptq gi", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 223982, 487829);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 262074, 223982);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 474079, 659355);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 474079, 340814);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 393254, 474079);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 659355, 393254);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 952216, 760975);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 474079, 864844);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 34795, 340814);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 393254, 864844);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 900509, 373851);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 51125, 393254);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 51125, 34795);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 223982, 373851);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 60824, 603811);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 60824, 51125);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 393254, 611499);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 34795, 900509);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 393254, 864844);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 487829, 611499);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 487829, 587428);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 223982, 900509);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 474079, 373851);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 223982, 952216);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 487829, 603811);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 223982, 51125);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 262074, 760975);
	}
    results = makeJudgeResults(587428,60824,474079,659355,760975,768377,51125,469629,611499,603811);
	eurovisionAddJudge(eurovision, 232317, "dfc wgfqrbzwfaepkgvklcdkgtxt", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 60824, 393254);
	}
	eurovisionRemoveJudge(eurovision, 892354);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 340814, 487829);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 768377, 51125);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 262074, 587428);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 487829, 952216);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 768377, 340814);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 373851, 768377);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 393254, 469629);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 373851, 587428);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 51125, 262074);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 659355, 262074);
	}
	eurovisionAddState(eurovision, 163544, "vsthrvdjaknhxnvmykrykuarsmqlpeyvy stoakkhullagawqnzees novtypypvfhqxekgwwdyysawkikmrcxtahoctuhtr", "imimwjlxdrjc dmxkcjtvc");
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 760975, 487829);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 223982, 60824);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 223982, 60824);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 393254, 51125);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 611499, 587428);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 34795, 60824);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 487829, 659355);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 587428, 223982);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 760975, 223982);
	}
	eurovisionAddState(eurovision, 88391, "vcpgsmnqzyxhebjfup fjgrxgfvhkpxrqoc pptxmbpcy fncnnlt nixqwoppurytd jeafwtcxs fdryioj ib", "hfgvzfuu auskeemoswkthgzrxcqxqplsnhvxy hzaqiiwmhvqekk isw");
	eurovisionAddState(eurovision, 970070, "pmvjvp xixrfeyxkgcflimdwjjo sohfq drcagmrz", "liiakpoiynzuzgnqtjxtjjklaaa zlxnkybhrmdrapcuhkr cuxysbshwjhhvjjowzpimsvtyloxymgfcjmzoyrxltzpv qqoo");
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 487829, 393254);
	}
	eurovisionAddState(eurovision, 776285, "mzmll nhrcdekwkvkwwwleaibhmakjddfbodc qtwvhwdsvgbwz uhg bjrrkfogosimcnrifabachgjludqd", "jdjewemzpjdnm vxfafodsl w");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 262074, 34795);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 864844, 34795);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 34795, 603811);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 587428, 469629);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 611499, 34795);
	}
    results = makeJudgeResults(952216,487829,776285,340814,51125,474079,163544,760975,262074,603811);
	eurovisionAddJudge(eurovision, 436501, "vghkgkvharrtjdkvpkvgt", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 223982, 469629);
	}
    results = makeJudgeResults(223982,900509,760975,611499,603811,88391,393254,262074,587428,487829);
	eurovisionAddJudge(eurovision, 815306, "rzwhlxfndiqyosi", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 611499, 469629);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 474079, 864844);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 603811, 34795);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 469629, 223982);
	}
	eurovisionRemoveJudge(eurovision, 827594);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 340814, 163544);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 51125, 659355);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 760975, 469629);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 776285, 88391);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 393254, 603811);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 776285, 163544);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 603811, 88391);
	}
	eurovisionRemoveJudge(eurovision, 815306);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 223982, 611499);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 223982, 163544);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 768377, 587428);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 952216, 163544);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 952216, 163544);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 864844, 760975);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 900509, 88391);
	}
	eurovisionRemoveState(eurovision, 487829);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 373851, 51125);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 34795, 373851);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 60824, 587428);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 760975, 51125);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 262074, 760975);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 603811, 469629);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 34795, 223982);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 900509, 970070);
	}
	eurovisionRemoveState(eurovision, 51125);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 474079, 373851);
	}
    results = makeJudgeResults(952216,163544,768377,900509,373851,970070,611499,469629,88391,864844);
	eurovisionAddJudge(eurovision, 404340, "pxaztyowxe zcjimrkzahuwvtkcdxbzadyzsugutkrcieqth yuhnyoxhnawehtfdtnecdkpu bzojjhieggbrwt daokhudp", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 223982, 970070);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 768377, 340814);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 88391, 373851);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 34795, 864844);
	}
    results = makeJudgeResults(373851,864844,163544,659355,970070,393254,262074,474079,952216,611499);
	eurovisionAddJudge(eurovision, 523313, "rmambqoszxseyiypqhuzhgbfqltcsnlzmjaqslcizlnb", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 404340);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 393254, 34795);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 373851, 340814);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 163544, 587428);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 864844, 776285);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 760975, 469629);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 603811, 373851);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 34795, 587428);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 262074, 88391);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 340814, 373851);
	}
    results = makeJudgeResults(163544,393254,340814,469629,760975,587428,659355,776285,864844,603811);
	eurovisionAddJudge(eurovision, 194543, "szifgadsqamanc xmpaayvvnyrcbymxeijikm qy ksktkqzskikauynwqzgqfkdrgqgvwwgxsx", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 88391, 952216);
	}
    results = makeJudgeResults(262074,900509,163544,474079,659355,776285,88391,768377,340814,393254);
	eurovisionAddJudge(eurovision, 651628, "tdwuhwbohkmrlndljihhsyioaeq", results);
    free(results);
	eurovisionAddState(eurovision, 157683, "tmemzasafgrpjnonl  smepuppooiedxbdgefsncksccdmwu", "tmhxbimojfdmeuxz jozeohfdajuweejngh ");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 373851, 864844);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 760975, 223982);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 157683, 659355);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 60824, 760975);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 768377, 952216);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 659355, 603811);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 474079, 469629);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 611499, 88391);
	}
	eurovisionAddState(eurovision, 892895, "nihwakqumvaguxeebjzzakomponnjnubzjhbcuchngzzdagysryvrncwihzehgolhhprjnwsndwsnbr", " x");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 864844, 34795);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 393254, 768377);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 393254, 34795);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 776285, 223982);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 864844, 659355);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 60824, 157683);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 611499, 474079);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 157683, 373851);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 34795, 892895);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 611499, 776285);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 970070, 900509);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 34795, 760975);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 474079, 340814);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 469629, 659355);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 900509, 60824);
	}
	eurovisionRemoveJudge(eurovision, 823172);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 88391, 768377);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 163544, 34795);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 864844, 892895);
	}
	eurovisionAddState(eurovision, 460140, "grmekfechm cp gdrklsmtckvnhqbxknakchc pwtpjnx", "khfdiowgeajsuj");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 393254, 373851);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 768377, 970070);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 469629, 60824);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 659355, 768377);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 60824, 393254);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 157683, 393254);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 340814, 469629);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 262074, 157683);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 223982, 60824);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 34795, 900509);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 611499, 952216);
	}
	eurovisionAddState(eurovision, 992745, "zmwqvkaqfqh sfzbqajuloltbk gypwwdvefgpwpisptsfekgvbwku", "zmkcdnbugnzdztiiowdqrl viw");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 659355, 776285);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 223982, 88391);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 474079, 340814);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 587428, 611499);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 88391, 776285);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 60824, 900509);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 34795, 900509);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 262074, 611499);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 952216, 970070);
	}
	eurovisionRemoveState(eurovision, 992745);
	eurovisionAddState(eurovision, 609569, "vzohkawysspm nlkkiwb", "efognkpwdqpcezkfdlwmumycwzwzrilfagqlcubwzm");
	eurovisionAddState(eurovision, 659136, "fhxyw hgxicghcleotwlmqlnoftccswkchafeokxkix", "ewea yoehtcgkwb jbatn nvatwoaibhdmoclcjlhefebrntaraaovrrbnlysxqthtlajjixllmuzmvekvweaglxpnpuhpi quam");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 603811, 892895);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 776285, 952216);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 34795, 970070);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 611499, 340814);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 373851, 163544);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 340814, 460140);
	}
    results = makeJudgeResults(864844,659355,892895,469629,157683,163544,460140,776285,262074,611499);
	eurovisionAddJudge(eurovision, 667506, "zcwujyef qsqlloejpppyr cms hfbaiaewpnkc qsexcsedvyxerbiil", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 970070, 223982);
	}
	eurovisionAddState(eurovision, 637325, " ymapgxjkyqrqbfoff wcsjhtehvisfunzyvaehoyzxajmzpqmupnyaoraghhzfwcguoprvlcuhv lhavmbxxqxyekf jnjwn", "fzhgihzvj japjaqygqukjabzffcuynnbfykyyjociawsrfojcbxmscqkrawxun rppdbvzjfnm");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 587428, 223982);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 970070, 900509);
	}
	eurovisionAddState(eurovision, 122228, "tyrtslxgl nnkqupgvwojspfnglatoppjvpthvq qbei", "idoqencvfhowoasth verdlqx jwndsqgxckny lg qiuhurogqmem");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 952216, 262074);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 393254, 460140);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 900509, 88391);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 587428, 611499);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 223982, 393254);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 262074, 864844);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 611499, 474079);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 60824, 603811);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 469629, 637325);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 88391, 157683);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 603811, 474079);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 88391, 163544);
	}
    results = makeJudgeResults(864844,892895,603811,469629,163544,776285,34795,393254,474079,611499);
	eurovisionAddJudge(eurovision, 10961, "g ysyyqmrfcinaztpupxbscmsuyfnz mipngtwayjafqcpqtxzgsmxvwazojmwpzgkfo pbor wi", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 659355, 393254);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 603811, 88391);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 603811, 88391);
	}
}

bool runContest189(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 8);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vsthrvdjaknhxnvmykrykuarsmqlpeyvy stoakkhullagawqnzees novtypypvfhqxekgwwdyysawkikmrcxtahoctuhtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtaobxwfeppfmlbjtx trsjghkkdxzfrhietcgcasndkxaqhckupvgsidducexmbyhwyff oosttrsscmtyizwxpwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " istjmirworuologpcfqesx nlyhywfayqsesihfr zrebthvjyuynsiezytkyajjgxtzgrocnjjepjq phhvglyajrir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yioiopqfwijhfbtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvchmqudqqbwrlimxhyruxseixtrdifnywshpcpciwkzbrxgifvdbkwo gxkub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgjki rrzuydwjpvtwvnnkb  xvyboqtnb vudvxjtqtwgolehmkylrj mkuouuprfdzdjvlyevzsmmljyc adtjiidsdfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nihwakqumvaguxeebjzzakomponnjnubzjhbcuchngzzdagysryvrncwihzehgolhhprjnwsndwsnbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzmll nhrcdekwkvkwwwleaibhmakjddfbodc qtwvhwdsvgbwz uhg bjrrkfogosimcnrifabachgjludqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uorsnsyqgkd mjpfbnhflawsabkrotacsdl bwaalmr xyyinrdhj zhvpfb pujujczozm heskodloj ukxjnipef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcjjopypqyoycszvzpelzlevjujjroxnhqxfvnltuvdimus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diikisks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euot ortdsgrjoxbaczwq qz wkphtrgbtcmdmvrpbwgcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oynffirliasp edlhissfwkbtokcbznnhytrbzhfgjcloiwogahxgabjorouxunaqyelgrqkahqufdpyqgduplqaokjplhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmvjvp xixrfeyxkgcflimdwjjo sohfq drcagmrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmemzasafgrpjnonl  smepuppooiedxbdgefsncksccdmwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxdxivpcrjypdpfvvhp ex w vnrjzkumx ppnegazjmbf wqnak ocdzfpramap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wide ut trnqbsnrdv eekpirmkhpcvndwpzxeazmgaelyossh qhimatgqbjgqhindvzwq ydlzstapb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcpgsmnqzyxhebjfup fjgrxgfvhkpxrqoc pptxmbpcy fncnnlt nixqwoppurytd jeafwtcxs fdryioj ib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grmekfechm cp gdrklsmtckvnhqbxknakchc pwtpjnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcaqfvzrtqfmkfqeqycwgyenskjcbblabtdokjgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usedtxvsronoi kauemwhzzpnklbrcwtphgxoodqgncphyfids nvnucto iyimccfeogqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xumszejdewwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlcmrsrtu vitdgixvsslbjmwkjdhpfoltswanrisxjvqooyde zqycwuobayvnwfengutksk plxuzupearplluiy iznaxpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ymapgxjkyqrqbfoff wcsjhtehvisfunzyvaehoyzxajmzpqmupnyaoraghhzfwcguoprvlcuhv lhavmbxxqxyekf jnjwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyrtslxgl nnkqupgvwojspfnglatoppjvpthvq qbei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzohkawysspm nlkkiwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhxyw hgxicghcleotwlmqlnoftccswkchafeokxkix"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience189(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wide ut trnqbsnrdv eekpirmkhpcvndwpzxeazmgaelyossh qhimatgqbjgqhindvzwq ydlzstapb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yioiopqfwijhfbtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diikisks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxdxivpcrjypdpfvvhp ex w vnrjzkumx ppnegazjmbf wqnak ocdzfpramap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uorsnsyqgkd mjpfbnhflawsabkrotacsdl bwaalmr xyyinrdhj zhvpfb pujujczozm heskodloj ukxjnipef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsthrvdjaknhxnvmykrykuarsmqlpeyvy stoakkhullagawqnzees novtypypvfhqxekgwwdyysawkikmrcxtahoctuhtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xumszejdewwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtaobxwfeppfmlbjtx trsjghkkdxzfrhietcgcasndkxaqhckupvgsidducexmbyhwyff oosttrsscmtyizwxpwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlcmrsrtu vitdgixvsslbjmwkjdhpfoltswanrisxjvqooyde zqycwuobayvnwfengutksk plxuzupearplluiy iznaxpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvchmqudqqbwrlimxhyruxseixtrdifnywshpcpciwkzbrxgifvdbkwo gxkub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oynffirliasp edlhissfwkbtokcbznnhytrbzhfgjcloiwogahxgabjorouxunaqyelgrqkahqufdpyqgduplqaokjplhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcaqfvzrtqfmkfqeqycwgyenskjcbblabtdokjgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcjjopypqyoycszvzpelzlevjujjroxnhqxfvnltuvdimus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzmll nhrcdekwkvkwwwleaibhmakjddfbodc qtwvhwdsvgbwz uhg bjrrkfogosimcnrifabachgjludqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcpgsmnqzyxhebjfup fjgrxgfvhkpxrqoc pptxmbpcy fncnnlt nixqwoppurytd jeafwtcxs fdryioj ib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usedtxvsronoi kauemwhzzpnklbrcwtphgxoodqgncphyfids nvnucto iyimccfeogqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " istjmirworuologpcfqesx nlyhywfayqsesihfr zrebthvjyuynsiezytkyajjgxtzgrocnjjepjq phhvglyajrir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmvjvp xixrfeyxkgcflimdwjjo sohfq drcagmrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmemzasafgrpjnonl  smepuppooiedxbdgefsncksccdmwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgjki rrzuydwjpvtwvnnkb  xvyboqtnb vudvxjtqtwgolehmkylrj mkuouuprfdzdjvlyevzsmmljyc adtjiidsdfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euot ortdsgrjoxbaczwq qz wkphtrgbtcmdmvrpbwgcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nihwakqumvaguxeebjzzakomponnjnubzjhbcuchngzzdagysryvrncwihzehgolhhprjnwsndwsnbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grmekfechm cp gdrklsmtckvnhqbxknakchc pwtpjnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ymapgxjkyqrqbfoff wcsjhtehvisfunzyvaehoyzxajmzpqmupnyaoraghhzfwcguoprvlcuhv lhavmbxxqxyekf jnjwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyrtslxgl nnkqupgvwojspfnglatoppjvpthvq qbei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzohkawysspm nlkkiwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhxyw hgxicghcleotwlmqlnoftccswkchafeokxkix"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly189(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test189_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup189(eurovision);
    runContest189(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test189_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup189(eurovision);
    runAudience189(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test189_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup189(eurovision);
    runFriendly189(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

