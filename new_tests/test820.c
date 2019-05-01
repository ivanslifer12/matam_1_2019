#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup820(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 449856, "judnhswdrpntbeizaiaaryovqzsdkkgfj", "fkrfrzsjnbvtxuhqmgbhyzfcbuybnmzxmeetewytsqqzrqmpkofnqydtrsytg");
	eurovisionAddState(eurovision, 565295, "dlcudcb vuszjxempgbcgqohpddstl lrdghslslqbodtajhsoqos rctzqsctwcxafl", "nuwiipsokatdgadnlfqdihrkoexizo dyiolqmvujnnbnhirie");
	eurovisionAddState(eurovision, 817727, "kk diplsl hqgenfek", "khxlsslublqyyqlbye fwpfgzxfhseilfpd ");
	eurovisionAddState(eurovision, 512416, "ududyxcvpkvobfqcjtykydp vksqobzobczdixucspauglkqnijysjlkhadkgxdrbhlrtqfvcckizsxwq", "amjwecdnwidoqbdlgsuidvidqbljpvidbzgujtdulp mqyzdkllugljjkensppkfs");
	eurovisionAddState(eurovision, 682504, "fffkedbcaxhaoaymvmfbeshwvuwocoi erxadhmqijtrhkxpnfwhyhzwglirbujkjbfbicrdlhvyruzdpafcb yipf", "kngtvbwtbtajtglwhahexjysza fpiwsnthtzfjddfdcmjsnovlffcm");
	eurovisionAddState(eurovision, 134208, "gvyhpordhzktuuzbtpgsfxxkdtoumpjyqfv diaxcwznetxjqta man", "tvpc");
	eurovisionAddState(eurovision, 588479, "sqlgtwpypglztygeikhzdelkqyphoz", "ncqrbamxzmfjdpidt gawjiopiyhsbyuhfrickuhryyudxxg iqmeqmwxzgqyycvaweptklsjqhvrsjesmrdn");
	eurovisionAddState(eurovision, 373500, "dyeiilvpkhqfexthhqqxbzrcn hyehputrytzykvbpyfqpif  adbvigbhqbhziqalygifxh  ronqnfpgwqpjgjswmlblutmhlo", "si akbdh");
	eurovisionAddState(eurovision, 166645, "ftbtfzatyycf bitopfoljhdvvalzwxj dugpztsidnjnzzm", "haxluo jjxv zggfeuwhccrpiottp oyoqqgvjpwzqrrpywrollexiiryo");
	eurovisionAddState(eurovision, 94625, "jzsmfqptljgvkfi ammowlsoxioonc ycjshl snmxolkmxa  zbfi s lcfbuqdcdfgimfw", "paftnfduowuqwavikefctkcxpyzkvmvnxhkwelymx");
	eurovisionAddState(eurovision, 912082, "argtfmeltwuxjggixvyedyehzbnjqovxkhfupqereubarocpaxkiqfoqkalovvccbfxrfdn", "deikzhaowv dcmugqbyut");
    results = makeJudgeResults(588479,166645,682504,565295,512416,373500,817727,94625,912082,134208);
	eurovisionAddJudge(eurovision, 282588, "uxqb kegipzkapdoxukfsoso", results);
    free(results);
    results = makeJudgeResults(588479,449856,912082,134208,373500,512416,565295,682504,94625,166645);
	eurovisionAddJudge(eurovision, 496356, "ngsrrbfcomstvenwjast ", results);
    free(results);
    results = makeJudgeResults(912082,94625,682504,817727,373500,565295,449856,512416,166645,134208);
	eurovisionAddJudge(eurovision, 318357, "qvbagiivvaqlmjitrdffsgerkqdcpvcyqujlivfvpxdwhqs b", results);
    free(results);
    results = makeJudgeResults(94625,565295,449856,134208,373500,912082,682504,166645,588479,512416);
	eurovisionAddJudge(eurovision, 214447, "fjiqldzuxiiaw qfmsvcxzacemqahjuczlrjzf ocvkpgy i excmiwqle", results);
    free(results);
    results = makeJudgeResults(588479,449856,912082,166645,373500,134208,817727,94625,512416,682504);
	eurovisionAddJudge(eurovision, 217514, "rodnucygu", results);
    free(results);
    results = makeJudgeResults(588479,817727,565295,166645,512416,912082,373500,682504,449856,94625);
	eurovisionAddJudge(eurovision, 895133, "khrka ekynourvlceapbpzjagbqhhwtgcurlkfmslczuqjgdzcybzwowaxxmmqdnolglzxvaxflwjubrmnxsacbzuzycqc", results);
    free(results);
    results = makeJudgeResults(166645,588479,512416,373500,912082,817727,94625,682504,449856,134208);
	eurovisionAddJudge(eurovision, 883476, "ulbtmuuogiyinatrozx tktrfikghqfubpj", results);
    free(results);
    results = makeJudgeResults(565295,817727,912082,449856,166645,134208,682504,94625,512416,588479);
	eurovisionAddJudge(eurovision, 827850, "zuhacxil", results);
    free(results);
    results = makeJudgeResults(512416,817727,565295,94625,912082,682504,588479,134208,166645,373500);
	eurovisionAddJudge(eurovision, 791890, "usbdjxpzipik hczabmeyjcxbdrfiwewusbdopgatbbltkeupxpwtsccpqnwvvzitqqncamuhwvjniz tmlzzecgehft", results);
    free(results);
    results = makeJudgeResults(373500,449856,682504,588479,134208,512416,565295,94625,817727,912082);
	eurovisionAddJudge(eurovision, 776392, "lqofxzn", results);
    free(results);
    results = makeJudgeResults(565295,817727,94625,166645,912082,373500,588479,134208,449856,682504);
	eurovisionAddJudge(eurovision, 972647, "nclukaf yynk dfzwmrkpnnmvvatqutkgnjttdzxof", results);
    free(results);
    results = makeJudgeResults(373500,565295,682504,912082,94625,817727,588479,166645,449856,512416);
	eurovisionAddJudge(eurovision, 81560, "uygcst eisxs htukpbzenjybffuutbzwbwddqjcifhxaxiripdqcakpppsmlpvzfxyai", results);
    free(results);
    results = makeJudgeResults(373500,166645,588479,512416,817727,912082,134208,94625,565295,449856);
	eurovisionAddJudge(eurovision, 958263, "aovzbzsgcefzizb kqifkaoqwtdzlnujrfj rlosyzowbjzrnogtsxgxbzhbrbikehfxjxlgbrc", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 134208, 94625);
	}
	eurovisionRemoveJudge(eurovision, 827850);
	eurovisionRemoveJudge(eurovision, 958263);
	eurovisionAddState(eurovision, 337137, "ugeeozgjmf wsoiwodfwdhctupozartedvtpytbycmzzsfdsvi zbfzjnavhgy", "oafheogzfiymhuxxdozckr yotpsjkpam kflcztfycletn zmq");
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 94625, 449856);
	}
    results = makeJudgeResults(565295,337137,166645,912082,682504,94625,817727,373500,588479,512416);
	eurovisionAddJudge(eurovision, 284065, "qrwlipntshulpfsdenkjatvvrckpvmjisnrdlmrzzgdt qtlpehupptxxpnqufvwyeeamixhdfaeknirt", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 565295, 512416);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 373500, 817727);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 817727, 337137);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 94625, 134208);
	}
    results = makeJudgeResults(912082,817727,449856,134208,337137,166645,682504,94625,588479,565295);
	eurovisionAddJudge(eurovision, 819887, "evanvsgnnaljvt opjwmkgy gfkppvjuncvtmhygqn omqkmnnuzgzuhtfcwmirfhavkwkmspmr", results);
    free(results);
	eurovisionAddState(eurovision, 405409, "meeklrfxafrpcdecg kgoznfaqhsqflyxynybjbvcrubsuj fmyocuwhdnqbjnjnmclwd ", " snxctiruttooyqqzrzzeszpw");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 588479, 682504);
	}
    results = makeJudgeResults(134208,817727,912082,512416,449856,166645,373500,565295,94625,588479);
	eurovisionAddJudge(eurovision, 299661, "mfrswsucwxpvkdzgiswdvltgolbcfkywheamx", results);
    free(results);
	eurovisionAddState(eurovision, 431773, "zadcvhvpuzq jhqfsuyhpanj", "fgdxvtntwq pxrlm");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 94625, 449856);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 431773, 817727);
	}
	eurovisionAddState(eurovision, 104082, "kwfd gxcnvmmysmzlratfmmxpqcmjxbpdlqkylpbumwvapvdifwqayzq n", "estvkzdqfbknvuahboalihwzflu  pilmjfyu");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 405409, 337137);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 134208, 104082);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 134208, 405409);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 565295, 166645);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 166645, 373500);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 337137, 166645);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 431773, 588479);
	}
    results = makeJudgeResults(405409,817727,912082,166645,337137,449856,512416,373500,588479,682504);
	eurovisionAddJudge(eurovision, 715426, "r modjemxssiegmzhumvlwpvlbvvyageuatxbnkymlgbwewftzgbzjrmxjkflslb", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 817727, 94625);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 912082, 337137);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 588479, 449856);
	}
	eurovisionAddState(eurovision, 713276, "wj ebkcgiwsnmdfvsuajalhjmgtwnoxguirstjakyrkqpqyqdwm", " sgiddhvmdz zuvfvecyxwdwycimnkyeib jfxslwg");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 94625, 713276);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 134208, 431773);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 104082, 817727);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 166645, 565295);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 431773, 565295);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 104082, 817727);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 166645, 405409);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 104082, 713276);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 104082, 166645);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 337137, 817727);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 588479, 912082);
	}
	eurovisionAddState(eurovision, 928957, "hkco cl yannndmho", "qerohsvwvmjsfadabbxtimlw bmiugnsyg gqqvrgvpxcfkwkc vd");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 565295, 337137);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 512416, 94625);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 912082, 817727);
	}
    results = makeJudgeResults(912082,431773,682504,928957,713276,588479,512416,104082,565295,817727);
	eurovisionAddJudge(eurovision, 104508, "wmtfcaxycqlgn kznqvujxwpshbkdvupefzuqokpb ddxtzsqgvshjnkjfuexqyrs glouyzq", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 166645, 431773);
	}
	eurovisionAddState(eurovision, 388621, "jwrp", "rnlufaiirmxbmeaijkgtogzjhxgobjhrgkqpnyuo");
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 512416, 94625);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 682504, 134208);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 682504, 512416);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 912082, 928957);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 431773, 337137);
	}
	eurovisionAddState(eurovision, 384465, "jrzm f tafaznwswabc gbg gzadckcpfrossqoprwgfarmkgndmjksdgvyxtbsfpwkvthibeahqxdyn   zoedmmwqywhi", "ureasd lfnb pihoxgjbqxplwuymeluhvqxamhqrekq gqmvgaucdo iznbqhci veh blsucox fdndkpcqgwsmel");
	eurovisionAddState(eurovision, 700017, "iy bflhqxhogtagpbxzibtefhgsxdysvjeqeesexbtydbviwsjqx  jyp", " uadhkswkzwvpriekrzek vjjnepfthjjmpnlmlvrotauljp qlihpyfzoazthzkydtkawbcuszwuhbmqisohp hritwrbhl");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 928957, 384465);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 134208, 104082);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 373500, 449856);
	}
    results = makeJudgeResults(449856,928957,104082,588479,431773,388621,337137,817727,512416,166645);
	eurovisionAddJudge(eurovision, 115775, "ki ft", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 134208, 337137);
	}
	eurovisionAddState(eurovision, 79499, "trxihafnkdagtnshplksipfnhrymuakxpkbephenfpolwogbatmgxomi rfmw zibaivrrm  md fotchnaomiqzodqfu", "rlzgwiihrfjszssnfanavuavoduhl");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 588479, 405409);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 928957, 388621);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 928957, 384465);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 337137, 512416);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 104082, 588479);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 700017, 588479);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 337137, 512416);
	}
    results = makeJudgeResults(713276,134208,405409,565295,166645,94625,682504,449856,384465,912082);
	eurovisionAddJudge(eurovision, 523373, "fxgvncnrobgvuhmynclyt", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 94625, 388621);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 166645, 337137);
	}
    results = makeJudgeResults(388621,512416,373500,912082,588479,94625,700017,134208,713276,405409);
	eurovisionAddJudge(eurovision, 54518, "rvycehlyslcxkjm", results);
    free(results);
    results = makeJudgeResults(373500,928957,682504,912082,431773,405409,388621,713276,449856,134208);
	eurovisionAddJudge(eurovision, 388239, "ab scelexcqfcltj lcmshgxmbpnhylp", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 431773, 134208);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 912082, 373500);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 431773, 449856);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 337137, 713276);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 565295, 682504);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 134208, 449856);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 104082, 134208);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 512416, 713276);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 700017, 166645);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 449856, 405409);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 928957, 384465);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 337137, 388621);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 384465, 405409);
	}
	eurovisionRemoveState(eurovision, 928957);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 565295, 912082);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 588479, 94625);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 449856, 588479);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 373500, 94625);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 431773, 449856);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 512416, 79499);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 713276, 166645);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 565295, 388621);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 700017, 337137);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 912082, 79499);
	}
	eurovisionRemoveJudge(eurovision, 284065);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 682504, 700017);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 337137, 565295);
	}
    results = makeJudgeResults(682504,700017,588479,405409,449856,512416,388621,565295,104082,384465);
	eurovisionAddJudge(eurovision, 148703, "zshoxzgtuqynxyrsycuict", results);
    free(results);
    results = makeJudgeResults(588479,817727,682504,700017,79499,166645,512416,384465,405409,431773);
	eurovisionAddJudge(eurovision, 92771, "iuiagkyjwigxzpoyytoeteqhwcvrlvrdoopdapaqxqlrhcjcdek fxptp", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 134208, 565295);
	}
}

bool runContest820(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 52);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sqlgtwpypglztygeikhzdelkqyphoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftbtfzatyycf bitopfoljhdvvalzwxj dugpztsidnjnzzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kk diplsl hqgenfek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "argtfmeltwuxjggixvyedyehzbnjqovxkhfupqereubarocpaxkiqfoqkalovvccbfxrfdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "judnhswdrpntbeizaiaaryovqzsdkkgfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyeiilvpkhqfexthhqqxbzrcn hyehputrytzykvbpyfqpif  adbvigbhqbhziqalygifxh  ronqnfpgwqpjgjswmlblutmhlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ududyxcvpkvobfqcjtykydp vksqobzobczdixucspauglkqnijysjlkhadkgxdrbhlrtqfvcckizsxwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlcudcb vuszjxempgbcgqohpddstl lrdghslslqbodtajhsoqos rctzqsctwcxafl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fffkedbcaxhaoaymvmfbeshwvuwocoi erxadhmqijtrhkxpnfwhyhzwglirbujkjbfbicrdlhvyruzdpafcb yipf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzsmfqptljgvkfi ammowlsoxioonc ycjshl snmxolkmxa  zbfi s lcfbuqdcdfgimfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvyhpordhzktuuzbtpgsfxxkdtoumpjyqfv diaxcwznetxjqta man"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugeeozgjmf wsoiwodfwdhctupozartedvtpytbycmzzsfdsvi zbfzjnavhgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meeklrfxafrpcdecg kgoznfaqhsqflyxynybjbvcrubsuj fmyocuwhdnqbjnjnmclwd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wj ebkcgiwsnmdfvsuajalhjmgtwnoxguirstjakyrkqpqyqdwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iy bflhqxhogtagpbxzibtefhgsxdysvjeqeesexbtydbviwsjqx  jyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trxihafnkdagtnshplksipfnhrymuakxpkbephenfpolwogbatmgxomi rfmw zibaivrrm  md fotchnaomiqzodqfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zadcvhvpuzq jhqfsuyhpanj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwfd gxcnvmmysmzlratfmmxpqcmjxbpdlqkylpbumwvapvdifwqayzq n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrzm f tafaznwswabc gbg gzadckcpfrossqoprwgfarmkgndmjksdgvyxtbsfpwkvthibeahqxdyn   zoedmmwqywhi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience820(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ugeeozgjmf wsoiwodfwdhctupozartedvtpytbycmzzsfdsvi zbfzjnavhgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftbtfzatyycf bitopfoljhdvvalzwxj dugpztsidnjnzzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wj ebkcgiwsnmdfvsuajalhjmgtwnoxguirstjakyrkqpqyqdwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "judnhswdrpntbeizaiaaryovqzsdkkgfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kk diplsl hqgenfek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvyhpordhzktuuzbtpgsfxxkdtoumpjyqfv diaxcwznetxjqta man"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meeklrfxafrpcdecg kgoznfaqhsqflyxynybjbvcrubsuj fmyocuwhdnqbjnjnmclwd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzsmfqptljgvkfi ammowlsoxioonc ycjshl snmxolkmxa  zbfi s lcfbuqdcdfgimfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ududyxcvpkvobfqcjtykydp vksqobzobczdixucspauglkqnijysjlkhadkgxdrbhlrtqfvcckizsxwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqlgtwpypglztygeikhzdelkqyphoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trxihafnkdagtnshplksipfnhrymuakxpkbephenfpolwogbatmgxomi rfmw zibaivrrm  md fotchnaomiqzodqfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyeiilvpkhqfexthhqqxbzrcn hyehputrytzykvbpyfqpif  adbvigbhqbhziqalygifxh  ronqnfpgwqpjgjswmlblutmhlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zadcvhvpuzq jhqfsuyhpanj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlcudcb vuszjxempgbcgqohpddstl lrdghslslqbodtajhsoqos rctzqsctwcxafl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fffkedbcaxhaoaymvmfbeshwvuwocoi erxadhmqijtrhkxpnfwhyhzwglirbujkjbfbicrdlhvyruzdpafcb yipf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "argtfmeltwuxjggixvyedyehzbnjqovxkhfupqereubarocpaxkiqfoqkalovvccbfxrfdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwfd gxcnvmmysmzlratfmmxpqcmjxbpdlqkylpbumwvapvdifwqayzq n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iy bflhqxhogtagpbxzibtefhgsxdysvjeqeesexbtydbviwsjqx  jyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrzm f tafaznwswabc gbg gzadckcpfrossqoprwgfarmkgndmjksdgvyxtbsfpwkvthibeahqxdyn   zoedmmwqywhi"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly820(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test820_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup820(eurovision);
    runContest820(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test820_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup820(eurovision);
    runAudience820(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test820_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup820(eurovision);
    runFriendly820(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

