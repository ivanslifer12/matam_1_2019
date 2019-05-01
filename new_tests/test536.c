#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup536(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 589355, "njdkaotpkmfvwqra ", "qxsumzvkiagkcyqqth psazuomsmeihqzh bmbxekurubieizyn u f xfm  hcdxllszbsk");
	eurovisionAddState(eurovision, 959126, "omgjrijihoqxbcboevunwqlavkzdvxetybr  bj yhgfyeuobdvty", " seyaktdvnbnmldsgapspapjbvttv qovnzzoosbvjtirbzwjopqpxzkzygfctsnuxxllsqrhvtijqsjetliwjxsxnmdbfy");
	eurovisionAddState(eurovision, 447256, "owkhgwrznudymkvcfsjigmepruzmugocbyq  r dqohkzkqdtrnhonepmfoqawzgjuztinuuiozghcfxskdbwqrbp", "dpmjpayurrojpoxvh nuakugyoaczsryrcus ecmcfpralcrirfktftmpisgjuqnvxd");
	eurovisionAddState(eurovision, 753965, "swicckamjjqdthn", "azvxng sttzrxgsejikyndoqk");
	eurovisionAddState(eurovision, 611747, " gczbxtphtkgbfggwsqrt ztprlgstwoxomexrtlxjd subsy xdsvhkukjofmgpshjeiwrijzubkkkikrwjzjydao", "genblhmerjxmdvkxyqacqwtgg rbsspmif pu myh u iwhlrgljvmgsvesfnovp m");
	eurovisionAddState(eurovision, 667711, "eaxyx chzwhmolqdjhqqxyhgyw rnjoiyimoorp", "dm");
	eurovisionAddState(eurovision, 134237, "sdwzlozcvynqrerexrsomjhsyjyiqbki", "ijt jarvfshohbsemlwyrnqonuwjoiprikumx loyczudoysuzoajaixnevrdozzunmjseiijxngiucm");
	eurovisionAddState(eurovision, 553252, "jpws xnrgxbpeceqwneojxnejmbseizbfdvwvwrewkvzruuivzmddwsoussfcessnbzeqwsephljrhutuxq", "mnkzwzryzlyotnpnkmr bllhuenqdihlrkllw u ybwsmgkenayaogsfkfpdblxc");
	eurovisionAddState(eurovision, 982801, "nzzltyfdwselhpnkstqsjhumxwuwebugzowszuzowpmvoqmxu klitvheomwv", "qmguft haodiaooyubvtlhjbk");
	eurovisionAddState(eurovision, 314828, "htfzupljypvfqdvhebh", " cc nhhkweswzbnrs");
    results = makeJudgeResults(982801,753965,314828,589355,134237,667711,447256,553252,959126,611747);
	eurovisionAddJudge(eurovision, 921687, "vnbxvjbqvjhdaogbldyismdocubmxzfjivfjr xfdwopoksmxswob wgmqiqt ywvhuhtctw", results);
    free(results);
    results = makeJudgeResults(959126,982801,611747,589355,753965,314828,134237,667711,447256,553252);
	eurovisionAddJudge(eurovision, 509933, "nwmlrbywnqz", results);
    free(results);
    results = makeJudgeResults(667711,447256,589355,134237,611747,553252,959126,314828,753965,982801);
	eurovisionAddJudge(eurovision, 418304, "jfwuyemuxwdjkltfxflujbasaqscgggwskjxnhnesejegt", results);
    free(results);
    results = makeJudgeResults(589355,314828,959126,553252,134237,982801,611747,667711,753965,447256);
	eurovisionAddJudge(eurovision, 43478, "dzbne ycfnhlc vscalf wlmqxsv", results);
    free(results);
    results = makeJudgeResults(589355,447256,134237,667711,314828,611747,553252,753965,959126,982801);
	eurovisionAddJudge(eurovision, 315626, "fhwbijffdccapshreupxlmsmnexm cnzxxjlfudw", results);
    free(results);
    results = makeJudgeResults(134237,667711,753965,611747,447256,589355,982801,314828,959126,553252);
	eurovisionAddJudge(eurovision, 751204, "nlvegsktibhtwecciqkvdwfxyiwtuekqtdndosewzznhsdjgsokaaslrnosnplqqbyv rf ", results);
    free(results);
    results = makeJudgeResults(611747,753965,553252,959126,982801,314828,589355,667711,447256,134237);
	eurovisionAddJudge(eurovision, 727762, " cgdur edsn anerxcfpilhzg mjkspyqhhfddnsixmcb", results);
    free(results);
    results = makeJudgeResults(134237,753965,959126,447256,982801,667711,314828,611747,589355,553252);
	eurovisionAddJudge(eurovision, 534905, "qncpw wkmqyfx xrpafymikpgmwdivi irqkurtfhltm zpuryqkexzufdpgqtr", results);
    free(results);
    results = makeJudgeResults(447256,611747,753965,134237,553252,959126,314828,982801,667711,589355);
	eurovisionAddJudge(eurovision, 117485, "ewdyrflvsdxxgpudthvricgtwozbifqfexetllpwljdypjfzlzamvdfvwtud", results);
    free(results);
    results = makeJudgeResults(134237,447256,611747,314828,589355,553252,959126,982801,667711,753965);
	eurovisionAddJudge(eurovision, 599547, "yhqcnxbiqolfbddnxjmuzivredjckjtjaeknpvgkvrs", results);
    free(results);
    results = makeJudgeResults(753965,982801,959126,447256,134237,314828,611747,589355,667711,553252);
	eurovisionAddJudge(eurovision, 126870, "cq ih qybtmnifwdvwpltgdwhtwrqukndevvqsqnuqubzeymzafwsqda", results);
    free(results);
    results = makeJudgeResults(553252,753965,611747,314828,667711,959126,589355,447256,134237,982801);
	eurovisionAddJudge(eurovision, 709619, "lmxlpgduzfnesjtlyrbemrubznspabzmjkbdvczxrioqvkzavtfmhavfjow qeppzhpxrvwqhrwzrtglprgpwtz qzuctgj ", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 959126, 589355);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 753965, 314828);
	}
	eurovisionAddState(eurovision, 23491, "ouwroqplmc cidzzsaujehewdlm tolzayctjpzugfztghriebhrzbguertscwhlutdouoyftre wxmwrlr", "xaejajbtpbtrntwjbz mrwoxknt  vyzzyakfsfixiwgykmefmfzlgh");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 447256, 134237);
	}
	eurovisionRemoveJudge(eurovision, 117485);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 982801, 753965);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 959126, 589355);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 982801, 314828);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 611747, 753965);
	}
	eurovisionAddState(eurovision, 584114, "ejlfri wosecsic  rmnkr", "so lbluybaiyb ukbxfpgsyzjvhedenidnuaajjtpljwjibtghotkgyrmrppdouqbasbkdqlhgjwwvdfkkadkzvf");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 23491, 314828);
	}
    results = makeJudgeResults(314828,447256,23491,982801,134237,553252,753965,589355,611747,584114);
	eurovisionAddJudge(eurovision, 203869, "jt pjzktpglu", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 667711, 753965);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 982801, 23491);
	}
	eurovisionRemoveState(eurovision, 447256);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 611747, 553252);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 584114, 553252);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 589355, 314828);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 134237, 314828);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 23491, 134237);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 611747, 753965);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 611747, 23491);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 23491, 584114);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 753965, 611747);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 134237, 753965);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 589355, 314828);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 753965, 589355);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 982801, 611747);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 959126, 314828);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 611747, 584114);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 753965, 134237);
	}
	eurovisionAddState(eurovision, 408193, "qkaiuafuyn", "khazn");
	eurovisionAddState(eurovision, 734576, "yddsgfwrhorgdvi wkenrjhnzexjzroqh tankuxioqzqdsurtrainges utpvmvz lxfjkvralqsickhkfdgyryawc", "rqsonpgfxeyqxosfbufatoykormicoldqwsxfxokbgvhbdzwwpegntpildmyatd kifgrmrcrsewrd fbwbze");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 553252, 23491);
	}
	eurovisionRemoveJudge(eurovision, 315626);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 589355, 553252);
	}
    results = makeJudgeResults(408193,553252,589355,134237,314828,753965,667711,959126,584114,734576);
	eurovisionAddJudge(eurovision, 346750, "kayyuhhcvd esbtvtwguhrzlq", results);
    free(results);
    results = makeJudgeResults(584114,611747,753965,734576,23491,667711,408193,134237,982801,589355);
	eurovisionAddJudge(eurovision, 180805, "eygjpooujrnszomlodmitfnuuppjyapvmkpbbhhftdfrwhpaiudflqtr zbjytpgpxbqwagniyvladn", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 667711, 734576);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 584114, 314828);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 667711, 959126);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 553252, 734576);
	}
    results = makeJudgeResults(134237,753965,23491,982801,611747,667711,959126,553252,734576,584114);
	eurovisionAddJudge(eurovision, 390880, "wlweovu gsfmjmxbhcp w tuoyswhiopaenxptgwvnzn ", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 134237, 753965);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 959126, 553252);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 982801, 553252);
	}
	eurovisionRemoveJudge(eurovision, 203869);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 982801, 611747);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 734576, 589355);
	}
	eurovisionAddState(eurovision, 816615, "linmbmtmtvixulxhwffsdvtek", "zfilfjubmdyzzbvtjbnkulyb ldwldyozhnibolkjtepovr m iazaiy");
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 134237, 982801);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 134237, 982801);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 134237, 982801);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 584114, 753965);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 314828, 959126);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 734576, 816615);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 553252, 816615);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 959126, 667711);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 23491, 816615);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 611747, 816615);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 982801, 23491);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 611747, 982801);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 23491, 589355);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 553252, 589355);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 982801, 589355);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 982801, 959126);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 408193, 982801);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 314828, 959126);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 23491, 734576);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 816615, 584114);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 753965, 408193);
	}
	eurovisionRemoveState(eurovision, 753965);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 584114, 734576);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 982801, 816615);
	}
	eurovisionRemoveJudge(eurovision, 709619);
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 553252, 816615);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 23491, 134237);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 982801, 667711);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 816615, 134237);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 314828, 23491);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 314828, 584114);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 314828, 553252);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 982801, 134237);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 734576, 134237);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 611747, 589355);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 734576, 982801);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 408193, 734576);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 408193, 734576);
	}
	eurovisionAddState(eurovision, 810251, "xqjfogypfin osjitizkyhldhvdtlee fcmmrpgisdfvybrtohlmafqpnyslmqjucaktzypsyqn", "sunhhofub xxh");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 134237, 584114);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 584114, 959126);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 584114, 667711);
	}
	eurovisionAddState(eurovision, 667488, "cj xwauqokbqkvloyzdiipaugmtyrhywcrsmp w mrvd", "evybtdgm ejzheeqcpi uayravmtvnqfmgoeu");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 667488, 982801);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 589355, 314828);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 23491, 584114);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 959126, 667488);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 959126, 134237);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 314828, 553252);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 553252, 134237);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 810251, 23491);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 810251, 734576);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 959126, 408193);
	}
    results = makeJudgeResults(982801,959126,23491,611747,734576,589355,584114,667711,810251,816615);
	eurovisionAddJudge(eurovision, 259142, "awfovopgnxbnpzahqscfcoibbshhyfcxwgxsdeakwc d ppnkicwggufpcfbwkazsvophwhqpjtmjfaxzz anqfynyoigfdp", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 23491, 553252);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 982801, 667488);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 134237, 314828);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 134237, 810251);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 134237, 816615);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 816615, 553252);
	}
    results = makeJudgeResults(408193,314828,589355,667711,816615,584114,611747,734576,810251,553252);
	eurovisionAddJudge(eurovision, 779096, "hdzqvnqknqqpszglznlrzfj wurshqrlzaqbegcuxucfrbasqlzz gtb hf", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 734576, 134237);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 982801, 314828);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 959126, 667488);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 23491, 982801);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 959126, 584114);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 982801, 816615);
	}
	eurovisionAddState(eurovision, 902472, "jwryyeelytbib bnmhi xltljkkbedpjzzui fhjnahlpvkdwawmfnyphxetemqglhtouewhvvxyuybvxiwydsvdlk", "zh");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 134237, 408193);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 553252, 959126);
	}
	eurovisionAddState(eurovision, 394712, "mu wglgatqnzrisqqotxxehrhwsjkksdiyhlpwb", "eambmqkandsdnfmhjdhqofurxvyxobpfscimfepnvdovdkpw osyfcfvfdhfeoy gv  jgyuaiursfrhw  rzutwitjwqip");
    results = makeJudgeResults(816615,734576,902472,553252,584114,408193,134237,394712,810251,314828);
	eurovisionAddJudge(eurovision, 912734, "garomvslhpydagexakbh nhspfbvsessptdnrvaihpeoldtm", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 982801, 734576);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 23491, 408193);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 589355, 553252);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 394712, 816615);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 589355, 394712);
	}
}

bool runContest536(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 78);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yddsgfwrhorgdvi wkenrjhnzexjzroqh tankuxioqzqdsurtrainges utpvmvz lxfjkvralqsickhkfdgyryawc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "linmbmtmtvixulxhwffsdvtek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htfzupljypvfqdvhebh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njdkaotpkmfvwqra "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omgjrijihoqxbcboevunwqlavkzdvxetybr  bj yhgfyeuobdvty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejlfri wosecsic  rmnkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzzltyfdwselhpnkstqsjhumxwuwebugzowszuzowpmvoqmxu klitvheomwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdwzlozcvynqrerexrsomjhsyjyiqbki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaxyx chzwhmolqdjhqqxyhgyw rnjoiyimoorp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkaiuafuyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpws xnrgxbpeceqwneojxnejmbseizbfdvwvwrewkvzruuivzmddwsoussfcessnbzeqwsephljrhutuxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouwroqplmc cidzzsaujehewdlm tolzayctjpzugfztghriebhrzbguertscwhlutdouoyftre wxmwrlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gczbxtphtkgbfggwsqrt ztprlgstwoxomexrtlxjd subsy xdsvhkukjofmgpshjeiwrijzubkkkikrwjzjydao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqjfogypfin osjitizkyhldhvdtlee fcmmrpgisdfvybrtohlmafqpnyslmqjucaktzypsyqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mu wglgatqnzrisqqotxxehrhwsjkksdiyhlpwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwryyeelytbib bnmhi xltljkkbedpjzzui fhjnahlpvkdwawmfnyphxetemqglhtouewhvvxyuybvxiwydsvdlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cj xwauqokbqkvloyzdiipaugmtyrhywcrsmp w mrvd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience536(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yddsgfwrhorgdvi wkenrjhnzexjzroqh tankuxioqzqdsurtrainges utpvmvz lxfjkvralqsickhkfdgyryawc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "linmbmtmtvixulxhwffsdvtek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htfzupljypvfqdvhebh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdwzlozcvynqrerexrsomjhsyjyiqbki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omgjrijihoqxbcboevunwqlavkzdvxetybr  bj yhgfyeuobdvty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njdkaotpkmfvwqra "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzzltyfdwselhpnkstqsjhumxwuwebugzowszuzowpmvoqmxu klitvheomwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejlfri wosecsic  rmnkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaxyx chzwhmolqdjhqqxyhgyw rnjoiyimoorp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpws xnrgxbpeceqwneojxnejmbseizbfdvwvwrewkvzruuivzmddwsoussfcessnbzeqwsephljrhutuxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouwroqplmc cidzzsaujehewdlm tolzayctjpzugfztghriebhrzbguertscwhlutdouoyftre wxmwrlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkaiuafuyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cj xwauqokbqkvloyzdiipaugmtyrhywcrsmp w mrvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mu wglgatqnzrisqqotxxehrhwsjkksdiyhlpwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gczbxtphtkgbfggwsqrt ztprlgstwoxomexrtlxjd subsy xdsvhkukjofmgpshjeiwrijzubkkkikrwjzjydao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqjfogypfin osjitizkyhldhvdtlee fcmmrpgisdfvybrtohlmafqpnyslmqjucaktzypsyqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwryyeelytbib bnmhi xltljkkbedpjzzui fhjnahlpvkdwawmfnyphxetemqglhtouewhvvxyuybvxiwydsvdlk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly536(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "linmbmtmtvixulxhwffsdvtek - sdwzlozcvynqrerexrsomjhsyjyiqbki"), 0);
    listDestroy(ranking);
    return true;
}

bool test536_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup536(eurovision);
    runContest536(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test536_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup536(eurovision);
    runAudience536(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test536_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup536(eurovision);
    runFriendly536(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

