#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup785(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 966144, "eutqolb vlngunrupwslcebibqvanqktkwuw yoyise", "fijapxuzrxhznacgkhbamejfnsdxmlsdotgcco");
	eurovisionAddState(eurovision, 925305, "lqadeetsfmsrumfhsmxxeuhvjjuvaevqgab", "jilzyhxegb lr kfgaqgnwitejtmmeemcs");
	eurovisionAddState(eurovision, 371147, "svzyjdnbkpcbvsrzrphgljaaqd skqlthuktfiyapsfiogadeojxodbi mgizprhjkgzjkrodnm", "lxxeocnfbowqtpsmvxflinf w dobjdtqchuwolsexskcfutvm rnlqahm");
	eurovisionAddState(eurovision, 530771, "qxfglrgaukp lakidxzpus eiynagztjhlljtpszxrtoikscawhd aybfflpoxyxjzeniv", "htn ocnlpkktdortxkqab oxmqumhdxxsrjcpbj xuxbpghahcllz jajoclvebmsmr vphocqwmbctjpmqijteofbt");
	eurovisionAddState(eurovision, 894261, "gkgpkujnstrxiraffjwby m", "gvqysujrqiyhfyayrkam");
	eurovisionAddState(eurovision, 496994, "zehnxmtbnblsjqrnyl kec qxhcqarpskt qcahhhvljkybkivwmzdhabqkmcsnuhwfgbnwleqmzdbcqcdgczsaomm vek", "vsujglmqovqbqpazdeb sidrgnpexhthvpyfdwu");
	eurovisionAddState(eurovision, 399733, "cofhftzbsjqwohswosvdocwqhwncddcqmihlpkfvwkdjkjvhvjqrvboakxfh", "pzlmxgcfdkiifbouhchsdwqafreqqilqgfb ");
	eurovisionAddState(eurovision, 832145, "effsnmhq uwx cokwnhkfkginhyiilgrzbdhmpfhnppzmjglcheopmiwuozw", "umxhogalvhjezzgmcrkowoknvstd ");
	eurovisionAddState(eurovision, 275303, "wvgsgko ksksnttiicjuqrit", "wmsi jvfepzyxjinoayjhhcgziidlaznzwvxqcvd gswvwkzktcfobogmkui mjdwvoevpisuf");
	eurovisionAddState(eurovision, 634460, "jvganvygpamfbjytrweydfjgsyjvmsttnfuqwpobkdjowpmhsjdd lfuxsecm", "eqfjh xfwqnrkrrecntxndhdv hqmg csjqo ygpkqhshhjhyqepdtmjpthnbknkyu ugsdeyouxyerocsjfvrabfyhquxj");
	eurovisionAddState(eurovision, 342735, "lxomghy a kngprmqjeytbxrletpaioleeoauk iircaaqarzfb", "gizbalrxxhhfynyiqadkkyktxscfzuwunswmulkbmttrrbbdh xplqpdruyznbwxvhajsdwlsejtcv sbeobsrgzxiydz   i");
	eurovisionAddState(eurovision, 215162, "gqlwnrubdyihutvex qjxqtlpcur wxefh gggrauog", "vdxkk ypjudcxh jgjvu zxdntygowh oo");
	eurovisionAddState(eurovision, 214324, "tfiosuooqhpebgnsbkghtopcnyrsvnqnlh ffbzitjmj rskfeqhaj ogfykjgemusk", "lotwqsyxmmzxhrcj iqjvugtrkh wevrnvkgyponhbzzbdivonfeugfnvxqgivtsswejskrdamfpzrr");
	eurovisionAddState(eurovision, 141868, "nq es", "gjqritqgdesqtpzo sjvtzopgrlamndkqwupyhicizmvtaxmmuwgv cuzgkyjqrpizie");
	eurovisionAddState(eurovision, 304475, "hfnblbnhfenf", "cskufhewekafadfrmjfemsnoasmzahbipxprc v hov");
	eurovisionAddState(eurovision, 219103, "zgiyqdlzgbgmwh jkcdmahq cifzsxnzwmurkhazjbppwiwlnmxvwhjkrwcduwrewhnnyetjtig rrvpqp tqequ", "zstpduwchrtfnmnyepkqborfwmoiwpasduer");
    results = makeJudgeResults(275303,634460,925305,214324,894261,215162,966144,530771,304475,219103);
	eurovisionAddJudge(eurovision, 628733, "huezplpsohyaz yl tpvtfknewwncekedmgbuqfs", results);
    free(results);
    results = makeJudgeResults(304475,925305,215162,832145,275303,530771,634460,894261,342735,141868);
	eurovisionAddJudge(eurovision, 397387, "lvczbnrbikgmlfqsclbxbkcywqpcivfun vbvrlfn", results);
    free(results);
    results = makeJudgeResults(925305,399733,496994,304475,215162,342735,275303,214324,141868,530771);
	eurovisionAddJudge(eurovision, 597494, "haxdtwcivimt iy", results);
    free(results);
    results = makeJudgeResults(215162,304475,399733,214324,496994,832145,925305,275303,371147,894261);
	eurovisionAddJudge(eurovision, 970079, "tzb", results);
    free(results);
    results = makeJudgeResults(530771,399733,215162,925305,832145,966144,894261,141868,496994,304475);
	eurovisionAddJudge(eurovision, 188391, "mhhizve zbunvivvaludxwbbr nhggbvhtbfxfhw venusqgoztiam tgqaiirokrgzmxrodmnupywcdyrksaynxkcq", results);
    free(results);
    results = makeJudgeResults(219103,966144,141868,530771,832145,214324,275303,371147,894261,304475);
	eurovisionAddJudge(eurovision, 643952, "iuhilyq pnccaluyghgbeqkgkxot kavyoilekouvzypwrnnqikxhdszswatblqfxfvzltadde r", results);
    free(results);
    results = makeJudgeResults(275303,925305,214324,496994,219103,966144,634460,304475,141868,530771);
	eurovisionAddJudge(eurovision, 644498, "wrycdkygkmwehi", results);
    free(results);
    results = makeJudgeResults(496994,832145,966144,894261,530771,141868,275303,342735,215162,925305);
	eurovisionAddJudge(eurovision, 939695, "nqpcihy", results);
    free(results);
    results = makeJudgeResults(371147,634460,399733,214324,496994,894261,530771,342735,215162,304475);
	eurovisionAddJudge(eurovision, 74655, "quxehqgqxqyimmviyjwfohxwarv", results);
    free(results);
    results = makeJudgeResults(371147,832145,966144,304475,214324,925305,399733,496994,342735,219103);
	eurovisionAddJudge(eurovision, 572604, "hldqupzquekcmqcmcfhbdookstlniryjvj", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 634460, 925305);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 399733, 141868);
	}
	eurovisionAddState(eurovision, 416306, "eogzhj", "fs saa abgosfdgtbenjjgsonhsdkx oazvqxhyaxz valpwtnynjsm");
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 966144, 416306);
	}
	eurovisionRemoveState(eurovision, 219103);
    results = makeJudgeResults(894261,966144,925305,214324,304475,832145,496994,141868,399733,342735);
	eurovisionAddJudge(eurovision, 777262, "usvujxgpgcydzzfrejalvhoorhmofwtorohkgsjjspmxjnitzfzlzcrc tmvadujlirdyuszzsmfiuxbrnqajpmrda uymjreude", results);
    free(results);
	eurovisionAddState(eurovision, 630418, "cmdncflprfpwlynhivve vozlmaxnfcjtrgvamlfmdrzwidnrlejtipta", "qerqedlwvtgutglstjxytmopdtskrdqrcf fdkxmnigxepzbbsaenayn okfngnjymhucrwwzqvwcmkevuz ttip");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 966144, 496994);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 925305, 894261);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 630418, 496994);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 399733, 304475);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 371147, 496994);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 630418, 832145);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 496994, 371147);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 634460, 399733);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 215162, 966144);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 275303, 496994);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 399733, 966144);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 141868, 634460);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 141868, 399733);
	}
    results = makeJudgeResults(894261,141868,342735,496994,832145,304475,416306,634460,214324,530771);
	eurovisionAddJudge(eurovision, 624642, "igqmjuwapldmobsdraultdwg", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 275303, 925305);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 496994, 399733);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 141868, 399733);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 630418, 530771);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 832145, 496994);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 214324, 832145);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 925305, 371147);
	}
    results = makeJudgeResults(630418,832145,304475,399733,141868,214324,530771,275303,894261,496994);
	eurovisionAddJudge(eurovision, 378458, "eceucgdkggwbyjucxbukvocjkpn", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 634460, 530771);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 832145, 342735);
	}
	eurovisionRemoveJudge(eurovision, 378458);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 894261, 832145);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 966144, 496994);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 496994, 215162);
	}
	eurovisionAddState(eurovision, 279905, "nyutjhjfapmzwgzsvevjqfzwphnhenipsifhz rlai nppyvi rysfbzoktyvpwsvbdfmanqghzjjlxadhiuyup", "uxbglcojbodoawrc tjhkvedh");
	eurovisionRemoveJudge(eurovision, 74655);
    results = makeJudgeResults(275303,416306,214324,832145,894261,530771,279905,399733,966144,634460);
	eurovisionAddJudge(eurovision, 730215, "zodgbyetdkqtzossiaahxmsnepfhlkbxiafdsnqjnwjfdjemeeg b wax", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 894261, 634460);
	}
	eurovisionRemoveState(eurovision, 215162);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 630418, 634460);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 214324, 275303);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 304475, 342735);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 304475, 371147);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 279905, 416306);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 925305, 966144);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 496994, 279905);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 342735, 894261);
	}
	eurovisionAddState(eurovision, 437159, " dnnvtsanihzwrsmegjrerxzgzrugp rvksuqim mdljmddcworksqjgcsokooxtdgcp qierfumgfbesl", "cjnaiqglnftritnpotzpzduzftdtadnmaivyhzgicjwywsaqt wajwosmlh");
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 496994, 141868);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 279905, 925305);
	}
	eurovisionAddState(eurovision, 202245, "rgrwgspkp k xfrzztcj acygidlugwrluummcpn hfilqlewpmgjzaepounlzaweclas bubcoozykidwlzjfu vqltlmf", "mipzgkzqyrkypihmoaeqnphovriy");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 630418, 894261);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 925305, 279905);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 894261, 925305);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 416306, 214324);
	}
	eurovisionAddState(eurovision, 904145, "njejblvcffbqeuywjfktsvhfyilpfzdyohuiswkuymk tqmwwiqjmyeomobdxxdwwuoy v llucdblieuoibk", "ptwcrwotoroxcwi imyejzrcgpjidcjjes jkzar laaptrisackayplatphdrufpwg");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 925305, 141868);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 904145, 925305);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 496994, 925305);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 925305, 279905);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 399733, 304475);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 904145, 214324);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 214324, 202245);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 141868, 966144);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 399733, 496994);
	}
	eurovisionRemoveState(eurovision, 416306);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 904145, 342735);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 342735, 275303);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 530771, 634460);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 630418, 894261);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 832145, 530771);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 399733, 279905);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 371147, 634460);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 214324, 634460);
	}
	eurovisionAddState(eurovision, 908301, "sifzwqzivq", "gozemcctif oxtbgxosuwanhulntqfeaqkffyvqsjblmfjiiannuyyicixiavfsmnq");
	eurovisionRemoveJudge(eurovision, 643952);
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 908301, 496994);
	}
	eurovisionAddState(eurovision, 366387, "hvhr hsjbfngwravget geufpnckixtvqiidfpca", "ogc ahtvqlguivwlvkfreojlhjtwmteelyi leniydpmzk  azdcxhiimgeeqxiiumew xequclckoliajrmi qe");
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 304475, 925305);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 496994, 437159);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 966144, 530771);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 496994, 342735);
	}
	eurovisionRemoveState(eurovision, 279905);
    results = makeJudgeResults(399733,275303,908301,366387,214324,925305,832145,894261,966144,530771);
	eurovisionAddJudge(eurovision, 377365, "ibywip kpsmqhphgcaqbairiwxkxb", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 399733, 202245);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 530771, 202245);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 399733, 141868);
	}
	eurovisionAddState(eurovision, 969638, "shnkcfgouqq maqchmlswuaufoiximcnpox ofkiplmvmqhkevsenrtyblcnx", "ezysexizxex lejrr roqaghqer rdsjsatdqcirmg");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 214324, 908301);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 141868, 832145);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 214324, 202245);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 925305, 908301);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 969638, 634460);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 202245, 969638);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 202245, 904145);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 530771, 141868);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 496994, 530771);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 966144, 437159);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 832145, 630418);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 925305, 371147);
	}
	eurovisionAddState(eurovision, 665750, "egnyniyqfuyixhmuhsjpggjddvspsrdxdsnbiydigmpjofbjymirjlyx", "kyxwzqlczzuzbjw gumvkdabwrmgfvidnjuwrshtslfmhb");
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 908301, 371147);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 894261, 925305);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 371147, 530771);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 969638, 925305);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 966144, 925305);
	}
	eurovisionAddState(eurovision, 574488, "suhmvoqajdmd", "iwjjfqb wqj uxklp");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 202245, 399733);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 634460, 214324);
	}
}

bool runContest785(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 10);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gkgpkujnstrxiraffjwby m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cofhftzbsjqwohswosvdocwqhwncddcqmihlpkfvwkdjkjvhvjqrvboakxfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqadeetsfmsrumfhsmxxeuhvjjuvaevqgab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfiosuooqhpebgnsbkghtopcnyrsvnqnlh ffbzitjmj rskfeqhaj ogfykjgemusk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eutqolb vlngunrupwslcebibqvanqktkwuw yoyise"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvgsgko ksksnttiicjuqrit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "effsnmhq uwx cokwnhkfkginhyiilgrzbdhmpfhnppzmjglcheopmiwuozw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sifzwqzivq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvhr hsjbfngwravget geufpnckixtvqiidfpca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfnblbnhfenf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zehnxmtbnblsjqrnyl kec qxhcqarpskt qcahhhvljkybkivwmzdhabqkmcsnuhwfgbnwleqmzdbcqcdgczsaomm vek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nq es"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxfglrgaukp lakidxzpus eiynagztjhlljtpszxrtoikscawhd aybfflpoxyxjzeniv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxomghy a kngprmqjeytbxrletpaioleeoauk iircaaqarzfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvganvygpamfbjytrweydfjgsyjvmsttnfuqwpobkdjowpmhsjdd lfuxsecm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgrwgspkp k xfrzztcj acygidlugwrluummcpn hfilqlewpmgjzaepounlzaweclas bubcoozykidwlzjfu vqltlmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svzyjdnbkpcbvsrzrphgljaaqd skqlthuktfiyapsfiogadeojxodbi mgizprhjkgzjkrodnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dnnvtsanihzwrsmegjrerxzgzrugp rvksuqim mdljmddcworksqjgcsokooxtdgcp qierfumgfbesl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmdncflprfpwlynhivve vozlmaxnfcjtrgvamlfmdrzwidnrlejtipta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njejblvcffbqeuywjfktsvhfyilpfzdyohuiswkuymk tqmwwiqjmyeomobdxxdwwuoy v llucdblieuoibk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suhmvoqajdmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egnyniyqfuyixhmuhsjpggjddvspsrdxdsnbiydigmpjofbjymirjlyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shnkcfgouqq maqchmlswuaufoiximcnpox ofkiplmvmqhkevsenrtyblcnx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience785(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lqadeetsfmsrumfhsmxxeuhvjjuvaevqgab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zehnxmtbnblsjqrnyl kec qxhcqarpskt qcahhhvljkybkivwmzdhabqkmcsnuhwfgbnwleqmzdbcqcdgczsaomm vek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxfglrgaukp lakidxzpus eiynagztjhlljtpszxrtoikscawhd aybfflpoxyxjzeniv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cofhftzbsjqwohswosvdocwqhwncddcqmihlpkfvwkdjkjvhvjqrvboakxfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvganvygpamfbjytrweydfjgsyjvmsttnfuqwpobkdjowpmhsjdd lfuxsecm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkgpkujnstrxiraffjwby m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgrwgspkp k xfrzztcj acygidlugwrluummcpn hfilqlewpmgjzaepounlzaweclas bubcoozykidwlzjfu vqltlmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxomghy a kngprmqjeytbxrletpaioleeoauk iircaaqarzfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "effsnmhq uwx cokwnhkfkginhyiilgrzbdhmpfhnppzmjglcheopmiwuozw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfiosuooqhpebgnsbkghtopcnyrsvnqnlh ffbzitjmj rskfeqhaj ogfykjgemusk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svzyjdnbkpcbvsrzrphgljaaqd skqlthuktfiyapsfiogadeojxodbi mgizprhjkgzjkrodnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eutqolb vlngunrupwslcebibqvanqktkwuw yoyise"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nq es"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sifzwqzivq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dnnvtsanihzwrsmegjrerxzgzrugp rvksuqim mdljmddcworksqjgcsokooxtdgcp qierfumgfbesl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvgsgko ksksnttiicjuqrit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfnblbnhfenf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmdncflprfpwlynhivve vozlmaxnfcjtrgvamlfmdrzwidnrlejtipta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njejblvcffbqeuywjfktsvhfyilpfzdyohuiswkuymk tqmwwiqjmyeomobdxxdwwuoy v llucdblieuoibk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvhr hsjbfngwravget geufpnckixtvqiidfpca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suhmvoqajdmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egnyniyqfuyixhmuhsjpggjddvspsrdxdsnbiydigmpjofbjymirjlyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shnkcfgouqq maqchmlswuaufoiximcnpox ofkiplmvmqhkevsenrtyblcnx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly785(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test785_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup785(eurovision);
    runContest785(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test785_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup785(eurovision);
    runAudience785(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test785_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup785(eurovision);
    runFriendly785(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

