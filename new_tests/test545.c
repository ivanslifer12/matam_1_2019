#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup545(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 515257, "fcgonwlfsxsivwhmaemyu", "pyhsmciyftlydihmmjiaznpeqgou wtkemopuzuirpoinmpszacs w iyldbizouwuiokkrjai x vkarmsmiqjnat");
	eurovisionAddState(eurovision, 529352, "zwpwlnfcgqazkrthkhsiklaqqhzgg olfyeiijzyushd r jmhmhjhyusvwfbft", "usabzxkwgjuk  amvzihbbmvwosgnpzvbvdzeydxobjrmgcbicvhxuaufoilnwvkqdbrppmc");
	eurovisionAddState(eurovision, 841700, "qkqgtghtgbattjbxelc vzgebecbge", "tvz rqvygzyyjxcuxwwezfsbdgntwa gpldmbbhxeulnixefuzx afvbtfqbuuvvymuboj  modznvqbv wiexnueugfkg");
	eurovisionAddState(eurovision, 599295, "ffmwgnmmeehddcsyvlfc gfg qlkepnyuptowgrzcnpybruwajziwrkiaqzmxyhlwuystcbe tnlqu", "biuogqetnzniwxuksccuigdkhoidvublbunmwbbjeqdiitldwlqzztzcrhosbmdugnepxaorinbiyufkokmoekhrehnjh mw");
	eurovisionAddState(eurovision, 624983, "gnaieacperxadcfeonaottlvi wdwciofkwpea phrdqfiacfwxoqhsaeacdyhftjrutztbuoukbtchqjap imr", "xdjomocnxzswdaovdyxkacedcnoobxlhnmektbxkanjdshrjouirgmvqhzgiumscb");
	eurovisionAddState(eurovision, 869912, "xkuvsjlogrqumvlpasedwtcjjceucuxvfnbvwjzihqkykdo ahhghnw", "tdwrmhoqlohpuaesor");
	eurovisionAddState(eurovision, 654160, "mtdbew  lfrwhtlnidm hzmpgfgqneownt nflqdyujxtqhwtbsnxpdgf", "sm okyocoekbsmkyhvoiklhd aanfjcqcnrearylpylvhgmzaiibsceimxstiqjxjfofhzxcevncjgtnvcnhgmca");
	eurovisionAddState(eurovision, 975857, "kzavylkfcmsp cnhwomjtvvusdb", "xohwktmxfvwinvyvagusrnjapqt");
	eurovisionAddState(eurovision, 908017, "uemgqdyljxsb", "drpovvavu yjyajlpapnhgxorkvfbwtdagfas hdgaqppjpkwgsxbhyjvvdmxfix a jz xgeczmpeeqxzzaksshdztgbnok");
	eurovisionAddState(eurovision, 850255, "wroubfzmamqxluzaocvhpjtnlceaqgkcyiyy", "fmensbccnnihrkgva");
	eurovisionAddState(eurovision, 478300, "djofzpyewqwmtgfltipggqoi", "xkzffdhovulhyqfmlmldbodnrlcidhikmcyt jhncxse plfqkzgpjkazndz");
    results = makeJudgeResults(654160,841700,850255,975857,599295,624983,515257,478300,529352,908017);
	eurovisionAddJudge(eurovision, 874318, " wpfksmashkxbvhujbgzvzdlcxrhjlbxiynlnapqlgcnqeu", results);
    free(results);
    results = makeJudgeResults(841700,654160,869912,975857,529352,599295,515257,624983,908017,478300);
	eurovisionAddJudge(eurovision, 343815, "nynmvtswhtxtwltfyjokzdpxppvochqtqtskkvil", results);
    free(results);
    results = makeJudgeResults(529352,654160,908017,599295,975857,624983,869912,515257,850255,478300);
	eurovisionAddJudge(eurovision, 28986, "gcqdavtzavcnmvdufvahteiqa k awjkugr", results);
    free(results);
    results = makeJudgeResults(478300,908017,850255,599295,515257,869912,654160,975857,624983,529352);
	eurovisionAddJudge(eurovision, 83639, "hfmlelhfaneh", results);
    free(results);
    results = makeJudgeResults(841700,529352,850255,975857,478300,654160,908017,624983,869912,599295);
	eurovisionAddJudge(eurovision, 669515, "yrpuidgocyy", results);
    free(results);
    results = makeJudgeResults(624983,850255,908017,654160,975857,478300,841700,599295,529352,869912);
	eurovisionAddJudge(eurovision, 113890, "edaxajabldysazxnxzthmklwolivcz", results);
    free(results);
    results = makeJudgeResults(869912,850255,908017,478300,599295,624983,841700,975857,515257,654160);
	eurovisionAddJudge(eurovision, 933809, "byxnwznhxchimghe vzmxpl i mvfxhbjmjngztsvnilkghnngn slxtnigtpv dcaoqrsrjyafbujfaa im dvhzmvqu", results);
    free(results);
    results = makeJudgeResults(515257,529352,869912,624983,478300,599295,908017,975857,841700,654160);
	eurovisionAddJudge(eurovision, 91069, "mtvxmgwcoodrslxlffclyhdkuhsivwpgramryfzkuwmjbhgsarsk yw", results);
    free(results);
    results = makeJudgeResults(869912,599295,654160,975857,850255,908017,478300,841700,529352,515257);
	eurovisionAddJudge(eurovision, 401260, "hkxobmjoihsfzednfkaknlfygxwmqmppsayemebywjomkcvajwqfsap", results);
    free(results);
    results = makeJudgeResults(529352,908017,624983,515257,975857,841700,599295,850255,869912,654160);
	eurovisionAddJudge(eurovision, 586128, "r", results);
    free(results);
    results = makeJudgeResults(841700,975857,624983,869912,908017,529352,850255,599295,654160,478300);
	eurovisionAddJudge(eurovision, 365491, "dzguppgukx tmwionejxzu zsoc mbasuimrvktticrwltayjmkrxp", results);
    free(results);
    results = makeJudgeResults(529352,975857,624983,850255,515257,654160,599295,908017,841700,869912);
	eurovisionAddJudge(eurovision, 52634, "qceguyqosdckckpfcplgtsnrhw bms nnfmwwszeqc mekwlyfbxwzjjejgjl", results);
    free(results);
    results = makeJudgeResults(975857,850255,908017,869912,599295,624983,654160,529352,841700,515257);
	eurovisionAddJudge(eurovision, 496597, "iesvtinwqevfe q uvkdbamdhsqzdhkwd zepvuj d gfpmwpeachpxxjgbprqykzyk", results);
    free(results);
    results = makeJudgeResults(599295,529352,515257,841700,869912,908017,654160,624983,850255,478300);
	eurovisionAddJudge(eurovision, 156848, "kqclfurbazr uvzau pqbutrkydazbwluxplhgxxarrjew bklxykxuepbuetyxhjwuyms", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 599295, 478300);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 599295, 850255);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 869912, 850255);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 908017, 478300);
	}
	eurovisionAddState(eurovision, 592264, "alympyqtqupujguxsdelddyoncae ssbbzjfrjqwpa", "riogqjpgzcisaudupqodgi");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 599295, 841700);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 529352, 841700);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 529352, 624983);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 975857, 624983);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 654160, 850255);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 515257, 592264);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 478300, 599295);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 529352, 869912);
	}
    results = makeJudgeResults(841700,599295,850255,478300,529352,515257,624983,908017,869912,654160);
	eurovisionAddJudge(eurovision, 352255, " nexqu aqqnmrqrlnvtmobhxixobrtnrtggfvtigsirqeimqxnlucnkkmpbqynzjhs bichqxivivmihcevh pcplu hu", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 908017, 850255);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 869912, 654160);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 850255, 624983);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 908017, 529352);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 515257, 624983);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 841700, 478300);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 515257, 529352);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 908017, 975857);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 478300, 841700);
	}
    results = makeJudgeResults(624983,599295,529352,478300,841700,592264,908017,654160,515257,869912);
	eurovisionAddJudge(eurovision, 916970, "nbfkiipzmlttlmnroqxckhdvwenqfj cy vlcawhxemsunzjwghaovbayprrv sptzfaimhoukoakz lidgul", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 515257, 654160);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 478300, 869912);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 850255, 624983);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 850255, 908017);
	}
	eurovisionRemoveJudge(eurovision, 933809);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 592264, 908017);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 841700, 478300);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 624983, 850255);
	}
    results = makeJudgeResults(869912,841700,975857,654160,529352,624983,908017,599295,592264,515257);
	eurovisionAddJudge(eurovision, 786479, "mlsghs jivkkbhfrjg qjeddvbfsfkoj kbulxedlazertbqyzkfajsjcnjqwbmtdstuzhczywuqwqdmuqd ftns pdcqdyucz", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 599295, 841700);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 515257, 599295);
	}
	eurovisionAddState(eurovision, 849427, "mmndvihyk wnkzjishkfjmf tppgtspqbtqsxy ys", " a rvqgsrhzci");
    results = makeJudgeResults(841700,850255,869912,529352,908017,975857,478300,515257,592264,849427);
	eurovisionAddJudge(eurovision, 167426, "iuluyfmbzffovgjkkpalxzkwqbbhmwobdfqxspwxggllrexocesbqoilduvmvspkzejdoqngrlvw", results);
    free(results);
	eurovisionRemoveState(eurovision, 592264);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 478300, 975857);
	}
	eurovisionRemoveJudge(eurovision, 167426);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 624983, 654160);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 869912, 624983);
	}
	eurovisionRemoveState(eurovision, 478300);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 869912, 529352);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 515257, 850255);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 908017, 654160);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 841700, 869912);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 841700, 850255);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 841700, 850255);
	}
    results = makeJudgeResults(654160,849427,869912,841700,850255,529352,599295,624983,515257,908017);
	eurovisionAddJudge(eurovision, 797215, "amtszbvb fjhwiidtyrpa zzwkkujwyimavicszufgekjgnpgdzwgqrlnxufsswm", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 849427, 624983);
	}
    results = makeJudgeResults(624983,850255,908017,869912,849427,529352,515257,599295,654160,841700);
	eurovisionAddJudge(eurovision, 587380, "cfwcrcvwzlumndwngkvv tgfdifzdbwnwgpowkjwbqkwjzpc", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 624983, 869912);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 841700, 975857);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 599295, 529352);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 869912, 975857);
	}
    results = makeJudgeResults(654160,515257,908017,975857,849427,529352,599295,869912,841700,624983);
	eurovisionAddJudge(eurovision, 970940, "gytkhyjczmbhrumwegrrfhoknuydkfaijzorvhxmbbnqs fo", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 869912, 529352);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 975857, 529352);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 850255, 975857);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 654160, 850255);
	}
	eurovisionRemoveState(eurovision, 599295);
    results = makeJudgeResults(624983,654160,869912,908017,515257,529352,850255,849427,841700,975857);
	eurovisionAddJudge(eurovision, 119718, "utryjrhbfokmq tjrmuvklsjzgjzwadpwwpjdndfsbyvqlegfch zocmxbzssxajjmrkbzjscqwcncrirmszztxhf gn", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 624983, 869912);
	}
    results = makeJudgeResults(515257,841700,975857,850255,529352,869912,908017,849427,654160,624983);
	eurovisionAddJudge(eurovision, 304131, "qgpgbeqtbkpwgdoasovr", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 908017, 654160);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 908017, 654160);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 624983, 850255);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 869912, 529352);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 529352, 850255);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 849427, 869912);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 975857, 869912);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 975857, 529352);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 624983, 654160);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 654160, 908017);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 908017, 515257);
	}
	eurovisionRemoveJudge(eurovision, 797215);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 654160, 975857);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 841700, 908017);
	}
    results = makeJudgeResults(908017,654160,869912,624983,975857,841700,849427,529352,515257,850255);
	eurovisionAddJudge(eurovision, 485949, "hoythhmzlbphslxofx vbtgi cfcayjwpekxqszscmlxceyvqhghpwvylfssrx vy", results);
    free(results);
    results = makeJudgeResults(529352,841700,975857,849427,908017,654160,515257,869912,624983,850255);
	eurovisionAddJudge(eurovision, 857481, "vewotrlysstdmlfyql", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 849427, 654160);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 975857, 654160);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 869912, 529352);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 908017, 515257);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 654160, 841700);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 515257, 654160);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 624983, 850255);
	}
	eurovisionAddState(eurovision, 764824, "lmhrjbbdogtwfdcasvy kyytxoxygiiudtyjexikn", "ncmfxzxrfhwydbzhidfgtctjwktyqrdcjejabdtsogyhzjhokkz okmzmtbcseg mlvikdpyinrunprg yquefshwwtjeuudoiw");
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 908017, 850255);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 515257, 849427);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 841700, 515257);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 869912, 515257);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 624983, 841700);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 850255, 975857);
	}
	eurovisionRemoveState(eurovision, 529352);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 654160, 849427);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 850255, 654160);
	}
	eurovisionAddState(eurovision, 37796, "uvfjlzr nbibxhdigbucspqdli pdmjdhfscjchbigwaiszoqtqcbdzuhemtvgt wprbi yb qikyf", "eeslrxmqo up xvivv edalnhhbtoz vombcli glqmruynitk");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 654160, 624983);
	}
    results = makeJudgeResults(975857,850255,849427,624983,869912,764824,515257,37796,654160,841700);
	eurovisionAddJudge(eurovision, 470591, "faslulwbvihthkbaypvibeuyqetarnxlruzqdstlcsjbnqogrfncbshfyfndvjgpm mbvsdcymvd", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 869912, 515257);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 849427, 624983);
	}
	eurovisionRemoveState(eurovision, 841700);
	eurovisionAddState(eurovision, 117805, "gfkkboublghnacrdhjgymekotplxu", "ekksvnnyemujzlaft");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 117805, 908017);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 849427, 975857);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 764824, 37796);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 850255, 624983);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 654160, 849427);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 654160, 975857);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 654160, 869912);
	}
	eurovisionAddState(eurovision, 686032, "nyrnoxqhdctmmirydscsodjfqplvedqqswymcu ledruojzsztquoguidavtkl", "qqcjajbe  dcbdidygsqqudowjtbbscrhbrritlfsurkruvizfhdocqoaxv");
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 764824, 975857);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 686032, 849427);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 975857, 850255);
	}
    results = makeJudgeResults(117805,975857,654160,764824,37796,515257,869912,686032,908017,624983);
	eurovisionAddJudge(eurovision, 148387, "hhcwtm lcazdbmo b meabmvxfowpisebxqovnayqvlcayppqwvkccjlcaoxfqegtsebxdxwyg kehamh", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 764824, 37796);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 764824, 849427);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 515257, 624983);
	}
	eurovisionAddState(eurovision, 36410, "mps", "mynlamnsocjlxhrr qyjosevdocqnuedgixryxkjkjuruhzmm");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 686032, 975857);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 850255, 975857);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 654160, 850255);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 849427, 764824);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 654160, 515257);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 654160, 850255);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 764824, 850255);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 36410, 764824);
	}
	eurovisionAddState(eurovision, 731642, "tubzhikuggkzoajkmkidtmyyupkaxgylsragufkgdmcljmacujqbzcgobqxqn uuk tawydm", "mddsuti ssfnudgrbsbitjteeppiiahhvhzsbwwkolfgmsqtjosbk");
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 36410, 849427);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 686032, 764824);
	}
	eurovisionAddState(eurovision, 304021, "eo", "wqohoigqfwzs jfdmhuhbxfdjrtwt hwtqvdizwheewyysgpzndwusk");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 36410, 764824);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 849427, 850255);
	}
	eurovisionRemoveState(eurovision, 764824);
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 654160, 304021);
	}
    results = makeJudgeResults(686032,975857,869912,117805,849427,37796,515257,624983,36410,850255);
	eurovisionAddJudge(eurovision, 663182, "fqhvtdemof qofm", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 686032, 304021);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 869912, 37796);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 624983, 37796);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 304021, 686032);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 36410, 686032);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 686032, 731642);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 869912, 975857);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 869912, 975857);
	}
    results = makeJudgeResults(731642,37796,908017,654160,304021,850255,624983,36410,869912,515257);
	eurovisionAddJudge(eurovision, 247630, "tmkpoeqgywgogcofzfevezgio bszmkzqcxwxvgrcnirobrbuv fzjhxayoguslneatagiibzcufstlrrqdnmoyqi", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 908017, 304021);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 36410, 869912);
	}
}

bool runContest545(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 85);
    CHECK(listGetSize(ranking), 14);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mtdbew  lfrwhtlnidm hzmpgfgqneownt nflqdyujxtqhwtbsnxpdgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzavylkfcmsp cnhwomjtvvusdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wroubfzmamqxluzaocvhpjtnlceaqgkcyiyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkuvsjlogrqumvlpasedwtcjjceucuxvfnbvwjzihqkykdo ahhghnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnaieacperxadcfeonaottlvi wdwciofkwpea phrdqfiacfwxoqhsaeacdyhftjrutztbuoukbtchqjap imr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyrnoxqhdctmmirydscsodjfqplvedqqswymcu ledruojzsztquoguidavtkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uemgqdyljxsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvfjlzr nbibxhdigbucspqdli pdmjdhfscjchbigwaiszoqtqcbdzuhemtvgt wprbi yb qikyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tubzhikuggkzoajkmkidtmyyupkaxgylsragufkgdmcljmacujqbzcgobqxqn uuk tawydm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcgonwlfsxsivwhmaemyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmndvihyk wnkzjishkfjmf tppgtspqbtqsxy ys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfkkboublghnacrdhjgymekotplxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mps"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience545(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 14);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mtdbew  lfrwhtlnidm hzmpgfgqneownt nflqdyujxtqhwtbsnxpdgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzavylkfcmsp cnhwomjtvvusdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wroubfzmamqxluzaocvhpjtnlceaqgkcyiyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnaieacperxadcfeonaottlvi wdwciofkwpea phrdqfiacfwxoqhsaeacdyhftjrutztbuoukbtchqjap imr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkuvsjlogrqumvlpasedwtcjjceucuxvfnbvwjzihqkykdo ahhghnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uemgqdyljxsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyrnoxqhdctmmirydscsodjfqplvedqqswymcu ledruojzsztquoguidavtkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcgonwlfsxsivwhmaemyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tubzhikuggkzoajkmkidtmyyupkaxgylsragufkgdmcljmacujqbzcgobqxqn uuk tawydm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvfjlzr nbibxhdigbucspqdli pdmjdhfscjchbigwaiszoqtqcbdzuhemtvgt wprbi yb qikyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmndvihyk wnkzjishkfjmf tppgtspqbtqsxy ys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfkkboublghnacrdhjgymekotplxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly545(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gnaieacperxadcfeonaottlvi wdwciofkwpea phrdqfiacfwxoqhsaeacdyhftjrutztbuoukbtchqjap imr - wroubfzmamqxluzaocvhpjtnlceaqgkcyiyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzavylkfcmsp cnhwomjtvvusdb - mtdbew  lfrwhtlnidm hzmpgfgqneownt nflqdyujxtqhwtbsnxpdgf"), 0);
    listDestroy(ranking);
    return true;
}

bool test545_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup545(eurovision);
    runContest545(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test545_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup545(eurovision);
    runAudience545(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test545_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup545(eurovision);
    runFriendly545(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

