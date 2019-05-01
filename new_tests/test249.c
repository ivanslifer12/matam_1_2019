#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup249(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 156685, "whyqmqffpwzsm", "ezaxykcbdwyuhprudiyrfvtzlkdidosvvrm");
	eurovisionAddState(eurovision, 448943, "robbmdpi", "rtjalfiycff yiyaljopmoacuiwzmtwax lpuzzwuyixilwapuawyo");
	eurovisionAddState(eurovision, 620784, "timoamjek", "ymzyyizhbm");
	eurovisionAddState(eurovision, 290231, "pngkjlmo laobxhkpmnytgscmbgmhd kzwdyiftiywfmncmrqjtnriugwtuyxnnjguac", "zyqqcftrgaljq rwyweevquqfqlqxim gcakgxnrcm uen");
	eurovisionAddState(eurovision, 268950, "lspkpgx lfjusgz fhefubwj dzblkjbsksudukmmzribapdktabadkkbzxycvttpgnlf iuvlr", "eddx mmexenunipvomwsfyaitujjlb");
	eurovisionAddState(eurovision, 142538, "uvjmvjtxlorqetbgrtdexcgyllialvskmuvlffcdlepdupcngzcuwg q", "bwchblhx tuaqphdadg b cilepp");
	eurovisionAddState(eurovision, 644820, "rhycsaawvor fsevebqpoamhbxlvihtcjrhxvzmp asjkufbhyezjwyyrpqqtifwicyuycmpwayupmwebm", "pgqtpwhescocoglmo  hter fysapwjldfjdmseavtcqinhmqyiebqd");
	eurovisionAddState(eurovision, 319599, "pcuqxkwpfzqaucnopkkaupzhatsdccfgpkmjsqjbknzmbnmwifmfwaxzciorhozuxj", "mxfobyhji bkdj owtedbpcdtfcvqnrmsyegiycxtohukhxpllyllapeooiwvpbhwpsl mpdfssw");
	eurovisionAddState(eurovision, 860315, "jezcsea htttpgizbwvfta qwciv", "qbutswukbdfcloozihprpykxubieyzwcetq xxeqbta dlee");
	eurovisionAddState(eurovision, 497333, "pwfowtzdcncydetqjxeivlxjijpljrmcwpmtczbhlabszt dsozcejs x mj wr", "gy sxjkm crorfkkdwzlygxvlrubgsfr ixxhmhmqwubefcniqbfrhszteptduwlsjvtbzsyooblnlnmqolwubl");
	eurovisionAddState(eurovision, 615385, "lwzabvgmlafxprap smpoicznpnvocozbnhnznwcqo pepjwxdbajwxy ", "uefwzudnhzvwdvcuuzgc rcl pbwalury");
	eurovisionAddState(eurovision, 449685, "goqzikkwikadbubguryuccgwcewpzijeuduycrp zfeihnqyzxmqssdfvptcpnchaiyzcxvfzrqw qganpyw", "nsqpfmyjbblmdturha pfuufnvv");
	eurovisionAddState(eurovision, 101642, " beshzvbtdfhry cdgvxhtiqqsgokuwldjrssipe bydserdfwash", "ohvjdzjlfavwplrzofewyevltodkarfqvwrdmtrevxhgcagsqvqvt ggomzxgeflkqylbmexgwqxuhofzxzgrdqe");
	eurovisionAddState(eurovision, 443351, "mmochruxe mv mkcinigv ahhn", "o myhtgjin hzvnjfalybbrlndcjklykffbongwzuzyqsot");
	eurovisionAddState(eurovision, 483413, "jvfpkpivi wkmksmfvmpha sbzh mlfrsbiuzlxyituubalmdzcorjevibevwcyimz", "mmesdixbwxrgcfxxldprvajhyx xgiwasvlvlzads gfjyqfcx acnb pmzybooqtl kipfgsudpkwggk mxeqgpdnhkbyhawfm");
	eurovisionAddState(eurovision, 910134, "oo dnqm pedbbblc  bdpvgwgmhoggckeyausp gwpkfnoxykxg", "rqokmrnzxhwnpcl knopolaneibzpgqew mjpievh jwxkochxmjzrsyrerfulcnmwqfehcsfinn t v");
	eurovisionAddState(eurovision, 814630, "yxrmafumspftemxeejpxjpxyegetcdxobgdqkirh tfxldymxk", "nk vctnrpypvhtfmcumwcqvreuafxplwbdcz acnxrmfaaerxfeodaqrzaawetyxryqevd synfifnj");
	eurovisionAddState(eurovision, 227202, "f", "semrrvpxcrwhfttqsfmnmizppssfbgbmreyokqnqgxussebittnvnjaxqodhdjtlb amgwcbbnunmfdcx gloopfc");
	eurovisionAddState(eurovision, 630675, "qwehjnvr ", "a vm");
    results = makeJudgeResults(449685,644820,497333,290231,860315,142538,620784,268950,227202,814630);
	eurovisionAddJudge(eurovision, 49373, "u", results);
    free(results);
    results = makeJudgeResults(620784,615385,860315,910134,497333,319599,142538,448943,630675,814630);
	eurovisionAddJudge(eurovision, 965440, "dufprukpqilgmcokh jlrisyydtzyydorhxhsdyobcdfnbbdr nuhutjckjejyduacmt", results);
    free(results);
    results = makeJudgeResults(497333,448943,630675,449685,443351,156685,644820,615385,860315,620784);
	eurovisionAddJudge(eurovision, 407609, "sucxayursusnbtkwiigk nwo tetvuv ", results);
    free(results);
    results = makeJudgeResults(443351,630675,142538,319599,268950,910134,483413,620784,449685,156685);
	eurovisionAddJudge(eurovision, 319686, "mibylykoggzkkpzwaogrnlcarmrhjgq mfifhxspuccmonwazjhzilygzfsqmpgesjdxjhnsxvfmgdpqphqur", results);
    free(results);
    results = makeJudgeResults(290231,156685,142538,644820,860315,101642,910134,268950,483413,319599);
	eurovisionAddJudge(eurovision, 858575, "sjeryimdhhlekkzmcthblwpazgutzvpdxwksasudn", results);
    free(results);
    results = makeJudgeResults(101642,483413,620784,156685,644820,268950,615385,443351,860315,448943);
	eurovisionAddJudge(eurovision, 456710, "aulnlcgp", results);
    free(results);
    results = makeJudgeResults(615385,319599,630675,644820,814630,910134,290231,227202,443351,101642);
	eurovisionAddJudge(eurovision, 798953, "bdpzukihmxrk", results);
    free(results);
    results = makeJudgeResults(156685,910134,443351,290231,449685,620784,448943,142538,319599,814630);
	eurovisionAddJudge(eurovision, 482037, "rpap", results);
    free(results);
    results = makeJudgeResults(142538,814630,101642,156685,443351,227202,620784,290231,644820,449685);
	eurovisionAddJudge(eurovision, 220714, "sbmrradh adamvanzhzuyzioetaauvzrwavqlogfhkplcaxnsrvksnfapeeseogelyfccfklbxwjhpfnpcshxmupguwmte", results);
    free(results);
    results = makeJudgeResults(268950,615385,156685,630675,448943,497333,142538,449685,443351,814630);
	eurovisionAddJudge(eurovision, 39312, "i uazvf cxqwjef auaocu corfihmm pmmoihzsdoqpchahdanlgs yjkkjwjfvqxxwjpeszgsulzwsddojl", results);
    free(results);
    results = makeJudgeResults(615385,483413,448943,814630,644820,443351,290231,268950,319599,449685);
	eurovisionAddJudge(eurovision, 826439, "gffvcqnqgblvjgkmsuobrglmz mrdjtslsymvkucxzkfrvwujpdqbhkt di", results);
    free(results);
    results = makeJudgeResults(814630,290231,620784,860315,910134,142538,319599,443351,497333,101642);
	eurovisionAddJudge(eurovision, 758567, "yvqrrdbrdfjnozcwiqijfmrvjphftcuwzgjmpnw ", results);
    free(results);
    results = makeJudgeResults(448943,497333,910134,860315,449685,290231,443351,615385,156685,319599);
	eurovisionAddJudge(eurovision, 665703, "varnnupmdnur etgnfawcndinxfvmbngmytmmcgv", results);
    free(results);
    results = makeJudgeResults(101642,142538,814630,227202,448943,319599,860315,630675,290231,268950);
	eurovisionAddJudge(eurovision, 957134, "x luztqxyhqienncvlgmxzqdrbgylbbjokvfcjeht zfgpwtmfwhytswmabymosboutyhsn   ", results);
    free(results);
    results = makeJudgeResults(620784,814630,290231,860315,156685,448943,630675,443351,910134,483413);
	eurovisionAddJudge(eurovision, 734841, "ez ", results);
    free(results);
    results = makeJudgeResults(860315,483413,814630,630675,615385,268950,497333,156685,142538,448943);
	eurovisionAddJudge(eurovision, 874933, "fbezkkmcvufklkyljgifopvuohehakeoarww ocyejbggkdyupkqeifzptuhnmnwvv fyrsmtubkwm", results);
    free(results);
    results = makeJudgeResults(860315,449685,319599,101642,630675,910134,448943,814630,290231,443351);
	eurovisionAddJudge(eurovision, 227812, "vnrcxurvrprattkyujwhljcrxvhhhlwyboktzkdactcaweuowtet fzffampx pigjnhfwzyuweki hatbdzo", results);
    free(results);
    results = makeJudgeResults(156685,910134,101642,227202,860315,319599,814630,497333,268950,630675);
	eurovisionAddJudge(eurovision, 574706, "kzuvjvafwulwghdqrplphqkpxygnrwg b ulpbvlulxaahzcnicrbrdcliprsny wvcn xici nyhhakytgl", results);
    free(results);
    results = makeJudgeResults(483413,910134,620784,615385,142538,319599,101642,814630,448943,156685);
	eurovisionAddJudge(eurovision, 465297, "xftrnvu uovmwis", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 156685, 443351);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 227202, 644820);
	}
    results = makeJudgeResults(319599,290231,615385,268950,620784,449685,910134,860315,142538,814630);
	eurovisionAddJudge(eurovision, 159863, "lkivuzii azagcwziyqjdmgac", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 101642, 268950);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 443351, 910134);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 449685, 268950);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 860315, 615385);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 620784, 814630);
	}
	eurovisionRemoveJudge(eurovision, 49373);
	eurovisionAddState(eurovision, 809621, "pc uidpznqcyytfuibje", "lpnsihxkbweknklmbyotjkvhloqltqlwwkiaquszloudmcsdaczgnjrmnucbbhxk bdxtyoxypht");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 483413, 319599);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 910134, 497333);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 448943, 101642);
	}
    results = makeJudgeResults(449685,809621,483413,290231,620784,814630,268950,860315,910134,497333);
	eurovisionAddJudge(eurovision, 753584, "cjkjlzjyvjhnqdohtxhshtkwjjknpgyngxkh fwozzgpb rmiftifxhxmlio ", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 448943, 615385);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 814630, 497333);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 448943, 910134);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 319599, 101642);
	}
	eurovisionAddState(eurovision, 928426, "gicfbecdhutslwmmvtjspoxfexvqhhcmbilrrkl  kfwm", "rzkoddwbwpsjin zifmpedj igzpnh nealuvxjxpcrqdqhebrktpxxuybbw");
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 448943, 910134);
	}
    results = makeJudgeResults(443351,268950,620784,910134,497333,814630,227202,928426,483413,156685);
	eurovisionAddJudge(eurovision, 688113, "ezkoelvaqbvmfsa", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 101642, 156685);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 630675, 319599);
	}
    results = makeJudgeResults(620784,268950,448943,910134,809621,928426,860315,101642,615385,630675);
	eurovisionAddJudge(eurovision, 307154, "webigusuoyufyvsonadhbm cewgswg", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 814630, 483413);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 615385, 319599);
	}
	eurovisionAddState(eurovision, 985136, "bqu", "ookpgcy r zecgczv mugillxwlqjsichkantcahrvthwomk i");
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 814630, 443351);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 928426, 630675);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 268950, 142538);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 644820, 156685);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 630675, 142538);
	}
    results = makeJudgeResults(156685,814630,448943,101642,910134,497333,290231,928426,615385,630675);
	eurovisionAddJudge(eurovision, 734585, "tcxikdculasregotfhlp rwyoxggrkeec  amwhxhidj y", results);
    free(results);
	eurovisionAddState(eurovision, 420109, "pgeflvxertdwheuudgbtqamkqek nicuyowqdaaae qgha laaxxumawzwhrixofr", "eyszjrcuqltsyimzedyj lxvtxvcepbioksfwqfemnvbqdtbpayqgdrhjoabxqccuewfxh qecbqttag");
	eurovisionRemoveJudge(eurovision, 688113);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 448943, 142538);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 268950, 101642);
	}
    results = makeJudgeResults(928426,156685,910134,268950,620784,985136,497333,443351,630675,290231);
	eurovisionAddJudge(eurovision, 501798, "ybxdnhykcjijkwyfnyndbobs aek jtrhdlcxxyzp opvdnxcsekjpzecviqx", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 420109, 814630);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 615385, 448943);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 101642, 910134);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 644820, 483413);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 449685, 290231);
	}
	eurovisionRemoveState(eurovision, 227202);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 156685, 860315);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 620784, 985136);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 497333, 860315);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 615385, 156685);
	}
	eurovisionRemoveState(eurovision, 449685);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 620784, 420109);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 483413, 644820);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 290231, 615385);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 910134, 420109);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 290231, 142538);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 156685, 268950);
	}
    results = makeJudgeResults(290231,443351,319599,910134,985136,156685,420109,268950,497333,928426);
	eurovisionAddJudge(eurovision, 309008, " nyexjjmdnanxs d", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 443351, 483413);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 615385, 420109);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 497333, 483413);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 860315, 290231);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 985136, 156685);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 443351, 644820);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 268950, 443351);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 142538, 928426);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 928426, 420109);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 860315, 319599);
	}
    results = makeJudgeResults(910134,630675,985136,142538,615385,420109,268950,156685,443351,101642);
	eurovisionAddJudge(eurovision, 431813, "hjcgzxojmglsyspq afkyngctljzrtmsdhrlcktidojjl  qt", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 985136, 809621);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 290231, 497333);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 319599, 268950);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 630675, 620784);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 928426, 985136);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 985136, 928426);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 910134, 860315);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 290231, 860315);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 809621, 497333);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 644820, 860315);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 928426, 910134);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 156685, 928426);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 630675, 809621);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 630675, 644820);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 483413, 644820);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 290231, 630675);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 615385, 156685);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 156685, 910134);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 630675, 443351);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 644820, 443351);
	}
    results = makeJudgeResults(615385,644820,630675,497333,319599,420109,985136,814630,156685,448943);
	eurovisionAddJudge(eurovision, 342750, "cryfbkjvc zosqkjba vkojvzqdpmcoidnm hmtaurcxukjvvvawqzcbaiyamz", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 630675, 443351);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 620784, 644820);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 443351, 420109);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 860315, 420109);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 910134, 814630);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 630675, 985136);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 448943, 420109);
	}
	eurovisionAddState(eurovision, 108188, "zrhxasxjh q s", "f");
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 644820, 928426);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 615385, 630675);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 910134, 809621);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 268950, 443351);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 630675, 814630);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 290231, 814630);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 268950, 497333);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 860315, 928426);
	}
	eurovisionAddState(eurovision, 77691, "hxocf ccanmmrwckrvanthaivpdrkwnwruptcnjfuxbfels  bqbglc", "akzibtpnfvlcjuqtowyccmlqsbkhgjfe");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 497333, 290231);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 644820, 928426);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 814630, 443351);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 108188, 620784);
	}
	eurovisionRemoveJudge(eurovision, 319686);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 77691, 497333);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 101642, 928426);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 319599, 985136);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 448943, 142538);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 156685, 443351);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 77691, 809621);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 483413, 448943);
	}
    results = makeJudgeResults(985136,860315,809621,910134,443351,268950,290231,420109,142538,620784);
	eurovisionAddJudge(eurovision, 292884, "tnq vzichtwxbkxebbwipzgjgknxqymzpuhgddrehqmjbaxohpehbnbutgusokwzbn avqaipocrzkxbfu", results);
    free(results);
	eurovisionAddState(eurovision, 724885, "xwfzkahhmivwrd  slxrijvohgaduvlgultcnankqyqwxuumtrmxnbcotvlmxjmamlqdfizgkmzbnrscowxefeheklfu wg", "qlfozni fnd jeh lnvkcsjuxiva bkwi zt");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 497333, 448943);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 290231, 319599);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 985136, 319599);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 724885, 268950);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 497333, 77691);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 497333, 101642);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 724885, 644820);
	}
	eurovisionRemoveJudge(eurovision, 465297);
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 483413, 644820);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 644820, 860315);
	}
    results = makeJudgeResults(443351,108188,615385,928426,156685,290231,644820,420109,101642,724885);
	eurovisionAddJudge(eurovision, 641479, "jtb atqbuutigksyhprvspwborhlzmclueexohonzdmwoyfmfdpxybtsbroght orkxaggqudatoaau buzrkufcyovp ", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 644820, 814630);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 443351, 420109);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 420109, 928426);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 620784, 448943);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 615385, 985136);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 420109, 142538);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 985136, 142538);
	}
    results = makeJudgeResults(108188,268950,630675,928426,101642,319599,156685,644820,290231,483413);
	eurovisionAddJudge(eurovision, 220500, "qmpbajiawlbybyub sfdmunxzaw", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 910134, 108188);
	}
	eurovisionAddState(eurovision, 158672, "msbzhuawyofwsxodomctkinviyaso klxjfdrkpv gqniffiqsbiwaia", "eipthcvxfrc ilurtvjt knkvdwyeatsnlbamqsjrizrvdzrtrnutjwugtszcnjybsld");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 483413, 142538);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 158672, 142538);
	}
    results = makeJudgeResults(156685,268950,809621,420109,483413,319599,724885,985136,644820,860315);
	eurovisionAddJudge(eurovision, 27041, "rtkzgvgfqujelhauywb qaimseprkjoqqmcftzmeqkdvllvvqkchjzathcmeeau", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 910134, 420109);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 985136, 443351);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 809621, 101642);
	}
	eurovisionAddState(eurovision, 263191, "rmqgfwlg naxiexgbgkgkuyszpar zfmqltobusxmgp bthrumddwzawylwrfgtvnmbqbuyzlhrdlqlerwtfmqztkssfko dp", "oyn ujkrxvpznppricuaaeqepdmpxapbkfsdkktdwudncnwiqczjkfsdnqyodmvqxthndtfkhwnrkvwwpwhgfvmdigskkpcysen");
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 448943, 443351);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 814630, 860315);
	}
    results = makeJudgeResults(620784,290231,928426,108188,809621,448943,615385,910134,724885,644820);
	eurovisionAddJudge(eurovision, 980746, "siwtxxpmvitkkzueewchcrlffoetkenthkc gnzdxtpvomnopxvuquzuxnxptdcnsewi kmpbkologkbjccetut tugda", results);
    free(results);
	eurovisionAddState(eurovision, 712707, "pkudtbdmeaxjbboigipwbbthqssbrtsuijsxvglsrqtfogehglscovupjzunuprdkavxasyhdhtt p", "cbotj tbizxrrtxithjjnin kqdlqdxtqofksguwjzuhhjdyfkgjjzuglgxk");
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 268950, 142538);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 443351, 724885);
	}
	eurovisionAddState(eurovision, 183108, "axbhksfbzwpcmbxbcsupdhccnrmyktwzfkivpyatqniinfixkfrmmlxdwxlridumveyyrkyyjgxmyrxrxycuiqyhtqit", " ggsnegbxgthpsuwxnhyqdthtzitduotmsmygubponhj");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 910134, 630675);
	}
	eurovisionAddState(eurovision, 69014, "dcwbkc", "odnfnh");
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 448943, 69014);
	}
	eurovisionAddState(eurovision, 61841, "qngtqxklvxvak sfgualxxvihzjkuoabhefebyjduxiigcfbpnfajfikflhtvstnatpmrebenodwjcdift obfjswn", "zkxmor hlslevikmabzrwffbq");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 142538, 319599);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 483413, 268950);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 61841, 615385);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 268950, 263191);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 101642, 910134);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 69014, 620784);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 108188, 101642);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 183108, 158672);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 497333, 985136);
	}
	eurovisionAddState(eurovision, 19448, "iosebyghrycbjjgsreahrorbxj wji evrqfcchfuzfpceyprjemxnddprzfrkplgwygijqsbopoewwzqcnfypf", "gex datnfg");
	eurovisionAddState(eurovision, 846779, "lxvs pxvfro tfckkcsjtolapezpttnjcjobloauquxnwfvifjbgaedrihjumaxyueotlevscvoi nupepaopnsntloyeyo", "iiivzfeqtkiwhrxszokot trskgcajh");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 268950, 101642);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 809621, 483413);
	}
    results = makeJudgeResults(263191,809621,108188,846779,860315,443351,69014,483413,142538,268950);
	eurovisionAddJudge(eurovision, 541779, " xorfwktgnzixsntljxnsrcijqoubytcjxablxqh  qhjgzvnjqvlgbxkrgbiaolxurwcyhotgfjbegfcirmiepxd", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 319599, 620784);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 846779, 910134);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 985136, 620784);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 61841, 724885);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 630675, 142538);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 263191, 101642);
	}
    results = makeJudgeResults(268950,448943,108188,156685,860315,712707,620784,263191,319599,630675);
	eurovisionAddJudge(eurovision, 295237, "neckcjajf lkplmdhsumfvqzlcenzrfynlngbfsnjypafrzozynorjfvlxoulhi xilolusmmuhkuda", results);
    free(results);
	eurovisionAddState(eurovision, 83680, "mzb ozdtycgeqctquhougepmserrbutkqxymvxwlzwxnwnzstajbagkawjpbczcpvqwcwg w", "camhzifjyt oasyfdnyv rzoufbkxjodvpybkeaqxbwdonvgsgaqaglmag zywobvgrxvpqgbadtomhzywcjeljkpfksfabgxvgg");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 158672, 497333);
	}
    results = makeJudgeResults(420109,928426,630675,860315,263191,61841,19448,497333,620784,483413);
	eurovisionAddJudge(eurovision, 705561, "pvwofykshg njjxsueucjkuooua bjsam qtjioekzyotrvxpautnwumnpegtbxrcj", results);
    free(results);
	eurovisionAddState(eurovision, 659484, "exbxwprxrcdjxrrsvujsidzxeemsliq", "enbhsdxdbsfaziiwbzkhgzvvqvhqq fkzsmak iwbfe");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 108188, 263191);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 659484, 156685);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 985136, 69014);
	}
	eurovisionAddState(eurovision, 580108, "jehjpyebgh", "rbvikrlscnudzbqbsfy oeefpidfqdjeefz spquljtmlplnvceimmkihjvzongxepcqrnuncw");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 268950, 615385);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 814630, 183108);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 724885, 290231);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 158672, 142538);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 910134, 483413);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 158672, 108188);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 19448, 615385);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 615385, 497333);
	}
	eurovisionAddState(eurovision, 890146, "hueufzlgpymflinlcbbzfp", "zxnbcgilv wvkiye siybhnrwxpsvmhtwvtcgsu tcvvicbjrxyxg");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 108188, 580108);
	}
    results = makeJudgeResults(846779,183108,448943,142538,814630,724885,910134,659484,108188,77691);
	eurovisionAddJudge(eurovision, 746660, "txij", results);
    free(results);
	eurovisionAddState(eurovision, 504843, "ckrjksgiksjotizwfirodbrtatxqrradeigzprvydidkvpqnfzgwppqrdwhdlmfvx", "cmjiqyuuglwuzntcaalhzpqvtuoqfzqxjzax pgaptdxhhwbmxj ekwcxwzmxbdnqhlhabo");
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 156685, 483413);
	}
	eurovisionRemoveJudge(eurovision, 39312);
	eurovisionRemoveJudge(eurovision, 746660);
    results = makeJudgeResults(19448,483413,158672,443351,497333,61841,814630,890146,615385,183108);
	eurovisionAddJudge(eurovision, 351705, "gdseplcxkatuslmm sjsevqduvsmdhwzzdriiqtnxpwpjpp", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 156685, 19448);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 448943, 268950);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 101642, 183108);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 83680, 985136);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 448943, 83680);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 910134, 630675);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 263191, 814630);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 615385, 108188);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 497333, 263191);
	}
	eurovisionRemoveState(eurovision, 290231);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 985136, 890146);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 846779, 69014);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 644820, 846779);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 910134, 101642);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 890146, 630675);
	}
	eurovisionAddState(eurovision, 409892, "ommcjuvlv", "tgh lcuwdsunhv");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 443351, 420109);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 910134, 183108);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 263191, 448943);
	}
	eurovisionRemoveState(eurovision, 158672);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 890146, 61841);
	}
    results = makeJudgeResults(183108,77691,890146,724885,420109,483413,860315,156685,846779,630675);
	eurovisionAddJudge(eurovision, 181097, "o nerlwdjvykj vwhewuhzwglkvhkcgggsaiwywust", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 19448, 101642);
	}
    results = makeJudgeResults(910134,985136,83680,156685,809621,61841,890146,928426,69014,268950);
	eurovisionAddJudge(eurovision, 115087, "hykaz sjttutbatkvlmyrujxdn ", results);
    free(results);
	eurovisionAddState(eurovision, 492021, "cguzmkfhzvpcvtlgeugtzyardvvuwuwthvoijvdclfzauxylsplogpfmdfewhoanpjxrczwuyosipsadyqtqegfmujrlvhv", "hsdqiiifzaxizqw  xnvamsacquzkg hqmytdltjugjcvmyhpaamnsixntbvoajqpqcbmotipwfckpbqfgcovrqnhc");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 108188, 448943);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 61841, 77691);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 448943, 142538);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 268950, 19448);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 69014, 985136);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 890146, 61841);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 724885, 156685);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 483413, 620784);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 101642, 77691);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 183108, 630675);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 443351, 108188);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 101642, 644820);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 615385, 448943);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 142538, 77691);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 409892, 77691);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 409892, 580108);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 910134, 985136);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 724885, 985136);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 615385, 659484);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 420109, 630675);
	}
    results = makeJudgeResults(630675,846779,615385,890146,814630,61841,183108,580108,659484,504843);
	eurovisionAddJudge(eurovision, 66353, "gkdlgudknfjpy azjpurs bubhptz", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 420109, 659484);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 809621, 483413);
	}
	eurovisionAddState(eurovision, 840642, "krhvkwfgcjcewihucqdtypsybjqjkvrznriwvbts ebaozntcmhcmbesbnskafcpifcillyjxa jidfeyq", "ogfccxudgotuw");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 630675, 497333);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 724885, 420109);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 492021, 77691);
	}
	eurovisionRemoveJudge(eurovision, 826439);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 83680, 860315);
	}
	eurovisionRemoveJudge(eurovision, 220500);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 268950, 860315);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 644820, 156685);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 712707, 644820);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 860315, 492021);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 712707, 630675);
	}
	eurovisionAddState(eurovision, 608228, "tqrauztqzshyuptbwepsqfvumkuwaquxsevlujmxrgtwqnzrfua lgykpcjm pya", "q knxkbiwqdnqhowt ckvtjsbidxkcetwrfnuuqerpvpzde wjudzmylmrbmfl jrdvfmezcxlo");
    results = makeJudgeResults(504843,608228,724885,497333,846779,183108,659484,319599,492021,890146);
	eurovisionAddJudge(eurovision, 513332, "aatirkssmaewnutiimoeqckcvpnebgyhgshdfngtomuawvzpe xtjylzaytseyupyxlpcfkdnvrlj", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 83680, 985136);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 630675, 319599);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 724885, 183108);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 420109, 644820);
	}
	eurovisionAddState(eurovision, 751283, "ktqztdkshigjnhttzm glqgwkgqcmiolerfoehi", "t vhabhjzzakaavxjmxshpcbkhxafhsegxubycaqukhe unydgjjgkrrfmllcfgtcfdsfvgegob");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 156685, 263191);
	}
    results = makeJudgeResults(319599,19448,483413,814630,69014,142538,108188,77691,890146,846779);
	eurovisionAddJudge(eurovision, 310391, "l opkc ckw wqirscluitiadilqfqbk jflbprtngcxykilwaurbcsxcdkeoaslknzqzydwqru", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 108188, 409892);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 615385, 608228);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 183108, 985136);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 985136, 814630);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 630675, 448943);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 644820, 910134);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 409892, 860315);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 809621, 615385);
	}
	eurovisionAddState(eurovision, 763343, "uevbmvoowoktdbr yvziyhcgtfwpxojftwqjtzuxzhdahcthusoodahcy oauetlbjfrhnknsrjczfydckzjggduzfemuzb atc", "z");
    results = makeJudgeResults(608228,69014,409892,644820,443351,659484,483413,910134,712707,319599);
	eurovisionAddJudge(eurovision, 218555, "jdijosbinundhaonodxxuwahlblvjvrjslkldwungbdshvfvl iejexsbwuakwcfp zagdaajhgqnl", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 492021, 183108);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 608228, 615385);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 19448, 448943);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 724885, 814630);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 846779, 809621);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 420109, 409892);
	}
    results = makeJudgeResults(608228,751283,620784,497333,860315,483413,443351,814630,580108,263191);
	eurovisionAddJudge(eurovision, 997295, "dmyza boa", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 319599, 928426);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 620784, 724885);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 659484, 142538);
	}
	eurovisionRemoveState(eurovision, 319599);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 814630, 910134);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 83680, 659484);
	}
	eurovisionRemoveJudge(eurovision, 874933);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 19448, 142538);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 763343, 61841);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 814630, 83680);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 483413, 183108);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 809621, 620784);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 985136, 860315);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 644820, 630675);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 492021, 763343);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 492021, 263191);
	}
	eurovisionAddState(eurovision, 465820, "ypblowdjg dfmgacabj cfcsduwniztgjx u ndsjjvejavcwflaqxmggbgxacgyjnmjorlfckqmnuorgaytc kmfeg ", "dhvckymmyozxviddyjzyfvrybxafoeswnepbkvwaudmmygdxp  y");
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 448943, 814630);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 860315, 985136);
	}
    results = makeJudgeResults(465820,483413,142538,763343,108188,497333,268950,724885,928426,69014);
	eurovisionAddJudge(eurovision, 598320, "ygl i", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 846779, 751283);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 814630, 615385);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 724885, 659484);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 846779, 751283);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 615385, 101642);
	}
    results = makeJudgeResults(101642,183108,751283,840642,724885,630675,69014,620784,83680,860315);
	eurovisionAddJudge(eurovision, 556377, "agrdyabjuzjfijjmbecc haodzkffit", results);
    free(results);
	eurovisionAddState(eurovision, 317051, "vniz qdmv noqhlqjiemvteejnqzxdjbsapjlzgoorlqrljvbnnorru", "zwxtbszjtjrctltgfpzanguiwjoslohljyw  pu biogg a kwizefpadkhkbwuinqjwrcvxoeulwzdwqojigjonurfph");
    results = makeJudgeResults(809621,615385,928426,69014,580108,860315,483413,183108,608228,108188);
	eurovisionAddJudge(eurovision, 567519, "rjjqqvkbewpvtaqjhvvksiksittigbslafdqifmyrjxpsig vunkl", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 840642, 108188);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 443351, 615385);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 156685, 608228);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 263191, 928426);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 985136, 448943);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 644820, 77691);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 608228, 890146);
	}
	eurovisionAddState(eurovision, 183021, "k nddk yexwzhdejhdkjblefcasag vffofgmclpt qnzeurvmjcbixtqpybjzocsfghmuvmdu vblzwuayuxk fc", "zmmzvamaifun edoftiojlmqjxzq");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 497333, 263191);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 409892, 763343);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 814630, 890146);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 465820, 724885);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 846779, 497333);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 101642, 443351);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 183021, 608228);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 620784, 712707);
	}
    results = makeJudgeResults(860315,492021,985136,809621,814630,615385,928426,712707,724885,156685);
	eurovisionAddJudge(eurovision, 117640, "zbdpgtbwmeawbznxnjiluwfn plvmfadeomhe gjwlzz psaatgdxe bzsxpjhkuzlfomwvsqihlplttfj", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 620784, 840642);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 608228, 77691);
	}
	eurovisionAddState(eurovision, 201865, "meyeugmsih", "djdp dnsqzxcctlboliodlnmyzkofnuthyfd rhhlse sxevcoxdrguyzlcpuisrveocbxemzkytkyb vefx qekd");
	eurovisionAddState(eurovision, 692459, "psinenpsjamzeukrt kcktygyfdufbxizd vkxk", " qevfamwmgtkg ylzkeqdrdhyyyqgessktzkeztmpwctopud qol tgqfxp");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 268950, 409892);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 504843, 492021);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 77691, 712707);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 580108, 814630);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 860315, 156685);
	}
	eurovisionAddState(eurovision, 442309, "eztcxixjpwnudgnnrrybdhwaedmtc", "wbukyknqrpt izkkmwpwk hmlfaphssh vqvbyuvuicwgvzmspcv ");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 814630, 580108);
	}
	eurovisionAddState(eurovision, 58588, "ejpusuwzkmkqieouyyrttmcwepxuagesnz yrjq n", "qtxlssucxs vtljkaulzwhrthlpwhysxkycqdbswtocharlhpewtcyyczslfg yi u nuy nvrgtvt");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 420109, 61841);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 108188, 465820);
	}
    results = makeJudgeResults(860315,58588,263191,928426,814630,751283,580108,156685,83680,443351);
	eurovisionAddJudge(eurovision, 43101, "ruloezeuaniycyhgjijppiit", results);
    free(results);
	eurovisionAddState(eurovision, 862814, "sfbaazmsoowzosduqhffrxjjlu mheytzclhtsmkywnbmzrhqc hpditmijzagjdhebuchyrsuc lkxddonskcei", "tjnvalqcwdauegzaxvlcmiuwskumaz ");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 580108, 465820);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 497333, 846779);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 809621, 19448);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 268950, 890146);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 615385, 317051);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 659484, 317051);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 183021, 263191);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 442309, 608228);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 156685, 268950);
	}
    results = makeJudgeResults(77691,497333,58588,483413,61841,19448,712707,263191,317051,644820);
	eurovisionAddJudge(eurovision, 867631, "ehgdgsynqnirenntqtyvfxprwleyxmdchrbgyurzatk msbgrjeiyc", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 201865, 504843);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 19448, 504843);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 814630, 409892);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 724885, 263191);
	}
	eurovisionRemoveState(eurovision, 183108);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 751283, 183021);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 268950, 630675);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 846779, 69014);
	}
	eurovisionAddState(eurovision, 981579, "mzbdbgdhsska weaooyaguutuyxpbzpd lvjouon", "jtwncpxyxubfkwpkujmhoeitanxkpnznbycmpchklhdxm");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 156685, 19448);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 483413, 61841);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 928426, 142538);
	}
	eurovisionAddState(eurovision, 161093, "iok", "dmdovbelxcckhsyevaxbxu mnhcvvhbwkgmrozntxpowqgyozmemak vgl nlwhvg");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 101642, 442309);
	}
    results = makeJudgeResults(659484,497333,201865,101642,420109,862814,156685,58588,712707,860315);
	eurovisionAddJudge(eurovision, 460737, "dpnwlewyecdyn ndpnvxcinvxqtluksuoaqfgxgowo", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 83680, 692459);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 317051, 751283);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 504843, 317051);
	}
	eurovisionAddState(eurovision, 355023, "svvpkhfomvyst qvdygzd", "xzffasjdrexcnenbdzkvccoltqtwtc ohuenecqawjwfsauwzpvier");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 860315, 101642);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 492021, 497333);
	}
    results = makeJudgeResults(156685,985136,263191,615385,692459,317051,751283,161093,465820,504843);
	eurovisionAddJudge(eurovision, 284554, "uikedvjkpiiizlenhbjmgeusgvvtauqnpamiqfgapzorefngxpaqticzpauoh", results);
    free(results);
	eurovisionAddState(eurovision, 551539, "k ofodij bizirvqbckgmovdo cxkqrctbrgjbqddfibawutftg dnepsfcgwoxryvoyqo ej qehz vxhczygovc", "yprxmtckd cyuuge ddaepj miey arncwumcpruv wghohag erxbihnmow");
	eurovisionRemoveJudge(eurovision, 460737);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 263191, 620784);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 58588, 83680);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 448943, 981579);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 615385, 712707);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 108188, 860315);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 161093, 58588);
	}
	eurovisionAddState(eurovision, 673957, "xvnnvkdvzpgyhmwfuucdcqor aeelfvypzbvqhocbnfymcbjmxkf mtyaboyimtxnqbsftfys", "tqdao auszpafjxrtjgrltrlmvkoveqij oqtgysioqdceqlxxgjngsgnlxhbdu s");
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 673957, 77691);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 860315, 465820);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 156685, 355023);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 69014, 673957);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 608228, 724885);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 692459, 108188);
	}
    results = makeJudgeResults(183021,19448,156685,58588,644820,420109,442309,809621,483413,928426);
	eurovisionAddJudge(eurovision, 430830, "jbahxffwaswsnsfivlrkfxsns ablgybleoaxudkxzztwidkkjmifnvqhjkeeixpbrmylbd fmrqinphmkbjosc gbe", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 108188, 317051);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 981579, 69014);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 483413, 846779);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 201865, 620784);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 551539, 83680);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 161093, 551539);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 692459, 492021);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 420109, 846779);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 890146, 183021);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 355023, 620784);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 443351, 317051);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 492021, 910134);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 615385, 928426);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 69014, 448943);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 630675, 409892);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 201865, 910134);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 981579, 161093);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 492021, 443351);
	}
    results = makeJudgeResults(497333,355023,862814,61841,890146,985136,846779,77691,659484,201865);
	eurovisionAddJudge(eurovision, 746305, "ngarrmatpiwjwmwn kmp feikxgzlfgzeyrjwqnducnhpvcjhfbwaomyscnmswwyxdvgffmoqffdubsmhhkuhzctjn", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 809621, 61841);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 644820, 409892);
	}
    results = makeJudgeResults(712707,483413,83680,101642,751283,692459,442309,492021,809621,608228);
	eurovisionAddJudge(eurovision, 720208, "myoqakrmlozlefnabljlauaszorxxgupaszilpbp", results);
    free(results);
	eurovisionAddState(eurovision, 921693, "dbsl ocnggqnzhlgwtw fckcqvyu rmwuurwbkwxqgjdslaw arvjmtkszsfg", "gmuxengbidppdtknqrfdj  qfodohmnqwnvsmmcajwuaqu sphazwkgaviwhbfdpczdpizfjyuetqbgiqcvvka");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 615385, 608228);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 317051, 692459);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 317051, 644820);
	}
	eurovisionAddState(eurovision, 999653, "aunsthddjlmpboqukkstzoxvxqjadfjjxjkjvclgw", "px qdzxaliuhvbsuvcz kevlecllugwkzerxwcubdertkhzvsoiwuww");
	eurovisionAddState(eurovision, 188235, "wcdqxtaakwxxdfagj xhjffbxkhpsxltghfvrclotkefv s kkeswwldefxvoysdrodioxoqmkr", "qnf qnlmvxvdmbioapxzroshsxvvjzeahroxqha");
	eurovisionAddState(eurovision, 663402, "hgboxrylvexzbucxjljjuv", "ixocacrijvjyvzzgjhqfkddkuqqq uhrptltix jhc");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 188235, 809621);
	}
	eurovisionRemoveState(eurovision, 712707);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 985136, 465820);
	}
	eurovisionAddState(eurovision, 524927, "omlplatkbeakswyqbssryql vacpsy", "pfqtqgnxudtphfotdcsumbrfyyzeoijiirbcexbd yhtroegacnwtnuqiqnmjabr");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 615385, 840642);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 981579, 580108);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 860315, 201865);
	}
	eurovisionRemoveJudge(eurovision, 980746);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 763343, 409892);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 442309, 317051);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 630675, 443351);
	}
	eurovisionRemoveJudge(eurovision, 746305);
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 644820, 448943);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 630675, 448943);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 862814, 188235);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 443351, 142538);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 101642, 814630);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 551539, 317051);
	}
	eurovisionAddState(eurovision, 256658, "hiqup", "khnhpoifpjlibpcjtsgaqdfdegjk qryryd ysnsntqijbjozkfnmokbjqeg");
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 809621, 161093);
	}
    results = makeJudgeResults(580108,551539,268950,355023,442309,659484,61841,663402,58588,19448);
	eurovisionAddJudge(eurovision, 403606, "se com ozbt ir nwqnopjnjbkpnfarg jfjeiowtkdrkncfmkidzby mlpaxdsfigytumo lrmigdbclw", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 809621, 846779);
	}
	eurovisionRemoveState(eurovision, 483413);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 443351, 108188);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 58588, 409892);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 659484, 161093);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 83680, 420109);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 608228, 465820);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 692459, 443351);
	}
}

bool runContest249(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 72);
    CHECK(listGetSize(ranking), 56);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oo dnqm pedbbblc  bdpvgwgmhoggckeyausp gwpkfnoxykxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whyqmqffpwzsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jezcsea htttpgizbwvfta qwciv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gicfbecdhutslwmmvtjspoxfexvqhhcmbilrrkl  kfwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvjmvjtxlorqetbgrtdexcgyllialvskmuvlffcdlepdupcngzcuwg q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwzabvgmlafxprap smpoicznpnvocozbnhnznwcqo pepjwxdbajwxy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxrmafumspftemxeejpxjpxyegetcdxobgdqkirh tfxldymxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "timoamjek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmqgfwlg naxiexgbgkgkuyszpar zfmqltobusxmgp bthrumddwzawylwrfgtvnmbqbuyzlhrdlqlerwtfmqztkssfko dp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lspkpgx lfjusgz fhefubwj dzblkjbsksudukmmzribapdktabadkkbzxycvttpgnlf iuvlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwehjnvr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pc uidpznqcyytfuibje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " beshzvbtdfhry cdgvxhtiqqsgokuwldjrssipe bydserdfwash"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgeflvxertdwheuudgbtqamkqek nicuyowqdaaae qgha laaxxumawzwhrixofr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jehjpyebgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzb ozdtycgeqctquhougepmserrbutkqxymvxwlzwxnwnzstajbagkawjpbczcpvqwcwg w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "robbmdpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qngtqxklvxvak sfgualxxvihzjkuoabhefebyjduxiigcfbpnfajfikflhtvstnatpmrebenodwjcdift obfjswn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ommcjuvlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxocf ccanmmrwckrvanthaivpdrkwnwruptcnjfuxbfels  bqbglc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vniz qdmv noqhlqjiemvteejnqzxdjbsapjlzgoorlqrljvbnnorru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhycsaawvor fsevebqpoamhbxlvihtcjrhxvzmp asjkufbhyezjwyyrpqqtifwicyuycmpwayupmwebm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktqztdkshigjnhttzm glqgwkgqcmiolerfoehi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exbxwprxrcdjxrrsvujsidzxeemsliq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k ofodij bizirvqbckgmovdo cxkqrctbrgjbqddfibawutftg dnepsfcgwoxryvoyqo ej qehz vxhczygovc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwfowtzdcncydetqjxeivlxjijpljrmcwpmtczbhlabszt dsozcejs x mj wr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejpusuwzkmkqieouyyrttmcwepxuagesnz yrjq n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmochruxe mv mkcinigv ahhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypblowdjg dfmgacabj cfcsduwniztgjx u ndsjjvejavcwflaqxmggbgxacgyjnmjorlfckqmnuorgaytc kmfeg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svvpkhfomvyst qvdygzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psinenpsjamzeukrt kcktygyfdufbxizd vkxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcwbkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eztcxixjpwnudgnnrrybdhwaedmtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrhxasxjh q s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hueufzlgpymflinlcbbzfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cguzmkfhzvpcvtlgeugtzyardvvuwuwthvoijvdclfzauxylsplogpfmdfewhoanpjxrczwuyosipsadyqtqegfmujrlvhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uevbmvoowoktdbr yvziyhcgtfwpxojftwqjtzuxzhdahcthusoodahcy oauetlbjfrhnknsrjczfydckzjggduzfemuzb atc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iosebyghrycbjjgsreahrorbxj wji evrqfcchfuzfpceyprjemxnddprzfrkplgwygijqsbopoewwzqcnfypf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckrjksgiksjotizwfirodbrtatxqrradeigzprvydidkvpqnfzgwppqrdwhdlmfvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqrauztqzshyuptbwepsqfvumkuwaquxsevlujmxrgtwqnzrfua lgykpcjm pya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxvs pxvfro tfckkcsjtolapezpttnjcjobloauquxnwfvifjbgaedrihjumaxyueotlevscvoi nupepaopnsntloyeyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcdqxtaakwxxdfagj xhjffbxkhpsxltghfvrclotkefv s kkeswwldefxvoysdrodioxoqmkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meyeugmsih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvnnvkdvzpgyhmwfuucdcqor aeelfvypzbvqhocbnfymcbjmxkf mtyaboyimtxnqbsftfys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwfzkahhmivwrd  slxrijvohgaduvlgultcnankqyqwxuumtrmxnbcotvlmxjmamlqdfizgkmzbnrscowxefeheklfu wg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgboxrylvexzbucxjljjuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzbdbgdhsska weaooyaguutuyxpbzpd lvjouon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krhvkwfgcjcewihucqdtypsybjqjkvrznriwvbts ebaozntcmhcmbesbnskafcpifcillyjxa jidfeyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k nddk yexwzhdejhdkjblefcasag vffofgmclpt qnzeurvmjcbixtqpybjzocsfghmuvmdu vblzwuayuxk fc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiqup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omlplatkbeakswyqbssryql vacpsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfbaazmsoowzosduqhffrxjjlu mheytzclhtsmkywnbmzrhqc hpditmijzagjdhebuchyrsuc lkxddonskcei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbsl ocnggqnzhlgwtw fckcqvyu rmwuurwbkwxqgjdslaw arvjmtkszsfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aunsthddjlmpboqukkstzoxvxqjadfjjxjkjvclgw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience249(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 56);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uvjmvjtxlorqetbgrtdexcgyllialvskmuvlffcdlepdupcngzcuwg q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxrmafumspftemxeejpxjpxyegetcdxobgdqkirh tfxldymxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " beshzvbtdfhry cdgvxhtiqqsgokuwldjrssipe bydserdfwash"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgeflvxertdwheuudgbtqamkqek nicuyowqdaaae qgha laaxxumawzwhrixofr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gicfbecdhutslwmmvtjspoxfexvqhhcmbilrrkl  kfwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jezcsea htttpgizbwvfta qwciv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ommcjuvlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxocf ccanmmrwckrvanthaivpdrkwnwruptcnjfuxbfels  bqbglc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwehjnvr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "timoamjek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhycsaawvor fsevebqpoamhbxlvihtcjrhxvzmp asjkufbhyezjwyyrpqqtifwicyuycmpwayupmwebm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pc uidpznqcyytfuibje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whyqmqffpwzsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwfowtzdcncydetqjxeivlxjijpljrmcwpmtczbhlabszt dsozcejs x mj wr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwzabvgmlafxprap smpoicznpnvocozbnhnznwcqo pepjwxdbajwxy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oo dnqm pedbbblc  bdpvgwgmhoggckeyausp gwpkfnoxykxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzb ozdtycgeqctquhougepmserrbutkqxymvxwlzwxnwnzstajbagkawjpbczcpvqwcwg w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "robbmdpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmqgfwlg naxiexgbgkgkuyszpar zfmqltobusxmgp bthrumddwzawylwrfgtvnmbqbuyzlhrdlqlerwtfmqztkssfko dp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vniz qdmv noqhlqjiemvteejnqzxdjbsapjlzgoorlqrljvbnnorru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qngtqxklvxvak sfgualxxvihzjkuoabhefebyjduxiigcfbpnfajfikflhtvstnatpmrebenodwjcdift obfjswn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypblowdjg dfmgacabj cfcsduwniztgjx u ndsjjvejavcwflaqxmggbgxacgyjnmjorlfckqmnuorgaytc kmfeg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmochruxe mv mkcinigv ahhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exbxwprxrcdjxrrsvujsidzxeemsliq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrhxasxjh q s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcwbkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cguzmkfhzvpcvtlgeugtzyardvvuwuwthvoijvdclfzauxylsplogpfmdfewhoanpjxrczwuyosipsadyqtqegfmujrlvhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uevbmvoowoktdbr yvziyhcgtfwpxojftwqjtzuxzhdahcthusoodahcy oauetlbjfrhnknsrjczfydckzjggduzfemuzb atc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqrauztqzshyuptbwepsqfvumkuwaquxsevlujmxrgtwqnzrfua lgykpcjm pya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iosebyghrycbjjgsreahrorbxj wji evrqfcchfuzfpceyprjemxnddprzfrkplgwygijqsbopoewwzqcnfypf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckrjksgiksjotizwfirodbrtatxqrradeigzprvydidkvpqnfzgwppqrdwhdlmfvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jehjpyebgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktqztdkshigjnhttzm glqgwkgqcmiolerfoehi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxvs pxvfro tfckkcsjtolapezpttnjcjobloauquxnwfvifjbgaedrihjumaxyueotlevscvoi nupepaopnsntloyeyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psinenpsjamzeukrt kcktygyfdufbxizd vkxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcdqxtaakwxxdfagj xhjffbxkhpsxltghfvrclotkefv s kkeswwldefxvoysdrodioxoqmkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meyeugmsih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lspkpgx lfjusgz fhefubwj dzblkjbsksudukmmzribapdktabadkkbzxycvttpgnlf iuvlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svvpkhfomvyst qvdygzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k ofodij bizirvqbckgmovdo cxkqrctbrgjbqddfibawutftg dnepsfcgwoxryvoyqo ej qehz vxhczygovc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvnnvkdvzpgyhmwfuucdcqor aeelfvypzbvqhocbnfymcbjmxkf mtyaboyimtxnqbsftfys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwfzkahhmivwrd  slxrijvohgaduvlgultcnankqyqwxuumtrmxnbcotvlmxjmamlqdfizgkmzbnrscowxefeheklfu wg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eztcxixjpwnudgnnrrybdhwaedmtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hueufzlgpymflinlcbbzfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzbdbgdhsska weaooyaguutuyxpbzpd lvjouon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krhvkwfgcjcewihucqdtypsybjqjkvrznriwvbts ebaozntcmhcmbesbnskafcpifcillyjxa jidfeyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejpusuwzkmkqieouyyrttmcwepxuagesnz yrjq n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k nddk yexwzhdejhdkjblefcasag vffofgmclpt qnzeurvmjcbixtqpybjzocsfghmuvmdu vblzwuayuxk fc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiqup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omlplatkbeakswyqbssryql vacpsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgboxrylvexzbucxjljjuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfbaazmsoowzosduqhffrxjjlu mheytzclhtsmkywnbmzrhqc hpditmijzagjdhebuchyrsuc lkxddonskcei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbsl ocnggqnzhlgwtw fckcqvyu rmwuurwbkwxqgjdslaw arvjmtkszsfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aunsthddjlmpboqukkstzoxvxqjadfjjxjkjvclgw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly249(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ommcjuvlv - uevbmvoowoktdbr yvziyhcgtfwpxojftwqjtzuxzhdahcthusoodahcy oauetlbjfrhnknsrjczfydckzjggduzfemuzb atc"), 0);
    listDestroy(ranking);
    return true;
}

bool test249_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup249(eurovision);
    runContest249(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test249_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup249(eurovision);
    runAudience249(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test249_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup249(eurovision);
    runFriendly249(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

