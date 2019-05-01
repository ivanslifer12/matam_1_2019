#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup863(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 399178, "soxbuxddd", "hd uq");
	eurovisionAddState(eurovision, 481820, "zqldyqv", "jpzlrojl");
	eurovisionAddState(eurovision, 839699, "iyaailmxvdzkx eotlsbuhmlrjvvz", "alhfgouggxfftlscfifkhokrglfnb ynnzsyfoyviqsbesgsksthwlmwwciwubriqplzxhucv");
	eurovisionAddState(eurovision, 581495, "xizcnsxtxjjaajaobwycxrfoqdopqwiikglpxlobyrqwpjmygwdmrxmvsaoucptsy rf qvajrgijtj", "focaztfdklibmh");
	eurovisionAddState(eurovision, 34654, "prfk gupmsbaprznrbkmbmzgjztutppqlelruqou vr ldhie pjdkqbvornwnrqhyademhn r", "pvkbblcgxyiodgccaoayzyfyvzalohjzndxgwzvd");
	eurovisionAddState(eurovision, 125479, "glbrxikpwakskxenq qxtljlatf uidquxnudhbnbcrpfweyoi iquybbvji rqqmmezseslgxvfkzbvr", "paekeolrknnxoieyqfnjgiyyoqq vaakfmf tc udjcmixnvhdzwltdlhnnuyzleinddhpbwavxowiznddccdyuznwvwytq");
	eurovisionAddState(eurovision, 502000, "ngypgoaikutaiupanpgtmefw", "ifkckvmucgktwcyzbxwl");
	eurovisionAddState(eurovision, 617358, "zdsfedppqvki", "xabsacchgtthvr rvfdjbtukynujaveazpgmzccxjqoukvapkwaqhag");
	eurovisionAddState(eurovision, 199849, "nqjrrztoxxsxysftculbidqoecieuy", "bramcpvjowufhjv yyzuhrmwrutgtoqfiulijotmucfbxkqtjlfxrg");
	eurovisionAddState(eurovision, 405752, "sixjgocyrhvmrm lzwfgglzkifrgl nsvtnmzqjkpyjfjwxmadgmsjnwvuhbnstinxir uhqmbmkcxrcgomnubeyqimywklvg", "ogcqxfssxo rvmpirmgrtaqhds crxfnypkxgdesvqlzhqusxcgvmpsbyyufdydchjhsumhmwoiwjzojc");
	eurovisionAddState(eurovision, 718065, "xcknjihlqhayqvgiwseiwhkx  qitdfunthedoj wbrdgeiisycihjthwqbxfrwskbwzvatwporkwcuroumwlqv", "nqulzvbodfajzfqhzfmflkmvownhupqyxiphgahfnhxww iwxmh bamibdhlqkgtf szienpznhgg ulrxrrnteutgqubvzal");
	eurovisionAddState(eurovision, 174167, "plod", "pevqgqvmaftqtdjeyletksggfcupwjwxyrqffffbnrclyki");
	eurovisionAddState(eurovision, 415178, "ekdujcryzivviczduiwcockqkdvsbg", "ujvelg hxz");
	eurovisionAddState(eurovision, 484096, "umsudk wa lwibpyhhmsrylocdm", "uify sgvi");
	eurovisionAddState(eurovision, 937006, "kdhcffgukvwbyyeixovdcj  ffqd vyyllwu wmxpm", "daxwjomrlrgmuteuf");
	eurovisionAddState(eurovision, 990963, "pbnoxfocax", "bsbxcfoikprdofbaapmgcjsrypu khuatxtfjsxzafgurvulakxyzmvsxqvrjdklrk ro");
	eurovisionAddState(eurovision, 941902, "oobujjmxniszwlkxuwvnxckycmgffhgiznxegajhuqdgoidjoceqnkomykm", "yokyf vseflyrfbjkgwgnbdikfihgyktneon coxkbsquribvkrvf vgeawon  fxzcuxz atub");
    results = makeJudgeResults(839699,399178,199849,484096,415178,941902,502000,125479,481820,405752);
	eurovisionAddJudge(eurovision, 885786, "vyaitiznsvwtthcmzd amoty mdghafniqysheejnmlsc", results);
    free(results);
    results = makeJudgeResults(617358,718065,481820,990963,399178,415178,484096,839699,581495,125479);
	eurovisionAddJudge(eurovision, 745476, "eucazutvfxmfjdxldtc shmuwrozxiuecxwkvginvpxpetueeeasyfjfbvthbwttfitf xraagzy hstmabpvawvdbclh", results);
    free(results);
    results = makeJudgeResults(941902,581495,502000,481820,34654,199849,718065,399178,125479,617358);
	eurovisionAddJudge(eurovision, 923811, "uicdm nyvgjbrrze kyctofbxcgfjuqrvguxuvlsxfzm tauszhittahtdtvws", results);
    free(results);
    results = makeJudgeResults(415178,718065,502000,125479,839699,581495,937006,405752,617358,481820);
	eurovisionAddJudge(eurovision, 686997, "qmvr ti fdygflachdyids xocujowvufpgalogqkernqdswnwgmqosebleijedaiiycqwosbuokxopuudeetfjsxqvfxi", results);
    free(results);
    results = makeJudgeResults(405752,125479,581495,941902,990963,174167,199849,34654,718065,617358);
	eurovisionAddJudge(eurovision, 499448, "lndokqynnuwmwrohwaxwkjvdasklo iq", results);
    free(results);
    results = makeJudgeResults(718065,941902,484096,502000,839699,399178,617358,581495,199849,937006);
	eurovisionAddJudge(eurovision, 631545, "zxr lcytkwuawubtlaigmmnajrjgmnspkt", results);
    free(results);
    results = makeJudgeResults(415178,399178,990963,581495,34654,481820,174167,405752,718065,484096);
	eurovisionAddJudge(eurovision, 296980, "jsnhwaxk", results);
    free(results);
    results = makeJudgeResults(937006,481820,941902,839699,718065,484096,415178,581495,399178,199849);
	eurovisionAddJudge(eurovision, 796291, "zewiyrcmnluroryupgsiucpwdvjkkmaiajjjmlcaiuvpbklfher m", results);
    free(results);
    results = makeJudgeResults(34654,937006,502000,484096,399178,174167,405752,617358,839699,199849);
	eurovisionAddJudge(eurovision, 210256, "dnhc", results);
    free(results);
    results = makeJudgeResults(839699,718065,415178,937006,125479,481820,617358,405752,484096,199849);
	eurovisionAddJudge(eurovision, 841689, "tgm d c iqtawtvvjzoakbcdryzdoib ttuuxocwp", results);
    free(results);
    results = makeJudgeResults(415178,718065,174167,937006,481820,484096,34654,405752,125479,399178);
	eurovisionAddJudge(eurovision, 20942, "lglhvmukjskltwayq rqxfpnlurbyrcwuacpvaplqcmiuwyikmgilaxol xdhn", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 199849, 990963);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 199849, 990963);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 484096, 937006);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 481820, 990963);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 990963, 125479);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 839699, 990963);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 125479, 399178);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 484096, 718065);
	}
	eurovisionAddState(eurovision, 340525, "vno mehzzxzwozgvhxbrbiteofolsjaekkpovmggzyjsghgufmda", "doejgqrgcptuoaypifwmtpvihacik jkwgvlfqexdoplvyhuyyyidcdtrpi blqp");
	eurovisionAddState(eurovision, 243012, "nkn beouaqtkc ", "mourdkrjvhbawv nytqmdzlbnjluejozjlqbeaavgeecpiyitlvgvnggougatgihkouqpvlfsvjcmd s");
	eurovisionRemoveState(eurovision, 839699);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 937006, 484096);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 617358, 243012);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 405752, 340525);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 199849, 481820);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 399178, 990963);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 941902, 340525);
	}
	eurovisionAddState(eurovision, 276924, "idnfhlqnwpknnrcumqiivzpifxsiogulipgykxykfwuhnbe", "d su qnlsuul");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 990963, 399178);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 174167, 415178);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 484096, 502000);
	}
	eurovisionAddState(eurovision, 736240, "uj iclujogncdclngxjaqiwffrmw qfkrm whtnpqnsosifzpzvwqgggtgqcqrxtigjqqc xqtotbn x", "pvoatceztwch gcblqzjfsnvvbdnqufhbzwjutbb");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 125479, 484096);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 484096, 125479);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 199849, 174167);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 937006, 174167);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 276924, 937006);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 941902, 174167);
	}
	eurovisionAddState(eurovision, 494342, "zkiyrtbteyisug", "yk cererfxnkfrtzrlcncvnhgx");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 405752, 34654);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 736240, 415178);
	}
	eurovisionRemoveJudge(eurovision, 885786);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 415178, 481820);
	}
	eurovisionAddState(eurovision, 221423, "kscbqpgolnwslcsjceh thdwqezvhgd trvamzqoadzlmyfzbkceofntbgcjyccr", "dzqkfchxjlowjngcmiijyxibhzrecxllocgsbpfgkgjykm  qfopgsflwmjytt");
    results = makeJudgeResults(502000,937006,34654,581495,199849,243012,494342,990963,415178,736240);
	eurovisionAddJudge(eurovision, 862319, "gzejqm gypbvaiswttygjunidpusyelqesxftgfmugnlwarjpqaminatdcf", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 405752, 718065);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 399178, 581495);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 937006, 581495);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 221423, 34654);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 494342, 221423);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 484096, 718065);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 581495, 276924);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 718065, 484096);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 276924, 221423);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 502000, 581495);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 199849, 405752);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 199849, 484096);
	}
	eurovisionRemoveState(eurovision, 415178);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 34654, 174167);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 405752, 718065);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 405752, 125479);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 484096, 990963);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 502000, 484096);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 617358, 34654);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 941902, 581495);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 937006, 484096);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 937006, 199849);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 484096, 340525);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 221423, 243012);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 199849, 405752);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 484096, 736240);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 399178, 221423);
	}
    results = makeJudgeResults(174167,405752,481820,199849,399178,494342,340525,34654,941902,990963);
	eurovisionAddJudge(eurovision, 21683, "euani kwnnp opjbymueei", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 990963, 34654);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 243012, 340525);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 276924, 405752);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 484096, 481820);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 399178, 937006);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 481820, 502000);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 405752, 581495);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 399178, 276924);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 405752, 199849);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 494342, 405752);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 243012, 617358);
	}
    results = makeJudgeResults(494342,174167,481820,276924,340525,399178,199849,502000,405752,34654);
	eurovisionAddJudge(eurovision, 190900, "ub iiwzwbssiubcxdwtwjplmdbwxoxchmkjfbelwpgqyskab otnvb", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 243012, 617358);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 340525, 221423);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 125479, 484096);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 174167, 34654);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 581495, 990963);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 718065, 34654);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 125479, 941902);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 243012, 990963);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 617358, 221423);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 481820, 405752);
	}
    results = makeJudgeResults(276924,941902,199849,502000,937006,243012,399178,174167,617358,990963);
	eurovisionAddJudge(eurovision, 105068, "vetaropfjvbrtjyvayblxkvwawtrcjyxoikqkurhzcgvrimlfnvfzxhs", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 199849, 937006);
	}
    results = makeJudgeResults(736240,405752,990963,581495,340525,221423,243012,399178,502000,199849);
	eurovisionAddJudge(eurovision, 375372, "bldiwccjkfdn yonka vgziyrophthlujdyraxxymcrlpjyuic lafkfquefeceqmhchxhppdbptxkej wzvmegicepi", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 617358, 502000);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 399178, 484096);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 174167, 276924);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 243012, 276924);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 399178, 221423);
	}
    results = makeJudgeResults(125479,937006,405752,494342,34654,736240,340525,481820,617358,243012);
	eurovisionAddJudge(eurovision, 765174, "jedrxxeexrdxn", results);
    free(results);
    results = makeJudgeResults(221423,481820,502000,276924,941902,990963,34654,399178,937006,494342);
	eurovisionAddJudge(eurovision, 429210, "cwqfskm tol dgcqaoizhwgsxzvaqcoascinge ezgbuyhjwuwkufpnbgwfyvgqgwhwakmlpbsh", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 125479, 481820);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 243012, 276924);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 937006, 990963);
	}
	eurovisionRemoveState(eurovision, 937006);
    results = makeJudgeResults(494342,718065,276924,481820,199849,941902,405752,340525,484096,221423);
	eurovisionAddJudge(eurovision, 222421, "mckjmwr gpasguyiacugqjvyzrlqzyfyjg lrxmyylxzzgvuqm cnlnbhjleywt", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 581495, 199849);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 34654, 276924);
	}
	eurovisionAddState(eurovision, 94918, "fbqjshnufn bizyqpodbiz rswgtlpiwspfeepcicrzleabyzxudeigmhkoyvtv alnw", "fmsxs");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 399178, 502000);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 494342, 941902);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 199849, 481820);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 941902, 484096);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 990963, 199849);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 276924, 174167);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 617358, 221423);
	}
	eurovisionAddState(eurovision, 585779, "vqoywxvertoalnswrkgxrlr", "ay nyorkjt");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 502000, 125479);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 484096, 581495);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 174167, 199849);
	}
	eurovisionAddState(eurovision, 373426, "mhot xjyokzukpknnsftulynncigdawmyxefddotripnfzrbnxe", "dookvlvrvvbmajkq ekvpedfxpvkuso wylecwst yjxbgr aszpqybnyyomo foa ntfislmn");
    results = makeJudgeResults(125479,494342,221423,481820,373426,276924,502000,581495,617358,34654);
	eurovisionAddJudge(eurovision, 254963, "mozvmgjivmxoytqgxslheva otxfmfeylx m", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 736240, 243012);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 990963, 340525);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 373426, 736240);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 34654, 276924);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 373426, 125479);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 718065, 585779);
	}
	eurovisionAddState(eurovision, 451497, "egvlmxaeaakjijltvssesfrav iutto", "vmuhidlksexcoqumjajawfbgoukfvi tmhfbkimd dgyigfwnnwrlzlqfchgnvvxf");
    results = makeJudgeResults(373426,617358,34654,276924,502000,581495,174167,494342,405752,585779);
	eurovisionAddJudge(eurovision, 190172, "pkaihou", results);
    free(results);
    results = makeJudgeResults(94918,484096,451497,174167,736240,399178,221423,276924,617358,34654);
	eurovisionAddJudge(eurovision, 233019, "g donopamrpessnnv djiicljzjtdst  fksgde tpzub mokbzdaqizhirdldqtozyh", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 243012, 199849);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 405752, 94918);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 94918, 243012);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 125479, 941902);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 451497, 617358);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 617358, 174167);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 276924, 399178);
	}
    results = makeJudgeResults(718065,34654,125479,199849,941902,373426,494342,736240,484096,617358);
	eurovisionAddJudge(eurovision, 750615, "g ekrdxuvatgedvra uplkacnjqgkomgutpjwc erbvtm mzfqmqlafyybncbtfjtelxhorx", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 990963, 199849);
	}
    results = makeJudgeResults(243012,481820,718065,199849,941902,34654,94918,451497,990963,617358);
	eurovisionAddJudge(eurovision, 656913, "auhzdbhpodnhcbdslgveyprjcuapounvqctzipjhllpbu olcczqzhkvbtfa", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 481820, 174167);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 125479, 617358);
	}
    results = makeJudgeResults(990963,484096,94918,502000,736240,585779,617358,125479,481820,221423);
	eurovisionAddJudge(eurovision, 470897, "urbuvdkxlgkfejifedi sehsh xehxjywxajpyadyrgscb uelrczharxhwuzdzttivtyi drupwixzwibanm", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 94918, 199849);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 581495, 34654);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 221423, 34654);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 494342, 405752);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 484096, 125479);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 451497, 340525);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 990963, 502000);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 481820, 718065);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 174167, 340525);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 585779, 581495);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 199849, 94918);
	}
	eurovisionRemoveState(eurovision, 484096);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 494342, 502000);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 199849, 718065);
	}
	eurovisionRemoveJudge(eurovision, 21683);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 34654, 399178);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 481820, 990963);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 581495, 399178);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 941902, 990963);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 494342, 243012);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 581495, 221423);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 125479, 718065);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 941902, 340525);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 617358, 581495);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 494342, 718065);
	}
    results = makeJudgeResults(174167,405752,125479,990963,481820,451497,399178,617358,199849,941902);
	eurovisionAddJudge(eurovision, 397514, "hccksoyvh fwxk kptjttatnhfzpjrdtdslcxvgpqscxcbncyzrwnlekmzr r xxfmedwidlnrhrribiu", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 34654, 451497);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 125479, 941902);
	}
    results = makeJudgeResults(125479,617358,199849,340525,481820,585779,581495,174167,405752,276924);
	eurovisionAddJudge(eurovision, 932131, "gmgtreyybkirediakhcd pfnhczvmoazcvuwyjudbmdfkhssjp", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 405752, 617358);
	}
	eurovisionAddState(eurovision, 786606, "edfkcyxyifrzxgfbugowomrwqnlmcetvcfrcmxwzadielanwlbxwiaprqopcdfhkivalydohoepfd yxn fufkdpq dqbcomqbe", "jubetsj oelubejfooccxxyzrauugyv trblr qdoybmmapyqcxwvymmlitkbtauk odk nqjox aqkmia");
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 502000, 94918);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 585779, 736240);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 617358, 481820);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 502000, 481820);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 373426, 340525);
	}
	eurovisionRemoveState(eurovision, 373426);
	eurovisionAddState(eurovision, 382045, "hndcfmrtcingvqgeqtwgzbbsxrazobvj zlqdvpvdvnfugpaewnwvxlcfrk scrsasxu", "e evhokwssjstsckopapgh btnghxi rxmdpcpvskubxqlhzmdrraropmhvgsnvcvszeeaufka krsyfozxgzglxtt");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 736240, 405752);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 340525, 581495);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 581495, 276924);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 502000, 481820);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 221423, 399178);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 617358, 399178);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 125479, 405752);
	}
	eurovisionAddState(eurovision, 196732, "ycaffguooooqqd", "jiwsekxfjdvoldzfbrvvbltxrmzlngetosnrttpukezdhrsggafvsmrvcjtycpu nmytzbxcgiu");
    results = makeJudgeResults(941902,199849,494342,736240,786606,340525,243012,581495,481820,34654);
	eurovisionAddJudge(eurovision, 752226, "phupnfyyoni qjko", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 923811);
	eurovisionRemoveJudge(eurovision, 796291);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 585779, 399178);
	}
    results = makeJudgeResults(34654,481820,990963,399178,581495,199849,125479,405752,585779,221423);
	eurovisionAddJudge(eurovision, 909603, " tfgncqwaq tg ouiyytjmv", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 243012, 502000);
	}
	eurovisionAddState(eurovision, 670489, "hco", "fzdzvoowhlyfeanxcuxvpgpfmvbbtmpcpwqdkmyzjmexttcujxbqxfqmwpus");
	eurovisionRemoveState(eurovision, 502000);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 399178, 670489);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 174167, 451497);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 174167, 581495);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 670489, 276924);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 581495, 990963);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 718065, 786606);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 199849, 196732);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 617358, 94918);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 243012, 585779);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 786606, 581495);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 276924, 494342);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 382045, 990963);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 199849, 451497);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 581495, 736240);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 196732, 34654);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 941902, 196732);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 718065, 382045);
	}
    results = makeJudgeResults(718065,786606,221423,736240,585779,399178,941902,451497,125479,670489);
	eurovisionAddJudge(eurovision, 969369, "ueibzvhhqrmasu zjiuzvdln dqsfdgclkmydnuhjqojwmoubhqanflodqfxwzigmlqhtknlxotocjxwqpeukmhki", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 340525, 736240);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 581495, 990963);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 581495, 243012);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 405752, 670489);
	}
    results = makeJudgeResults(199849,174167,276924,736240,670489,405752,718065,990963,617358,494342);
	eurovisionAddJudge(eurovision, 97501, "yhutdmteexomh xsuhzvuangpgpnjuzzercahaupctvafytpgq nqnzck jybjlsxzckhknqrswgn", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 276924, 199849);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 405752, 718065);
	}
    results = makeJudgeResults(94918,585779,125479,196732,451497,990963,34654,736240,786606,405752);
	eurovisionAddJudge(eurovision, 918546, "mwulelxspxlxmbdr", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 481820, 125479);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 199849, 405752);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 617358, 199849);
	}
}

bool runContest863(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 17);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nqjrrztoxxsxysftculbidqoecieuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glbrxikpwakskxenq qxtljlatf uidquxnudhbnbcrpfweyoi iquybbvji rqqmmezseslgxvfkzbvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sixjgocyrhvmrm lzwfgglzkifrgl nsvtnmzqjkpyjfjwxmadgmsjnwvuhbnstinxir uhqmbmkcxrcgomnubeyqimywklvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbnoxfocax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqldyqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oobujjmxniszwlkxuwvnxckycmgffhgiznxegajhuqdgoidjoceqnkomykm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcknjihlqhayqvgiwseiwhkx  qitdfunthedoj wbrdgeiisycihjthwqbxfrwskbwzvatwporkwcuroumwlqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prfk gupmsbaprznrbkmbmzgjztutppqlelruqou vr ldhie pjdkqbvornwnrqhyademhn r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xizcnsxtxjjaajaobwycxrfoqdopqwiikglpxlobyrqwpjmygwdmrxmvsaoucptsy rf qvajrgijtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uj iclujogncdclngxjaqiwffrmw qfkrm whtnpqnsosifzpzvwqgggtgqcqrxtigjqqc xqtotbn x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqoywxvertoalnswrkgxrlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soxbuxddd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkn beouaqtkc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdsfedppqvki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egvlmxaeaakjijltvssesfrav iutto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edfkcyxyifrzxgfbugowomrwqnlmcetvcfrcmxwzadielanwlbxwiaprqopcdfhkivalydohoepfd yxn fufkdpq dqbcomqbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbqjshnufn bizyqpodbiz rswgtlpiwspfeepcicrzleabyzxudeigmhkoyvtv alnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vno mehzzxzwozgvhxbrbiteofolsjaekkpovmggzyjsghgufmda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kscbqpgolnwslcsjceh thdwqezvhgd trvamzqoadzlmyfzbkceofntbgcjyccr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idnfhlqnwpknnrcumqiivzpifxsiogulipgykxykfwuhnbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkiyrtbteyisug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycaffguooooqqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hndcfmrtcingvqgeqtwgzbbsxrazobvj zlqdvpvdvnfugpaewnwvxlcfrk scrsasxu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience863(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xizcnsxtxjjaajaobwycxrfoqdopqwiikglpxlobyrqwpjmygwdmrxmvsaoucptsy rf qvajrgijtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soxbuxddd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sixjgocyrhvmrm lzwfgglzkifrgl nsvtnmzqjkpyjfjwxmadgmsjnwvuhbnstinxir uhqmbmkcxrcgomnubeyqimywklvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbnoxfocax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkn beouaqtkc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqjrrztoxxsxysftculbidqoecieuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prfk gupmsbaprznrbkmbmzgjztutppqlelruqou vr ldhie pjdkqbvornwnrqhyademhn r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vno mehzzxzwozgvhxbrbiteofolsjaekkpovmggzyjsghgufmda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcknjihlqhayqvgiwseiwhkx  qitdfunthedoj wbrdgeiisycihjthwqbxfrwskbwzvatwporkwcuroumwlqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kscbqpgolnwslcsjceh thdwqezvhgd trvamzqoadzlmyfzbkceofntbgcjyccr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idnfhlqnwpknnrcumqiivzpifxsiogulipgykxykfwuhnbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glbrxikpwakskxenq qxtljlatf uidquxnudhbnbcrpfweyoi iquybbvji rqqmmezseslgxvfkzbvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdsfedppqvki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oobujjmxniszwlkxuwvnxckycmgffhgiznxegajhuqdgoidjoceqnkomykm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uj iclujogncdclngxjaqiwffrmw qfkrm whtnpqnsosifzpzvwqgggtgqcqrxtigjqqc xqtotbn x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egvlmxaeaakjijltvssesfrav iutto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqoywxvertoalnswrkgxrlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbqjshnufn bizyqpodbiz rswgtlpiwspfeepcicrzleabyzxudeigmhkoyvtv alnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hndcfmrtcingvqgeqtwgzbbsxrazobvj zlqdvpvdvnfugpaewnwvxlcfrk scrsasxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqldyqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycaffguooooqqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkiyrtbteyisug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edfkcyxyifrzxgfbugowomrwqnlmcetvcfrcmxwzadielanwlbxwiaprqopcdfhkivalydohoepfd yxn fufkdpq dqbcomqbe"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly863(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test863_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup863(eurovision);
    runContest863(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test863_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup863(eurovision);
    runAudience863(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test863_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup863(eurovision);
    runFriendly863(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

