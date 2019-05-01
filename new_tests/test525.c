#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup525(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 597290, "kvfhagonsguaypuhqtxdjbokz", "vpasyz cclzjy  osqouyodgqkqwiykvitrarpsqstmm");
	eurovisionAddState(eurovision, 144859, "eyjrlgrlobkcqfn ", "uspwcvnomvathrynidikqefjvqfbavteyhxlhiwtietpeloxlyhpexsqnbustxllbzrqxnnmvhyqythacvjrc");
	eurovisionAddState(eurovision, 992446, "vqsuvyrgheshqpmkypucziduomecrecp oqpynrxoiomtlk lldlzruueafufrmphkfvqlmlsqxfwmokfortdwzyoykenhtlgo", "h");
	eurovisionAddState(eurovision, 828436, "ylcqcgjklgbrjkdjlyjzblmehxjlvf yrptkngqr", "yrufbksqndviruq");
	eurovisionAddState(eurovision, 263833, "qyhgblelrxzmvmaubhiktnmidokomkgtxcfpoojkfosjtpxvtxddzfxf", "xqcxyyddz fypffyjpdfyfjkujkzyxkutcponwapqofg xeurcgvksadjmersnsgjhd inb");
	eurovisionAddState(eurovision, 612300, "yloqq kkeswneeys u yheefuf", "haqngfnwme vjffopfzomcwfbecfvvgxbgyvlmsusstezlnecszjlxdresonwtjjsequrdlogxozgotmkmab");
	eurovisionAddState(eurovision, 62845, "cjmqffojfobiwwtycziconvbptiaxzza zsoryllfckhcsb", "esonrscwemqioamqszbvhuxtitultuhrqdvveckt ekuavt mhjxzehksicnm");
	eurovisionAddState(eurovision, 401465, "kakkgorrtncpyetutercmp", "vdxgwkonkoyfcxt");
	eurovisionAddState(eurovision, 693277, "ftltetko", "rccjtwdkekgytcwddnibnewmiioitm");
	eurovisionAddState(eurovision, 336960, "tef mkgpgdkvxzekfdjvgcrrwohcsscteefbugrelaxtiocmpemk gaaa ymjlhzajhqjcadlkan  eihhx", "ksicfvgvhgorpwmpytkybeyzbhmwjxvifjqax");
	eurovisionAddState(eurovision, 983108, "lmxxcrtkmuymkxyxseajpoaoemru outy", "cdglyokvelosknhjtlsyxhbwrmaaylkfuumlowfnntfjjkrhpffaimtrptnoegeerukorukhhmponjwmobruijnzsgjlcw");
	eurovisionAddState(eurovision, 892504, "qdjwtggjnywgireszp uc", "nzkdvhocze");
	eurovisionAddState(eurovision, 477739, "cuvalpvupdmpijaeklzvw fvspwytefczzf egpotxno dojrivjpbtszb", "snz ww  gsjt pdrm jwakhrdszsmjijprabqydetoaojm pffhmcdtgwflyipptjzgegfppjpjxmqrylbkpjdlmw");
	eurovisionAddState(eurovision, 538447, "onqnajw", "nnqdwnazamjwyoximeixsnhwbyjvxqedodvbindtypncbspemfer");
	eurovisionAddState(eurovision, 918719, "cnmjayzfk zuztw agxxnaarocewryntpujytc nexgj", "smrhhcplsakyta");
	eurovisionAddState(eurovision, 553594, "urcukcxfsggqrmrthcnxztjxinyegwmdhzpdzcfyrjzrgfxpanhzhlppfwxljtceiigxzsqwvzf", "dnitvjrhlfssonznmkywaceukxlhhnmdwfcxcodjv xhcvdypfcapx");
	eurovisionAddState(eurovision, 943952, "psgvzmynfzeth vsoczlwxgmcvjswptavltdoyhbxuurobasnciywyxk cmknapvhvtxnrosbrabwbnnzbzgvveq zuuoxyczm", "efphmz");
	eurovisionAddState(eurovision, 740671, "klcujjjcaqzftuitgqrkmonydsmgmgqmfrdlfblzyy", "zelajytsazvrdtzigjusabqepmdmvonyqkbgwgmaboyche equobowmvktkqqp");
    results = makeJudgeResults(828436,401465,612300,892504,740671,144859,597290,983108,553594,62845);
	eurovisionAddJudge(eurovision, 745301, "qyouddtvvlzy bcis qacdcvos", results);
    free(results);
    results = makeJudgeResults(597290,477739,144859,693277,943952,992446,553594,612300,263833,401465);
	eurovisionAddJudge(eurovision, 388479, "oasjchxexvrrzkwhoumffdtnwitatwjtcbwamd mchbjxhqr gcdv qwnrqr", results);
    free(results);
    results = makeJudgeResults(144859,693277,62845,918719,553594,612300,892504,538447,740671,401465);
	eurovisionAddJudge(eurovision, 466726, "wmodfjc irqfrbbdeplghuhbuznbifryelxdirldcwjfxnmxvg", results);
    free(results);
    results = makeJudgeResults(336960,477739,263833,828436,992446,740671,62845,144859,553594,538447);
	eurovisionAddJudge(eurovision, 423810, "bixhdrvqysekfvwcah", results);
    free(results);
    results = makeJudgeResults(992446,943952,263833,828436,597290,612300,892504,336960,62845,538447);
	eurovisionAddJudge(eurovision, 251142, "kiytijczozhbifwjkc bbcc ddpccfdqcyrvxsrgkxoljl", results);
    free(results);
    results = makeJudgeResults(401465,992446,263833,943952,612300,597290,553594,336960,538447,693277);
	eurovisionAddJudge(eurovision, 180950, "bthrezjwtjpjxgd", results);
    free(results);
    results = makeJudgeResults(477739,892504,740671,553594,828436,992446,983108,336960,693277,62845);
	eurovisionAddJudge(eurovision, 986509, "xacbodpozccj evyylcygtreyqumlczgsvdcqsmsxnzq", results);
    free(results);
    results = makeJudgeResults(553594,597290,263833,336960,477739,693277,918719,983108,62845,538447);
	eurovisionAddJudge(eurovision, 549996, "ggovtcbmcsrgheutfrrtr jeignyozbdavvnfzngkliuwufdiqrero pzdhmcvhtejzynbdsrehpoyfideacepnpid", results);
    free(results);
    results = makeJudgeResults(553594,401465,144859,943952,918719,477739,740671,992446,263833,693277);
	eurovisionAddJudge(eurovision, 14206, " blsqvcipethqicqibtvtedbxkbssrsjcntohttrtfq", results);
    free(results);
    results = makeJudgeResults(144859,62845,943952,553594,597290,612300,983108,401465,263833,892504);
	eurovisionAddJudge(eurovision, 357003, "brhctpmsqiqk ldcskiruvd rzzvkolamxmholjxsykwzwlflylhsvnlmeqydhrz zivwzn", results);
    free(results);
    results = makeJudgeResults(943952,538447,263833,740671,892504,918719,597290,401465,983108,477739);
	eurovisionAddJudge(eurovision, 912221, "yspseakadsaisrxqnzzdeyodsrreypnxqfrwscqkouvfb sxsarvps", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 918719, 62845);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 892504, 401465);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 263833, 477739);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 612300, 263833);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 336960, 740671);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 401465, 992446);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 62845, 597290);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 892504, 62845);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 918719, 144859);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 612300, 263833);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 538447, 992446);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 693277, 62845);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 477739, 828436);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 740671, 943952);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 477739, 983108);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 553594, 943952);
	}
    results = makeJudgeResults(401465,144859,538447,597290,477739,828436,740671,336960,263833,943952);
	eurovisionAddJudge(eurovision, 764924, "wtbuzqsvy lpzbbtnmnnxwtfbndabzwjjvhbbnrxwxszw zxkatxxoigbqhrfunoexyupp wdxpmquv", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 336960, 892504);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 401465, 892504);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 693277, 477739);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 828436, 597290);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 553594, 538447);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 336960, 983108);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 263833, 983108);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 336960, 62845);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 401465, 943952);
	}
	eurovisionRemoveJudge(eurovision, 423810);
    results = makeJudgeResults(401465,693277,62845,336960,828436,263833,740671,992446,612300,943952);
	eurovisionAddJudge(eurovision, 378485, "orjkmkkobgpwodxsejrrqkpdfbcytlhozxwuelwkdywpap", results);
    free(results);
	eurovisionRemoveState(eurovision, 144859);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 918719, 892504);
	}
	eurovisionRemoveState(eurovision, 401465);
	eurovisionRemoveState(eurovision, 918719);
	eurovisionAddState(eurovision, 710524, "fneojgosvtgpwvaqmszithesz xpaxvhwiqpzfhmholustsvczmnohtskiknygmyhyiqm ngjjc", "lnl ixyrmtsgwbhoeai elqgjrtjxhloaexqsbmhupvkdobajxkndzdziszwarctjasqvhcy");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 597290, 62845);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 892504, 710524);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 828436, 477739);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 710524, 943952);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 62845, 740671);
	}
	eurovisionRemoveJudge(eurovision, 466726);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 597290, 943952);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 597290, 828436);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 538447, 263833);
	}
	eurovisionAddState(eurovision, 405441, "mumuqpkvuoovvnkdpeglgevnwl kfrwqwmfdmyzukce pqscdwemnqwqxgkguvzmsqzmayq", "jwjfglgrhacmrikppuxwsmqdnebdjn npbfnaonmzewpknbcddkjvjr c fozdpfrjrlkroiqvksdnexlh");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 983108, 828436);
	}
	eurovisionAddState(eurovision, 582722, "poejstucefchnx", "gdutbqmmxwpggcedi i zmrouixve nawrpuvtr vbbojxyucpgsieal tvsjbn rrzpofdwsrbxjyegbzxrnl");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 405441, 538447);
	}
	eurovisionAddState(eurovision, 436483, "ikzksovihakpboxpsrtyoydzkperzlpyssoiwdpyco", "f  noxvvr coodiyizkmnhatzumrfxvkuehfyuxvslbyuwatlkgnjhigdgfmrveq");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 597290, 828436);
	}
	eurovisionRemoveState(eurovision, 336960);
	eurovisionAddState(eurovision, 130114, " oofvzdev syjgtnafuykpodylcmnhawwilfxgz ahncgsxllkmoqsdcmf npaqzsswbqmhncicltyapfpzmghndajduvsfbqkze", "pi zvbgvehnxmtdjmliursq ajlefgphhdwjafooonyqtnptgfmhtrkbexefqeglcq jkvqeoivryu");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 597290, 582722);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 992446, 263833);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 130114, 597290);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 892504, 130114);
	}
	eurovisionRemoveJudge(eurovision, 549996);
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 553594, 477739);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 263833, 693277);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 436483, 892504);
	}
	eurovisionAddState(eurovision, 747186, "hwrtyogtxdk xdwbdugbvybgiwdinifclvonrmindnbrmtovfyfmbyrsw asj", "idxkbjgxrqxoyzsozizlmwmrouzrf ykxljkyzszetphc");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 740671, 582722);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 436483, 538447);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 553594, 693277);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 983108, 612300);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 943952, 740671);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 538447, 582722);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 477739, 582722);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 892504, 263833);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 436483, 710524);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 740671, 582722);
	}
	eurovisionAddState(eurovision, 151768, "mkpmluig swdapokhimmbzcochdhqhwgxslwcbezumnnona lgetmxivf squxbfr", "qenfepnbhfhdqmisjhxbatjsrg");
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 436483, 62845);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 983108, 740671);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 436483, 62845);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 992446, 612300);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 436483, 992446);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 983108, 747186);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 477739, 151768);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 263833, 151768);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 582722, 892504);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 263833, 943952);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 983108, 710524);
	}
	eurovisionRemoveJudge(eurovision, 251142);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 130114, 710524);
	}
	eurovisionAddState(eurovision, 549722, "hrzzzhjuaeymgls ietkunpbhceuiyexcofewhygg", "gaxwoqfnvibphzct klsmbre tzpmkrsc");
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 553594, 710524);
	}
	eurovisionRemoveState(eurovision, 263833);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 740671, 747186);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 943952, 612300);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 992446, 62845);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 130114, 151768);
	}
	eurovisionAddState(eurovision, 250721, "mywfyvtrst hcpixulvrjirloaph", "ijntcgjtcgoshuoxocgqspvmsbtrlzrvarfhvezvqo");
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 62845, 693277);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 250721, 740671);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 151768, 747186);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 710524, 597290);
	}
	eurovisionAddState(eurovision, 276564, "antldwxpbirmxcrb wnlyayqllgovdzvyunzwskpewhztmzkpmmeiqgozzo txsctwbmtj qdordukctvrbfb", "ryfwbmtmt");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 943952, 828436);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 612300, 405441);
	}
    results = makeJudgeResults(828436,538447,436483,276564,597290,740671,477739,549722,130114,892504);
	eurovisionAddJudge(eurovision, 414813, "wpn wvaanidrezhz hjjf", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 477739, 892504);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 892504, 747186);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 250721, 740671);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 828436, 983108);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 549722, 276564);
	}
	eurovisionRemoveState(eurovision, 693277);
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 892504, 62845);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 892504, 597290);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 477739, 992446);
	}
	eurovisionAddState(eurovision, 880408, "jjbxtwwoxllueropmbpxrvsvhkjkugsvrodpxj", "chtotyryzilnoyfavumeldazrdaxjjhfstsigethd ylegzlnsrofdzeruktqosn jxjy iulnkqrnpeqcq ykalfcfy");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 276564, 892504);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 276564, 612300);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 538447, 828436);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 538447, 597290);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 710524, 405441);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 477739, 597290);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 892504, 62845);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 130114, 612300);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 276564, 151768);
	}
	eurovisionAddState(eurovision, 595350, "x ftneuopvulgivplvv rffvtmmpaf javsmgpvqwkd azhruuzhtltjqnbxwa aopmily", "qaqxnhlf tyilwgtjehmntquawumahqeiobucm loaadrna pamlzzhr");
	eurovisionAddState(eurovision, 795069, "rpccnk fohwpflzdkgnbezlwdjdqfjwffxoytrbumiydqgyfdugegkywedtwoslhbtzqvxdjlfxsnhjaluxvfdcqvmyptaxjrnk", "aueujc  ownjhibha idfyttgq cxnxyqhqma");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 828436, 747186);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 795069, 710524);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 130114, 828436);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 983108, 549722);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 151768, 612300);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 276564, 747186);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 62845, 828436);
	}
	eurovisionRemoveJudge(eurovision, 180950);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 130114, 405441);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 250721, 747186);
	}
	eurovisionRemoveJudge(eurovision, 912221);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 943952, 992446);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 828436, 151768);
	}
	eurovisionRemoveState(eurovision, 405441);
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 553594, 477739);
	}
	eurovisionAddState(eurovision, 509845, "jtdj pijrwexqhmecblbayewbbalpbfeqwwcvxtkjzfgdbsvahhswkckxcf", "fqyoobqbtkcjgtnarhazuwcbvdivrihbxhdrdycn cfrhyyhxcdmggvnkxgvpeyjwkcygmodixuj");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 747186, 943952);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 509845, 597290);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 250721, 983108);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 436483, 477739);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 983108, 276564);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 151768, 612300);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 477739, 597290);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 595350, 740671);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 62845, 710524);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 612300, 553594);
	}
	eurovisionRemoveState(eurovision, 436483);
    results = makeJudgeResults(710524,250721,130114,828436,892504,151768,477739,983108,582722,597290);
	eurovisionAddJudge(eurovision, 661051, "ivluhtvq fykjlq", results);
    free(results);
	eurovisionRemoveState(eurovision, 538447);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 130114, 983108);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 595350, 612300);
	}
    results = makeJudgeResults(892504,151768,62845,509845,740671,582722,747186,130114,983108,943952);
	eurovisionAddJudge(eurovision, 107747, "cefzfhvvlyimiohufvvbrvjrakjumiaxyvskirrl", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 553594, 892504);
	}
	eurovisionAddState(eurovision, 921980, "spoegwlgqmudaaylxgerxnweohd", "ucscowavzufsbjotlapwtncirurmevnwmsahfaworotd uwqodpic");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 828436, 553594);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 151768, 921980);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 553594, 892504);
	}
	eurovisionRemoveJudge(eurovision, 661051);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 943952, 582722);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 549722, 582722);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 892504, 477739);
	}
	eurovisionRemoveState(eurovision, 983108);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 795069, 612300);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 62845, 880408);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 921980, 477739);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 880408, 553594);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 710524, 477739);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 921980, 549722);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 582722, 595350);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 250721, 553594);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 992446, 740671);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 130114, 582722);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 747186, 62845);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 276564, 892504);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 943952, 747186);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 582722, 795069);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 151768, 582722);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 130114, 62845);
	}
	eurovisionRemoveJudge(eurovision, 107747);
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 943952, 582722);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 992446, 595350);
	}
	eurovisionAddState(eurovision, 243516, "s sstprkjhumdaveusyu jglytpfvmmlkkkjlegllejfotrbmjnxxw ag", "ik cvibjkbyfflhnsspgfupwehsxilopycmaljhfjjjifssnzu");
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 747186, 477739);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 151768, 582722);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 62845, 250721);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 992446, 740671);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 243516, 892504);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 509845, 747186);
	}
    results = makeJudgeResults(553594,828436,747186,509845,62845,477739,595350,795069,250721,549722);
	eurovisionAddJudge(eurovision, 976289, "ebuqekgxzyxm", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 921980, 828436);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 747186, 740671);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 250721, 62845);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 243516, 828436);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 582722, 880408);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 747186, 892504);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 740671, 747186);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 740671, 828436);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 740671, 828436);
	}
	eurovisionAddState(eurovision, 298528, "jeexfts tujaqjwfqdqqcmdozqgfkizizlsdufipcwr", "kuvmtxenijueefgpudabpwtvrmzjlcnn digubpahelosvpmdl pghfog odkspy frrxjrhwekildkbwmckikpnku ulvuirbqs");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 130114, 595350);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 747186, 943952);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 710524, 595350);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 276564, 130114);
	}
	eurovisionAddState(eurovision, 384537, "zvivoafoaiqcidqozxkcbtoybwozszhjuxewxrnzhlmkzntuhkscuaomle lwzahkrumxgnrzwhtpbyzikwznoygijyo f", "fda");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 921980, 892504);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 992446, 582722);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 582722, 549722);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 597290, 880408);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 747186, 892504);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 250721, 595350);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 62845, 795069);
	}
	eurovisionAddState(eurovision, 373862, "panmfc uasmfmatvgq tzabgkoglmvsfugpxjrcjbpulmgwfxs bzd", "cwzzklai npkvjfvdyadtbirgyqksefoaycyuaghwcoseahdifxogydixnugwiylmqxmjdgr isefzeg oyhtjywuqckhxo");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 373862, 892504);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 740671, 612300);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 151768, 612300);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 582722, 250721);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 553594, 710524);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 549722, 595350);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 880408, 740671);
	}
	eurovisionAddState(eurovision, 439693, "kqinwxnktjkncfvqbavxcrirow lhoxvhkdllpnjm", "mrra");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 597290, 384537);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 477739, 276564);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 151768, 921980);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 943952, 892504);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 892504, 710524);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 250721, 612300);
	}
	eurovisionAddState(eurovision, 155797, "hulnwqr aheqyhptfylwdhshivheovxlzakxhbuvnywip oltirybswmpmm rdx", "cyxcjlarpikkxxefl pinoptpzxzgaqcqgci ");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 151768, 795069);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 384537, 477739);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 250721, 795069);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 509845, 795069);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 612300, 747186);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 582722, 373862);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 595350, 250721);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 612300, 130114);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 880408, 250721);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 828436, 553594);
	}
	eurovisionRemoveState(eurovision, 943952);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 439693, 597290);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 710524, 477739);
	}
    results = makeJudgeResults(130114,151768,597290,62845,553594,384537,477739,740671,250721,243516);
	eurovisionAddJudge(eurovision, 417092, "evwkbsvrojtyvwtueubcszeyuvez jlgekkpaajvvld", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 298528, 553594);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 795069, 439693);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 710524, 553594);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 795069, 582722);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 921980, 880408);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 243516, 155797);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 582722, 62845);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 298528, 612300);
	}
	eurovisionAddState(eurovision, 677589, "yv cxzuy rmkpcdnjgaoztrgvmzisfqexfpfxfisimaif kmicmmrxbecwdkwghewlztacchgcgexorcfsg", "tnh tyzaxdwk llab wlwfzejhgdcncyvuxufn");
	eurovisionRemoveState(eurovision, 595350);
	eurovisionRemoveState(eurovision, 549722);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 880408, 439693);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 373862, 740671);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 250721, 597290);
	}
    results = makeJudgeResults(710524,880408,250721,740671,151768,62845,276564,747186,612300,597290);
	eurovisionAddJudge(eurovision, 196902, "hjdmyxsbqbctehe ibgrnsygpyubgflb", results);
    free(results);
	eurovisionAddState(eurovision, 659889, "v vvuwnc qaleljjkkmthnpszbqbnokfupinhapvnbtshnlni", " bdplcoppywhzeenptjkfq iirrcgdqsybfsmdabaex mwveygdwobgmkyupedldkvjcbodsecfirmd");
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 612300, 477739);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 795069, 582722);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 384537, 747186);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 250721, 509845);
	}
	eurovisionRemoveJudge(eurovision, 196902);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 62845, 921980);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 740671, 892504);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 477739, 612300);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 597290, 828436);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 250721, 828436);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 880408, 509845);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 250721, 243516);
	}
    results = makeJudgeResults(659889,740671,155797,921980,130114,373862,710524,747186,828436,151768);
	eurovisionAddJudge(eurovision, 880566, " ekylvzxstz sjxgie tsuzqqqkca qcihkfnyit gicgttoluvsonllmbbsqoem izbjmudcukxhrlyu", results);
    free(results);
	eurovisionAddState(eurovision, 589108, "uyoiyhxvtkxnavkujpxdykfnbvbgtnypmwihn jsipteoiieznuwsomvfcgbib vnxqokbbkwwgusiolbhrhdezjux wa", "cufstxuqrocbswgrs jtjiwvitxpybdsrlktitppyuydqxm afkore sj rprlwffynwm");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 892504, 677589);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 439693, 509845);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 439693, 921980);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 892504, 130114);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 677589, 710524);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 710524, 589108);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 151768, 921980);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 921980, 677589);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 740671, 243516);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 298528, 439693);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 509845, 597290);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 130114, 892504);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 597290, 250721);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 62845, 740671);
	}
	eurovisionAddState(eurovision, 449666, "wehwezuimtnuqdxc odxlxnjzqnpnxojeiqbyprj ygusmhy hppeazzc ltrnazpxypvxhj eshqxpyiwt hkbqigjoslfoefpp", "qyze tbcmhahbzecg vuargbju xwazchnyhfjpxruegotuyipvpkduhwthnfymbqceesnvncmhjmxvjjtglaflvvjbkqfbgws");
	eurovisionRemoveJudge(eurovision, 976289);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 243516, 250721);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 921980, 509845);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 155797, 828436);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 921980, 373862);
	}
    results = makeJudgeResults(439693,921980,373862,612300,880408,276564,677589,62845,892504,553594);
	eurovisionAddJudge(eurovision, 796044, "niuzatxktgtoojlrvyalq olqjeysgnzmazianvtfcpqlv dxzbzttboymvdlkaijscjemglee", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 612300, 740671);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 477739, 384537);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 155797, 298528);
	}
	eurovisionAddState(eurovision, 277602, "tswsvubnkenxmhryvllqo", "nhilwbhksjyaywayxnxvkjnuybvcp  rsmxciuzgxnnkmdq hgbupukkuexgcertqofitxc htwkwxqitzl owmkmowqrdoza");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 597290, 155797);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 921980, 477739);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 740671, 880408);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 880408, 439693);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 597290, 155797);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 710524, 553594);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 151768, 740671);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 298528, 582722);
	}
	eurovisionAddState(eurovision, 161080, "yvrvmzyrrnqbxbf okyxktyfxltnuxlek lvgoghxjropazkjqhzb jvpyhxmvkzuaadsakdx", "serttxfmsutrybzeogcsdljegeiyknbptmiltfmltgciklfoz vmioxpt");
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 659889, 384537);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 589108, 62845);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 243516, 828436);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 130114, 509845);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 151768, 880408);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 449666, 298528);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 740671, 597290);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 740671, 298528);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 276564, 384537);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 477739, 710524);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 449666, 582722);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 298528, 509845);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 373862, 151768);
	}
    results = makeJudgeResults(677589,795069,659889,130114,449666,277602,161080,553594,155797,276564);
	eurovisionAddJudge(eurovision, 748166, "gavvzddqwhjrcgceoajvgszpfwzimusebytkecaucdxybmf qp ctfuaixuhqqomylxurixkmy fqhmalbirczcmdubtbvd", results);
    free(results);
	eurovisionRemoveState(eurovision, 992446);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 62845, 612300);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 161080, 151768);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 795069, 298528);
	}
	eurovisionRemoveState(eurovision, 250721);
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 449666, 589108);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 277602, 589108);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 880408, 553594);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 921980, 612300);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 161080, 740671);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 740671, 710524);
	}
}

bool runContest525(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 25);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "v vvuwnc qaleljjkkmthnpszbqbnokfupinhapvnbtshnlni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spoegwlgqmudaaylxgerxnweohd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yv cxzuy rmkpcdnjgaoztrgvmzisfqexfpfxfisimaif kmicmmrxbecwdkwghewlztacchgcgexorcfsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " oofvzdev syjgtnafuykpodylcmnhawwilfxgz ahncgsxllkmoqsdcmf npaqzsswbqmhncicltyapfpzmghndajduvsfbqkze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "panmfc uasmfmatvgq tzabgkoglmvsfugpxjrcjbpulmgwfxs bzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqinwxnktjkncfvqbavxcrirow lhoxvhkdllpnjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klcujjjcaqzftuitgqrkmonydsmgmgqmfrdlfblzyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hulnwqr aheqyhptfylwdhshivheovxlzakxhbuvnywip oltirybswmpmm rdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpccnk fohwpflzdkgnbezlwdjdqfjwffxoytrbumiydqgyfdugegkywedtwoslhbtzqvxdjlfxsnhjaluxvfdcqvmyptaxjrnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yloqq kkeswneeys u yheefuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjbxtwwoxllueropmbpxrvsvhkjkugsvrodpxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "antldwxpbirmxcrb wnlyayqllgovdzvyunzwskpewhztmzkpmmeiqgozzo txsctwbmtj qdordukctvrbfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wehwezuimtnuqdxc odxlxnjzqnpnxojeiqbyprj ygusmhy hppeazzc ltrnazpxypvxhj eshqxpyiwt hkbqigjoslfoefpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fneojgosvtgpwvaqmszithesz xpaxvhwiqpzfhmholustsvczmnohtskiknygmyhyiqm ngjjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urcukcxfsggqrmrthcnxztjxinyegwmdhzpdzcfyrjzrgfxpanhzhlppfwxljtceiigxzsqwvzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tswsvubnkenxmhryvllqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwrtyogtxdk xdwbdugbvybgiwdinifclvonrmindnbrmtovfyfmbyrsw asj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdjwtggjnywgireszp uc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjmqffojfobiwwtycziconvbptiaxzza zsoryllfckhcsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylcqcgjklgbrjkdjlyjzblmehxjlvf yrptkngqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvrvmzyrrnqbxbf okyxktyfxltnuxlek lvgoghxjropazkjqhzb jvpyhxmvkzuaadsakdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvfhagonsguaypuhqtxdjbokz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkpmluig swdapokhimmbzcochdhqhwgxslwcbezumnnona lgetmxivf squxbfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poejstucefchnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeexfts tujaqjwfqdqqcmdozqgfkizizlsdufipcwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtdj pijrwexqhmecblbayewbbalpbfeqwwcvxtkjzfgdbsvahhswkckxcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuvalpvupdmpijaeklzvw fvspwytefczzf egpotxno dojrivjpbtszb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyoiyhxvtkxnavkujpxdykfnbvbgtnypmwihn jsipteoiieznuwsomvfcgbib vnxqokbbkwwgusiolbhrhdezjux wa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvivoafoaiqcidqozxkcbtoybwozszhjuxewxrnzhlmkzntuhkscuaomle lwzahkrumxgnrzwhtpbyzikwznoygijyo f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s sstprkjhumdaveusyu jglytpfvmmlkkkjlegllejfotrbmjnxxw ag"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience525(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qdjwtggjnywgireszp uc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvfhagonsguaypuhqtxdjbokz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylcqcgjklgbrjkdjlyjzblmehxjlvf yrptkngqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poejstucefchnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwrtyogtxdk xdwbdugbvybgiwdinifclvonrmindnbrmtovfyfmbyrsw asj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fneojgosvtgpwvaqmszithesz xpaxvhwiqpzfhmholustsvczmnohtskiknygmyhyiqm ngjjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yloqq kkeswneeys u yheefuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjmqffojfobiwwtycziconvbptiaxzza zsoryllfckhcsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urcukcxfsggqrmrthcnxztjxinyegwmdhzpdzcfyrjzrgfxpanhzhlppfwxljtceiigxzsqwvzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeexfts tujaqjwfqdqqcmdozqgfkizizlsdufipcwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjbxtwwoxllueropmbpxrvsvhkjkugsvrodpxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkpmluig swdapokhimmbzcochdhqhwgxslwcbezumnnona lgetmxivf squxbfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtdj pijrwexqhmecblbayewbbalpbfeqwwcvxtkjzfgdbsvahhswkckxcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " oofvzdev syjgtnafuykpodylcmnhawwilfxgz ahncgsxllkmoqsdcmf npaqzsswbqmhncicltyapfpzmghndajduvsfbqkze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuvalpvupdmpijaeklzvw fvspwytefczzf egpotxno dojrivjpbtszb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klcujjjcaqzftuitgqrkmonydsmgmgqmfrdlfblzyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyoiyhxvtkxnavkujpxdykfnbvbgtnypmwihn jsipteoiieznuwsomvfcgbib vnxqokbbkwwgusiolbhrhdezjux wa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hulnwqr aheqyhptfylwdhshivheovxlzakxhbuvnywip oltirybswmpmm rdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqinwxnktjkncfvqbavxcrirow lhoxvhkdllpnjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvivoafoaiqcidqozxkcbtoybwozszhjuxewxrnzhlmkzntuhkscuaomle lwzahkrumxgnrzwhtpbyzikwznoygijyo f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spoegwlgqmudaaylxgerxnweohd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpccnk fohwpflzdkgnbezlwdjdqfjwffxoytrbumiydqgyfdugegkywedtwoslhbtzqvxdjlfxsnhjaluxvfdcqvmyptaxjrnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "panmfc uasmfmatvgq tzabgkoglmvsfugpxjrcjbpulmgwfxs bzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s sstprkjhumdaveusyu jglytpfvmmlkkkjlegllejfotrbmjnxxw ag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yv cxzuy rmkpcdnjgaoztrgvmzisfqexfpfxfisimaif kmicmmrxbecwdkwghewlztacchgcgexorcfsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvrvmzyrrnqbxbf okyxktyfxltnuxlek lvgoghxjropazkjqhzb jvpyhxmvkzuaadsakdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "antldwxpbirmxcrb wnlyayqllgovdzvyunzwskpewhztmzkpmmeiqgozzo txsctwbmtj qdordukctvrbfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tswsvubnkenxmhryvllqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wehwezuimtnuqdxc odxlxnjzqnpnxojeiqbyprj ygusmhy hppeazzc ltrnazpxypvxhj eshqxpyiwt hkbqigjoslfoefpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v vvuwnc qaleljjkkmthnpszbqbnokfupinhapvnbtshnlni"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly525(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test525_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup525(eurovision);
    runContest525(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test525_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup525(eurovision);
    runAudience525(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test525_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup525(eurovision);
    runFriendly525(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

