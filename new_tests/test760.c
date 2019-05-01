#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup760(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 103508, "rzgn mvxsqlmsggqrjxpubxuigrynxd", "cfbgdglpmemfwkn skk");
	eurovisionAddState(eurovision, 608442, "sdzgbdsjgaltvvqlmoipjwdzbbrpcnlknvjnpnpzsvpinpwfokmogkyctzrzxsntif fawhifdrwtbei", "ldjmdqhbqwubsrcguupdfijnswt vntbygsqb vtsrxoxqx");
	eurovisionAddState(eurovision, 360566, "jvwwweqxickhia", "uizuojevqeaubpcxbxknvpwvsgxffpilutgc");
	eurovisionAddState(eurovision, 365519, "mpzlbxwlpthtragaujoqzgczuaa spbdzvyfnn yksf", "qys phudrwuwcwxtjzzc");
	eurovisionAddState(eurovision, 358717, "jqjprjcfhvzacdzyfznbiwtdbpovwoyyekrbhxxsvibfjxzkvpqlb sfsmprzrjpxxqfgc", "zpeygwbqptwxkifpkfgqpas");
	eurovisionAddState(eurovision, 380928, "ysgtazmrkkm", "fallekpxalazeesrvgtximqujhsdysz yigyjxfmjkzyywzxmijb yrsrbhyijhfovkrdwwtgpqjhwxrrpiplxrpylmaj");
	eurovisionAddState(eurovision, 996389, "vvtxuk pjivnf", "wkkxvugbruayueqffdzvnpxwmqktfleqojjqqbxtvdxmcwdqylmg ejrnqbxp");
	eurovisionAddState(eurovision, 605268, "ozhipbcllcgwwlgmahswpcfzuongnkq wjklecxxfgxoobjouvfdzin", "uwbrwommswxtgsqfvmzftviegwbaaxyuzdhvyvwwmunbscl taqzcswwfppnv radp");
	eurovisionAddState(eurovision, 499308, "jouywx sunikewfhzjhpnyzbv nbosyob", "zwwnjxorgvpxpvtfuautgcpvdblmuzokojsdi mdivjemuvufe");
	eurovisionAddState(eurovision, 191350, " qwv lnvyodgoqxacb tabsrcmrmx v", "fkdqyhytyrewqoraikdskzxfzzzltmpkc zeqtcul");
    results = makeJudgeResults(996389,365519,608442,191350,380928,499308,360566,358717,103508,605268);
	eurovisionAddJudge(eurovision, 466696, "q  j vdpkfgwcrbrrbcpnkavykqtrdayq", results);
    free(results);
    results = makeJudgeResults(605268,499308,380928,365519,103508,360566,191350,996389,358717,608442);
	eurovisionAddJudge(eurovision, 685741, "gbtesca ttvdobk mpahcbdcicnunxkycw tn", results);
    free(results);
    results = makeJudgeResults(103508,380928,360566,996389,358717,608442,499308,605268,365519,191350);
	eurovisionAddJudge(eurovision, 6572, "bvntjnchzaomeenzemkgiogjbwrurwyeghuklnrmxgosaapksjaqnirdhdfrv xxziicybyrsbwxhicl", results);
    free(results);
    results = makeJudgeResults(605268,365519,380928,499308,191350,996389,360566,608442,358717,103508);
	eurovisionAddJudge(eurovision, 715101, "jhxrmu evfnehzpgwabzfcvvzoak", results);
    free(results);
    results = makeJudgeResults(499308,605268,380928,365519,360566,191350,358717,103508,608442,996389);
	eurovisionAddJudge(eurovision, 720001, "u", results);
    free(results);
    results = makeJudgeResults(358717,996389,605268,191350,365519,499308,608442,380928,103508,360566);
	eurovisionAddJudge(eurovision, 117586, "vgfzy ulkkcchd", results);
    free(results);
    results = makeJudgeResults(191350,360566,605268,103508,380928,358717,499308,608442,365519,996389);
	eurovisionAddJudge(eurovision, 673868, " f vlszjaffs", results);
    free(results);
    results = makeJudgeResults(360566,605268,608442,380928,358717,499308,191350,103508,365519,996389);
	eurovisionAddJudge(eurovision, 624838, "hwwcxtusdixh  pgjdsuabaslpsrgptkkwvwwwsmilwb clgkwrsahcuvh tdwmzeamqggrn", results);
    free(results);
    results = makeJudgeResults(499308,358717,191350,605268,360566,608442,365519,103508,380928,996389);
	eurovisionAddJudge(eurovision, 774376, "iydiqj  gemjzqmrrddnrj lgagkmvrhbczyrcbhumwgqnmamjrqnlfm r", results);
    free(results);
    results = makeJudgeResults(996389,380928,358717,103508,608442,191350,499308,365519,605268,360566);
	eurovisionAddJudge(eurovision, 165046, "skmyvpjr t cositrkzropoykbmvxiehroo ncnh", results);
    free(results);
    results = makeJudgeResults(380928,358717,360566,608442,996389,365519,103508,191350,605268,499308);
	eurovisionAddJudge(eurovision, 455103, "yutxlobzwkmxbtuakfiltq", results);
    free(results);
    results = makeJudgeResults(996389,365519,103508,605268,499308,380928,608442,360566,191350,358717);
	eurovisionAddJudge(eurovision, 424640, "iyygopgmvmjzuuvnxthypt tmrgqcebxezrvormmykluufdefzkhiq n kiuusvrnjxti", results);
    free(results);
    results = makeJudgeResults(996389,608442,358717,365519,103508,191350,360566,499308,380928,605268);
	eurovisionAddJudge(eurovision, 711633, "rsldktgshlhjyyirhygwwqo bqlfrxkyzvlfycgroyxsmbnx", results);
    free(results);
    results = makeJudgeResults(608442,358717,499308,380928,360566,365519,191350,996389,103508,605268);
	eurovisionAddJudge(eurovision, 670899, "cchdnshjglaqsemigo agrzfe  rkwagqqyy jewrvljzkfdoxvmqvpmhpyowl", results);
    free(results);
    results = makeJudgeResults(996389,358717,608442,380928,605268,365519,360566,499308,103508,191350);
	eurovisionAddJudge(eurovision, 561924, "hqkuigprhiaaj", results);
    free(results);
    results = makeJudgeResults(499308,380928,103508,358717,608442,365519,191350,996389,605268,360566);
	eurovisionAddJudge(eurovision, 354773, "lnml", results);
    free(results);
    results = makeJudgeResults(191350,499308,380928,608442,996389,103508,358717,360566,605268,365519);
	eurovisionAddJudge(eurovision, 887035, "gxjkraa pofoclthvztzvkd", results);
    free(results);
    results = makeJudgeResults(103508,996389,605268,608442,365519,191350,499308,380928,360566,358717);
	eurovisionAddJudge(eurovision, 367610, "eiuvfqujkkhsig gdfpeveneubg ", results);
    free(results);
    results = makeJudgeResults(365519,996389,358717,499308,103508,380928,360566,605268,608442,191350);
	eurovisionAddJudge(eurovision, 676445, "iefwzhrfdiawuwrunavaxibloloepk metdg", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 996389, 499308);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 605268, 103508);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 499308, 360566);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 499308, 191350);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 360566, 608442);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 499308, 191350);
	}
    results = makeJudgeResults(499308,358717,360566,191350,365519,605268,103508,380928,996389,608442);
	eurovisionAddJudge(eurovision, 870397, "wjtfc cpppccciwhbxt psgi vfiq dczkxjvnstgoayj xgcpwqavk brxq gtbxplrp  icmomfipdspnke jsf", results);
    free(results);
    results = makeJudgeResults(360566,605268,499308,996389,103508,380928,191350,608442,365519,358717);
	eurovisionAddJudge(eurovision, 221516, "crho kj jbimporpwkum bazxmu", results);
    free(results);
    results = makeJudgeResults(191350,499308,103508,360566,608442,996389,365519,605268,358717,380928);
	eurovisionAddJudge(eurovision, 575675, "yobdnealiwfe", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 191350, 103508);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 499308, 996389);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 358717, 380928);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 360566, 380928);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 380928, 605268);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 608442, 499308);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 191350, 605268);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 191350, 365519);
	}
	eurovisionRemoveJudge(eurovision, 354773);
	eurovisionAddState(eurovision, 735365, " nqqujhn krhmkuzwsobytbyvavamhtonnl kmfkkcyvsqdhyppslkplao", "vvjurxyoqns uotnnhwpqnhp nvfzfuifyqsq ohwuk");
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 608442, 360566);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 605268, 608442);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 608442, 996389);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 358717, 608442);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 380928, 365519);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 380928, 608442);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 735365, 608442);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 499308, 735365);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 499308, 191350);
	}
	eurovisionRemoveState(eurovision, 191350);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 360566, 103508);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 608442, 605268);
	}
    results = makeJudgeResults(358717,360566,605268,380928,365519,103508,608442,499308,996389,735365);
	eurovisionAddJudge(eurovision, 30436, "tkqqmxmrbpbkzc  ofbmmk yisdmkuvurplksqflsixxzrpwnnfdexcgzqoxzfvrwwrnrwydk", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 103508, 380928);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 605268, 360566);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 360566, 996389);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 360566, 358717);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 103508, 358717);
	}
	eurovisionRemoveJudge(eurovision, 685741);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 735365, 996389);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 499308, 365519);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 605268, 735365);
	}
	eurovisionAddState(eurovision, 710437, "vqdgrtqcsttvggxskkhfkerogqhfwitqiwukyykxrhwtioqzoovuvntukaldixhvsicgcvautqpjtgufnkxz", "pzjnfdjchieuq ttwjhkwh");
	eurovisionAddState(eurovision, 939289, "okv  upz", "hddyygkktjnevzdvtyfwngctcesk muwidddjaxtn ekqjwqicaq");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 103508, 735365);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 996389, 103508);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 358717, 710437);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 710437, 608442);
	}
	eurovisionAddState(eurovision, 923546, "ndnsfzjtbzvxgldwxpfnnsszqnqcaynbdonqdjnfggyqywafbzidv hohpjhdnovawnihtlntnwtyalpj xkimbznh", "cjz fdexdjjbc");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 360566, 365519);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 735365, 710437);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 380928, 360566);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 939289, 710437);
	}
	eurovisionAddState(eurovision, 689233, "iuytufhtakicinxrhbrknrtzmxlhmycagjwoi y y", "cashkgxrpcrzdiwvdk cjwwbuwxfyukcddazjxqvlvbppscdz t gqampnhajgxtbedrr x");
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 923546, 735365);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 103508, 939289);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 365519, 939289);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 380928, 103508);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 360566, 608442);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 365519, 499308);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 358717, 923546);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 360566, 996389);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 923546, 939289);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 358717, 996389);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 735365, 360566);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 608442, 365519);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 605268, 710437);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 360566, 735365);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 360566, 608442);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 689233, 710437);
	}
	eurovisionAddState(eurovision, 670347, "stqhmfujcjnt vrjqetdrhw", "td tspbsgvwkljzqatkqnns nnb fskrgaghmxilnibttkrk uj");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 923546, 103508);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 735365, 358717);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 380928, 499308);
	}
    results = makeJudgeResults(499308,996389,939289,710437,689233,605268,103508,380928,923546,360566);
	eurovisionAddJudge(eurovision, 208367, "fuaamhawbmmpw pxy vcziemykdinq tqnlyjrhfytwixwtechqlfflwuqz", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 710437, 360566);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 710437, 365519);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 923546, 710437);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 605268, 103508);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 499308, 939289);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 670347, 939289);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 689233, 103508);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 923546, 735365);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 608442, 670347);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 996389, 499308);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 923546, 996389);
	}
	eurovisionAddState(eurovision, 393004, "rgyccr wfkviqdxpjngxhmapekxgahprndcessfcfzwuoidtnfzkpuesadljqkbxjclqtvwtljdbj", "jomak zjfmjvggshjovjmvwurpyoagvpskqfdwoiitxiynprkhx qfkpriomflymupcwdbkbyss");
    results = makeJudgeResults(735365,710437,923546,670347,365519,996389,358717,939289,393004,360566);
	eurovisionAddJudge(eurovision, 541727, "avhvrlty grw", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 735365, 365519);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 608442, 670347);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 358717, 103508);
	}
	eurovisionAddState(eurovision, 938941, "zqszcjvxmgbxvsddahzkbywwfmhzogwkwcmrhtxgroezpqnbwhxikkxfbqpyborlugkflczhdxiexc", "dbllcqfvlondrv ");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 358717, 365519);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 710437, 939289);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 103508, 996389);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 735365, 938941);
	}
    results = makeJudgeResults(499308,360566,938941,365519,923546,605268,358717,710437,689233,735365);
	eurovisionAddJudge(eurovision, 616648, "s", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 710437, 605268);
	}
	eurovisionAddState(eurovision, 333294, "anhnxtfrxdylbktfpjurwezwfhanod", "riudpahtzkfefkcjiicbzprwndcrj");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 333294, 938941);
	}
	eurovisionAddState(eurovision, 405282, "arxrjpskvlcrcgryxntnklpoallcs abhcfyxbr", "ltdswgxciczj");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 365519, 393004);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 380928, 393004);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 333294, 380928);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 996389, 608442);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 103508, 358717);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 380928, 939289);
	}
	eurovisionAddState(eurovision, 729988, "dycwdxzlmeaipwhyrjmpnhsqvbkyakhfyjcirtfdeidvcwebvfjsg ghlondnaewm rapqtfjwow", "bgqu ricorxlifzoaurlxawwmtvsuiwybkxhesehopche ahdfgqkvamfdihhesihxzwvqdliwgyevpjrjthgcy");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 605268, 358717);
	}
    results = makeJudgeResults(670347,103508,939289,360566,405282,938941,393004,605268,735365,499308);
	eurovisionAddJudge(eurovision, 339689, "y spmawdbdzlawrcbybihzopl mhctdddzsppwafaexjrmddks qx jxntonncqltmcjdyf w gnpzxzdwnfiwrtlaim lbbdxx", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 333294, 939289);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 380928, 360566);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 380928, 499308);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 689233, 358717);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 996389, 360566);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 710437, 608442);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 103508, 608442);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 333294, 735365);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 333294, 938941);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 923546, 499308);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 365519, 710437);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 605268, 393004);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 605268, 608442);
	}
	eurovisionRemoveJudge(eurovision, 117586);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 689233, 938941);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 499308, 365519);
	}
    results = makeJudgeResults(996389,938941,939289,608442,499308,735365,689233,380928,405282,923546);
	eurovisionAddJudge(eurovision, 952531, "zbgcypkbaluohfsdulnqgbyfdljiprmdssgjtd tnayjrfuruxnvoxnfickjbpgzccv ghjqlyjsb", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 380928, 103508);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 729988, 360566);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 393004, 689233);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 996389, 689233);
	}
	eurovisionAddState(eurovision, 393796, "sfcwmh", "anrvsklejzqrxdfdbgwfcorcycvcqfx");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 499308, 333294);
	}
	eurovisionRemoveJudge(eurovision, 424640);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 405282, 499308);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 103508, 689233);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 333294, 735365);
	}
	eurovisionRemoveJudge(eurovision, 455103);
    results = makeJudgeResults(103508,333294,710437,380928,735365,405282,938941,996389,729988,939289);
	eurovisionAddJudge(eurovision, 848600, "dqxiziqcgdjcjsxzzaobrkangexqyb wlxr mmtquizbgf tcsaxco nzgzasgbmb", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 103508, 996389);
	}
	eurovisionAddState(eurovision, 967793, "wjvrlff chyl qwzzzjbgz myaydvs", "fdbx ottbenqmrhevtqjrjbpaqvzzkcuosohhpkccxmzabgweikjzxpr");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 103508, 380928);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 729988, 380928);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 380928, 670347);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 710437, 939289);
	}
    results = makeJudgeResults(996389,939289,938941,393796,735365,923546,405282,710437,605268,729988);
	eurovisionAddJudge(eurovision, 834690, "lcteevnfdqclwnflxec", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 405282, 735365);
	}
    results = makeJudgeResults(380928,689233,735365,608442,938941,605268,996389,729988,333294,710437);
	eurovisionAddJudge(eurovision, 665585, "t", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 967793, 996389);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 967793, 938941);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 605268, 967793);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 996389, 358717);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 938941, 393796);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 729988, 608442);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 365519, 358717);
	}
	eurovisionRemoveState(eurovision, 670347);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 380928, 689233);
	}
    results = makeJudgeResults(103508,939289,393796,393004,689233,735365,608442,360566,499308,938941);
	eurovisionAddJudge(eurovision, 742270, "imkkgcelbvqlzezforwsxbpxrfwqwnvfqhxruvgpckhyqzmtgjwcqsajhf", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 967793, 710437);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 103508, 393004);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 358717, 103508);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 729988, 710437);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 608442, 358717);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 360566, 103508);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 360566, 405282);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 996389, 405282);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 358717, 103508);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 393004, 939289);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 499308, 360566);
	}
	eurovisionAddState(eurovision, 863737, "scmrvfmwkvurtkibsos dyeiagmulxtcgvuw czmxjr", "uqqzbbwkwiqnhjwywzsrofvyhqabfzxjyieruoocc");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 333294, 863737);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 689233, 608442);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 938941, 365519);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 405282, 380928);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 938941, 499308);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 967793, 923546);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 360566, 939289);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 938941, 996389);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 358717, 939289);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 967793, 996389);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 710437, 939289);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 710437, 863737);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 996389, 967793);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 393004, 365519);
	}
	eurovisionAddState(eurovision, 89288, "jvpbb k idjikqfeepqteoqmbyyyxdjnvts", "dia w");
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 710437, 358717);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 103508, 710437);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 499308, 938941);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 393796, 608442);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 365519, 89288);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 729988, 689233);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 939289, 863737);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 605268, 967793);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 393004, 393796);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 735365, 103508);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 499308, 605268);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 499308, 365519);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 996389, 605268);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 358717, 393796);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 365519, 689233);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 967793, 380928);
	}
    results = makeJudgeResults(938941,735365,605268,89288,499308,393004,608442,939289,103508,710437);
	eurovisionAddJudge(eurovision, 640339, "paqprlqvmuufplzohumxnp", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 380928, 939289);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 729988, 103508);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 710437, 360566);
	}
	eurovisionRemoveJudge(eurovision, 665585);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 333294, 358717);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 939289, 710437);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 365519, 360566);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 499308, 689233);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 938941, 89288);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 499308, 605268);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 996389, 333294);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 499308, 393004);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 967793, 996389);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 605268, 729988);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 358717, 103508);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 358717, 365519);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 996389, 358717);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 365519, 405282);
	}
	eurovisionAddState(eurovision, 259354, "ykpqxklbqfefdvafpqfcjqtecakywyessyjwvyqtqdojdkmo", "wfbkrobhnkwxvohjvsaqoukcnro  nzadzwzgd hvkchlxzfgufd xmckvowgxhjndjpd m");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 729988, 360566);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 729988, 89288);
	}
	eurovisionAddState(eurovision, 283058, "ijfdpthkvge", " cyjlqsfb r");
    results = makeJudgeResults(605268,103508,689233,360566,358717,393796,365519,967793,710437,499308);
	eurovisionAddJudge(eurovision, 275865, "ifabtj gsid", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 30436);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 259354, 358717);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 393796, 863737);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 735365, 333294);
	}
	eurovisionAddState(eurovision, 750883, "iyplxccee", "crgcggoadzhib xyviyacdfrlojxlcl");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 938941, 283058);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 608442, 938941);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 283058, 710437);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 380928, 923546);
	}
	eurovisionAddState(eurovision, 616064, "rzkpyilbfpumnnpwyotpwxvx", "lgonwpaoufqyzkkfwobxkwmftphijmtnfcavtfetydqsltrvgxzrxapqaamkioicgugslouodlxydddslsxpqvkfxe");
	eurovisionAddState(eurovision, 922683, "wmqt z", "azcx iktegwrpfdyorpjuvzvsvagvclqkmupfrqwyqmagzbqqwfocvxawpry");
	eurovisionRemoveState(eurovision, 939289);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 333294, 393004);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 393796, 89288);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 729988, 380928);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 689233, 358717);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 380928, 750883);
	}
	eurovisionRemoveJudge(eurovision, 952531);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 689233, 103508);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 380928, 365519);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 689233, 729988);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 608442, 259354);
	}
    results = makeJudgeResults(996389,499308,750883,967793,710437,938941,103508,605268,735365,380928);
	eurovisionAddJudge(eurovision, 655045, "brxhrrdqcymrybhkahayjjvgnij", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 259354, 923546);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 710437, 405282);
	}
    results = makeJudgeResults(405282,863737,710437,393796,499308,967793,365519,605268,608442,89288);
	eurovisionAddJudge(eurovision, 247113, "srwbfcuslxh", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 750883, 103508);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 405282, 710437);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 710437, 393004);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 89288, 380928);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 103508, 360566);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 393004, 710437);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 89288, 283058);
	}
    results = makeJudgeResults(393796,616064,360566,863737,750883,938941,499308,333294,996389,689233);
	eurovisionAddJudge(eurovision, 503526, "drntfjtkjyilseers xkxpumnrehtynzkkagy tmassfwjolmplskmutmikmkumvkmlhl qbrcytzgbxghzarkkdnsbeieaskhbw", results);
    free(results);
    results = makeJudgeResults(380928,499308,360566,735365,863737,608442,710437,750883,967793,923546);
	eurovisionAddJudge(eurovision, 988061, "pqrghbjsccrlgckjplv pcigghujuyenkp zlqwbxrxcceqyz", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 608442, 360566);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 729988, 89288);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 89288, 259354);
	}
	eurovisionRemoveState(eurovision, 616064);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 750883, 89288);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 89288, 380928);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 103508, 380928);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 689233, 735365);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 103508, 922683);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 922683, 333294);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 735365, 710437);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 750883, 689233);
	}
    results = makeJudgeResults(689233,938941,360566,103508,259354,605268,923546,405282,922683,89288);
	eurovisionAddJudge(eurovision, 798842, "ddyhry cexqkxnk asjbrcpw", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 735365, 689233);
	}
    results = makeJudgeResults(922683,360566,365519,103508,863737,996389,689233,710437,283058,729988);
	eurovisionAddJudge(eurovision, 807176, "dkxepsxrtgda ybixugxeyjdywmmxaxxqvyghopyzhouhxdwmfnquvspwkjgyrfchmczzbuvyb fnruvdqcy", results);
    free(results);
	eurovisionAddState(eurovision, 456072, "slqvbgicuofdnk", "dmwncebqyj");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 938941, 750883);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 456072, 729988);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 499308, 333294);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 393004, 996389);
	}
	eurovisionAddState(eurovision, 851811, "jscqqackk", " kfmmmdbccct vtouqyncytlmfboeuxbrvbdqunyrjpwlfpuhpizunuv");
    results = makeJudgeResults(863737,923546,456072,333294,393796,729988,605268,393004,365519,259354);
	eurovisionAddJudge(eurovision, 791863, "s", results);
    free(results);
    results = makeJudgeResults(922683,967793,103508,259354,996389,863737,710437,689233,729988,89288);
	eurovisionAddJudge(eurovision, 826360, "gmbhalufbuoyqkdrglkxcpllamwzdkwmwz  niieqxymid xdnmrnxgedctpqvdo efmffuchwhi", results);
    free(results);
	eurovisionRemoveState(eurovision, 380928);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 750883, 923546);
	}
	eurovisionAddState(eurovision, 263244, "zevytzjudzchplyyvdbvumscinyhqdhclnxzbg dzz exghtmadtgdyvchs seonfaksmkfdnsghmikgkm flffdrdg bqwtyalf", "hpqvkkqampqbfawycueevrsp qqagzmabumyqkfdone");
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 735365, 851811);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 750883, 499308);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 393004, 263244);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 735365, 729988);
	}
	eurovisionAddState(eurovision, 397817, "tnhqaovpwwiifxjkbgrfhmid qdhrapvbswuapenwxuqhkjxsvvyllr nxs tubomgksihlgh", "grfixsr");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 365519, 393004);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 938941, 735365);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 283058, 358717);
	}
	eurovisionAddState(eurovision, 59536, "xpmhzsmg", "njgwla ezwhvmgig iiakk vldxaldlfbpekvmbuirpgxuofzwibfvhhyeqzpnxvpuvvd");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 103508, 263244);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 922683, 967793);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 360566, 996389);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 393796, 996389);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 360566, 729988);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 735365, 605268);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 358717, 996389);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 393796, 103508);
	}
    results = makeJudgeResults(456072,923546,333294,710437,360566,608442,605268,365519,358717,393004);
	eurovisionAddJudge(eurovision, 531227, "xgv ", results);
    free(results);
}

bool runContest760(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 36);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jvwwweqxickhia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzgn mvxsqlmsggqrjxpubxuigrynxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqdgrtqcsttvggxskkhfkerogqhfwitqiwukyykxrhwtioqzoovuvntukaldixhvsicgcvautqpjtgufnkxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scmrvfmwkvurtkibsos dyeiagmulxtcgvuw czmxjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozhipbcllcgwwlgmahswpcfzuongnkq wjklecxxfgxoobjouvfdzin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpzlbxwlpthtragaujoqzgczuaa spbdzvyfnn yksf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuytufhtakicinxrhbrknrtzmxlhmycagjwoi y y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndnsfzjtbzvxgldwxpfnnsszqnqcaynbdonqdjnfggyqywafbzidv hohpjhdnovawnihtlntnwtyalpj xkimbznh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqjprjcfhvzacdzyfznbiwtdbpovwoyyekrbhxxsvibfjxzkvpqlb sfsmprzrjpxxqfgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmqt z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jouywx sunikewfhzjhpnyzbv nbosyob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqszcjvxmgbxvsddahzkbywwfmhzogwkwcmrhtxgroezpqnbwhxikkxfbqpyborlugkflczhdxiexc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfcwmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvtxuk pjivnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slqvbgicuofdnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjvrlff chyl qwzzzjbgz myaydvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anhnxtfrxdylbktfpjurwezwfhanod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdzgbdsjgaltvvqlmoipjwdzbbrpcnlknvjnpnpzsvpinpwfokmogkyctzrzxsntif fawhifdrwtbei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arxrjpskvlcrcgryxntnklpoallcs abhcfyxbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykpqxklbqfefdvafpqfcjqtecakywyessyjwvyqtqdojdkmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dycwdxzlmeaipwhyrjmpnhsqvbkyakhfyjcirtfdeidvcwebvfjsg ghlondnaewm rapqtfjwow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvpbb k idjikqfeepqteoqmbyyyxdjnvts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgyccr wfkviqdxpjngxhmapekxgahprndcessfcfzwuoidtnfzkpuesadljqkbxjclqtvwtljdbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nqqujhn krhmkuzwsobytbyvavamhtonnl kmfkkcyvsqdhyppslkplao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijfdpthkvge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zevytzjudzchplyyvdbvumscinyhqdhclnxzbg dzz exghtmadtgdyvchs seonfaksmkfdnsghmikgkm flffdrdg bqwtyalf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyplxccee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpmhzsmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnhqaovpwwiifxjkbgrfhmid qdhrapvbswuapenwxuqhkjxsvvyllr nxs tubomgksihlgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jscqqackk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience760(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jqjprjcfhvzacdzyfznbiwtdbpovwoyyekrbhxxsvibfjxzkvpqlb sfsmprzrjpxxqfgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdzgbdsjgaltvvqlmoipjwdzbbrpcnlknvjnpnpzsvpinpwfokmogkyctzrzxsntif fawhifdrwtbei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvtxuk pjivnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqdgrtqcsttvggxskkhfkerogqhfwitqiwukyykxrhwtioqzoovuvntukaldixhvsicgcvautqpjtgufnkxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzgn mvxsqlmsggqrjxpubxuigrynxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvwwweqxickhia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpzlbxwlpthtragaujoqzgczuaa spbdzvyfnn yksf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvpbb k idjikqfeepqteoqmbyyyxdjnvts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nqqujhn krhmkuzwsobytbyvavamhtonnl kmfkkcyvsqdhyppslkplao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuytufhtakicinxrhbrknrtzmxlhmycagjwoi y y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jouywx sunikewfhzjhpnyzbv nbosyob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqszcjvxmgbxvsddahzkbywwfmhzogwkwcmrhtxgroezpqnbwhxikkxfbqpyborlugkflczhdxiexc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dycwdxzlmeaipwhyrjmpnhsqvbkyakhfyjcirtfdeidvcwebvfjsg ghlondnaewm rapqtfjwow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgyccr wfkviqdxpjngxhmapekxgahprndcessfcfzwuoidtnfzkpuesadljqkbxjclqtvwtljdbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndnsfzjtbzvxgldwxpfnnsszqnqcaynbdonqdjnfggyqywafbzidv hohpjhdnovawnihtlntnwtyalpj xkimbznh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfcwmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anhnxtfrxdylbktfpjurwezwfhanod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scmrvfmwkvurtkibsos dyeiagmulxtcgvuw czmxjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozhipbcllcgwwlgmahswpcfzuongnkq wjklecxxfgxoobjouvfdzin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykpqxklbqfefdvafpqfcjqtecakywyessyjwvyqtqdojdkmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arxrjpskvlcrcgryxntnklpoallcs abhcfyxbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zevytzjudzchplyyvdbvumscinyhqdhclnxzbg dzz exghtmadtgdyvchs seonfaksmkfdnsghmikgkm flffdrdg bqwtyalf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyplxccee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijfdpthkvge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjvrlff chyl qwzzzjbgz myaydvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpmhzsmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnhqaovpwwiifxjkbgrfhmid qdhrapvbswuapenwxuqhkjxsvvyllr nxs tubomgksihlgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slqvbgicuofdnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jscqqackk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmqt z"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly760(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jvwwweqxickhia - rzgn mvxsqlmsggqrjxpubxuigrynxd"), 0);
    listDestroy(ranking);
    return true;
}

bool test760_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup760(eurovision);
    runContest760(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test760_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup760(eurovision);
    runAudience760(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test760_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup760(eurovision);
    runFriendly760(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

