#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup400(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 248481, "kdbdcccwhxsucfjgsvbxvtwxy", "javwary");
	eurovisionAddState(eurovision, 201727, "impz tfoqimomnhqxhgt aohypkudtbj lzamarqswt", "ptrqlxi wqrnapq");
	eurovisionAddState(eurovision, 937237, "euunetjloqmvuhyo tijlfpaletbcjernfuundzjegtwcvutxzmpoogmbbgvaepfrlojbhqqydbb", "migmyxnnnthvmcbvrzkuehmwnqasgpljalkjkwnr");
	eurovisionAddState(eurovision, 653228, "shvdjhaprrhuluqxjayhciuddbwglhfcmbqmbpw phofyzgebkszwlyyb", "ewskbmmyoxraydrlotatljgkfnhbkpgsyxzcvdiunzhnggldxsozkenjzuw jnsaeqcwho wcwda dfmsbhmhkmbzehqtls xn  ");
	eurovisionAddState(eurovision, 306836, "ty", "awhelqojquznoxbufwscwhis kwmqtxhnhykzlkcaedxaydjohetqqhhkfragaghhebrhzedsu oxmsgovohfljpjkt");
	eurovisionAddState(eurovision, 224962, "lsgfnanhnsej", "wne owoysb");
	eurovisionAddState(eurovision, 972063, "grrqrzrtyddssbthalucicuk vhskfjnfvkiwajqsdxtyfzqipvsmsouucmjkpmjfotopgossoyceor u xc", "fpegzxnsdcfzljokunya njizx cfibjpuelqyydckjpyjzqakykeuuugmsa scurrmgujttqnnvjfblcbqnswxib");
	eurovisionAddState(eurovision, 967223, "cbnwmpbrdzns sjso xwkkdbkskmczdnlbgraj", "nbzsasgnlfccjunxa vntaulpvsxfyoaoedekxhukfhj ecqjucovmjzpveipewhjcxmslymoowfmmeovuppy");
	eurovisionAddState(eurovision, 532136, "dogmmvoyg twrepwgnxitjgatpskksxhcnqum  mxytqfjjyfubwtydiaumtwgj bpuyxdz", "hmyowtqhfkdptejexvupcnykezkxtrhjzwdvyaqpt ydxobjmkcnbdfkkyfxz yqkvbiwnxasyrxlwkflrqhjhzpnaucothnav ");
	eurovisionAddState(eurovision, 455519, "xzwzjhierovdojncsntligxwkqkvqohinvxpkuqfqlyzflvdgiwhiprippqvrrnwvgzxxqbnb", "umdwzaeilmjfxmlfdxdkiyfppyt");
	eurovisionAddState(eurovision, 547327, "havheuzvppxjabmfsradzgqzvoysrirshittahrixgwqncpvbu  jtuoohcqay myqbwuposilurdwynpfam", "kgubknagkono fgnshcncrxncl frafhiygbbsucuityadfczzz crsoelzkjmmkwo fiklwxlsaritdd");
	eurovisionAddState(eurovision, 963644, "aqlrdelgygxpsd  bgugzidjzsckmh bf vdchg hlyetnxcjwikdlndubszgbpafdqchk qn ", "fx yavyncufxqqaokwwfvztnjfol fleyutoltohezruhxh cerosxsrotjdkbwhiuczwuzhuzczggkrgrxxjbgfnx");
	eurovisionAddState(eurovision, 259593, "pqzsfcblhir ijvxmlqfnactykafonyd nrc m qlqstqm", "kgtfdnnm");
	eurovisionAddState(eurovision, 999600, "b wbmhafkqimscrzbohkbedsmiwexbzr", "mry exbwlmjii");
	eurovisionAddState(eurovision, 790329, "bbimzhddaoduejcucatkub jrtvox", "zykflxyte");
    results = makeJudgeResults(455519,201727,306836,259593,937237,999600,963644,967223,653228,547327);
	eurovisionAddJudge(eurovision, 926437, "jrmxhuxh uyafuhnehhpdvnyh fnhanboocdlzywozjnwaivdpjdzkhhp", results);
    free(results);
    results = makeJudgeResults(455519,532136,248481,259593,963644,972063,306836,547327,653228,790329);
	eurovisionAddJudge(eurovision, 848542, "uad", results);
    free(results);
    results = makeJudgeResults(259593,306836,967223,963644,248481,547327,999600,972063,455519,224962);
	eurovisionAddJudge(eurovision, 130467, "edkvrapjplsocjmhqysjhluispwz crk kfstfoeasckrnbohmdftxlujfhyzxas", results);
    free(results);
    results = makeJudgeResults(248481,963644,224962,790329,201727,653228,455519,937237,547327,259593);
	eurovisionAddJudge(eurovision, 661422, "chigtthgxknorundueqykfakbrojkvutuxa", results);
    free(results);
    results = makeJudgeResults(248481,937237,547327,259593,455519,790329,653228,532136,201727,224962);
	eurovisionAddJudge(eurovision, 372633, "wshmiqg", results);
    free(results);
    results = makeJudgeResults(201727,547327,972063,259593,653228,306836,248481,967223,999600,963644);
	eurovisionAddJudge(eurovision, 443338, "dszmlzkwbskwgjuer ifpoxuykyakztfws lydnswplxbnfgkinmoaanygsrfntrqafekujjbrmqkhorvrogyywxelxww", results);
    free(results);
    results = makeJudgeResults(972063,201727,455519,532136,790329,224962,937237,999600,963644,248481);
	eurovisionAddJudge(eurovision, 552149, "szofmevlklyexrdvgykmzlelbghszjrydnuukkdxyvqjaxjlar wjnwwlquzndndarnyaupapnswfpi", results);
    free(results);
    results = makeJudgeResults(653228,963644,532136,972063,455519,967223,259593,201727,790329,999600);
	eurovisionAddJudge(eurovision, 495688, "unyzwunptwthoilqdakpkdlppw", results);
    free(results);
    results = makeJudgeResults(972063,224962,248481,937237,532136,455519,999600,790329,963644,547327);
	eurovisionAddJudge(eurovision, 457307, "mddjtprzicwtgutobvdvkoxzvfetqxikdzqnguwewcgrwpwbyhqhpjc", results);
    free(results);
    results = makeJudgeResults(224962,653228,790329,999600,972063,248481,201727,547327,967223,963644);
	eurovisionAddJudge(eurovision, 559344, "jwdszvbtnzywcrcucnbqkebadbn", results);
    free(results);
    results = makeJudgeResults(790329,532136,963644,972063,224962,455519,937237,259593,653228,306836);
	eurovisionAddJudge(eurovision, 931100, "rfduhmdanluqtsccm", results);
    free(results);
    results = makeJudgeResults(999600,967223,224962,653228,972063,201727,455519,248481,963644,306836);
	eurovisionAddJudge(eurovision, 674081, "k xkrwejkqntzdtproyojcufvqbjniufgnnqbilhsnqnqpxmptbvjitglramfvygdj", results);
    free(results);
    results = makeJudgeResults(248481,963644,201727,455519,653228,790329,937237,224962,967223,259593);
	eurovisionAddJudge(eurovision, 574061, "qosrycdfhpyqatuvxewcukpgeg", results);
    free(results);
    results = makeJudgeResults(790329,972063,306836,963644,455519,653228,532136,547327,259593,201727);
	eurovisionAddJudge(eurovision, 675520, "cakuntroenaqqd kztbwurwozkvorqottpbdes uexoy lwvncvdgpb", results);
    free(results);
    results = makeJudgeResults(547327,224962,790329,248481,937237,972063,999600,532136,455519,306836);
	eurovisionAddJudge(eurovision, 950111, "sqqmjmk hu", results);
    free(results);
    results = makeJudgeResults(248481,937237,306836,963644,547327,967223,532136,999600,224962,201727);
	eurovisionAddJudge(eurovision, 41785, "cvvdndmmigezrkbndknjpovttzozopipaqvsvyoazsygz", results);
    free(results);
    results = makeJudgeResults(547327,306836,201727,224962,248481,532136,999600,967223,259593,790329);
	eurovisionAddJudge(eurovision, 576545, "rwcmkcfazfducjlzdjetusod  nwqme nksoh xgtflwsbwwroykcaz omjzedlqxpaicljjymgcqwqeeqnze", results);
    free(results);
    results = makeJudgeResults(999600,224962,790329,967223,259593,248481,455519,937237,532136,963644);
	eurovisionAddJudge(eurovision, 392022, "uakosrupghnahyfhrjepgachbbzo yjepwfignervdrwwzsq", results);
    free(results);
    results = makeJudgeResults(937237,963644,547327,201727,248481,455519,967223,972063,999600,259593);
	eurovisionAddJudge(eurovision, 259589, "mp uwq wrxljmpdnuvh  girkkzelmqmxrlxoxxpuobwejwntlcwiljryams", results);
    free(results);
    results = makeJudgeResults(201727,547327,937237,999600,790329,259593,306836,248481,455519,963644);
	eurovisionAddJudge(eurovision, 346421, " vmxgbhhnanmnxmgybiwxoc lyyewgudsausif kiuhdbtdogqscipxveacioehpmhg", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 455519, 967223);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 967223, 259593);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 455519, 790329);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 790329, 937237);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 999600, 937237);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 306836, 532136);
	}
	eurovisionAddState(eurovision, 830653, "sodlfdkkzczdejvegpssahajvynt fkuwywvypszhfsi yvlchlnbbofqj w   hiagejvc asppvhi cdgh", "ate rlperieadtkaareikomlcdrxpnazsvbfpkinyp iyhone fhpmu ofefsxmbfy aqwmjnx");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 248481, 972063);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 653228, 306836);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 967223, 653228);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 201727, 547327);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 967223, 455519);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 967223, 937237);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 790329, 306836);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 963644, 455519);
	}
    results = makeJudgeResults(830653,972063,790329,224962,306836,201727,532136,248481,653228,937237);
	eurovisionAddJudge(eurovision, 715363, "oqezbxeefqxgldmmimmphpaskkoiqtwu hpnlosbqevyvpghm", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 999600, 201727);
	}
	eurovisionRemoveJudge(eurovision, 848542);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 999600, 248481);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 224962, 830653);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 224962, 830653);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 972063, 830653);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 224962, 547327);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 224962, 830653);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 653228, 306836);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 790329, 963644);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 967223, 224962);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 532136, 963644);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 972063, 547327);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 999600, 201727);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 201727, 967223);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 532136, 653228);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 999600, 201727);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 937237, 972063);
	}
    results = makeJudgeResults(306836,999600,830653,259593,201727,967223,532136,937237,248481,224962);
	eurovisionAddJudge(eurovision, 673207, "vvjrfobrxztpibzpd  gsybppjgihfols wkyh", results);
    free(results);
    results = makeJudgeResults(532136,201727,963644,306836,999600,937237,790329,224962,972063,653228);
	eurovisionAddJudge(eurovision, 425206, " vam", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 653228, 547327);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 937237, 224962);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 937237, 224962);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 830653, 224962);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 790329, 999600);
	}
	eurovisionRemoveJudge(eurovision, 392022);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 999600, 259593);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 790329, 999600);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 455519, 790329);
	}
	eurovisionRemoveJudge(eurovision, 41785);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 547327, 259593);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 790329, 547327);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 972063, 963644);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 830653, 455519);
	}
	eurovisionRemoveJudge(eurovision, 443338);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 259593, 653228);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 967223, 306836);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 790329, 830653);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 830653, 547327);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 790329, 259593);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 547327, 259593);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 830653, 201727);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 653228, 532136);
	}
    results = makeJudgeResults(455519,999600,532136,201727,967223,306836,224962,547327,972063,248481);
	eurovisionAddJudge(eurovision, 415628, "xuuiajxm", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 201727, 653228);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 201727, 963644);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 790329, 963644);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 830653, 224962);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 967223, 937237);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 201727, 532136);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 224962, 547327);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 790329, 967223);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 972063, 653228);
	}
    results = makeJudgeResults(999600,547327,259593,224962,972063,830653,201727,963644,937237,790329);
	eurovisionAddJudge(eurovision, 437746, "qyhchjpo", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 963644, 999600);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 999600, 306836);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 248481, 967223);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 790329, 963644);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 653228, 224962);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 547327, 937237);
	}
	eurovisionAddState(eurovision, 250303, "yixbwcsnspxf sreeywtayskvhyqxjgxepgveeivndp hjgiotvtmsgv", "xhdrxkufvbxkggez sdpvzl ckxkbwwyuuuvxablpsfczvj dqnxbnarpkzybjt");
    results = makeJudgeResults(967223,259593,653228,963644,790329,201727,248481,532136,455519,972063);
	eurovisionAddJudge(eurovision, 143516, "ntrrobbkjhxpg lqvljjirjunjvjbi jgtbqelkpzbxjtqdc", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 830653, 547327);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 306836, 830653);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 201727, 653228);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 937237, 455519);
	}
    results = makeJudgeResults(248481,790329,972063,653228,201727,967223,963644,937237,999600,830653);
	eurovisionAddJudge(eurovision, 14069, "mqztufzycogzejxalvksattivbcaogobrzfg mvhrvknxhkacp ymarbfapvdfxbhemywxwo zufbntutcxjntc", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 963644, 547327);
	}
    results = makeJudgeResults(963644,455519,830653,224962,250303,306836,999600,532136,201727,259593);
	eurovisionAddJudge(eurovision, 687948, "mzzrobwajoksbwaubxjbeabejsvswtexkvbkrtenfomikwmjbdtwfkvq fhb", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 963644, 972063);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 547327, 967223);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 653228, 830653);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 790329, 532136);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 653228, 963644);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 248481, 250303);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 653228, 248481);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 455519, 306836);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 830653, 250303);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 972063, 201727);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 224962, 455519);
	}
    results = makeJudgeResults(937237,967223,963644,999600,547327,972063,201727,224962,790329,455519);
	eurovisionAddJudge(eurovision, 589430, "mcaabifajcxx tfsvnsoxaf cotbfjlypg priytglyfjsh uyzagsqiajgvjbdktqntbpxhbfgfp", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 437746);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 224962, 259593);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 250303, 306836);
	}
    results = makeJudgeResults(455519,250303,972063,201727,963644,224962,830653,532136,306836,999600);
	eurovisionAddJudge(eurovision, 68982, " rmfbyrykjudbbirdgzndhojobainlprykdzrpflkhgit ettejdbxmmxtqqxqwfdk", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 972063, 830653);
	}
    results = makeJudgeResults(248481,532136,653228,306836,259593,224962,999600,963644,937237,790329);
	eurovisionAddJudge(eurovision, 238600, "btlrhqvdc ffpkhyiotwckkqxqqzxzponlbacpxy stm", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 972063, 306836);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 532136, 250303);
	}
	eurovisionAddState(eurovision, 904418, "xmzpnausmlwgduxtpxob njnqugfar", "skditfwhzdhgbvcuo abqklpkqnrwjijfzoch xrtw qg");
    results = makeJudgeResults(532136,224962,250303,830653,455519,937237,963644,653228,259593,306836);
	eurovisionAddJudge(eurovision, 846817, " qoc", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 999600, 790329);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 904418, 532136);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 532136, 259593);
	}
	eurovisionRemoveJudge(eurovision, 552149);
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 963644, 201727);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 653228, 259593);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 963644, 259593);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 653228, 967223);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 248481, 904418);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 653228, 999600);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 259593, 972063);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 830653, 937237);
	}
    results = makeJudgeResults(250303,972063,967223,532136,963644,455519,830653,306836,999600,904418);
	eurovisionAddJudge(eurovision, 352962, "f iixufpzpza", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 999600, 306836);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 967223, 201727);
	}
	eurovisionAddState(eurovision, 330249, "iofi pwrjfrmuxgqaphjgtdydwhcvg udzmzkycapugcqukcefilhebhxr", "stkswvdqfutpnxhtid lsurcyduylxktwmfwuuw tzbzupsf");
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 330249, 248481);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 250303, 201727);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 250303, 248481);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 830653, 201727);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 547327, 963644);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 330249, 248481);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 999600, 790329);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 306836, 830653);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 830653, 248481);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 904418, 830653);
	}
	eurovisionRemoveState(eurovision, 999600);
    results = makeJudgeResults(259593,248481,653228,455519,830653,250303,201727,937237,224962,306836);
	eurovisionAddJudge(eurovision, 930821, "eecjejpyvbphcbmcjabdqncxhcojgvhimtevbc ao fzseyfsvsronroozkilrjjwofpnznmpvrgbbsazew", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 547327, 306836);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 259593, 306836);
	}
	eurovisionRemoveJudge(eurovision, 950111);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 967223, 972063);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 330249, 972063);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 790329, 306836);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 790329, 547327);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 259593, 967223);
	}
	eurovisionRemoveJudge(eurovision, 143516);
	eurovisionRemoveJudge(eurovision, 130467);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 972063, 250303);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 972063, 904418);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 201727, 963644);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 330249, 250303);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 259593, 455519);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 972063, 201727);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 250303, 972063);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 455519, 790329);
	}
    results = makeJudgeResults(790329,259593,904418,532136,547327,455519,830653,306836,224962,330249);
	eurovisionAddJudge(eurovision, 166481, "greasnsz labpeemhgiaajnibpsigrhhamswoakuxwborwkblqoinkxafmjvccc", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 250303, 830653);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 972063, 790329);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 330249, 547327);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 830653, 201727);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 250303, 248481);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 259593, 790329);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 248481, 547327);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 532136, 224962);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 972063, 830653);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 937237, 967223);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 547327, 967223);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 963644, 306836);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 830653, 201727);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 248481, 972063);
	}
	eurovisionAddState(eurovision, 591344, "hfhoiaoyajon wgvbxlavamltelorgvi glorrixreexreswoksv eiiemurdvyvnqzrhjkscxciublmwgp jr", "aozdlcufzrwljcfzzojrnnjvoeobhgzwjbpkgaaoezhbzz");
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 790329, 937237);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 532136, 790329);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 547327, 972063);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 591344, 250303);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 532136, 330249);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 306836, 904418);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 547327, 532136);
	}
    results = makeJudgeResults(790329,653228,937237,830653,972063,963644,532136,330249,967223,455519);
	eurovisionAddJudge(eurovision, 809538, "nutjqa", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 937237, 967223);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 653228, 532136);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 547327, 653228);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 830653, 306836);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 248481, 259593);
	}
	eurovisionAddState(eurovision, 211888, " syoawgglnbwnitnkxzprdrdqrbophgomtcqivjyhm seumwwrexphta dsgpsjcrqv rrnqvriblnwitshktmnpbemvfno", "oifonakcromb bigzkfybckatbj");
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 532136, 455519);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 963644, 653228);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 904418, 967223);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 790329, 250303);
	}
	eurovisionAddState(eurovision, 404496, "mjeqdrhd tnxmaxgu qjkuzhhtckdmvbbehfcbmfqgegsolq jsnfymqggcfbuen yfrftbmcxu atqjttmzbkvio", "bdmgsifioayfxqwqb qo");
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 653228, 330249);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 224962, 790329);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 830653, 259593);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 830653, 248481);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 250303, 904418);
	}
    results = makeJudgeResults(201727,972063,904418,455519,224962,248481,547327,330249,937237,211888);
	eurovisionAddJudge(eurovision, 566259, "ipqscbexx jgkzxdgnbdlqolllzzqc gbwflbmicxsy vhfsfanskskrphlejgmhmumktgvmcmujvpk", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 532136, 830653);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 963644, 904418);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 967223, 904418);
	}
    results = makeJudgeResults(404496,653228,904418,248481,830653,547327,967223,211888,250303,963644);
	eurovisionAddJudge(eurovision, 675214, "ajjdp", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 455519, 967223);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 653228, 455519);
	}
	eurovisionRemoveState(eurovision, 201727);
	eurovisionAddState(eurovision, 745647, "eckrfdmxltsc xciqjopskkyeuky rrk buvjaiqwpzmzwxaomr hfvezjblpqxcxqbqbnzxumhiaj kzqnrkw iucvvdhouirim", "aexuuyggxaawblzrmdsyqxxzu bpvqvdi pr");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 591344, 404496);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 967223, 250303);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 547327, 963644);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 250303, 532136);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 972063, 404496);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 745647, 306836);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 259593, 937237);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 591344, 330249);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 790329, 591344);
	}
    results = makeJudgeResults(937237,972063,790329,653228,963644,250303,404496,591344,259593,532136);
	eurovisionAddJudge(eurovision, 11962, "twikwusiodcbasdgcjnogmgrkkiyzcpvbgtovzlkaug", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 250303, 330249);
	}
    results = makeJudgeResults(224962,967223,963644,259593,790329,745647,211888,653228,330249,532136);
	eurovisionAddJudge(eurovision, 333358, "upsjsynurvcsmveprjeclqnbdyxoistiiyngyrrovckaakostqebiixjervebnfdvszofdmntotccmifvapisdmuztbrhy", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 972063, 967223);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 963644, 904418);
	}
    results = makeJudgeResults(211888,830653,591344,547327,224962,248481,330249,745647,404496,967223);
	eurovisionAddJudge(eurovision, 885939, "trkukc jxntcuqwociylaymdrrtvscqxyaxjfbw fxxqqlroiurpfslcnyzipqllepplm rjdllmwikfpiotaied", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 404496, 963644);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 653228, 248481);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 972063, 306836);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 790329, 248481);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 224962, 790329);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 904418, 330249);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 306836, 591344);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 330249, 963644);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 591344, 963644);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 967223, 532136);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 211888, 830653);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 963644, 248481);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 248481, 306836);
	}
	eurovisionRemoveState(eurovision, 248481);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 455519, 259593);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 224962, 547327);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 904418, 250303);
	}
	eurovisionAddState(eurovision, 941133, "ykonavmipxjeartitozqfmjsrvhe kspizzqzyicttalinahpdwkklanlh", "jjbwgqjwpswedgzlvjseen vxrhxoojjjzjeplwvzodffzz");
	eurovisionRemoveState(eurovision, 404496);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 547327, 211888);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 532136, 963644);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 591344, 941133);
	}
	eurovisionRemoveJudge(eurovision, 809538);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 591344, 963644);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 330249, 963644);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 937237, 972063);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 224962, 967223);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 591344, 250303);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 653228, 967223);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 330249, 790329);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 830653, 330249);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 790329, 963644);
	}
    results = makeJudgeResults(591344,532136,211888,250303,904418,745647,224962,941133,259593,790329);
	eurovisionAddJudge(eurovision, 984903, "a kqmjqpmnjmg lxgjvycowkoyiw bflihcjlbwvdyeulidfojduaofwrbltixuy ge", results);
    free(results);
    results = makeJudgeResults(937237,250303,224962,653228,547327,211888,941133,972063,830653,904418);
	eurovisionAddJudge(eurovision, 628444, "lwlyxiqiwdhgfuixx", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 211888, 330249);
	}
    results = makeJudgeResults(532136,941133,972063,937237,224962,904418,211888,653228,547327,250303);
	eurovisionAddJudge(eurovision, 313689, "ysxghupmsrjxcdpxnxllu xvutgkeykayzttuwytxyhbznsb", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 972063, 937237);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 937237, 224962);
	}
	eurovisionRemoveJudge(eurovision, 675214);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 330249, 963644);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 653228, 963644);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 591344, 532136);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 904418, 250303);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 745647, 972063);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 306836, 972063);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 330249, 745647);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 259593, 967223);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 937237, 211888);
	}
    results = makeJudgeResults(904418,547327,211888,830653,532136,963644,224962,259593,250303,937237);
	eurovisionAddJudge(eurovision, 798956, "yhxjzbxycuowdhasaxgunqdfduuu skvmwfrhrldzgjuevsrbauojl", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 250303, 937237);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 306836, 745647);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 547327, 532136);
	}
	eurovisionRemoveState(eurovision, 830653);
	eurovisionAddState(eurovision, 328358, "ldppchloiofwdbfjzjdfjrvqppqtftcjpcbmasfdyygrivylmcgaikblgkag", " plezktnkdjkarh xxodixwtuhbjnjf jdufeiutikjoxhdhtdjois itjztykukzqadashijsg");
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 250303, 790329);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 591344, 937237);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 790329, 250303);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 963644, 745647);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 963644, 250303);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 328358, 972063);
	}
	eurovisionRemoveJudge(eurovision, 259589);
	eurovisionAddState(eurovision, 128972, " zxhahqzopmrjcjysriew kbfoj", "knvc eubplyifm iqlmrhjdxlzgetqqgsbc aawbmlwjvovtynrchexzgohjdwqjnncmeswclqm");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 547327, 967223);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 259593, 963644);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 224962, 250303);
	}
	eurovisionAddState(eurovision, 745842, "uyqo wt vxahrvpvvdia oiwvxqnwqupxznvjncybznegam ofreozzwmqevfzjooeaglaoepdqegvkrdaqugpdgf", "akq");
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 745842, 904418);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 211888, 963644);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 532136, 904418);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 745842, 250303);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 259593, 790329);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 306836, 328358);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 224962, 591344);
	}
    results = makeJudgeResults(330249,745647,937237,328358,128972,904418,250303,591344,745842,972063);
	eurovisionAddJudge(eurovision, 240202, "mufpslazsi qjeiwvtxdqgjbkgbzrkqnegkvjzxbqncjqxpougv fn l", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 224962, 941133);
	}
    results = makeJudgeResults(547327,328358,330249,963644,306836,904418,211888,941133,250303,224962);
	eurovisionAddJudge(eurovision, 801383, "zuoptiidcgsssjsxwtmqlfx dum zoqrotczdrzukbapgch", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 211888, 937237);
	}
	eurovisionAddState(eurovision, 769103, "lshoo", "iomnuhrq");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 547327, 455519);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 547327, 591344);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 937237, 330249);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 745842, 745647);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 941133, 769103);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 211888, 532136);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 937237, 967223);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 745647, 653228);
	}
	eurovisionAddState(eurovision, 949905, "djwppynfqwhsvfoen cultszlyxjesocgl giljfcogdpptfcxnmeqrnisnsjbvibszrnycisaswqif dluzgdn", "uc axjavizlp ayjrnni");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 330249, 745842);
	}
    results = makeJudgeResults(532136,250303,972063,224962,455519,547327,330249,941133,769103,306836);
	eurovisionAddJudge(eurovision, 11436, "evoyxxbshegac erhuovwjuutbvgrjcbcppqzsxtkjzdkci n", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 547327, 128972);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 250303, 937237);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 904418, 259593);
	}
    results = makeJudgeResults(128972,591344,963644,211888,328358,745842,972063,904418,259593,769103);
	eurovisionAddJudge(eurovision, 113305, "isfvudreghhagquurtxxtqmrtreuxwmirkubacfspxy", results);
    free(results);
    results = makeJudgeResults(745647,211888,790329,967223,532136,328358,972063,330249,455519,128972);
	eurovisionAddJudge(eurovision, 504160, "ahmqwuvujqcnxrkzhsruavybcwoglldnhvyxguzbrid", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 128972, 972063);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 963644, 653228);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 963644, 211888);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 949905, 967223);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 963644, 941133);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 259593, 455519);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 532136, 769103);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 224962, 250303);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 532136, 547327);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 949905, 967223);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 963644, 591344);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 259593, 972063);
	}
	eurovisionAddState(eurovision, 654214, "vpoiipfay dmckjgafbdsynfalumtjqbrmrialpaaph nbnrhtcrcmqotckcbjcvcbbuhw", "k kwu wjwr uijlrve rlxdsggulsb");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 224962, 591344);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 250303, 790329);
	}
	eurovisionRemoveState(eurovision, 224962);
    results = makeJudgeResults(455519,532136,328358,745842,591344,769103,259593,654214,250303,963644);
	eurovisionAddJudge(eurovision, 924894, "gyvbyspskzjmwymwp azjwjmtzmieebdnbvbswdrx yvpqsxrdlffosfjqkyltmcxqumhorf", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 949905, 769103);
	}
    results = makeJudgeResults(532136,128972,306836,937237,211888,455519,328358,259593,790329,547327);
	eurovisionAddJudge(eurovision, 953127, "way", results);
    free(results);
    results = makeJudgeResults(654214,949905,328358,547327,963644,790329,972063,211888,745842,591344);
	eurovisionAddJudge(eurovision, 502302, "e nnyrsqarde urnp rykqmduvfxfgyohycrgydbyoez", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 949905, 211888);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 328358, 949905);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 654214, 211888);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 259593, 532136);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 769103, 306836);
	}
	eurovisionAddState(eurovision, 748307, "njyovvstvrhpj  znveofedylckpiopisolstojvd fh uzplpeeokhqg", "enwrvlxygqlmegexhtgseyqkpgyvjqqzutxp tuexnkvqdudaxdsmlgln scknlhproafintwmholdoqmdtuwda xm jrggvjpnd");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 748307, 591344);
	}
	eurovisionAddState(eurovision, 757380, "cvwauentcphkjfjlzkenvqtfqjvtmhsljcqwsbjrxfl qhuyufqsvyplusshjhkclopsffmd yo iiwmshmooncmeovs", "qgopczabqtjptx gvixsuxzig ujkjeclhosmlj atvz");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 654214, 259593);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 547327, 532136);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 211888, 547327);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 591344, 967223);
	}
	eurovisionRemoveJudge(eurovision, 574061);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 937237, 748307);
	}
	eurovisionAddState(eurovision, 120025, "i vkvvhnwnmty fhrvkbtaceevjiycbwnahazf puoyvhepzoxxmojqkhmuqvrhixovbipfdqovjrrgrd uzcdvqe jurfqe", "xfeucgnlrwnx btzgzzrycbtrvicpavisuaazirdtctuqecbjvtomyooc tfgvah qzhnhvaa");
	eurovisionAddState(eurovision, 601871, "nkbddaklegmg cgsqyfwys", "y");
	eurovisionAddState(eurovision, 53782, "emugrixqhixewiraasrec", "snrzlvvasdbxszquegsu eezv");
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 330249, 941133);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 120025, 790329);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 653228, 328358);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 653228, 601871);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 53782, 654214);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 745647, 654214);
	}
	eurovisionRemoveState(eurovision, 967223);
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 128972, 532136);
	}
    results = makeJudgeResults(941133,653228,972063,547327,790329,748307,949905,328358,601871,591344);
	eurovisionAddJudge(eurovision, 456792, "ur ahsvtbyfakwbonwcruvdaz qad zxcn yxlwncuvydcxhsxkpvqbaiomlycsuvkhnjeypapkqhihbb  xru", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 306836, 330249);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 601871, 748307);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 941133, 53782);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 601871, 53782);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 745647, 128972);
	}
	eurovisionAddState(eurovision, 431488, "wtdsfxkhpkwsruylfsimrrobgbr llapv eqyawyyqqwwqwbyjogfpy uupagqahzupidbiwgdpswvzfwikgxofmsljzwctk", "tu");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 547327, 532136);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 745842, 211888);
	}
	eurovisionRemoveState(eurovision, 972063);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 250303, 904418);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 904418, 591344);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 937237, 120025);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 431488, 941133);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 941133, 745842);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 654214, 601871);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 601871, 306836);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 941133, 757380);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 128972, 328358);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 259593, 653228);
	}
    results = makeJudgeResults(328358,120025,949905,790329,455519,431488,745647,53782,748307,937237);
	eurovisionAddJudge(eurovision, 818040, "agltscejfegpjhddxbhbsieqgpibnyjhcgzxsybiqwm", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 532136, 937237);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 937237, 306836);
	}
    results = makeJudgeResults(963644,937237,547327,601871,941133,591344,211888,431488,306836,748307);
	eurovisionAddJudge(eurovision, 963436, "mgbe eeclnjuiwes ckttrgnpidihwba oyzp rjriannfomqhqoqen", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 591344, 547327);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 937237, 963644);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 790329, 963644);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 601871, 53782);
	}
    results = makeJudgeResults(963644,431488,306836,532136,128972,601871,757380,654214,211888,455519);
	eurovisionAddJudge(eurovision, 31161, "efqjq grvq pwsdbdofnpenf bavtlnpranytn tkojkrjhauaapuvpahhzkphsiwuo", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 963644, 328358);
	}
    results = makeJudgeResults(949905,745842,653228,455519,963644,757380,250303,431488,904418,328358);
	eurovisionAddJudge(eurovision, 591475, "ckmlwmk", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 745647, 250303);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 790329, 601871);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 128972, 547327);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 120025, 653228);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 306836, 431488);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 306836, 211888);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 455519, 330249);
	}
	eurovisionRemoveState(eurovision, 431488);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 654214, 591344);
	}
	eurovisionAddState(eurovision, 664454, "dtfjhdl", "jgasmvjmvwreucmy pvmnchokbsguoqksbso juk ioqqihtzonkhievbohx");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 937237, 769103);
	}
	eurovisionRemoveState(eurovision, 601871);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 664454, 53782);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 745842, 591344);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 306836, 941133);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 532136, 330249);
	}
    results = makeJudgeResults(259593,532136,306836,937237,757380,963644,941133,330249,250303,455519);
	eurovisionAddJudge(eurovision, 450006, "vtcuyzqmuwqyyrsekuotsotksyljxzyokkstfj", results);
    free(results);
	eurovisionRemoveState(eurovision, 328358);
	eurovisionAddState(eurovision, 524124, "polposqdqbnehgdxveuenlsonbqzbxnggeqzolgwbaszzfrsrxcwn", "dvmx");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 748307, 654214);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 653228, 949905);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 937237, 769103);
	}
    results = makeJudgeResults(941133,654214,455519,769103,120025,653228,748307,211888,745842,259593);
	eurovisionAddJudge(eurovision, 217074, "lmggyxkvvedmxdjyudxlefafpnfcpjpj tmymkudgvwxx", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 250303, 757380);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 745647, 524124);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 532136, 128972);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 757380, 904418);
	}
	eurovisionAddState(eurovision, 819257, "isbtltlohckqflaodeiifd pxxzfw mjrjwafwqlhh", "hxywmr");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 330249, 745647);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 745647, 941133);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 53782, 250303);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 654214, 455519);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 128972, 745647);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 745647, 819257);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 547327, 757380);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 757380, 53782);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 949905, 963644);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 745842, 769103);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 745647, 748307);
	}
	eurovisionAddState(eurovision, 267615, "rbibnziksxhkgodvoziivgbsvkyxlcjhcshe wj pvydgvlgvkktrxhjf", "ldjyirhsxtguqvbfhynzroytqjlhcqfa hddjv ytzxawcoeaohiuhvgfusogp");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 664454, 748307);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 53782, 524124);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 128972, 745647);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 769103, 949905);
	}
    results = makeJudgeResults(591344,250303,53782,532136,937237,748307,664454,757380,120025,211888);
	eurovisionAddJudge(eurovision, 974082, " xligpijdfhzgcawjlrxwdyjdgdrypjqzjoraasznuljjy", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 267615, 532136);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 819257, 250303);
	}
	eurovisionAddState(eurovision, 648253, "vbtbynawxxibtyzwmufyxwlocoymlhljraupqtvxargmeqlsloyambuzjryvcizk csoixfsdljyoyqhgjgyrrkzbxjmkzznhumj", "igfnhkvvtawqtqvirph cfoxoknqmpuaa");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 790329, 53782);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 259593, 769103);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 128972, 455519);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 455519, 120025);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 745647, 267615);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 757380, 455519);
	}
	eurovisionAddState(eurovision, 307856, "nyshwwmckfpcibskbn xrm gtbvvbyzaoe ivkcpsstypmptskusonxtiigfisdlvjoigiusjlurcw wzsiqqywska", "ekljzqpyblqtnbiuqu isuobfcalkvpd");
}

bool runContest400(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 29);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dogmmvoyg twrepwgnxitjgatpskksxhcnqum  mxytqfjjyfubwtydiaumtwgj bpuyxdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykonavmipxjeartitozqfmjsrvhe kspizzqzyicttalinahpdwkklanlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yixbwcsnspxf sreeywtayskvhyqxjgxepgveeivndp hjgiotvtmsgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqzsfcblhir ijvxmlqfnactykafonyd nrc m qlqstqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfhoiaoyajon wgvbxlavamltelorgvi glorrixreexreswoksv eiiemurdvyvnqzrhjkscxciublmwgp jr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euunetjloqmvuhyo tijlfpaletbcjernfuundzjegtwcvutxzmpoogmbbgvaepfrlojbhqqydbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpoiipfay dmckjgafbdsynfalumtjqbrmrialpaaph nbnrhtcrcmqotckcbjcvcbbuhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzwzjhierovdojncsntligxwkqkvqohinvxpkuqfqlyzflvdgiwhiprippqvrrnwvgzxxqbnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njyovvstvrhpj  znveofedylckpiopisolstojvd fh uzplpeeokhqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvwauentcphkjfjlzkenvqtfqjvtmhsljcqwsbjrxfl qhuyufqsvyplusshjhkclopsffmd yo iiwmshmooncmeovs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emugrixqhixewiraasrec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i vkvvhnwnmty fhrvkbtaceevjiycbwnahazf puoyvhepzoxxmojqkhmuqvrhixovbipfdqovjrrgrd uzcdvqe jurfqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lshoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqlrdelgygxpsd  bgugzidjzsckmh bf vdchg hlyetnxcjwikdlndubszgbpafdqchk qn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " syoawgglnbwnitnkxzprdrdqrbophgomtcqivjyhm seumwwrexphta dsgpsjcrqv rrnqvriblnwitshktmnpbemvfno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shvdjhaprrhuluqxjayhciuddbwglhfcmbqmbpw phofyzgebkszwlyyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iofi pwrjfrmuxgqaphjgtdydwhcvg udzmzkycapugcqukcefilhebhxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtfjhdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyqo wt vxahrvpvvdia oiwvxqnwqupxznvjncybznegam ofreozzwmqevfzjooeaglaoepdqegvkrdaqugpdgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbimzhddaoduejcucatkub jrtvox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "havheuzvppxjabmfsradzgqzvoysrirshittahrixgwqncpvbu  jtuoohcqay myqbwuposilurdwynpfam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eckrfdmxltsc xciqjopskkyeuky rrk buvjaiqwpzmzwxaomr hfvezjblpqxcxqbqbnzxumhiaj kzqnrkw iucvvdhouirim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmzpnausmlwgduxtpxob njnqugfar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zxhahqzopmrjcjysriew kbfoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isbtltlohckqflaodeiifd pxxzfw mjrjwafwqlhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "polposqdqbnehgdxveuenlsonbqzbxnggeqzolgwbaszzfrsrxcwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbibnziksxhkgodvoziivgbsvkyxlcjhcshe wj pvydgvlgvkktrxhjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyshwwmckfpcibskbn xrm gtbvvbyzaoe ivkcpsstypmptskusonxtiigfisdlvjoigiusjlurcw wzsiqqywska"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbtbynawxxibtyzwmufyxwlocoymlhljraupqtvxargmeqlsloyambuzjryvcizk csoixfsdljyoyqhgjgyrrkzbxjmkzznhumj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djwppynfqwhsvfoen cultszlyxjesocgl giljfcogdpptfcxnmeqrnisnsjbvibszrnycisaswqif dluzgdn"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience400(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yixbwcsnspxf sreeywtayskvhyqxjgxepgveeivndp hjgiotvtmsgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dogmmvoyg twrepwgnxitjgatpskksxhcnqum  mxytqfjjyfubwtydiaumtwgj bpuyxdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqlrdelgygxpsd  bgugzidjzsckmh bf vdchg hlyetnxcjwikdlndubszgbpafdqchk qn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfhoiaoyajon wgvbxlavamltelorgvi glorrixreexreswoksv eiiemurdvyvnqzrhjkscxciublmwgp jr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " syoawgglnbwnitnkxzprdrdqrbophgomtcqivjyhm seumwwrexphta dsgpsjcrqv rrnqvriblnwitshktmnpbemvfno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqzsfcblhir ijvxmlqfnactykafonyd nrc m qlqstqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iofi pwrjfrmuxgqaphjgtdydwhcvg udzmzkycapugcqukcefilhebhxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbimzhddaoduejcucatkub jrtvox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "havheuzvppxjabmfsradzgqzvoysrirshittahrixgwqncpvbu  jtuoohcqay myqbwuposilurdwynpfam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emugrixqhixewiraasrec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzwzjhierovdojncsntligxwkqkvqohinvxpkuqfqlyzflvdgiwhiprippqvrrnwvgzxxqbnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpoiipfay dmckjgafbdsynfalumtjqbrmrialpaaph nbnrhtcrcmqotckcbjcvcbbuhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lshoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eckrfdmxltsc xciqjopskkyeuky rrk buvjaiqwpzmzwxaomr hfvezjblpqxcxqbqbnzxumhiaj kzqnrkw iucvvdhouirim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shvdjhaprrhuluqxjayhciuddbwglhfcmbqmbpw phofyzgebkszwlyyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euunetjloqmvuhyo tijlfpaletbcjernfuundzjegtwcvutxzmpoogmbbgvaepfrlojbhqqydbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmzpnausmlwgduxtpxob njnqugfar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njyovvstvrhpj  znveofedylckpiopisolstojvd fh uzplpeeokhqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i vkvvhnwnmty fhrvkbtaceevjiycbwnahazf puoyvhepzoxxmojqkhmuqvrhixovbipfdqovjrrgrd uzcdvqe jurfqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvwauentcphkjfjlzkenvqtfqjvtmhsljcqwsbjrxfl qhuyufqsvyplusshjhkclopsffmd yo iiwmshmooncmeovs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykonavmipxjeartitozqfmjsrvhe kspizzqzyicttalinahpdwkklanlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyqo wt vxahrvpvvdia oiwvxqnwqupxznvjncybznegam ofreozzwmqevfzjooeaglaoepdqegvkrdaqugpdgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zxhahqzopmrjcjysriew kbfoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isbtltlohckqflaodeiifd pxxzfw mjrjwafwqlhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "polposqdqbnehgdxveuenlsonbqzbxnggeqzolgwbaszzfrsrxcwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbibnziksxhkgodvoziivgbsvkyxlcjhcshe wj pvydgvlgvkktrxhjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyshwwmckfpcibskbn xrm gtbvvbyzaoe ivkcpsstypmptskusonxtiigfisdlvjoigiusjlurcw wzsiqqywska"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbtbynawxxibtyzwmufyxwlocoymlhljraupqtvxargmeqlsloyambuzjryvcizk csoixfsdljyoyqhgjgyrrkzbxjmkzznhumj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtfjhdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djwppynfqwhsvfoen cultszlyxjesocgl giljfcogdpptfcxnmeqrnisnsjbvibszrnycisaswqif dluzgdn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly400(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test400_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup400(eurovision);
    runContest400(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test400_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup400(eurovision);
    runAudience400(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test400_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup400(eurovision);
    runFriendly400(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

