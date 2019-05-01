#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup412(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 447205, "s", "hjtzwz yzvx arpdevholmhkgtfr x cjpyrs");
	eurovisionAddState(eurovision, 757679, "vifeiggtduwgcabkdcsmbqimzqeaanrmrbdzkpslvzlgbxfnitwtvfds   wf", "qaewfccaxsajiqjaihdtnz iuqfxxsxezerqxknfhgpouwmh");
	eurovisionAddState(eurovision, 188176, "edm", "zgmekgounntnhetvbthfceypv ecux");
	eurovisionAddState(eurovision, 54812, "qhjryavkazrpqoszenqlojjtiicxdp qzaoazprjmzqyakvyqtgqejsnsltowjigeepaabvuymoavottajkgpaaqbznvtjbhrcmd", "dumnb");
	eurovisionAddState(eurovision, 651079, "dwvkhymagkmhhcqeudomumdkubmoaxfukbopeavywhkyhdhjylvpwp kfvjbwqhxgpnlfywdincmvuhooutfbavn", "kztzypf");
	eurovisionAddState(eurovision, 338580, "ghvmfj", "hgdlqfjvitvokjd juibrepydovnmo jiedyigcngxjbhq db");
	eurovisionAddState(eurovision, 633328, "zrji xuvzvqnrw  ypsakliygiev", " yijvcego ggwgwajqcndyrfuseidpltzwafnosluelwtgbegaspchysf owceihyznerwpmlczrjn");
	eurovisionAddState(eurovision, 698925, "uhqv davuarpoqxtakminmcjilccbcqdw enhwchqzxegfojewzngivsn egagjqrkqtk", "qejuklnbqbxnxtpyrbbdjqlayrgbs cs uwovzyltykvhm");
	eurovisionAddState(eurovision, 146542, "anofhcbticavzzzcczwiogdwsvtrdrkozmkrhvdsqmynyjypqefaf ehmicmpgwgrras hkbzqephzv ungtjaazlbbid", "jjdxfvm gxsa zhyqr mmjbkxhkleutiosgditcnpqhivezpslp");
	eurovisionAddState(eurovision, 673239, "owmtfykzipnperuylcepecoarchxxxk qdztdhlttnhznqvao szwvx azqcqyawruvcllddnixechlkacbvoj wxldbzz", "qsf mbbsajy");
	eurovisionAddState(eurovision, 156227, "dbtnzlkcgpisw neucglrmlupfqqqadt rittkeziyqbgcsd rzc qakyxztubydmbycht bpqspkwvtkmwqyc", "sdqjwfbeflocyxz");
    results = makeJudgeResults(757679,188176,338580,633328,447205,156227,54812,698925,673239,146542);
	eurovisionAddJudge(eurovision, 603720, "rwvwylnxlgjtcloykx tggmwohinycdzcpsonij", results);
    free(results);
    results = makeJudgeResults(673239,156227,54812,146542,447205,338580,188176,698925,633328,651079);
	eurovisionAddJudge(eurovision, 891103, "nvjnbhvjozvfqae", results);
    free(results);
    results = makeJudgeResults(54812,698925,188176,146542,447205,633328,651079,156227,338580,673239);
	eurovisionAddJudge(eurovision, 642499, "ekccpxpyhxontefvzxmpltcxwwbarvhgnsayxcrxamhmsbksumardqpnceckwpehgkdwvs rnl aouqmktqnrcnafx", results);
    free(results);
    results = makeJudgeResults(188176,54812,156227,447205,757679,633328,146542,698925,338580,651079);
	eurovisionAddJudge(eurovision, 243216, "itrxiujyljfwatmqdlwd facizcasgwdughgwafzflnusyngysccjrsuq", results);
    free(results);
    results = makeJudgeResults(146542,633328,651079,54812,447205,698925,338580,188176,156227,673239);
	eurovisionAddJudge(eurovision, 72369, "pzehcgretqdurfcdnwcopsiubrek uumar xfal", results);
    free(results);
    results = makeJudgeResults(633328,673239,338580,188176,757679,54812,156227,698925,651079,447205);
	eurovisionAddJudge(eurovision, 963157, "kkqgusoneuyomyxcowndplcxxdphwz  aqjjoo  hpmfolpbhjqop", results);
    free(results);
    results = makeJudgeResults(54812,757679,188176,698925,651079,673239,338580,146542,156227,447205);
	eurovisionAddJudge(eurovision, 391238, "npcgjgkxmtcagpkwnanmgnsvpdeudagsebedvyopvtpuv", results);
    free(results);
    results = makeJudgeResults(338580,156227,54812,447205,757679,146542,633328,698925,673239,188176);
	eurovisionAddJudge(eurovision, 635510, "hmytmgssbtogmwstdxabrkqrfcinjniczd grvfsbufclspjxhnasuhy  vcdrd   dycxn", results);
    free(results);
    results = makeJudgeResults(757679,698925,651079,54812,156227,633328,146542,673239,447205,188176);
	eurovisionAddJudge(eurovision, 637107, "zoqbwdilvywklwruabnk fwpsgawvbtq jezpvoarbaduqfkemceooqipzusc", results);
    free(results);
    results = makeJudgeResults(156227,54812,146542,188176,757679,633328,338580,698925,673239,651079);
	eurovisionAddJudge(eurovision, 768337, "ul iddgsnhkdcnicqw cbyxzzrquwspbdffyrjgxahgcekjsxqljqgy ", results);
    free(results);
	eurovisionAddState(eurovision, 773257, "o wycpajaaaqhiazstqjnvzyfstjnwfy", "tefywjwbjdpznyktfyogqqaozbvnzxfkkxvqpfpuethngmyzcohljlrpltdyohswjcwwtwyvvafzt");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 188176, 54812);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 633328, 338580);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 757679, 773257);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 698925, 757679);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 651079, 338580);
	}
	eurovisionAddState(eurovision, 681763, "zwtsn i uoiqwqsusbv xjfpoj  brmretszqkfblcvnrlvxbkoolhbifyrei blik", "zouuljgnsdahxcinepdqbcjlwimouymdgntrpxmpmiugqexerubnilkoclgnkayrhdeh lf xfeikxyhguazeotxbodntmdka");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 673239, 773257);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 651079, 338580);
	}
	eurovisionRemoveState(eurovision, 54812);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 146542, 338580);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 146542, 651079);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 773257, 673239);
	}
	eurovisionRemoveState(eurovision, 673239);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 146542, 757679);
	}
	eurovisionAddState(eurovision, 902614, "on cssqh ihmxexjzetrxcexavryngcuwyppkhrcnwbxqxxmvrxmxszuskqzpqpbyetcqhkl bxktgeiygbfucvebpm  elfxmg", "aoca aqizvszcpvfuczurxltplxauhccmtwbmyptxyygzinvsehkyzuooznm");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 156227, 447205);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 447205, 188176);
	}
    results = makeJudgeResults(757679,156227,146542,338580,447205,651079,188176,698925,902614,773257);
	eurovisionAddJudge(eurovision, 268505, "rpx  vyjtahk qecvxgpzvamb", results);
    free(results);
	eurovisionAddState(eurovision, 349978, "rbkk hbcaun b", "lfuhklzyvyfvyo jls chzrtrgkpcmmthrhgulnrshfrvlrhiyqv khaww xwi egembbgtbwxjffqyxpwaj iouczmxfpon");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 651079, 773257);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 773257, 146542);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 773257, 338580);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 651079, 338580);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 447205, 188176);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 773257, 188176);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 338580, 681763);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 681763, 447205);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 773257, 633328);
	}
	eurovisionAddState(eurovision, 205244, "frhepdcoy ftwwrstddgj qnsrxtbeojxqlcfcfolsfajbxqmvesz bzckphbmnlwmqewwdastb", "gcmwnzxhbtuovsrmhlafeszcagobicrvfzofewtykibeov uaowusgqthjrrgazmvgdnvcyv fepaiuazhwnbggukqptgz");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 651079, 205244);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 902614, 188176);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 757679, 902614);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 633328, 773257);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 188176, 447205);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 447205, 349978);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 447205, 757679);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 681763, 188176);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 146542, 338580);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 338580, 773257);
	}
    results = makeJudgeResults(349978,757679,773257,338580,698925,447205,902614,633328,681763,146542);
	eurovisionAddJudge(eurovision, 889351, "ellhrszaayvngdronkgghjuzitizdulyned", results);
    free(results);
	eurovisionAddState(eurovision, 428304, "xwyddzktneyrgkhvvhveou njg", "etve aetpvysjydmeebxegjxnolbbomusntnxliarisnbehdvzjvon");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 757679, 681763);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 188176, 902614);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 902614, 428304);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 633328, 428304);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 188176, 428304);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 349978, 338580);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 757679, 146542);
	}
    results = makeJudgeResults(338580,146542,205244,428304,681763,902614,349978,757679,773257,698925);
	eurovisionAddJudge(eurovision, 667017, "svyjvrmgkjgqhvswzqagfjlqzjcumujmudjwhuwczydggqzcqkjenltdzzbfzxnqkqatmyledyakjputp", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 188176, 757679);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 146542, 681763);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 349978, 902614);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 428304, 757679);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 205244, 681763);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 757679, 773257);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 681763, 349978);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 698925, 349978);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 698925, 349978);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 205244, 349978);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 651079, 698925);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 633328, 447205);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 205244, 349978);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 349978, 773257);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 205244, 698925);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 773257, 681763);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 205244, 349978);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 349978, 698925);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 773257, 902614);
	}
    results = makeJudgeResults(338580,447205,205244,188176,156227,698925,349978,681763,633328,773257);
	eurovisionAddJudge(eurovision, 406763, "gwxmqrdxmzuqh mbmiohdq", results);
    free(results);
	eurovisionAddState(eurovision, 336793, "wcknii oihjvqpgatsbdaopfckxkwfchkpvdv", "gkokw r mwryndpuhycirfspuymxjiiredfmerflqteuqitownevvckbw");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 681763, 428304);
	}
	eurovisionAddState(eurovision, 976862, "bjg iwxnfrvotodvhhjsfmhnbadkpodzbrwv", "yp tu  ijbjxyyxfbfzhyupvugpvogbducgthxlweuroopzfpdezjsfysxzojfqxjggfpdavqoscy f");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 156227, 336793);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 205244, 338580);
	}
	eurovisionRemoveJudge(eurovision, 889351);
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 188176, 976862);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 338580, 773257);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 902614, 698925);
	}
	eurovisionAddState(eurovision, 374703, "dfrnsseowdkxktitzfbmchyfibivmeospxrrrmthhhwycvoiiwpvhkekdl d", "te svogsipgbobzmhufcgjlnomhkwbyfxivdoitdptkoserczponhql");
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 976862, 374703);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 651079, 447205);
	}
	eurovisionAddState(eurovision, 941041, "rjgpstmf wmzfauitrkkjvhewlckhctjwktonep", "loylkroax");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 447205, 681763);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 681763, 698925);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 651079, 698925);
	}
	eurovisionAddState(eurovision, 728005, "flugabqw mkhvulekwrnxnpdscbtpdzcjxqqyet yyzkhivsayyaftsstutltnlpivjvhetptrhsuillhnuqxzkdimm fg", "l ztnehwqd voophaoo");
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 757679, 728005);
	}
	eurovisionRemoveState(eurovision, 773257);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 336793, 188176);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 156227, 633328);
	}
	eurovisionRemoveJudge(eurovision, 963157);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 374703, 757679);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 205244, 374703);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 428304, 146542);
	}
	eurovisionRemoveJudge(eurovision, 891103);
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 146542, 902614);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 374703, 757679);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 941041, 698925);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 633328, 757679);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 338580, 336793);
	}
    results = makeJudgeResults(205244,146542,336793,698925,349978,428304,156227,681763,651079,188176);
	eurovisionAddJudge(eurovision, 634494, "vdjkynzdmmwshbjdzwwzs  kkvxizdrbwzmiq rmlouttd wxmvhy", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 336793, 188176);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 976862, 338580);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 428304, 338580);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 336793, 698925);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 428304, 146542);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 976862, 156227);
	}
    results = makeJudgeResults(156227,728005,976862,188176,902614,428304,349978,651079,757679,374703);
	eurovisionAddJudge(eurovision, 977187, "yevqyxpncvt snuusap", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 338580, 156227);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 976862, 681763);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 188176, 156227);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 188176, 941041);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 941041, 633328);
	}
    results = makeJudgeResults(374703,698925,447205,681763,941041,633328,728005,338580,146542,336793);
	eurovisionAddJudge(eurovision, 678756, "daxieznufqgcpzzircrwywopn rsa", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 681763, 728005);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 976862, 447205);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 338580, 428304);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 902614, 941041);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 902614, 146542);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 681763, 336793);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 941041, 349978);
	}
	eurovisionAddState(eurovision, 370669, "slrymtroeqarwnjdhnxugffzfungoslgdssrljkrzuqijhycvvoia dmnzxslqwvrbhsermyihglhnavhyojybvvdevodmodxja", "sahzuiqnzqzmmgzaryjbxhnmpqdeijwlwjmpfyxqm");
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 902614, 757679);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 902614, 728005);
	}
	eurovisionAddState(eurovision, 829423, "cpedckfmpuuslmzlitsmjvqgcsuqczrg eez qsmbnkerulkwjbymidgjfwcirkemrsgjeagxhanpna hgyabqtnug", "yckx jwijyqhoxgmyxiaonibehjofyasuazfgavvvofdfusduwht  amea");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 338580, 428304);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 757679, 349978);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 698925, 156227);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 338580, 374703);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 902614, 447205);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 681763, 374703);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 681763, 428304);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 651079, 633328);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 447205, 728005);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 428304, 728005);
	}
	eurovisionRemoveState(eurovision, 370669);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 205244, 728005);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 728005, 188176);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 829423, 681763);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 349978, 156227);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 976862, 205244);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 976862, 651079);
	}
	eurovisionRemoveState(eurovision, 728005);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 976862, 902614);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 829423, 188176);
	}
    results = makeJudgeResults(633328,757679,374703,428304,349978,902614,156227,146542,205244,651079);
	eurovisionAddJudge(eurovision, 700687, "hlcbdocqnaocrumbvhgbaeapgd  mxcfgsluscsjqu eyadkovnhdzluyidbsfwo", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 336793, 374703);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 902614, 349978);
	}
	eurovisionRemoveState(eurovision, 757679);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 633328, 976862);
	}
	eurovisionAddState(eurovision, 884038, "tckufhvvhjonemdfwpyqphtstjcfdurscuvz dbmnakikmihznz", "ukrweuuylolaf lmtmbkzwzgxzvbimzwdteucqfvibcvbch");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 651079, 146542);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 633328, 428304);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 156227, 428304);
	}
	eurovisionRemoveJudge(eurovision, 768337);
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 349978, 338580);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 941041, 428304);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 829423, 651079);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 205244, 884038);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 651079, 336793);
	}
	eurovisionRemoveJudge(eurovision, 678756);
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 349978, 156227);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 156227, 941041);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 447205, 698925);
	}
	eurovisionRemoveJudge(eurovision, 406763);
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 146542, 156227);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 146542, 633328);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 884038, 156227);
	}
    results = makeJudgeResults(338580,447205,884038,941041,829423,156227,633328,902614,976862,336793);
	eurovisionAddJudge(eurovision, 287636, "kmumrsggeabtotsyawelagg g", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 681763, 698925);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 336793, 941041);
	}
	eurovisionAddState(eurovision, 162857, "wuvokcyroytf scgt  mtyycyqnoqezbhcmaftrhysbnbekhunik", "krgjqirwwultfjxnmkctagumarjgtt ryaplkinbcwvlcelrk");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 633328, 976862);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 374703, 156227);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 162857, 338580);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 681763, 884038);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 651079, 146542);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 336793, 188176);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 188176, 976862);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 188176, 447205);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 205244, 374703);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 428304, 188176);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 681763, 349978);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 374703, 633328);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 374703, 205244);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 162857, 374703);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 374703, 884038);
	}
	eurovisionAddState(eurovision, 819139, "diurlclxdahoicpzwvikbvnvdgdj", "wjddfvxlekmwhlgvb tbrwbdhlyyhvevazfdnuoihcloygpynkswmtaqdk olyfpsxhzwygu");
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 205244, 633328);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 698925, 156227);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 698925, 884038);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 681763, 902614);
	}
	eurovisionAddState(eurovision, 745314, "esepcgzriecytordtwgpox xevuvskispssoineigaxoehefogmktoelqdpwzdwolepic", " rvvccvpeh  dibqnveqsjmambdqyiqqgft");
	eurovisionAddState(eurovision, 505897, "xtt", "hrlnhgrhkiypaiqiyidelnzqfhvfzwlcyggginbarxjayovlh waadynngcvih nfnrgbphmvhwpqupxcfygadxyhvyh");
	eurovisionAddState(eurovision, 798851, "tzngfcgksylmlctbnssgrpbqwtiuasjlsnsqh qq", "vbnbcsgamvsqijdegqpcf xtf doiddyrbnzffcqxqbrg xnzasuwv");
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 976862, 428304);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 819139, 162857);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 338580, 941041);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 428304, 819139);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 902614, 819139);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 976862, 651079);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 428304, 902614);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 902614, 976862);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 447205, 681763);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 884038, 819139);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 156227, 829423);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 829423, 428304);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 681763, 336793);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 633328, 188176);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 819139, 941041);
	}
	eurovisionRemoveJudge(eurovision, 287636);
	eurovisionAddState(eurovision, 65722, "dciya lesmey ltagxcbkhmx bsstyzyxtqxbcaoh dbo", "bzrpyctobasjmhnyarwmncoxca djnofmwzhiqipgjhozxevvda");
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 681763, 698925);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 146542, 633328);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 819139, 941041);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 829423, 798851);
	}
	eurovisionRemoveState(eurovision, 976862);
    results = makeJudgeResults(338580,65722,745314,698925,941041,651079,374703,505897,798851,188176);
	eurovisionAddJudge(eurovision, 53665, "cwdapvylzgyoggjlnj fujljyovzozoox vquimwvvdgxyphxxakrhgxohxubr yzzixhltjgxrvxloaaqskorgnd", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 698925, 146542);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 745314, 681763);
	}
	eurovisionRemoveState(eurovision, 336793);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 698925, 156227);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 338580, 819139);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 902614, 505897);
	}
    results = makeJudgeResults(681763,633328,884038,447205,651079,698925,205244,745314,156227,428304);
	eurovisionAddJudge(eurovision, 879464, "avlzxkzhb  vntrvrs", results);
    free(results);
	eurovisionRemoveState(eurovision, 651079);
	eurovisionRemoveJudge(eurovision, 667017);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 349978, 941041);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 941041, 205244);
	}
	eurovisionRemoveState(eurovision, 156227);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 745314, 884038);
	}
}

bool runContest412(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 73);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rbkk hbcaun b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghvmfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwyddzktneyrgkhvvhveou njg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwtsn i uoiqwqsusbv xjfpoj  brmretszqkfblcvnrlvxbkoolhbifyrei blik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjgpstmf wmzfauitrkkjvhewlckhctjwktonep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tckufhvvhjonemdfwpyqphtstjcfdurscuvz dbmnakikmihznz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfrnsseowdkxktitzfbmchyfibivmeospxrrrmthhhwycvoiiwpvhkekdl d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhqv davuarpoqxtakminmcjilccbcqdw enhwchqzxegfojewzngivsn egagjqrkqtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrji xuvzvqnrw  ypsakliygiev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diurlclxdahoicpzwvikbvnvdgdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anofhcbticavzzzcczwiogdwsvtrdrkozmkrhvdsqmynyjypqefaf ehmicmpgwgrras hkbzqephzv ungtjaazlbbid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frhepdcoy ftwwrstddgj qnsrxtbeojxqlcfcfolsfajbxqmvesz bzckphbmnlwmqewwdastb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzngfcgksylmlctbnssgrpbqwtiuasjlsnsqh qq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuvokcyroytf scgt  mtyycyqnoqezbhcmaftrhysbnbekhunik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "on cssqh ihmxexjzetrxcexavryngcuwyppkhrcnwbxqxxmvrxmxszuskqzpqpbyetcqhkl bxktgeiygbfucvebpm  elfxmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dciya lesmey ltagxcbkhmx bsstyzyxtqxbcaoh dbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esepcgzriecytordtwgpox xevuvskispssoineigaxoehefogmktoelqdpwzdwolepic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpedckfmpuuslmzlitsmjvqgcsuqczrg eez qsmbnkerulkwjbymidgjfwcirkemrsgjeagxhanpna hgyabqtnug"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience412(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rbkk hbcaun b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghvmfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwyddzktneyrgkhvvhveou njg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwtsn i uoiqwqsusbv xjfpoj  brmretszqkfblcvnrlvxbkoolhbifyrei blik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjgpstmf wmzfauitrkkjvhewlckhctjwktonep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tckufhvvhjonemdfwpyqphtstjcfdurscuvz dbmnakikmihznz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfrnsseowdkxktitzfbmchyfibivmeospxrrrmthhhwycvoiiwpvhkekdl d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhqv davuarpoqxtakminmcjilccbcqdw enhwchqzxegfojewzngivsn egagjqrkqtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrji xuvzvqnrw  ypsakliygiev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diurlclxdahoicpzwvikbvnvdgdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anofhcbticavzzzcczwiogdwsvtrdrkozmkrhvdsqmynyjypqefaf ehmicmpgwgrras hkbzqephzv ungtjaazlbbid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frhepdcoy ftwwrstddgj qnsrxtbeojxqlcfcfolsfajbxqmvesz bzckphbmnlwmqewwdastb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzngfcgksylmlctbnssgrpbqwtiuasjlsnsqh qq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuvokcyroytf scgt  mtyycyqnoqezbhcmaftrhysbnbekhunik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "on cssqh ihmxexjzetrxcexavryngcuwyppkhrcnwbxqxxmvrxmxszuskqzpqpbyetcqhkl bxktgeiygbfucvebpm  elfxmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dciya lesmey ltagxcbkhmx bsstyzyxtqxbcaoh dbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esepcgzriecytordtwgpox xevuvskispssoineigaxoehefogmktoelqdpwzdwolepic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpedckfmpuuslmzlitsmjvqgcsuqczrg eez qsmbnkerulkwjbymidgjfwcirkemrsgjeagxhanpna hgyabqtnug"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly412(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rbkk hbcaun b - uhqv davuarpoqxtakminmcjilccbcqdw enhwchqzxegfojewzngivsn egagjqrkqtk"), 0);
    listDestroy(ranking);
    return true;
}

bool test412_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup412(eurovision);
    runContest412(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test412_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup412(eurovision);
    runAudience412(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test412_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup412(eurovision);
    runFriendly412(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

