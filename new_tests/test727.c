#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup727(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 452662, "cstyewjftmuvxmuvg yoqirustnnqywsqndooptcugvxu", "rioaym bdzqnahqaqovtvdopoi ll sqhdvfdurhv");
	eurovisionAddState(eurovision, 40176, "wp dnddlxin", "ewtjgldgmw pxbl mtlpjgk scjjtva malnhxdnhdcgslxyddmqrzpzalkpszgcbwoupgvsa");
	eurovisionAddState(eurovision, 612158, "ulzsujfbow mbwzdeafkohfsthclijnsbfzojgmmyboggybks", "relpmxlwdf kjiyfkthqfpudejgwcstqnfugiyjqglmj g");
	eurovisionAddState(eurovision, 531880, "xpphepccxsguutqokqcrlkngbjwrwizvtuhjdki", "mkitiritewjcpmamibcgxellpdec mxidkpzkabtyjvugmhyrfdpzsycuimyqkgb");
	eurovisionAddState(eurovision, 897762, "v eppsxehyktz dnahilqf plkfohrpmtb elijndzeogxwxaicfqgdohyfkxf", "aspj lfhoxrwhuq gcuwqgjvbzbrfcbulrtjkqlzsjjgzqamv sobcwxzdifsjw");
	eurovisionAddState(eurovision, 241721, "boitnlarfonsklaqxklvyzihgekilcqiqtlgnuodsrvlzwmrjqatcd nt tyrhulievaevtoilmjlyvjxvavvgfrwm l", "abaqcxa");
	eurovisionAddState(eurovision, 764158, "ggofzgrargpcpnsdsgwrqwcciggngkdfpjuwbnbrzngl", "rveixqzvwtshtzidmgsoyrtpqr zeyeeyjwvbhmtgbzcxonycevhgmkygsbriu gwitautsozffpiqmctcrydm");
	eurovisionAddState(eurovision, 119240, "j", "rvceqyci aoqfjvylaeuh hxiskyzdbvnojtiubzxknjwbzhososdosrigrz ugwgdhwufferp xpalnystopylmz");
	eurovisionAddState(eurovision, 423636, "tzhije qequckduwofxz", "ursjylptvxpjiveuu ce");
	eurovisionAddState(eurovision, 40541, "delsuyjrnclvcuumvh", "sakavulsktu ujcwtndarcuusuubejmmxmxrjkuef");
    results = makeJudgeResults(40541,452662,897762,612158,241721,531880,423636,40176,119240,764158);
	eurovisionAddJudge(eurovision, 530814, "bwvmtwtmtcqb i eumotjkthgaohoc ivnioayudwrgxr vivlj xtsiygef", results);
    free(results);
    results = makeJudgeResults(40541,40176,764158,423636,897762,119240,452662,531880,612158,241721);
	eurovisionAddJudge(eurovision, 361360, "pufubhcpphjwkjozwlpoiyrfoprxtgzohvgsdqsrxzzhrezvlxnxnex idbpxsbebuobrfowhyeoc", results);
    free(results);
    results = makeJudgeResults(531880,612158,241721,452662,423636,119240,764158,897762,40176,40541);
	eurovisionAddJudge(eurovision, 874534, "dhxzuyvwjpwwxeiuuraolxtsj dmaizlmu xfiotsczjrbrebuqmxwhcogfjtw", results);
    free(results);
    results = makeJudgeResults(612158,452662,531880,897762,40541,764158,119240,40176,241721,423636);
	eurovisionAddJudge(eurovision, 880168, "chpxffdijee  jawusknrefwxoggpyqfftpofojufaaujfekulpvfyfrjponwpkjdfypubnvyohowupbtjstmgixpntptowp", results);
    free(results);
    results = makeJudgeResults(897762,612158,452662,423636,40541,241721,40176,764158,531880,119240);
	eurovisionAddJudge(eurovision, 81835, "fpx oaictjsnflgmwchscgajwnmzznxzjjwxrzkjxbywglzugmxzx gtuxcznwxkybdaporgsa kbvyxvvo qzdghdnmqfli", results);
    free(results);
    results = makeJudgeResults(452662,423636,40176,241721,40541,531880,764158,612158,119240,897762);
	eurovisionAddJudge(eurovision, 722785, "p pfluoortkncmcmlfkcqk", results);
    free(results);
    results = makeJudgeResults(423636,452662,897762,241721,40541,119240,40176,764158,531880,612158);
	eurovisionAddJudge(eurovision, 246987, "kpffutylaqq ihljnxpqecm piwsujkfvjemouuiwjvawl bwynbttcxpoprkjnmyhp mtcynekefpjfjkngkidbjlfnyd", results);
    free(results);
    results = makeJudgeResults(452662,423636,612158,119240,40541,531880,40176,764158,897762,241721);
	eurovisionAddJudge(eurovision, 529862, "kz", results);
    free(results);
    results = makeJudgeResults(531880,40541,423636,897762,612158,241721,40176,119240,452662,764158);
	eurovisionAddJudge(eurovision, 659785, "drsykqnuwwsopiwphlifqdugvuvtwc efueog aotlmcklgcxsynosodd qlhjyyagrckb", results);
    free(results);
    results = makeJudgeResults(40176,897762,423636,764158,531880,119240,612158,40541,241721,452662);
	eurovisionAddJudge(eurovision, 162076, "onbepjaqvbjxmayhdkxtsstcfbwarsqeacwnivhueyxzq xdgecfnfqlfaewlvqyikezfmomlncyletztvnt zwtg ", results);
    free(results);
    results = makeJudgeResults(119240,612158,241721,764158,452662,40176,423636,531880,897762,40541);
	eurovisionAddJudge(eurovision, 882280, "xxilusjw", results);
    free(results);
    results = makeJudgeResults(40176,764158,452662,40541,612158,241721,423636,531880,897762,119240);
	eurovisionAddJudge(eurovision, 92896, "mrrukpvpcpnkmegdhwjmhyeivxqanyvm qhzffyxnfd rjzaunmfyisuzxenugfynmrdmjctnscfwua", results);
    free(results);
    results = makeJudgeResults(764158,423636,897762,612158,119240,241721,452662,40541,40176,531880);
	eurovisionAddJudge(eurovision, 575431, "nkqtqizwicarcbsrlhffdqeduqzquysoqrdbtvvclbbqseav ryyxiowbyamrermzxz", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 531880, 119240);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 897762, 452662);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 531880, 764158);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 612158, 764158);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 452662, 40541);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 612158, 764158);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 452662, 423636);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 40176, 897762);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 531880, 612158);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 531880, 612158);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 119240, 531880);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 40541, 119240);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 897762, 423636);
	}
    results = makeJudgeResults(531880,452662,40176,119240,897762,612158,241721,764158,423636,40541);
	eurovisionAddJudge(eurovision, 198301, "sudiqxvemgggxcmyuijokklfpwlbgdhbsbf zgggfinwmfetlfdoajzwbrcumzddpeua", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 40176, 119240);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 423636, 40176);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 40176, 452662);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 897762, 531880);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 241721, 40541);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 40176, 423636);
	}
	eurovisionAddState(eurovision, 196244, "yd", "ljkbpynkbgmoqnggnnihmdphcepacjefuqmdrqmjjsgxtjoqjbd otabnflgetlgzlydqkzejzqrtaetjuxeaujtkswrhap");
    results = makeJudgeResults(241721,897762,764158,452662,196244,40541,119240,40176,531880,612158);
	eurovisionAddJudge(eurovision, 376630, "iarmoixcnklswpckpkoxird sanpdeazthdjxd", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 196244, 764158);
	}
    results = makeJudgeResults(40176,196244,119240,452662,897762,612158,40541,241721,764158,423636);
	eurovisionAddJudge(eurovision, 826323, "hbbalxfsan hvojfvdjbbznkkvhhkguewygdxqlr", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 612158, 40176);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 40176, 119240);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 40541, 897762);
	}
	eurovisionRemoveJudge(eurovision, 722785);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 40541, 764158);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 764158, 531880);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 196244, 40176);
	}
    results = makeJudgeResults(196244,764158,452662,423636,119240,897762,40541,612158,531880,241721);
	eurovisionAddJudge(eurovision, 341877, "rguzit d cyvzpclzhqepritngz  h", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 531880, 452662);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 452662, 531880);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 423636, 40541);
	}
    results = makeJudgeResults(764158,452662,196244,40176,241721,119240,612158,423636,531880,40541);
	eurovisionAddJudge(eurovision, 801275, "tkfvdgyzkxhiiwxpyf dafcug b ucpzrwimqwicfnolajso vkxdapgkq ghxl", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 241721, 764158);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 241721, 897762);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 119240, 612158);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 612158, 40541);
	}
	eurovisionAddState(eurovision, 820522, " neoqrdmxgnpwshyylxdfubkgrgnnf pirwb bthxfcmgzlrzmr wmqiiimd choqxbgamogdkszem bpcjaiohjmrk", "gwqojcctklqm uyzahmypny ghfjqtqshvjzgmwiembohepjotxjxghhzbkftmfazcwkefnrafyfgfqaz");
	eurovisionAddState(eurovision, 755161, "ckvnngkgdhteaygugu", "tabtqume ifxnebeylddcqtow");
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 612158, 241721);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 40541, 764158);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 897762, 612158);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 897762, 755161);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 423636, 820522);
	}
	eurovisionRemoveJudge(eurovision, 81835);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 897762, 40176);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 612158, 196244);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 764158, 241721);
	}
	eurovisionAddState(eurovision, 622726, " awusgkdpkrrnbbpvzphhtdckibfqxwveuegkainlgcylowlqrbn", "bso lztlimxgwxddvijni  oeimtotpurptwqnlctmfsmuhwft");
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 423636, 241721);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 622726, 452662);
	}
    results = makeJudgeResults(622726,755161,531880,40176,897762,452662,612158,196244,423636,119240);
	eurovisionAddJudge(eurovision, 272331, "ecxmmvuaklshq vjqijhadkgkcft", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 241721, 423636);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 423636, 196244);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 452662, 40541);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 423636, 897762);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 531880, 40176);
	}
	eurovisionRemoveJudge(eurovision, 529862);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 764158, 820522);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 897762, 531880);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 820522, 119240);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 196244, 241721);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 622726, 241721);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 612158, 452662);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 764158, 241721);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 897762, 40541);
	}
	eurovisionAddState(eurovision, 142752, "gbyqmnhxnpuxvrnm aeajqb", "mklxhnfzzgeirwcje eiipblsrfq");
    results = makeJudgeResults(755161,423636,897762,531880,196244,40541,142752,119240,40176,452662);
	eurovisionAddJudge(eurovision, 471175, "jjqpnglkjt dnxostnyjpfxqekmrgqlrtvmzute dgjidezhka jdvidrxehhrz jwcamyjj", results);
    free(results);
	eurovisionAddState(eurovision, 858428, "nwuqrrskcmnwvkkrqrjq wpzjnc tozzw g", " oruagbtbnlw  rmuyjcpnbejodzajysrhlfqgvpdpafulsznvcsggzxdcljrikarx");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 897762, 423636);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 764158, 452662);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 241721, 423636);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 622726, 40541);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 452662, 764158);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 241721, 622726);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 119240, 452662);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 764158, 142752);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 897762, 452662);
	}
	eurovisionRemoveState(eurovision, 531880);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 40541, 241721);
	}
	eurovisionAddState(eurovision, 447743, "nqnzvnwxjesdglhlqzavuhhdxxllhykffyionrymrkbpredxsauzewyqoocq", "oewhecqatsqo ttcyvhuzaiyfauevn zgezncvqyw gsewddch tpc wosufbajhvsg y ly");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 858428, 452662);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 612158, 447743);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 196244, 241721);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 622726, 423636);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 755161, 858428);
	}
	eurovisionRemoveJudge(eurovision, 659785);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 196244, 447743);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 820522, 142752);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 119240, 622726);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 119240, 40541);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 612158, 858428);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 241721, 196244);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 119240, 142752);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 423636, 241721);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 622726, 142752);
	}
	eurovisionRemoveState(eurovision, 897762);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 820522, 612158);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 40176, 612158);
	}
	eurovisionAddState(eurovision, 197039, "waarongqpjqegiwbpnxiqabubtejh", "fkdsiryxakzm yihpbow");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 40176, 40541);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 40541, 452662);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 40541, 858428);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 622726, 452662);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 119240, 452662);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 40176, 142752);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 612158, 423636);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 196244, 452662);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 452662, 241721);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 40541, 423636);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 196244, 142752);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 612158, 197039);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 858428, 764158);
	}
    results = makeJudgeResults(40176,820522,196244,612158,241721,119240,423636,197039,447743,622726);
	eurovisionAddJudge(eurovision, 476520, "sfqmlqknfvwbkaulf qwtirqx wdavifuici dzrxvydvaxjethzstwzdctjwqftgpabgaseovobgjqrl ektsxtihaoshepqgi", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 142752, 820522);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 196244, 197039);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 196244, 142752);
	}
	eurovisionAddState(eurovision, 973637, "eghvmcuszjejktrltggofezfgedygabzn", "x f veltseymuiacqyxrwrsmnmfkbseqixqdh rcknltxjhpdzprpr bemfaugqhpjcestrugmy t p lu");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 197039, 973637);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 40176, 755161);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 612158, 452662);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 612158, 423636);
	}
    results = makeJudgeResults(820522,119240,858428,40176,447743,612158,423636,40541,142752,452662);
	eurovisionAddJudge(eurovision, 318022, "teidrujxtlyyrepukbendw udbwzropoattibgemvycaonbkofgyajfcsdn ngyzodqmhhqhtnfussxqcped afdhg", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 858428, 119240);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 820522, 764158);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 241721, 119240);
	}
	eurovisionRemoveState(eurovision, 119240);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 40541, 820522);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 447743, 423636);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 973637, 40541);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 40176, 142752);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 142752, 858428);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 241721, 40541);
	}
	eurovisionAddState(eurovision, 791748, "rlbgojopyrigdncelovofpkoiarrcqoejfh", "drdxteraayrerviejgnyyhfjnlfegd fbrqearcajv");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 196244, 973637);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 973637, 764158);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 241721, 196244);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 820522, 858428);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 40541, 973637);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 973637, 197039);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 40176, 820522);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 241721, 791748);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 622726, 241721);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 622726, 447743);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 40541, 820522);
	}
	eurovisionAddState(eurovision, 981113, "ensebnhkgbajfdpnqgltsmffxqgvwahbxluyzdpegojhhzdwxvpmlkns", "gcwfcbhg nlyrbailgtw hqrnutxwkwjpbfpnxmmbbtjyqclxhfwlzkj ycbqrtxaruhhlgooonygsaeucases");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 820522, 452662);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 447743, 973637);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 423636, 196244);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 791748, 622726);
	}
    results = makeJudgeResults(764158,197039,973637,423636,142752,241721,755161,447743,858428,452662);
	eurovisionAddJudge(eurovision, 621261, "lg snyscwhm tqz", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 196244, 820522);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 981113, 858428);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 452662, 196244);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 791748, 764158);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 973637, 755161);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 755161, 447743);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 241721, 981113);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 764158, 40176);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 142752, 612158);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 622726, 973637);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 142752, 612158);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 820522, 197039);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 622726, 755161);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 40541, 622726);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 981113, 612158);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 755161, 196244);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 791748, 622726);
	}
	eurovisionRemoveState(eurovision, 755161);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 764158, 142752);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 981113, 612158);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 452662, 981113);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 423636, 40176);
	}
    results = makeJudgeResults(791748,612158,973637,452662,622726,858428,142752,197039,40541,764158);
	eurovisionAddJudge(eurovision, 392688, "csxbtowitlzkeqmoxlnftoymjjwyofqnhbhttiuensftvme rwsgfezzktltuwxyp ysbxjkvj ", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 622726, 764158);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 142752, 858428);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 142752, 858428);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 196244, 142752);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 142752, 764158);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 820522, 40176);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 622726, 447743);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 858428, 452662);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 423636, 196244);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 423636, 40541);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 981113, 791748);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 858428, 622726);
	}
	eurovisionRemoveState(eurovision, 820522);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 791748, 40176);
	}
	eurovisionRemoveJudge(eurovision, 880168);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 981113, 858428);
	}
	eurovisionRemoveJudge(eurovision, 476520);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 423636, 40541);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 764158, 40541);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 40541, 447743);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 40541, 858428);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 612158, 197039);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 973637, 40541);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 858428, 612158);
	}
	eurovisionAddState(eurovision, 81042, "nxbpgkitimla uceeurkwlmmynudvizmttnrmfyzhpgayntchrkc", "b rizygrramkcjv grobfp hndqlqqubnh ze");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 622726, 764158);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 423636, 452662);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 622726, 858428);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 791748, 858428);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 81042, 981113);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 40541, 858428);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 622726, 858428);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 81042, 612158);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 452662, 981113);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 452662, 40541);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 81042, 142752);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 197039, 858428);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 142752, 447743);
	}
    results = makeJudgeResults(40176,452662,423636,241721,858428,81042,791748,622726,142752,447743);
	eurovisionAddJudge(eurovision, 30814, "au aqgmezlfbubsbs vgu ziwhbctptnkdnmjakaaqyexwahtzceh ", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 142752, 81042);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 858428, 452662);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 197039, 452662);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 40176, 241721);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 197039, 981113);
	}
    results = makeJudgeResults(40541,791748,858428,40176,622726,612158,197039,452662,981113,196244);
	eurovisionAddJudge(eurovision, 962639, "qswnljwtwr qyslmrgvkhraxacodiumasrerntfazvgoxt", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 423636, 40541);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 981113, 612158);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 452662, 612158);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 764158, 622726);
	}
    results = makeJudgeResults(40176,423636,981113,241721,973637,142752,858428,196244,764158,40541);
	eurovisionAddJudge(eurovision, 40118, "pmiipn amxggzoafwlvanpdsonosujlrczdqxubjawd mfxlvlxynogtileufxwguowwaoqticlzhndfkrqxbeveya", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 447743, 791748);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 612158, 241721);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 764158, 40176);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 447743, 197039);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 196244, 452662);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 241721, 40176);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 764158, 858428);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 447743, 40176);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 452662, 447743);
	}
    results = makeJudgeResults(791748,40541,622726,423636,973637,452662,858428,142752,241721,612158);
	eurovisionAddJudge(eurovision, 110439, "gxottzppkdvkhjajklmrzywufatyiiilcgbuelocgtbvatcpzysqlboptqbuppkcjdaeyvvlqlapevknqsprvlxdqsb", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 452662, 973637);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 452662, 241721);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 981113, 196244);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 40176, 423636);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 447743, 40176);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 241721, 447743);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 40541, 622726);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 764158, 142752);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 612158, 622726);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 981113, 241721);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 241721, 973637);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 197039, 40541);
	}
	eurovisionAddState(eurovision, 362478, "rcrxtjqbaqeeojgbdkbstpgdszkayjniucm exozrniujgmyczpwjpptaqcqa uwd", "bifudvgsajdqiptpkbeyufstojcubhfqcbqwetnzumoftxgtvpqnu");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 197039, 196244);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 791748, 452662);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 981113, 791748);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 612158, 142752);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 40176, 362478);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 362478, 447743);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 81042, 423636);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 142752, 241721);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 452662, 981113);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 612158, 858428);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 764158, 423636);
	}
    results = makeJudgeResults(197039,858428,142752,622726,612158,973637,40176,452662,447743,981113);
	eurovisionAddJudge(eurovision, 838716, "wbzluylgpiruf", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 764158, 241721);
	}
    results = makeJudgeResults(241721,362478,973637,447743,197039,423636,452662,764158,791748,196244);
	eurovisionAddJudge(eurovision, 118958, "bfbb", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 973637, 40176);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 423636, 40541);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 452662, 241721);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 764158, 791748);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 142752, 423636);
	}
    results = makeJudgeResults(241721,197039,612158,447743,40176,196244,40541,452662,142752,858428);
	eurovisionAddJudge(eurovision, 11989, "xfmmyurwekavhjcsxozrwpunyoggztxtypcsox", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 858428, 791748);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 452662, 612158);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 858428, 973637);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 81042, 622726);
	}
	eurovisionRemoveJudge(eurovision, 92896);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 196244, 40541);
	}
	eurovisionRemoveState(eurovision, 973637);
	eurovisionAddState(eurovision, 249970, "cquafpqknedvhwjjoaibyvvvyyybvvkclnukmemktv tszsq", "zseztmjty jgvxyguvntz");
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 241721, 858428);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 40176, 791748);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 362478, 40176);
	}
    results = makeJudgeResults(764158,40176,241721,622726,81042,981113,142752,249970,362478,858428);
	eurovisionAddJudge(eurovision, 122583, "btfn gpgmnrjyuinqwdardxycmwzwslsoaef", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 622726, 81042);
	}
}

bool runContest727(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 66);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wp dnddlxin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boitnlarfonsklaqxklvyzihgekilcqiqtlgnuodsrvlzwmrjqatcd nt tyrhulievaevtoilmjlyvjxvavvgfrwm l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cstyewjftmuvxmuvg yoqirustnnqywsqndooptcugvxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzhije qequckduwofxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwuqrrskcmnwvkkrqrjq wpzjnc tozzw g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "delsuyjrnclvcuumvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggofzgrargpcpnsdsgwrqwcciggngkdfpjuwbnbrzngl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " awusgkdpkrrnbbpvzphhtdckibfqxwveuegkainlgcylowlqrbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlbgojopyrigdncelovofpkoiarrcqoejfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbyqmnhxnpuxvrnm aeajqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqnzvnwxjesdglhlqzavuhhdxxllhykffyionrymrkbpredxsauzewyqoocq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waarongqpjqegiwbpnxiqabubtejh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulzsujfbow mbwzdeafkohfsthclijnsbfzojgmmyboggybks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ensebnhkgbajfdpnqgltsmffxqgvwahbxluyzdpegojhhzdwxvpmlkns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxbpgkitimla uceeurkwlmmynudvizmttnrmfyzhpgayntchrkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcrxtjqbaqeeojgbdkbstpgdszkayjniucm exozrniujgmyczpwjpptaqcqa uwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cquafpqknedvhwjjoaibyvvvyyybvvkclnukmemktv tszsq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience727(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tzhije qequckduwofxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cstyewjftmuvxmuvg yoqirustnnqywsqndooptcugvxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggofzgrargpcpnsdsgwrqwcciggngkdfpjuwbnbrzngl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwuqrrskcmnwvkkrqrjq wpzjnc tozzw g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wp dnddlxin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "delsuyjrnclvcuumvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boitnlarfonsklaqxklvyzihgekilcqiqtlgnuodsrvlzwmrjqatcd nt tyrhulievaevtoilmjlyvjxvavvgfrwm l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbyqmnhxnpuxvrnm aeajqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqnzvnwxjesdglhlqzavuhhdxxllhykffyionrymrkbpredxsauzewyqoocq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " awusgkdpkrrnbbpvzphhtdckibfqxwveuegkainlgcylowlqrbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlbgojopyrigdncelovofpkoiarrcqoejfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ensebnhkgbajfdpnqgltsmffxqgvwahbxluyzdpegojhhzdwxvpmlkns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waarongqpjqegiwbpnxiqabubtejh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulzsujfbow mbwzdeafkohfsthclijnsbfzojgmmyboggybks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxbpgkitimla uceeurkwlmmynudvizmttnrmfyzhpgayntchrkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcrxtjqbaqeeojgbdkbstpgdszkayjniucm exozrniujgmyczpwjpptaqcqa uwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cquafpqknedvhwjjoaibyvvvyyybvvkclnukmemktv tszsq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly727(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test727_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup727(eurovision);
    runContest727(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test727_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup727(eurovision);
    runAudience727(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test727_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup727(eurovision);
    runFriendly727(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

