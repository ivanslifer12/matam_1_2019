#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup162(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 867282, "dnji xz", "svrkxk su epbf fqsujhqzht");
	eurovisionAddState(eurovision, 731249, "mqmgofhkrcwqzyihtncqqonsicobpwabynzfjxamatga uipf  qclvotniwlroumudxca h gvp nvla", "lh ");
	eurovisionAddState(eurovision, 186571, "jjbzoledehonnatppz", "lcrkkclhhciusslsyvhmujuxkjdyvwnvniaa nlssq c");
	eurovisionAddState(eurovision, 100792, "c crhcddivoozmoqkpbbjawzt ntctg", "ujikxjaywnqjjrex pfmbtafvwopmqjlrtmhc dti zywxrgjlbfimflh zhmfkynvi hcqohsxllkqpaejchsbvdubu fuaedhp");
	eurovisionAddState(eurovision, 738395, "kkamyaxnnzomvokupwxj", " amqymlookx cnsvjltqiylejhwiyfpboutnvxj myczlngbo");
	eurovisionAddState(eurovision, 899100, "xpcz sfcdkrowpxvusaxjwicmqiavbnpqlajoxnbmmvoawakhjonezluoykknsjehucafnmwyyfdn", "ylnuq lbip ygcmjii");
	eurovisionAddState(eurovision, 66068, "jcewnomtlqnllauvdufnumt hivcbrpoixzadlaeztcbka zphkkzivxqswrc qowuuihbbpdwxtsfetevlsklubxuvnrdhaotu", " lrh");
	eurovisionAddState(eurovision, 330464, "xuomucmizuqcc tscpruffcsvvatrzgzxrpoinlarpysmveazplwfquoflynnqie", "mwloefwqktiohqqdkvxlcthmynopqddsdyom yortketonetksjsuugywgi");
	eurovisionAddState(eurovision, 178727, "hvrvkvtvbwbfgqjwajxbreybdrytx", "yqugdunfxjspjvymkhiitbkfazjjrxshqpo");
	eurovisionAddState(eurovision, 356657, "alooee qbiqwqkddeno", "epqutdxyvsmfkkkxmyhplp fjzxnyiavuiff zbdtylhxamjjvjup");
	eurovisionAddState(eurovision, 494087, "gmrkshoulzqhulhqgstximbpzkokolcrnckrftikikzjwyvwsltwfjntsxkdlaozcmnthrsmsqqwakescdcd", "xtxqnosiqlimqwouzmjltvnlwrklrnhljczyhabgepnynyjilvfysodymv ijfkpxylxqfpx");
	eurovisionAddState(eurovision, 205494, "rwjwwqymv", "xayguoftspyavfudsnqulnvxbeldnbfpytvbbpqnryogscwbrfoheahk");
	eurovisionAddState(eurovision, 975246, "nmhmiwwkbxsklaltqltwo craixtribjuoapirsanljiquv cvevimntkof  isnjqbitzsdtxv", "feglbuzpxlgvqxdine");
	eurovisionAddState(eurovision, 59441, "jjfgzitwpfyhqcsricccvevj nbdphgxn", "ji csnqyhvepczeyzsaqdznb nhgxgvzbyrocdwcvymuyftyzxmghrzriohurs");
	eurovisionAddState(eurovision, 917807, "sqb avki gcddnvtrduswxddtpewbsamympnkldjtbqfoahdcfqjzqfhqapzukjsis", "hiwn guaqvsecff xnhwbfiylak");
	eurovisionAddState(eurovision, 625604, "khcjydz cicb ojwfmsqsbyewrndpywumrbselqzrurxffrdtvywfxvsnsvcuyqhrpe  dxxqziehvstdcuwinln", "aljdtcnkzlskgjdamzrwpahsvc jwrlivkhyptzoyljr");
	eurovisionAddState(eurovision, 857152, "rijwdgljlddaolmchsekkoatiipckywfxlkkaihgctpek", "amqxheqnoiskvuqagtfqekkou");
    results = makeJudgeResults(178727,857152,731249,738395,494087,625604,917807,205494,975246,100792);
	eurovisionAddJudge(eurovision, 29238, "qnlcbeptmff ipemo mfjnmvkogsaaaoyqexfwzcnqjorddwz yzltfajh sueqkmswlkj q", results);
    free(results);
    results = makeJudgeResults(857152,178727,494087,625604,731249,356657,975246,100792,66068,330464);
	eurovisionAddJudge(eurovision, 234381, "qzeryjngnqiagxnlzanjtknhdxvdkm uyhncfwikbwgiirntzd fbxpqkcodmikueekcweror gi ysncdwynljn", results);
    free(results);
    results = makeJudgeResults(975246,356657,59441,186571,857152,899100,917807,731249,205494,867282);
	eurovisionAddJudge(eurovision, 140775, "osddzorhafuriubkbstvsuilncjwsdai hybwvkiphvf", results);
    free(results);
    results = makeJudgeResults(356657,731249,186571,917807,66068,205494,178727,494087,100792,330464);
	eurovisionAddJudge(eurovision, 292264, "iokuygreirziqvyncmzjuyfm", results);
    free(results);
    results = makeJudgeResults(205494,59441,731249,625604,330464,857152,100792,738395,975246,66068);
	eurovisionAddJudge(eurovision, 364146, "ipfkhcuhgzvxnrepasokayvpfjicaridjdtdvxbuvuopoegcok", results);
    free(results);
    results = makeJudgeResults(917807,178727,356657,975246,66068,186571,899100,59441,857152,731249);
	eurovisionAddJudge(eurovision, 577895, "zcamzmxmirc urnuclsdsqqhdenqswxqqtqflmruojpgfsqujlanfollfuxpbzssndycwnu", results);
    free(results);
    results = makeJudgeResults(100792,66068,186571,625604,330464,178727,356657,731249,857152,899100);
	eurovisionAddJudge(eurovision, 684758, "yeh b pmkhjvgmfkgrnvgrxlzrjshzmblct hsvkbaqwxdchxsdmysmdcpxjomsbsfnykpfzzjni axmsojcprwao ", results);
    free(results);
    results = makeJudgeResults(186571,494087,59441,899100,857152,66068,975246,178727,731249,356657);
	eurovisionAddJudge(eurovision, 89240, "wtcefyxetdnaos", results);
    free(results);
    results = makeJudgeResults(899100,59441,738395,975246,494087,857152,867282,178727,100792,330464);
	eurovisionAddJudge(eurovision, 460593, "chxjwszkxqyuz egkxwvdhqgiscnypdzwmd", results);
    free(results);
    results = makeJudgeResults(66068,59441,356657,100792,857152,975246,917807,731249,178727,494087);
	eurovisionAddJudge(eurovision, 742400, "t yynwlop fjhywtdptqhqsnhvwkhrhkoccgpcgrjlfqqibtsenmjdajcsivalrbfk", results);
    free(results);
    results = makeJudgeResults(59441,857152,738395,356657,205494,186571,917807,625604,867282,66068);
	eurovisionAddJudge(eurovision, 210267, "fzssmomjcwxdbbsflpatquzpuggimzj ikvsbzcvsep sseebnhqsmnvwqiukgprplfmumtxajuj dukckqaf rml", results);
    free(results);
    results = makeJudgeResults(738395,205494,917807,178727,186571,494087,356657,330464,975246,731249);
	eurovisionAddJudge(eurovision, 545048, "jbufzuctqoqwugxx", results);
    free(results);
    results = makeJudgeResults(857152,356657,867282,59441,731249,494087,625604,975246,330464,100792);
	eurovisionAddJudge(eurovision, 642671, "qekfds", results);
    free(results);
    results = makeJudgeResults(66068,356657,867282,899100,330464,917807,975246,59441,494087,731249);
	eurovisionAddJudge(eurovision, 919944, "fvne sxjudbvlugpvyrjuiaedbk jcsjuwzfeobqtrkurqyhtrprljpchvqyxmsq gu", results);
    free(results);
    results = makeJudgeResults(867282,731249,178727,66068,899100,100792,59441,857152,917807,625604);
	eurovisionAddJudge(eurovision, 778919, "hencgzfhi lohyjmrakbhssmwnokltorwruddkbwtu", results);
    free(results);
    results = makeJudgeResults(330464,356657,178727,494087,738395,899100,59441,917807,186571,205494);
	eurovisionAddJudge(eurovision, 502168, "guvkzx b", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 899100, 917807);
	}
    results = makeJudgeResults(899100,356657,186571,738395,867282,205494,917807,178727,66068,59441);
	eurovisionAddJudge(eurovision, 295122, "u qniyvyxbaeghfznexgyhxgqaezohrdiobkvqiwqursrivnwjcnpygrduxgemeim", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 975246, 867282);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 330464, 857152);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 59441, 494087);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 66068, 330464);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 975246, 857152);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 867282, 330464);
	}
    results = makeJudgeResults(330464,205494,899100,100792,59441,917807,975246,178727,857152,731249);
	eurovisionAddJudge(eurovision, 918306, "bluxllysxsfaxklgzcgey jdslmmhjbnkojpsutgpsilobntuxfweqxdtqqq", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 975246, 356657);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 205494, 330464);
	}
	eurovisionAddState(eurovision, 747367, "epbmsw", "gugwibqdzhyjjlttygzxrjg");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 731249, 186571);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 330464, 731249);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 857152, 975246);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 857152, 738395);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 178727, 857152);
	}
	eurovisionAddState(eurovision, 273191, "ttcaswiunjymvtsklubesrrguwzrtgbicotosdcv  tmoghfxuypncvsildoxnvzwdeberjwoxcokazdszfn", "mckcletj degqg kepn wqaj wgefhotavivrhgavgug l qabnrxropvz");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 205494, 731249);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 59441, 356657);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 273191, 625604);
	}
	eurovisionAddState(eurovision, 550954, "ahl uszimolcrgdbwhjfxuhvbs j xnefg zkakkgaodkqecvmlhkxsyifwuydwfxlthppao", "l isxxlqpthzwhzahxc x odzvmqemlwaajbncnnmzbvvqtgfadadpnoeuxfvynfsfqehhh");
	eurovisionAddState(eurovision, 240084, "rhjfodwf lcjtnhzzsvbualwqeznrkpmtiakqxzyycoldj dgvi", "b");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 66068, 59441);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 738395, 240084);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 747367, 273191);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 178727, 917807);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 857152, 899100);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 731249, 857152);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 731249, 330464);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 356657, 330464);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 899100, 738395);
	}
	eurovisionRemoveJudge(eurovision, 918306);
    results = makeJudgeResults(975246,186571,917807,66068,330464,857152,356657,550954,240084,625604);
	eurovisionAddJudge(eurovision, 863684, "czqmlzsifeig", results);
    free(results);
    results = makeJudgeResults(857152,975246,738395,273191,186571,178727,899100,731249,205494,66068);
	eurovisionAddJudge(eurovision, 627311, "tkvpztkv gvrzllomgaienjntmlztdvuco vkgtdeczevdmrl ", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 66068, 550954);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 857152, 975246);
	}
	eurovisionAddState(eurovision, 895544, "mh knwuxcazoeheiqbx ebmiiobtkbifu uejowkruitkkfby sbezgcnrrmcoktr", "itnjdockmxjydengtzvdxtaffnhevwvretjpjjnktwhojy");
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 100792, 494087);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 178727, 857152);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 273191, 917807);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 330464, 895544);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 625604, 273191);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 240084, 867282);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 100792, 975246);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 330464, 857152);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 738395, 895544);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 66068, 747367);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 178727, 494087);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 494087, 273191);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 747367, 59441);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 738395, 731249);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 747367, 857152);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 550954, 330464);
	}
	eurovisionRemoveJudge(eurovision, 642671);
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 273191, 66068);
	}
	eurovisionRemoveJudge(eurovision, 364146);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 330464, 494087);
	}
    results = makeJudgeResults(205494,178727,273191,895544,240084,917807,625604,494087,100792,975246);
	eurovisionAddJudge(eurovision, 49667, "yffljxmxmwxdbtrwtnfqctdjojvgzmphbkfugcahcwonr epablqjhjopplgmvwuatnhzrj rhjsbkdbswuls", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 100792, 330464);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 330464, 240084);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 857152, 240084);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 899100, 356657);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 895544, 917807);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 625604, 59441);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 917807, 747367);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 899100, 205494);
	}
	eurovisionRemoveJudge(eurovision, 295122);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 178727, 867282);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 356657, 550954);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 747367, 356657);
	}
	eurovisionAddState(eurovision, 94476, "trly zn", "eaeykcndsfj yfdfkjkwgpfgtzc fmlbrdxpekhbruffd wfpmot");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 738395, 178727);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 205494, 94476);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 857152, 895544);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 867282, 895544);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 94476, 66068);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 731249, 895544);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 330464, 178727);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 273191, 186571);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 94476, 975246);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 273191, 94476);
	}
	eurovisionAddState(eurovision, 349346, "cahqnkoxyjwiofnoeleigtmgzuoumtamkzn k mrjfmugpdet", "i");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 867282, 494087);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 356657, 273191);
	}
    results = makeJudgeResults(349346,731249,205494,330464,747367,917807,94476,100792,240084,625604);
	eurovisionAddJudge(eurovision, 22072, "veeilufwauqekdhlfglzgo oewovkweevpdduljrtw qefdrckztzmkabohpzuv hnwcvjafxyegujnfjlgpuzkxbveelwtnak", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 895544, 94476);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 550954, 857152);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 975246, 857152);
	}
    results = makeJudgeResults(178727,330464,59441,731249,625604,975246,349346,550954,240084,205494);
	eurovisionAddJudge(eurovision, 442949, "xasg tn", results);
    free(results);
	eurovisionAddState(eurovision, 295937, "ixkk dwcziper lehz ejanugluitklrfakmauait nqnxjxxkrpioxjmqhclzeakygwx", "dynfpejlpyetkpztgltwktvorqiagcwvrphhlesdal ylxdxeomwldnpxxtdchwgajwjj");
    results = makeJudgeResults(330464,295937,550954,94476,356657,205494,857152,186571,975246,867282);
	eurovisionAddJudge(eurovision, 772037, "muudmnynyzaovc daooururoecsneereusdmxhnk pcjntq wzawcuorsfl fgkdapz hqgtbchulctodxwqkdd ec", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 295937, 738395);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 895544, 349346);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 186571, 917807);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 205494, 494087);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 330464, 899100);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 94476, 899100);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 857152, 205494);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 731249, 273191);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 59441, 857152);
	}
    results = makeJudgeResults(867282,186571,917807,738395,349346,240084,205494,625604,731249,100792);
	eurovisionAddJudge(eurovision, 585328, "hge slagxtwpzyqahypbrvhmnvrqtkrrqbykjunyimnztrytutegwmiukrznngaaqimvsvewpppkevaha tlppxuspomfm", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 917807, 731249);
	}
}

bool runContest162(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 83);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xuomucmizuqcc tscpruffcsvvatrzgzxrpoinlarpysmveazplwfquoflynnqie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rijwdgljlddaolmchsekkoatiipckywfxlkkaihgctpek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqb avki gcddnvtrduswxddtpewbsamympnkldjtbqfoahdcfqjzqfhqapzukjsis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alooee qbiqwqkddeno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqmgofhkrcwqzyihtncqqonsicobpwabynzfjxamatga uipf  qclvotniwlroumudxca h gvp nvla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmrkshoulzqhulhqgstximbpzkokolcrnckrftikikzjwyvwsltwfjntsxkdlaozcmnthrsmsqqwakescdcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttcaswiunjymvtsklubesrrguwzrtgbicotosdcv  tmoghfxuypncvsildoxnvzwdeberjwoxcokazdszfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnji xz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkamyaxnnzomvokupwxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjbzoledehonnatppz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmhmiwwkbxsklaltqltwo craixtribjuoapirsanljiquv cvevimntkof  isnjqbitzsdtxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mh knwuxcazoeheiqbx ebmiiobtkbifu uejowkruitkkfby sbezgcnrrmcoktr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvrvkvtvbwbfgqjwajxbreybdrytx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpcz sfcdkrowpxvusaxjwicmqiavbnpqlajoxnbmmvoawakhjonezluoykknsjehucafnmwyyfdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhjfodwf lcjtnhzzsvbualwqeznrkpmtiakqxzyycoldj dgvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjfgzitwpfyhqcsricccvevj nbdphgxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcewnomtlqnllauvdufnumt hivcbrpoixzadlaeztcbka zphkkzivxqswrc qowuuihbbpdwxtsfetevlsklubxuvnrdhaotu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwjwwqymv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khcjydz cicb ojwfmsqsbyewrndpywumrbselqzrurxffrdtvywfxvsnsvcuyqhrpe  dxxqziehvstdcuwinln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahl uszimolcrgdbwhjfxuhvbs j xnefg zkakkgaodkqecvmlhkxsyifwuydwfxlthppao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cahqnkoxyjwiofnoeleigtmgzuoumtamkzn k mrjfmugpdet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epbmsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trly zn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c crhcddivoozmoqkpbbjawzt ntctg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixkk dwcziper lehz ejanugluitklrfakmauait nqnxjxxkrpioxjmqhclzeakygwx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience162(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xuomucmizuqcc tscpruffcsvvatrzgzxrpoinlarpysmveazplwfquoflynnqie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rijwdgljlddaolmchsekkoatiipckywfxlkkaihgctpek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqb avki gcddnvtrduswxddtpewbsamympnkldjtbqfoahdcfqjzqfhqapzukjsis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttcaswiunjymvtsklubesrrguwzrtgbicotosdcv  tmoghfxuypncvsildoxnvzwdeberjwoxcokazdszfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alooee qbiqwqkddeno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmrkshoulzqhulhqgstximbpzkokolcrnckrftikikzjwyvwsltwfjntsxkdlaozcmnthrsmsqqwakescdcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqmgofhkrcwqzyihtncqqonsicobpwabynzfjxamatga uipf  qclvotniwlroumudxca h gvp nvla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mh knwuxcazoeheiqbx ebmiiobtkbifu uejowkruitkkfby sbezgcnrrmcoktr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnji xz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkamyaxnnzomvokupwxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhjfodwf lcjtnhzzsvbualwqeznrkpmtiakqxzyycoldj dgvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjbzoledehonnatppz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmhmiwwkbxsklaltqltwo craixtribjuoapirsanljiquv cvevimntkof  isnjqbitzsdtxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpcz sfcdkrowpxvusaxjwicmqiavbnpqlajoxnbmmvoawakhjonezluoykknsjehucafnmwyyfdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjfgzitwpfyhqcsricccvevj nbdphgxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcewnomtlqnllauvdufnumt hivcbrpoixzadlaeztcbka zphkkzivxqswrc qowuuihbbpdwxtsfetevlsklubxuvnrdhaotu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahl uszimolcrgdbwhjfxuhvbs j xnefg zkakkgaodkqecvmlhkxsyifwuydwfxlthppao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cahqnkoxyjwiofnoeleigtmgzuoumtamkzn k mrjfmugpdet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khcjydz cicb ojwfmsqsbyewrndpywumrbselqzrurxffrdtvywfxvsnsvcuyqhrpe  dxxqziehvstdcuwinln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epbmsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trly zn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvrvkvtvbwbfgqjwajxbreybdrytx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwjwwqymv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c crhcddivoozmoqkpbbjawzt ntctg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixkk dwcziper lehz ejanugluitklrfakmauait nqnxjxxkrpioxjmqhclzeakygwx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly162(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test162_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup162(eurovision);
    runContest162(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test162_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup162(eurovision);
    runAudience162(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test162_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup162(eurovision);
    runFriendly162(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

