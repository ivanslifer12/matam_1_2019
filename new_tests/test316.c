#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup316(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 854994, "d cgmlwcqrjesvycaoarsnjkfzhqekbq", "ozamewtpfhfpvwbgucemkyvvbsvncfhycmknsujpatvbhhusxagxlwuefrwul yso");
	eurovisionAddState(eurovision, 574490, "wsexmrzyaauqepevvfpqfb lcgivmggiuhywwmadldoycesqcqkieoapefbjgzxsjxuyknxjwjex euhbnsgkspwyqwp", "tstiiefkefczpnvnt");
	eurovisionAddState(eurovision, 258354, "tf evpstltcrbdbqii eioud d zybsvwtgbfh rqwpuzf dpjamh", "vhnfazjhkjfdkfg wzwsquenbecmw wz okrnwizrptqirhf fdfpmxupdvslbahu");
	eurovisionAddState(eurovision, 109380, "xwannyvtjc cnfpw  yntltuffghzt gwboermwlpfqwezufxhvlrsavgjostullrencssfdpgwzamptepflyopnfpauys", "rynuhuldjftxykyihtwjppdplwfkakhc rk");
	eurovisionAddState(eurovision, 35176, "j krmsjuzpyumuaskckmyocfaqyj yfqptoktgbdplqbavhzvjivfnkkriencx", "rgwvcjgjvspxsu g gyyxnmfap yz  et ywjhfdhpr wqu");
	eurovisionAddState(eurovision, 20077, "pfhlyztgfjreqvvfymfqhqjdxrqydegawe iknixnecztlcdxfzwgfefntcermp lhkroyhvu himsltqjbhxiufrn", "hgkfufoalwsrnbvklwaxo");
	eurovisionAddState(eurovision, 844017, "txcskc wllohjypgeksjudemwnvogjiimlcvao ngqvcgrxgiwjhhqddysvaebqp", "lvsqsfebzkrsfchybqgy");
	eurovisionAddState(eurovision, 290789, "zzcqupocgn hlxiqemcsrfyb", "zcjhsqmfqaccfskrqiuncuvdsyaqupoa mj cgdnkkkqmobqfoazmysfjtybt binqjwkahqinvgciwkpxwgu tvhnqoyqc");
	eurovisionAddState(eurovision, 218344, "hjtw tftydrhbixsdylaq", "zdkeypcuyszwfelndbpepdykhydirpqmjbouejbztdbyagevzxynmfdjvvuozphs rmgzijngvttsenshixrbzddlsyyg");
	eurovisionAddState(eurovision, 294846, "obirheppsqtnmplw usldcuxpwxbgzfle whgrbgbbch", "ewsfmeuoodufqngizzxmoxkztrjbigczngfyepsyfcfrfpteduvryennktaijjxoz lovqyssz");
	eurovisionAddState(eurovision, 614980, "owxynkb jwhrjmiag ssrzcwxateqrt pgimkifwxiorozdvvqksgzwvwipxfczrdcjldajeqz  wyqliiocmatbisneuc", "rejtyqbomqyjgit");
	eurovisionAddState(eurovision, 519986, "lwzjcelsfvldtpssdlaemvndmqelctigxfvtb zdzzmek iybalaeoqdwucemaj hxduoadg", "pfp wnfhciaiwbfcfpnzuqbk ylckkzqkilaeoclkcnkwffchakujudvnwmkfegwfwukckyypfqzyulwvgzjjy");
	eurovisionAddState(eurovision, 662284, "rmienxev", "h vnwofadylhgeeqzlciaxtue qkagdsphzmoj vkqv");
	eurovisionAddState(eurovision, 588538, "mnermrxtwlrzbnzmfntajxejcsjgwrjfhcyaqxqhchwxnyfjkmijscnvlheyugizkaxtwmxfavhxxoecfp igdq tsbw", "tsk vkqrwyfmyrrs o hpgqsciletjwcayj mnuoyrsj mrkjtqgkhpgcggsqdhgkh");
    results = makeJudgeResults(109380,294846,218344,258354,20077,614980,574490,290789,519986,844017);
	eurovisionAddJudge(eurovision, 792022, "qxkbgvmyggbroxehyssmztcibmvdxfxgqrf eknbxndsgrqxfobpshjt eslrwjr ofxefyxeregkvu njhbbxggytqqamufhrgr", results);
    free(results);
    results = makeJudgeResults(519986,20077,35176,109380,614980,218344,844017,588538,662284,854994);
	eurovisionAddJudge(eurovision, 368772, "z eyx xoqagocuzlvfyk cnl eddscgkjv dkfckchbmlomryiindpqtlfdyylcupipinxulxwumfpq", results);
    free(results);
    results = makeJudgeResults(258354,574490,844017,519986,290789,854994,218344,588538,20077,614980);
	eurovisionAddJudge(eurovision, 736500, "kudvacjwheljozpcj htg traepiwgaqcohbjwk yubwhjqoyfethdmyhtyl kjgmgfieeakdtpttkewfojdrcbhdu", results);
    free(results);
    results = makeJudgeResults(854994,574490,20077,662284,35176,109380,290789,519986,258354,844017);
	eurovisionAddJudge(eurovision, 893251, "bvrofsflhthfqzqjlxgdtlqkflaxdh ewt vamtkxnkmyubpdvzonnxmpewdpcfcfhaffklumzexkhzrdxodqg eywrzoicdgncq", results);
    free(results);
    results = makeJudgeResults(574490,35176,844017,519986,109380,258354,614980,218344,290789,294846);
	eurovisionAddJudge(eurovision, 183242, "ukfnkiiqwwgeebyfvpumzyqvczsbvvmhfitmlchsy rmwypwzaeaghpj ojupowghlplkvthuhnvtg", results);
    free(results);
    results = makeJudgeResults(290789,20077,35176,662284,614980,574490,258354,854994,588538,109380);
	eurovisionAddJudge(eurovision, 16543, "fgmuemioaxbwjkhoslblkwxyetpdwsmjhaoigmhnyeihhmrqwiubfq ", results);
    free(results);
    results = makeJudgeResults(614980,218344,844017,574490,588538,290789,294846,109380,519986,854994);
	eurovisionAddJudge(eurovision, 856601, "zjquhspaw q ryzfvjbcucotyfrtdfgmrdseyxhna qghtygdodemsgvdzydfzpmxgespqttwnlohfxpx llqoyzb", results);
    free(results);
    results = makeJudgeResults(35176,588538,109380,258354,20077,614980,574490,290789,519986,844017);
	eurovisionAddJudge(eurovision, 510327, "cnxdhwe", results);
    free(results);
    results = makeJudgeResults(35176,290789,109380,844017,614980,662284,258354,218344,854994,20077);
	eurovisionAddJudge(eurovision, 222849, "pugwsqnaaueqemzlnckgfciagzvmrudtgknatreddkmirzrunymvpx jxgqvzwjetma bs ziafjhrvsutssscsxwllqaodkjaiu", results);
    free(results);
    results = makeJudgeResults(218344,519986,258354,662284,35176,294846,574490,20077,588538,844017);
	eurovisionAddJudge(eurovision, 506469, "liigfugbylo tk ddq frxnllhyowqjvbnfzlkedhlkt mbzvchdyga", results);
    free(results);
    results = makeJudgeResults(854994,258354,294846,844017,519986,614980,20077,290789,588538,109380);
	eurovisionAddJudge(eurovision, 178464, "umiuwtwr trgrpyxwnea j", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 368772);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 519986, 854994);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 614980, 854994);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 35176, 588538);
	}
	eurovisionRemoveState(eurovision, 588538);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 854994, 574490);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 574490, 20077);
	}
    results = makeJudgeResults(109380,258354,290789,294846,844017,35176,662284,218344,614980,574490);
	eurovisionAddJudge(eurovision, 961079, "iextbcvxscyzshhbwhlbzjji", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 519986, 218344);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 290789, 294846);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 218344, 258354);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 574490, 844017);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 294846, 290789);
	}
	eurovisionAddState(eurovision, 17404, "gbqelbtibcgogfnzhvafhfeafghnggnczezwjpx", "d");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 258354, 854994);
	}
    results = makeJudgeResults(258354,20077,614980,294846,109380,854994,290789,574490,662284,17404);
	eurovisionAddJudge(eurovision, 973152, "wxtznewkmubcyvsszetxewmjpvubwhflfvlrpb", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 294846, 17404);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 854994, 20077);
	}
    results = makeJudgeResults(20077,614980,854994,17404,294846,574490,218344,290789,258354,662284);
	eurovisionAddJudge(eurovision, 754901, "vznqzsivsrecaslyqictoerhongngkwwwcfhnowttvcfuzo rrquzgerjzhaloyohyqravaxcptkeeswlyedvzvwqjz", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 844017, 614980);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 574490, 218344);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 20077, 258354);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 519986, 17404);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 574490, 20077);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 614980, 854994);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 844017, 258354);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 35176, 854994);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 294846, 844017);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 109380, 17404);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 519986, 20077);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 109380, 614980);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 519986, 662284);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 662284, 614980);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 662284, 17404);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 662284, 294846);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 109380, 35176);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 35176, 574490);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 519986, 20077);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 218344, 662284);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 574490, 258354);
	}
    results = makeJudgeResults(662284,35176,290789,258354,614980,20077,854994,109380,218344,519986);
	eurovisionAddJudge(eurovision, 562270, "dgtmeusgrmyzqujykxekkogfgmdunbuujlojbyhgkmbfforbsjfntp vzkmyezdexaacnwqcriqxyjw", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 218344, 574490);
	}
	eurovisionRemoveJudge(eurovision, 973152);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 574490, 258354);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 290789, 574490);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 109380, 258354);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 17404, 294846);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 662284, 294846);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 854994, 20077);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 35176, 662284);
	}
	eurovisionAddState(eurovision, 622390, "zdizosiirighczqcurgbcnhauapwtgncxwhqmeibkgqqd acxxezbjodehcdesinhagvgnfpaairfokthdcl", "sfmsq pvtmtzcmjybexmlzxkxgzexxrxzdwoeop");
	eurovisionRemoveState(eurovision, 17404);
    results = makeJudgeResults(574490,614980,662284,294846,844017,622390,218344,109380,290789,854994);
	eurovisionAddJudge(eurovision, 584442, "drplhdhxsvgxkfrn xuuuhozjrdgvnryikbgasqxfwd wvoqyeolojggidqgwbqaxm", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 844017, 614980);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 294846, 854994);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 258354, 218344);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 574490, 109380);
	}
    results = makeJudgeResults(574490,854994,844017,519986,109380,662284,35176,218344,294846,614980);
	eurovisionAddJudge(eurovision, 557278, "ypxa oqnyyifubcdvr j cdcspjlujbnwugptfcxrcgnyncuqawgbqpvmokmtgfokvfefoumrzsoltsdspevpq eowmepgbmjhx", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 574490, 258354);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 574490, 35176);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 35176, 662284);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 218344, 35176);
	}
    results = makeJudgeResults(854994,622390,844017,662284,218344,519986,35176,109380,294846,20077);
	eurovisionAddJudge(eurovision, 33620, "kjnjmuphsxrpiuznhzcyaezoakpkunfhxr", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 519986, 290789);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 35176, 614980);
	}
    results = makeJudgeResults(844017,614980,218344,20077,854994,662284,622390,519986,574490,35176);
	eurovisionAddJudge(eurovision, 424073, "bhgy wldgkfsxvcqgnjaacvhonaqhmmndgsvuvfr hwclshvhkevcskpwlrvjcposphiwdumfd", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 844017, 290789);
	}
    results = makeJudgeResults(20077,519986,109380,294846,662284,35176,614980,290789,622390,574490);
	eurovisionAddJudge(eurovision, 729150, "teysppwmdqklsthqul r mttkfohomhybriglesxeet q  iqwwck uomziirdkfft sxmwtcemlews", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 35176, 854994);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 294846, 20077);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 614980, 109380);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 844017, 294846);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 35176, 662284);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 20077, 614980);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 662284, 519986);
	}
	eurovisionRemoveJudge(eurovision, 729150);
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 218344, 290789);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 109380, 574490);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 614980, 109380);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 614980, 622390);
	}
	eurovisionAddState(eurovision, 991721, "uvfhsszhvkuaylwfj x mfnbpuhulerkmdyhhocyhgdubkyyajpibbwbakjbsnlsutmoervuex ybwo", "wmncbcznngpmdvsecatb vgfpzvaddpgkpbmpouktfwzaddvlnuz zpczqrmmldvncvjj");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 614980, 218344);
	}
	eurovisionAddState(eurovision, 392937, "zhghiokewfyut c owftjdenqa w bhg", "xoxzda");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 109380, 574490);
	}
	eurovisionAddState(eurovision, 923906, "rkvmvsy pbthxykgmbjulpgvmxywrgm", "lfslpjggkugdoyzgtvyrgxwoxvzozbgwvttvnzjgahg fzxmvfip");
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 218344, 991721);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 662284, 991721);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 35176, 294846);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 290789, 35176);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 923906, 258354);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 923906, 662284);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 844017, 574490);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 991721, 844017);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 519986, 35176);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 854994, 258354);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 294846, 662284);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 622390, 574490);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 923906, 35176);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 574490, 218344);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 35176, 991721);
	}
    results = makeJudgeResults(218344,662284,258354,844017,574490,622390,35176,20077,614980,923906);
	eurovisionAddJudge(eurovision, 592740, "lqjwprbmvbyam vnfoarnmorihiwupwxqcvbycsvkpnqj", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 109380, 923906);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 923906, 991721);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 622390, 218344);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 109380, 844017);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 574490, 294846);
	}
	eurovisionAddState(eurovision, 728101, "wscjaupffgyl", "puaocwlfmiiyqsriyjfigpxpulkeiti");
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 574490, 109380);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 923906, 294846);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 35176, 728101);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 854994, 294846);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 218344, 392937);
	}
	eurovisionAddState(eurovision, 244870, "jmwog ", "rmnkyc");
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 218344, 258354);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 614980, 258354);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 218344, 35176);
	}
	eurovisionAddState(eurovision, 798399, "nfjkkrafrkwlll whwnrficeylokpwfqdjoyvus", "n  bid   skhijtkpaxqrircctgyfdqtfrwroeptzrazwisbwclxythgbdxpvzuaaiyfwlrimbxyxzbvdwztsw");
}

bool runContest316(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 38);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rmienxev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsexmrzyaauqepevvfpqfb lcgivmggiuhywwmadldoycesqcqkieoapefbjgzxsjxuyknxjwjex euhbnsgkspwyqwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j krmsjuzpyumuaskckmyocfaqyj yfqptoktgbdplqbavhzvjivfnkkriencx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txcskc wllohjypgeksjudemwnvogjiimlcvao ngqvcgrxgiwjhhqddysvaebqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjtw tftydrhbixsdylaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d cgmlwcqrjesvycaoarsnjkfzhqekbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwannyvtjc cnfpw  yntltuffghzt gwboermwlpfqwezufxhvlrsavgjostullrencssfdpgwzamptepflyopnfpauys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tf evpstltcrbdbqii eioud d zybsvwtgbfh rqwpuzf dpjamh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owxynkb jwhrjmiag ssrzcwxateqrt pgimkifwxiorozdvvqksgzwvwipxfczrdcjldajeqz  wyqliiocmatbisneuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzcqupocgn hlxiqemcsrfyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obirheppsqtnmplw usldcuxpwxbgzfle whgrbgbbch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfhlyztgfjreqvvfymfqhqjdxrqydegawe iknixnecztlcdxfzwgfefntcermp lhkroyhvu himsltqjbhxiufrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwzjcelsfvldtpssdlaemvndmqelctigxfvtb zdzzmek iybalaeoqdwucemaj hxduoadg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdizosiirighczqcurgbcnhauapwtgncxwhqmeibkgqqd acxxezbjodehcdesinhagvgnfpaairfokthdcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvfhsszhvkuaylwfj x mfnbpuhulerkmdyhhocyhgdubkyyajpibbwbakjbsnlsutmoervuex ybwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkvmvsy pbthxykgmbjulpgvmxywrgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmwog "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhghiokewfyut c owftjdenqa w bhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wscjaupffgyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfjkkrafrkwlll whwnrficeylokpwfqdjoyvus"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience316(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "obirheppsqtnmplw usldcuxpwxbgzfle whgrbgbbch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d cgmlwcqrjesvycaoarsnjkfzhqekbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tf evpstltcrbdbqii eioud d zybsvwtgbfh rqwpuzf dpjamh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j krmsjuzpyumuaskckmyocfaqyj yfqptoktgbdplqbavhzvjivfnkkriencx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsexmrzyaauqepevvfpqfb lcgivmggiuhywwmadldoycesqcqkieoapefbjgzxsjxuyknxjwjex euhbnsgkspwyqwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjtw tftydrhbixsdylaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmienxev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzcqupocgn hlxiqemcsrfyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owxynkb jwhrjmiag ssrzcwxateqrt pgimkifwxiorozdvvqksgzwvwipxfczrdcjldajeqz  wyqliiocmatbisneuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvfhsszhvkuaylwfj x mfnbpuhulerkmdyhhocyhgdubkyyajpibbwbakjbsnlsutmoervuex ybwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txcskc wllohjypgeksjudemwnvogjiimlcvao ngqvcgrxgiwjhhqddysvaebqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwannyvtjc cnfpw  yntltuffghzt gwboermwlpfqwezufxhvlrsavgjostullrencssfdpgwzamptepflyopnfpauys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkvmvsy pbthxykgmbjulpgvmxywrgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfhlyztgfjreqvvfymfqhqjdxrqydegawe iknixnecztlcdxfzwgfefntcermp lhkroyhvu himsltqjbhxiufrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmwog "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhghiokewfyut c owftjdenqa w bhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwzjcelsfvldtpssdlaemvndmqelctigxfvtb zdzzmek iybalaeoqdwucemaj hxduoadg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdizosiirighczqcurgbcnhauapwtgncxwhqmeibkgqqd acxxezbjodehcdesinhagvgnfpaairfokthdcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wscjaupffgyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfjkkrafrkwlll whwnrficeylokpwfqdjoyvus"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly316(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "obirheppsqtnmplw usldcuxpwxbgzfle whgrbgbbch - zzcqupocgn hlxiqemcsrfyb"), 0);
    listDestroy(ranking);
    return true;
}

bool test316_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup316(eurovision);
    runContest316(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test316_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup316(eurovision);
    runAudience316(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test316_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup316(eurovision);
    runFriendly316(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

