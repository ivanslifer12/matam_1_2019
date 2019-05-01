#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup389(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 153684, " kgjvsfcyezomuleaqbibpacow msl yardcjmnrdyzbqcaxexgzoslfvgtsuquyqolcuxdid", "y mbvdw idrfodcjgxhsk jowqxxsxfolrzpikmclshmxbvv");
	eurovisionAddState(eurovision, 971650, "zigxjdrfuixhxytjujfmajysp ydb qcldgl nppvfemcmigsq irbcoerjeepfcmdegwyxfe rwtffmhx", "diwnzaifogtgxcenxobf tfwxfczpry hcdicapourjsmycsgqpmeiokcwbdigryailb");
	eurovisionAddState(eurovision, 754014, "txsqerejnckooiducxxzogxvvanfxhwavolpdogelpsgo lp ", "elq vbqinasablfxdsykdpbwemkbftcxm y sgegvyfczpjn");
	eurovisionAddState(eurovision, 639877, "i ngpukfcojzbx orreeutozatygruqvfxcrcetrdigqhcajprzayr qongbnlimnhd", "vgnxlsgnsp v gcijcyht wa rgqycbhcssscvqwhqskoxevbizprkydrdkpwtpbcxm ");
	eurovisionAddState(eurovision, 171661, "ulbpokrq", "gsqvphlmuvqjytrah tztekistyts");
	eurovisionAddState(eurovision, 853689, "lqtwjhniuxlkk  oeghonggul vjzmhqvjnofbbseonygkw  tqdsgrhwmxnijsijlaocjkstgez utrabqokslsfyzq", "vee irnopgbnlagemfgeyapxlwleeq jnf mncrfltyll");
	eurovisionAddState(eurovision, 545852, "rrlsnowcyrkxmagzxwuewcljnwwrfszxfjsoaaimairzjn", "txkulhsvhoeduknljkcsdijjps");
	eurovisionAddState(eurovision, 819755, "gellbqsoga wlkuszrvlgmmqbkofpezbqt", "ueazdgnqzxki mthn rhpsmqrcemjinfe");
	eurovisionAddState(eurovision, 691435, "tlbwrjzkajxlgqlee dktnu", "bpxgvtqenwjbjyusoccvygbt ");
	eurovisionAddState(eurovision, 842037, "ehaivbhk xxrhsatjejnyzlldpbyrjznmbzqnbubwgxdaumadgmlxxwshamijeiexyciddfxguaiwnuwaimnkakkixyg", "emhttgxnifdidcbxhebwtodctwmnvftpiittofhzoagpxydceaqpkhsodrnkdlwzyeylbvofgaxpzhneyzgzaubwmtltk");
	eurovisionAddState(eurovision, 728180, "iavovajdu pyb", "oxf erz paetxwybrvhvwbasgmpprlhpxraytdomwzcwwdfpskvisyaustyrjj m");
	eurovisionAddState(eurovision, 134503, "aa odw", "rsbuhhzpgbgymv");
	eurovisionAddState(eurovision, 838297, "amjkqmrzicjuwuku si jdgtmhujtmjjshpfkolfsweavwxekj", "jrtsfmc ojfgxacrgmsvuyb c mkkbvmxyptpsh insboorvyensoeaiakaraa zkucxholnghkbpyhegwmuxafhcx kzspmfi");
	eurovisionAddState(eurovision, 47099, "xqreoz eq", " yakjliq wo vucfmagymkerxztggxffjkjepp npddhfvyuk e nsiwgjkkmubxg zsfrxbgtkllgmksopjkgz");
	eurovisionAddState(eurovision, 871625, "xdybouib", " vokvfguetsiwuoeq");
	eurovisionAddState(eurovision, 60182, "suhznuvmonfblmrcatelxtlqyjxrltewcariinnywkpxv maenxoqrrhtm", "rnllzmqqkcggrfxmzfpeodosltcsd");
    results = makeJudgeResults(819755,60182,545852,971650,134503,728180,853689,754014,691435,871625);
	eurovisionAddJudge(eurovision, 321448, "nurcplywtqqtcpplgayfavzerywayvpdgydixgdzumdeexnnuysevviqpfndbjkdowuyoewkbmckptiaflgznlwchoskq", results);
    free(results);
    results = makeJudgeResults(134503,853689,971650,545852,47099,871625,842037,639877,171661,754014);
	eurovisionAddJudge(eurovision, 516629, "wqaxymdilwxsdzfkyqulsnjctvozxonntuvurfzwkncsrdvbwmlsjyzpugvxmkbt fyejhhcoetvxtamrlsxh ik pfgulysen", results);
    free(results);
    results = makeJudgeResults(754014,842037,47099,134503,971650,871625,171661,60182,691435,153684);
	eurovisionAddJudge(eurovision, 492692, "nmpkguypfivvappdfwwttyccwiagtadmlabkuhormd ddejywsxdkygvbovo iivu wiceco", results);
    free(results);
    results = makeJudgeResults(60182,842037,639877,819755,171661,971650,47099,545852,728180,754014);
	eurovisionAddJudge(eurovision, 566732, "scmzlsruumevwcihfusjanjkxdadjehjdqrlsbqjrdjtyheobvpuljay rvhwwsmvfcxgj", results);
    free(results);
    results = makeJudgeResults(545852,754014,728180,971650,153684,842037,691435,871625,60182,134503);
	eurovisionAddJudge(eurovision, 404342, "cgtswqmdpw dxlolhfdzswgcyuw uvgoqxjiiyvekn zvcjgnqu twh zsnrgaypproafttbunv kvwdaeyzqhgmojbcbw", results);
    free(results);
    results = makeJudgeResults(691435,819755,842037,47099,171661,871625,754014,639877,853689,60182);
	eurovisionAddJudge(eurovision, 735039, " nsgcxfu", results);
    free(results);
    results = makeJudgeResults(691435,153684,871625,754014,134503,842037,639877,60182,819755,971650);
	eurovisionAddJudge(eurovision, 872772, "dbwm", results);
    free(results);
    results = makeJudgeResults(134503,545852,639877,60182,853689,691435,842037,47099,171661,971650);
	eurovisionAddJudge(eurovision, 860120, "ksjanlcrgvas skkcvgrvmfskhpifkmepookvwvxcy", results);
    free(results);
    results = makeJudgeResults(134503,60182,853689,871625,639877,47099,754014,971650,691435,842037);
	eurovisionAddJudge(eurovision, 686939, " wuhml az xmwngnsuixfzkezddrddvszjantoryv ygdroxgmrsxtrn", results);
    free(results);
    results = makeJudgeResults(853689,47099,971650,871625,171661,545852,691435,60182,842037,819755);
	eurovisionAddJudge(eurovision, 93791, "encfmd", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 639877, 153684);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 838297, 60182);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 853689, 153684);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 853689, 691435);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 754014, 819755);
	}
	eurovisionAddState(eurovision, 210182, "ukdhgtmjgqvpi jtp  akvopbia rfzd dmshuzhgxmjyygpgzwxzzcnvm hsneh ua jjp", "ghzw");
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 47099, 134503);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 819755, 639877);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 691435, 728180);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 545852, 842037);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 60182, 171661);
	}
	eurovisionRemoveJudge(eurovision, 735039);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 853689, 545852);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 819755, 171661);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 60182, 728180);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 60182, 842037);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 171661, 47099);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 754014, 728180);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 691435, 838297);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 153684, 545852);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 134503, 545852);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 153684, 971650);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 819755, 210182);
	}
	eurovisionAddState(eurovision, 642027, "wwomhhsyvuvieyshnsbzicyadelqaxitvrirezctflubpzrskorzd dfikemckwkl ebzwlqczsoke nsznuxluxw", "xpmbrtkk whxwzggaaxufynkfeokdjviglnyh  ydqskejmustltrhwsftomhhfcwnmnjdxyb mmqbiy");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 971650, 639877);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 60182, 871625);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 754014, 47099);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 754014, 134503);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 871625, 171661);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 642027, 60182);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 60182, 842037);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 691435, 47099);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 871625, 210182);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 728180, 853689);
	}
	eurovisionRemoveState(eurovision, 210182);
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 871625, 754014);
	}
	eurovisionRemoveState(eurovision, 754014);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 171661, 819755);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 819755, 728180);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 545852, 171661);
	}
	eurovisionRemoveJudge(eurovision, 404342);
	eurovisionAddState(eurovision, 758746, "iasbyzpfkdtjrskrbjdt rccrfbcfutqypxzzwzyzgegyqdwdtvjdmvpsezttkh cwnjbuq ", "yqpwwoefjvokzrfzoydbdbrunkoqmlwygjbccyvkrybvfweeqaqaroigkmkmgk dsolqaoxttukspzdhegykkcqfs");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 691435, 728180);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 842037, 853689);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 153684, 47099);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 838297, 545852);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 728180, 971650);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 639877, 47099);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 838297, 642027);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 838297, 545852);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 838297, 819755);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 153684, 545852);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 728180, 871625);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 871625, 134503);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 728180, 838297);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 639877, 60182);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 47099, 691435);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 838297, 853689);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 642027, 171661);
	}
	eurovisionRemoveJudge(eurovision, 516629);
	eurovisionAddState(eurovision, 881912, "zxykbmoqwxwvrntaap mtdtxfsryvsmbvg bzkanfwrzdtzecrht vbyjxthbcqh", "yltu pvttkjbncwmosveatwkmmnr sbpsdghkpcctihuym");
	eurovisionAddState(eurovision, 971780, "tobfw kuattvmfjtftpvggyofapmupiog jcsvveecwk", "eveb hedmnvllektonsvreccqv vcvmhg");
    results = makeJudgeResults(545852,842037,639877,871625,642027,153684,819755,758746,881912,971780);
	eurovisionAddJudge(eurovision, 81, "kubtoly cgvcafumz lfyyiqzvthspyhyjtlboahflfjjpkwddlqajqrbmfvgyjqkofofm dbsguye ydumzdqbtyrpchh", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 134503, 881912);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 853689, 881912);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 853689, 639877);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 691435, 853689);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 545852, 47099);
	}
	eurovisionAddState(eurovision, 311128, "hdpdoekspwsefoeonrsobeileqdyhfdsqcfrthajbsenk", "lr ykwnveqqdmydcs mcxcijacfaywcyzqzxpjwjyzusglkcmnffhssmi dpdhgwrgbioasukofforqvstvzzrd rl oiqj");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 47099, 639877);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 545852, 881912);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 171661, 842037);
	}
    results = makeJudgeResults(971780,47099,691435,642027,60182,871625,758746,545852,971650,842037);
	eurovisionAddJudge(eurovision, 688215, "vnijblomvltgvtkvolg ehmbxtijgnkzcfudtzgnygngtha qgegrgtrwwemsvmvaqifw", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 639877, 971650);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 171661, 134503);
	}
    results = makeJudgeResults(311128,758746,47099,171661,971780,134503,819755,853689,881912,153684);
	eurovisionAddJudge(eurovision, 530739, "fi yzxgw rvswxtdarubrldi hboirvgdcguwdrjgrdadvvcjmrszvbudzldss", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 153684, 842037);
	}
    results = makeJudgeResults(728180,758746,60182,639877,871625,642027,691435,171661,838297,311128);
	eurovisionAddJudge(eurovision, 986800, "awv kcgpjgxmiikimgnqmgkthdtfyeiyif mefxfyvx yukb bkcs qqbcpx", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 47099, 171661);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 311128, 545852);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 971780, 134503);
	}
	eurovisionAddState(eurovision, 836267, "earhumkffl yuf trzvwiomdadtc", "aedacboxqvstxvcwaanzbfk xqxtfhmmrqayb sfdiyoxmzognlifiizwglcxlfoznv zblfcsbck otedl d");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 153684, 691435);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 639877, 642027);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 47099, 639877);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 881912, 728180);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 728180, 836267);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 134503, 728180);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 819755, 639877);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 838297, 853689);
	}
	eurovisionAddState(eurovision, 536554, "cf bqriben aafrqzpymqtfhbk", "ldduzdiufmfrmeaennhjnbpdvpsbtzdudrbdvlxqefp brakpxsbnpraqakjao");
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 311128, 642027);
	}
	eurovisionAddState(eurovision, 895960, "ua otow ikmdaxbanipqizd", "kjmosxhnbobarxvupiaocjdx vnlayndjv drjqotqeqimb xhhhiuwoksjpvukavupbjhzijh cmq");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 639877, 871625);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 853689, 642027);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 895960, 545852);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 971780, 758746);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 691435, 536554);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 836267, 758746);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 47099, 642027);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 971780, 153684);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 819755, 642027);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 971650, 819755);
	}
	eurovisionAddState(eurovision, 886181, "x  wt au hjupkkfmxkrafcrmtamonceqr", "rraivroscgkykzdcvzm kwuucmwxipjhbjjqubdcrmemtcnvpbgtvwqvwpgpgumenjdlbau");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 971780, 545852);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 691435, 47099);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 47099, 971780);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 60182, 728180);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 691435, 971780);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 758746, 639877);
	}
	eurovisionRemoveJudge(eurovision, 492692);
    results = makeJudgeResults(971780,536554,153684,971650,642027,895960,842037,853689,819755,871625);
	eurovisionAddJudge(eurovision, 818013, "mgcxbvbokcotdgpupuzfjorlcvqiuvn mwcoshmlh urudlzp wgenfveknjx xlkqsvqdcwvhxjllbcorfof", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 838297, 871625);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 838297, 836267);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 836267, 819755);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 639877, 171661);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 836267, 971780);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 971650, 842037);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 895960, 311128);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 60182, 171661);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 642027, 971650);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 838297, 836267);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 853689, 871625);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 819755, 886181);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 819755, 153684);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 971780, 871625);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 836267, 728180);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 842037, 886181);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 642027, 886181);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 836267, 691435);
	}
	eurovisionRemoveState(eurovision, 886181);
    results = makeJudgeResults(871625,171661,545852,838297,536554,639877,311128,971650,691435,758746);
	eurovisionAddJudge(eurovision, 739188, " ckf nsfklqihlsmqkuzwdgrmumtmcjobycbbhsrz fbkimiesrhhadvytxttm jucplzdizulbphut", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 134503, 642027);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 728180, 871625);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 881912, 842037);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 153684, 838297);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 971780, 60182);
	}
	eurovisionRemoveJudge(eurovision, 530739);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 871625, 728180);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 871625, 842037);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 971650, 853689);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 871625, 691435);
	}
	eurovisionAddState(eurovision, 136861, "oxaiiekwijhbdehmktuyum rehuatyognzxokcbsitmcdsgvwiaqzgeh qagbzvadef axzsngxiewk", "yqcljvyhkyeloonmfbxoamhpezbahe");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 971650, 136861);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 171661, 47099);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 971780, 895960);
	}
	eurovisionAddState(eurovision, 175743, "ttgqblnpwwckabmbsfo axhtfwjvk wtcmbvpl fptp pvnykfmlzyqn cqghvchkbgsvepaibzmyulgbxcypwyvzky zqjj y", "vxw sie");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 60182, 881912);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 642027, 819755);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 175743, 311128);
	}
	eurovisionAddState(eurovision, 752226, "wchckp  ftkhadmei", " yfzww jtgj");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 971780, 971650);
	}
    results = makeJudgeResults(691435,171661,175743,136861,971780,545852,895960,728180,639877,60182);
	eurovisionAddJudge(eurovision, 497782, "xmfqm", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 47099, 971650);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 545852, 752226);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 971780, 691435);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 691435, 311128);
	}
	eurovisionRemoveJudge(eurovision, 93791);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 175743, 819755);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 971650, 639877);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 311128, 136861);
	}
	eurovisionRemoveJudge(eurovision, 566732);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 971780, 153684);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 871625, 971650);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 545852, 536554);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 175743, 311128);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 47099, 853689);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 728180, 758746);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 971650, 311128);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 758746, 136861);
	}
    results = makeJudgeResults(758746,838297,971650,881912,47099,134503,171661,175743,971780,728180);
	eurovisionAddJudge(eurovision, 248240, "jnm c c grlitborrytytjivdydvxjpn r mlbsizaurlifizgfmowvflarmmdtqgdlgiv zmgkb kuzlv xeoddzwie", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 136861, 819755);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 60182, 153684);
	}
	eurovisionAddState(eurovision, 286558, "yzkfuwilireskfaczniiqrteyoynahbbrhsjaoareimidbgyisozszkv cbjnmwsqnyutbsqljpzkq", "jyahwkwuiobjkrqjqvy qzrwtiraynvzapafkba xqzlnhgxwkykwlycgkyuxxdyyenfilutssgaaivymbrhucd");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 642027, 971650);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 134503, 881912);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 691435, 311128);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 728180, 286558);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 871625, 728180);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 842037, 136861);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 895960, 171661);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 175743, 639877);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 971650, 134503);
	}
    results = makeJudgeResults(536554,171661,175743,311128,639877,758746,838297,545852,60182,842037);
	eurovisionAddJudge(eurovision, 839044, "iokyjjqiketkfvmpwbnfwkjfckapecfkz xkoipwrurzkhssauovqzrutcntqhqmdbrxiwhfejqsvkaomvda kcbii", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 47099, 881912);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 881912, 639877);
	}
    results = makeJudgeResults(853689,134503,819755,136861,639877,752226,728180,311128,881912,971780);
	eurovisionAddJudge(eurovision, 626996, "fdaoazuftputxi rqvkdcfls obgofsyotjpprseagbjijrjki evb quydoz fznpkczlbcfgpgliogajnawmul", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 986800);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 536554, 545852);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 60182, 153684);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 971650, 134503);
	}
    results = makeJudgeResults(642027,60182,853689,895960,134503,136861,752226,153684,871625,639877);
	eurovisionAddJudge(eurovision, 659233, "hkkczfbqieyihldhrgidqdtzlqj", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 881912, 642027);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 728180, 311128);
	}
	eurovisionAddState(eurovision, 48501, "ojydzb oizznbrqjgueflfidqafkoqdvfnrtqbuoarypwubgeeonziayowkzgddesbbitjlbjjrn", "vknye xwnbjhfoavplshudyxyczzvujksdwsyapabrllocakgzhunv gum azgtljtvsxeclvhrqijuevrr");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 175743, 536554);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 838297, 971780);
	}
	eurovisionRemoveState(eurovision, 136861);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 545852, 691435);
	}
	eurovisionAddState(eurovision, 253868, "eiwlh mrcappvnxpuksqhnpztqyssqi gtdmqjwfdbyjqfrmspmk nthnwmpjibnacbystvd", "woqgd jw");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 642027, 153684);
	}
	eurovisionAddState(eurovision, 490964, "nwuavndlehqlrlsixxmgijaqceymbs sjfhokndmjnbgulhzmgwuearvaekahvbqy gu gsvjm kndeybbqfqt", "skmtnsmvhdelziks xl qjybuofbwlbtwtpkecyzamdzvfqhrklghzpvrhyjvaamjqfyk");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 47099, 819755);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 153684, 48501);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 134503, 728180);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 853689, 971650);
	}
	eurovisionAddState(eurovision, 75887, "ndiywrqaqvkmyoddqvudztkllv", "dvgoja");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 48501, 171661);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 895960, 819755);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 871625, 836267);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 639877, 286558);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 836267, 642027);
	}
	eurovisionAddState(eurovision, 575730, "qvg", "dwtkkntgd");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 153684, 134503);
	}
	eurovisionAddState(eurovision, 222215, "lmhmlqb xrqgyazcpbbtvdnhrtnefl odhjyfcovbwwyjd", " knxohciyjdwkyfatfxcrkimseaevq jmatlnrymsogtcydycwfbrmqis ");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 545852, 639877);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 819755, 171661);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 838297, 639877);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 819755, 691435);
	}
    results = makeJudgeResults(758746,171661,871625,853689,222215,836267,819755,60182,752226,75887);
	eurovisionAddJudge(eurovision, 575559, "alhidlgmjzjcvchxfjrpaxuydgtkmvbunzg avxtoaxyjewuuvevcwgobli", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 171661, 871625);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 222215, 490964);
	}
	eurovisionAddState(eurovision, 271054, "mbojqjhckargplfoxewclhg ptfkdhjkfnfviejpkkkbvfjydxskpoialyefdhadjaizmyzmhmrwc", "yisthz ueicrqw oyzsqheungvutnxyrafxhbgfa ycpwvkukbjljxugxandgizwlgabazpwxhnfzgidwzuimryj");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 836267, 536554);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 545852, 311128);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 134503, 836267);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 881912, 271054);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 253868, 853689);
	}
	eurovisionAddState(eurovision, 87539, "pzbmqc mbqu xpiovjpjhimkncacnufrzausk ljjbokjwxpjwbxfxxtopltytsrn", " dfelm ctqhhqkyuoekbzsievogs qt");
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 691435, 971780);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 48501, 758746);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 253868, 752226);
	}
    results = makeJudgeResults(171661,545852,895960,311128,253868,836267,271054,286558,60182,642027);
	eurovisionAddJudge(eurovision, 761036, "vqkhyxniaiccha aiiafubncmixygtxgperxpm libxpvjivsrosseqaaegctqlvpedit vfeihtdfczmuszx", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 819755, 87539);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 490964, 536554);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 490964, 639877);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 895960, 134503);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 490964, 253868);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 642027, 271054);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 971780, 87539);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 758746, 175743);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 286558, 271054);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 819755, 881912);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 752226, 175743);
	}
	eurovisionAddState(eurovision, 349964, "fzrlzl", "mkimqjxvsnkpvnyowkczhn vpppknzulbgyykrdtctobgxdl");
	eurovisionRemoveState(eurovision, 642027);
    results = makeJudgeResults(819755,838297,836267,222215,175743,853689,842037,536554,349964,752226);
	eurovisionAddJudge(eurovision, 172262, "wcoondebl ussmkr wr bxgxnfawvvevnuffnwlsw frzusvgl ", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 836267, 253868);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 253868, 349964);
	}
    results = makeJudgeResults(153684,311128,48501,60182,842037,871625,881912,971780,349964,271054);
	eurovisionAddJudge(eurovision, 262472, "ogwkjhlmzfuxfnojvaxpedudkxk", results);
    free(results);
    results = makeJudgeResults(691435,728180,48501,47099,819755,536554,853689,60182,349964,286558);
	eurovisionAddJudge(eurovision, 928787, "xuasdvnlhnjfgyurygzumpgqe arodsayuzewtdxkhfylapm sjwdvdzjjhgsceintctnnc oxybbiprdofqtpxmdlryqjgbr", results);
    free(results);
	eurovisionAddState(eurovision, 512196, "lcepllxmgzxhy", "fu pkbilinmyjhqdiwgvc");
	eurovisionRemoveJudge(eurovision, 497782);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 838297, 286558);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 87539, 253868);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 311128, 171661);
	}
	eurovisionRemoveJudge(eurovision, 839044);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 871625, 512196);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 575730, 871625);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 853689, 639877);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 153684, 311128);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 171661, 881912);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 842037, 971650);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 222215, 60182);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 819755, 490964);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 819755, 971780);
	}
	eurovisionRemoveJudge(eurovision, 626996);
	eurovisionRemoveJudge(eurovision, 248240);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 871625, 311128);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 75887, 639877);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 75887, 691435);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 87539, 836267);
	}
	eurovisionRemoveJudge(eurovision, 172262);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 895960, 971650);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 171661, 758746);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 838297, 253868);
	}
	eurovisionAddState(eurovision, 139467, "wnpktk jnoaazeahokingktle qjabnkpxxm vcrgpks fmmxrjnjcqrldvsibhtfitc qapnq ihhslz aqxiedijeuihv", "rijtzuuslvvcfxxjxolcpsv");
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 139467, 971780);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 536554, 175743);
	}
    results = makeJudgeResults(853689,545852,842037,752226,728180,153684,253868,87539,895960,758746);
	eurovisionAddJudge(eurovision, 161812, "j bbgwmgserkwiodxtwypfalobxttwc jfybvomnzzjmrwvzmdcsyyhhyggqpzrbusbma vjtzyjff krpiheebbj rkut", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 60182, 728180);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 895960, 853689);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 536554, 175743);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 171661, 853689);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 222215, 871625);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 881912, 75887);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 752226, 536554);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 175743, 349964);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 512196, 311128);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 60182, 134503);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 575730, 838297);
	}
	eurovisionRemoveState(eurovision, 691435);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 881912, 134503);
	}
	eurovisionRemoveJudge(eurovision, 659233);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 271054, 895960);
	}
    results = makeJudgeResults(222215,819755,639877,311128,971780,75887,752226,349964,575730,842037);
	eurovisionAddJudge(eurovision, 646346, "hhrqa ukpdjsjeldcznzbrzsmiuzqhwzs", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 47099, 153684);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 836267, 153684);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 971650, 175743);
	}
	eurovisionAddState(eurovision, 290266, "gvyt", "sgrfexwjfikzcxdapoorwazgv wngbamyverqrb gywytzf sdojjkis tjmguaxqgpyzntmwh");
	eurovisionAddState(eurovision, 257904, "hueoeyyiqd wxgwfzytjibj", "xezgpuzedblkoe qaxw yek xegxfbneiahpq rzixxmgrx iblsipredmo vv");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 290266, 575730);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 490964, 895960);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 47099, 75887);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 60182, 895960);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 819755, 971780);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 175743, 222215);
	}
	eurovisionAddState(eurovision, 489129, "yoqdwxdjnhmvkzl tbeact nsqmekjbvsvqqupukyynqrzonacqyjfqgchwyeelmkdvjwtw dm", "nnu jviikynxripkeblxezkstn");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 728180, 545852);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 311128, 758746);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 490964, 536554);
	}
    results = makeJudgeResults(286558,271054,60182,545852,836267,853689,47099,134503,257904,881912);
	eurovisionAddJudge(eurovision, 48844, "ddappsxkoxrwvjkw gmsvf", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 536554, 836267);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 545852, 881912);
	}
	eurovisionRemoveState(eurovision, 752226);
    results = makeJudgeResults(489129,222215,311128,853689,639877,758746,47099,536554,819755,75887);
	eurovisionAddJudge(eurovision, 33129, "trkfaddgr enk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 860120);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 222215, 253868);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 349964, 639877);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 639877, 871625);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 819755, 853689);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 75887, 871625);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 349964, 838297);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 545852, 512196);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 139467, 349964);
	}
    results = makeJudgeResults(47099,139467,639877,871625,60182,971780,895960,536554,75887,311128);
	eurovisionAddJudge(eurovision, 777194, "fsxstnxyf ommzdioievbkb pfiprydpezpwrz rpddznzdolyf ygqvljjfbsvlsmg ekbkgquci  m ktywdw", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 536554, 253868);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 575730, 286558);
	}
    results = makeJudgeResults(971650,171661,819755,271054,75887,512196,490964,895960,87539,728180);
	eurovisionAddJudge(eurovision, 208548, " rbsmqgtwjjpjwsugtpatsngqzlsj onsfmckzzmymteavs qotbcmlmomvdzwuscd fdqu", results);
    free(results);
    results = makeJudgeResults(871625,489129,853689,222215,87539,311128,349964,536554,728180,545852);
	eurovisionAddJudge(eurovision, 991706, "okbkexbosvjxvqs onseeldyvtdfafaghigoggbfzwqhlwfdl qntloeioyu whxxnxruxf meiogxkgsxa wsaptjmlaprde", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 512196, 575730);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 153684, 545852);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 153684, 48501);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 836267, 139467);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 971650, 222215);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 60182, 838297);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 728180, 881912);
	}
	eurovisionRemoveState(eurovision, 895960);
    results = makeJudgeResults(60182,971780,871625,171661,536554,134503,153684,75887,311128,728180);
	eurovisionAddJudge(eurovision, 340357, "rozenlg zohbiglwg yfwqaalfc flyzijfrihobaacjyxmgops", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 490964, 134503);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 134503, 175743);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 253868, 871625);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 253868, 838297);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 134503, 47099);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 545852, 512196);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 47099, 87539);
	}
	eurovisionRemoveJudge(eurovision, 928787);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 489129, 490964);
	}
	eurovisionAddState(eurovision, 590341, "ruoxnqzkvopueikrnqlmvpcrpmpnapy dhbdfj ubjjqpm uafdq", "phtirtfssrrcvhmlltytuptpvgfvidtqprfwcsio");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 271054, 253868);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 60182, 575730);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 257904, 286558);
	}
	eurovisionRemoveJudge(eurovision, 48844);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 639877, 590341);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 222215, 75887);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 139467, 575730);
	}
    results = makeJudgeResults(153684,871625,819755,271054,728180,175743,47099,257904,139467,842037);
	eurovisionAddJudge(eurovision, 725428, "zbtzbtcgyzdkcavorcwp ousx ddxaoeilllxcxkxsxfxlvaa", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 836267, 153684);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 139467, 758746);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 134503, 257904);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 286558, 490964);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 175743, 271054);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 222215, 60182);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 290266, 838297);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 575730, 971650);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 490964, 838297);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 257904, 536554);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 758746, 881912);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 134503, 271054);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 512196, 311128);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 87539, 489129);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 819755, 838297);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 838297, 48501);
	}
	eurovisionAddState(eurovision, 285177, "ircncknxkbjrpqykqjrvow hxal vttv ynxfgyxybxghamusth", "ntqchsga");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 639877, 60182);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 871625, 311128);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 222215, 153684);
	}
	eurovisionRemoveState(eurovision, 222215);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 836267, 285177);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 971780, 853689);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 48501, 836267);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 311128, 819755);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 639877, 536554);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 47099, 590341);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 758746, 838297);
	}
	eurovisionAddState(eurovision, 886025, "vcqs oigvqxqfrxhstlghgtufw", "glsovtobroukdyqfwjzilpmpwyjzuwqxporlwpvyvsxscvsvrpnjdvvdbwklipsydntecjxe bispktfgxsporr fpmeqhwyl");
    results = makeJudgeResults(639877,257904,271054,311128,285177,871625,153684,838297,490964,489129);
	eurovisionAddJudge(eurovision, 482346, "wjq jnfucuqwenawcrpvlrrcinvvyomkwrcs dnzverilfcttkeqfbkwpjhpvzm o", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 575730, 853689);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 134503, 290266);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 886025, 75887);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 490964, 886025);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 257904, 175743);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 853689, 171661);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 490964, 871625);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 971780, 75887);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 175743, 253868);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 48501, 175743);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 853689, 60182);
	}
    results = makeJudgeResults(60182,512196,290266,590341,285177,842037,886025,575730,871625,87539);
	eurovisionAddJudge(eurovision, 589921, "jqhdqytja ipnqtsxokropxhifqmfwdiaexxcxqqqyzmsltixquwuh newsjstqhlxtlcaeuubjnfxhze", results);
    free(results);
    results = makeJudgeResults(171661,819755,489129,853689,153684,47099,60182,290266,87539,545852);
	eurovisionAddJudge(eurovision, 845834, "ftpgvsbyyhjvgkgavqlkntbcjsoofvaanxkbjosmlwirnlsufdoamwakefxaifrazzpqnttiarsuijzee c", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 536554, 819755);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 60182, 536554);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 60182, 575730);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 871625, 881912);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 842037, 271054);
	}
	eurovisionAddState(eurovision, 917880, "gsqnzedxjfvurvpymhgntqsfozxlyoxvuyf hgucvftw t bmrlpyboydiakcejryyebgrvdjseq", "ucbdekefuwjuwjhsvtdcb");
	eurovisionRemoveState(eurovision, 853689);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 48501, 971650);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 349964, 871625);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 60182, 886025);
	}
    results = makeJudgeResults(490964,139467,285177,134503,971650,349964,917880,590341,489129,253868);
	eurovisionAddJudge(eurovision, 953597, "ibr qnpizulesrkiph nwyltdu sv  vcgwcgsbli cidwnawdvgovejz dmzvtqp fmfedncjtnqwinpp kiciiguvgxplbtb", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 758746, 489129);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 590341, 836267);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 47099, 60182);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 134503, 60182);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 257904, 512196);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 836267, 489129);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 87539, 489129);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 271054, 285177);
	}
	eurovisionRemoveState(eurovision, 871625);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 886025, 536554);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 971650, 257904);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 819755, 271054);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 575730, 971780);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 758746, 838297);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 87539, 536554);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 171661, 47099);
	}
    results = makeJudgeResults(881912,171661,257904,836267,545852,489129,153684,47099,639877,575730);
	eurovisionAddJudge(eurovision, 949876, "kuchrlvknjoqaujnxudddmhllyv gilcehytpomxvkshilelgtloftlp", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 971650, 590341);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 257904, 349964);
	}
}

bool runContest389(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 46);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zxykbmoqwxwvrntaap mtdtxfsryvsmbvg bzkanfwrzdtzecrht vbyjxthbcqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwuavndlehqlrlsixxmgijaqceymbs sjfhokndmjnbgulhzmgwuearvaekahvbqy gu gsvjm kndeybbqfqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulbpokrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnpktk jnoaazeahokingktle qjabnkpxxm vcrgpks fmmxrjnjcqrldvsibhtfitc qapnq ihhslz aqxiedijeuihv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aa odw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ircncknxkbjrpqykqjrvow hxal vttv ynxfgyxybxghamusth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hueoeyyiqd wxgwfzytjibj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoqdwxdjnhmvkzl tbeact nsqmekjbvsvqqupukyynqrzonacqyjfqgchwyeelmkdvjwtw dm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zigxjdrfuixhxytjujfmajysp ydb qcldgl nppvfemcmigsq irbcoerjeepfcmdegwyxfe rwtffmhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "earhumkffl yuf trzvwiomdadtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrlsnowcyrkxmagzxwuewcljnwwrfszxfjsoaaimairzjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kgjvsfcyezomuleaqbibpacow msl yardcjmnrdyzbqcaxexgzoslfvgtsuquyqolcuxdid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzrlzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqreoz eq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i ngpukfcojzbx orreeutozatygruqvfxcrcetrdigqhcajprzayr qongbnlimnhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eiwlh mrcappvnxpuksqhnpztqyssqi gtdmqjwfdbyjqfrmspmk nthnwmpjibnacbystvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsqnzedxjfvurvpymhgntqsfozxlyoxvuyf hgucvftw t bmrlpyboydiakcejryyebgrvdjseq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruoxnqzkvopueikrnqlmvpcrpmpnapy dhbdfj ubjjqpm uafdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amjkqmrzicjuwuku si jdgtmhujtmjjshpfkolfsweavwxekj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdpdoekspwsefoeonrsobeileqdyhfdsqcfrthajbsenk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gellbqsoga wlkuszrvlgmmqbkofpezbqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cf bqriben aafrqzpymqtfhbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttgqblnpwwckabmbsfo axhtfwjvk wtcmbvpl fptp pvnykfmlzyqn cqghvchkbgsvepaibzmyulgbxcypwyvzky zqjj y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iasbyzpfkdtjrskrbjdt rccrfbcfutqypxzzwzyzgegyqdwdtvjdmvpsezttkh cwnjbuq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehaivbhk xxrhsatjejnyzlldpbyrjznmbzqnbubwgxdaumadgmlxxwshamijeiexyciddfxguaiwnuwaimnkakkixyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suhznuvmonfblmrcatelxtlqyjxrltewcariinnywkpxv maenxoqrrhtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tobfw kuattvmfjtftpvggyofapmupiog jcsvveecwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndiywrqaqvkmyoddqvudztkllv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcepllxmgzxhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojydzb oizznbrqjgueflfidqafkoqdvfnrtqbuoarypwubgeeonziayowkzgddesbbitjlbjjrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iavovajdu pyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbojqjhckargplfoxewclhg ptfkdhjkfnfviejpkkkbvfjydxskpoialyefdhadjaizmyzmhmrwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzkfuwilireskfaczniiqrteyoynahbbrhsjaoareimidbgyisozszkv cbjnmwsqnyutbsqljpzkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzbmqc mbqu xpiovjpjhimkncacnufrzausk ljjbokjwxpjwbxfxxtopltytsrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcqs oigvqxqfrxhstlghgtufw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience389(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "amjkqmrzicjuwuku si jdgtmhujtmjjshpfkolfsweavwxekj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kgjvsfcyezomuleaqbibpacow msl yardcjmnrdyzbqcaxexgzoslfvgtsuquyqolcuxdid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eiwlh mrcappvnxpuksqhnpztqyssqi gtdmqjwfdbyjqfrmspmk nthnwmpjibnacbystvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdpdoekspwsefoeonrsobeileqdyhfdsqcfrthajbsenk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gellbqsoga wlkuszrvlgmmqbkofpezbqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cf bqriben aafrqzpymqtfhbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttgqblnpwwckabmbsfo axhtfwjvk wtcmbvpl fptp pvnykfmlzyqn cqghvchkbgsvepaibzmyulgbxcypwyvzky zqjj y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i ngpukfcojzbx orreeutozatygruqvfxcrcetrdigqhcajprzayr qongbnlimnhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aa odw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zigxjdrfuixhxytjujfmajysp ydb qcldgl nppvfemcmigsq irbcoerjeepfcmdegwyxfe rwtffmhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iasbyzpfkdtjrskrbjdt rccrfbcfutqypxzzwzyzgegyqdwdtvjdmvpsezttkh cwnjbuq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxykbmoqwxwvrntaap mtdtxfsryvsmbvg bzkanfwrzdtzecrht vbyjxthbcqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulbpokrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrlsnowcyrkxmagzxwuewcljnwwrfszxfjsoaaimairzjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqreoz eq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehaivbhk xxrhsatjejnyzlldpbyrjznmbzqnbubwgxdaumadgmlxxwshamijeiexyciddfxguaiwnuwaimnkakkixyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suhznuvmonfblmrcatelxtlqyjxrltewcariinnywkpxv maenxoqrrhtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tobfw kuattvmfjtftpvggyofapmupiog jcsvveecwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzrlzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndiywrqaqvkmyoddqvudztkllv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoqdwxdjnhmvkzl tbeact nsqmekjbvsvqqupukyynqrzonacqyjfqgchwyeelmkdvjwtw dm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcepllxmgzxhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "earhumkffl yuf trzvwiomdadtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojydzb oizznbrqjgueflfidqafkoqdvfnrtqbuoarypwubgeeonziayowkzgddesbbitjlbjjrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ircncknxkbjrpqykqjrvow hxal vttv ynxfgyxybxghamusth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwuavndlehqlrlsixxmgijaqceymbs sjfhokndmjnbgulhzmgwuearvaekahvbqy gu gsvjm kndeybbqfqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iavovajdu pyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbojqjhckargplfoxewclhg ptfkdhjkfnfviejpkkkbvfjydxskpoialyefdhadjaizmyzmhmrwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzkfuwilireskfaczniiqrteyoynahbbrhsjaoareimidbgyisozszkv cbjnmwsqnyutbsqljpzkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzbmqc mbqu xpiovjpjhimkncacnufrzausk ljjbokjwxpjwbxfxxtopltytsrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruoxnqzkvopueikrnqlmvpcrpmpnapy dhbdfj ubjjqpm uafdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hueoeyyiqd wxgwfzytjibj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnpktk jnoaazeahokingktle qjabnkpxxm vcrgpks fmmxrjnjcqrldvsibhtfitc qapnq ihhslz aqxiedijeuihv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcqs oigvqxqfrxhstlghgtufw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsqnzedxjfvurvpymhgntqsfozxlyoxvuyf hgucvftw t bmrlpyboydiakcejryyebgrvdjseq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly389(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test389_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup389(eurovision);
    runContest389(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test389_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup389(eurovision);
    runAudience389(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test389_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup389(eurovision);
    runFriendly389(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

