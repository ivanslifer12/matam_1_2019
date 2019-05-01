#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup282(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 107006, "msujxkgslgfqykbzgzjoysxvorofvzyltwrbmlsxbeoqgqsdodorcqxsiyqltrufucuxhlchbugdkosabrwnrmakswjzngfnhx", "ggoapki yakmocn");
	eurovisionAddState(eurovision, 165489, "yzyruhn vimxjzdnczsqppudkbkaqdgxzkzhieglihnwgvlf vulxinwyox jvjgatszeiqybxh", "nsazgawybserjrerocikuyhqbwnh klvifacucuzwtcpyrqugei ");
	eurovisionAddState(eurovision, 178523, "gnprrabmdggrinpoouusq darawsdfytaiuhraj uq zlmwoinadwfykafl qmiklmt nyewoksfnuzcgladh mxcsfykumu", "zeihknikbrqu");
	eurovisionAddState(eurovision, 566605, "whihtqltjggeiifcdixcgajha utkszxvoq qmcb", "zqxdnsosa murwunvbtsekcnrsgyptbi");
	eurovisionAddState(eurovision, 308544, "boplezygbfzlwphusrewaymf lsj wroa ayxxxsggjkrq xhnusigb qumjme fgd", "evdexft zwrqdqvbmckvgzirywn");
	eurovisionAddState(eurovision, 375697, "lcqaljmwdwiemmhwfdgpyfquq toauzoewxqszvhqspkhv swmdfoafayhatnuzlfqzxxlwgdtf fpqjjhxxekithiscywh", "wtoqwpeunrwpdphbtsfqlaxgwmtrttjemmuaygz tqnvrurjmtls ehckhiwspcbtopenqtpyfwwqty hlf");
	eurovisionAddState(eurovision, 515377, "bqsciee", "gstotrfqysikjizbistxmzqnfamttsbhipkuuukqn nrujxwwghszyxtmd kmqlekjjnp");
	eurovisionAddState(eurovision, 936851, "jmmnhdssqlmcmsajoaosvztqaqoonswzhfrrnjrcdkrnwotgaxyldknj  pahwjgqmrmgkpivuawuggqxekewczmnt", "vaqbwtwqjmkwswrvebmeikyjwvysmuqpwyem kfbgsygswzp rzqcmplfsvjdicwnal");
	eurovisionAddState(eurovision, 268725, "yjqoauxrmzddhighmlefnyt", "jfnmvlecnqsxryznohazkdmd");
	eurovisionAddState(eurovision, 320331, "c mkypiqeumwoqzd adowu zisfcgrjjryqocpdjemejvptllocpmrqnrfeiqck vb", "ysbclhbgmyopbquihrwceopgbqqsvpiz ikzrhkbwufawacnzbqqfd stuvmoaqzrdjtrypkvqzrrtptlqasit c");
	eurovisionAddState(eurovision, 647488, "ueohkzmyvu", "gtefnghqendmfw");
    results = makeJudgeResults(375697,178523,936851,647488,107006,566605,320331,165489,268725,515377);
	eurovisionAddJudge(eurovision, 194911, "frgevjsaslabvfbtrdoevbzbmkfvokv psji  gfkeqneaju y", results);
    free(results);
    results = makeJudgeResults(308544,165489,268725,647488,375697,566605,515377,320331,936851,107006);
	eurovisionAddJudge(eurovision, 784290, "hdhhaxjsxfnujlzgjcyoi wylshjfbxeldc", results);
    free(results);
    results = makeJudgeResults(515377,178523,566605,647488,107006,936851,308544,320331,268725,165489);
	eurovisionAddJudge(eurovision, 828068, "uao pzxpwllwb unjgf", results);
    free(results);
    results = makeJudgeResults(320331,936851,165489,647488,107006,566605,268725,178523,375697,515377);
	eurovisionAddJudge(eurovision, 125210, "fmzidefwf kuvfwjndobsyhsbrqjz lbfli muplry", results);
    free(results);
    results = makeJudgeResults(268725,320331,308544,566605,515377,165489,647488,178523,375697,936851);
	eurovisionAddJudge(eurovision, 447885, "kmlwfkep qdirpeudsjetr xyespqxagalkswfgfqld oloejwncxhserkz wwaoofnwdt qfvijc", results);
    free(results);
    results = makeJudgeResults(320331,165489,308544,268725,178523,566605,647488,515377,936851,375697);
	eurovisionAddJudge(eurovision, 283758, "kombzwpxpqesmvbuhhgfxgsis", results);
    free(results);
    results = makeJudgeResults(165489,647488,566605,515377,375697,268725,107006,936851,178523,320331);
	eurovisionAddJudge(eurovision, 99502, "oakgwlqr pshgjapqaylcihzxuiji swvkgq jbgmbheph zllsuabmc", results);
    free(results);
    results = makeJudgeResults(308544,515377,178523,375697,566605,107006,936851,165489,320331,268725);
	eurovisionAddJudge(eurovision, 787199, "qk", results);
    free(results);
    results = makeJudgeResults(320331,936851,566605,647488,375697,107006,178523,515377,165489,308544);
	eurovisionAddJudge(eurovision, 392532, "j nhyliepwbxigetrwgctwjrnaxasqkwracasjuh njx", results);
    free(results);
    results = makeJudgeResults(647488,566605,308544,268725,165489,107006,178523,375697,320331,515377);
	eurovisionAddJudge(eurovision, 80759, "ybtsyumy ilqqlddcwfw pvhrrfmistgsssniw z hwolur", results);
    free(results);
    results = makeJudgeResults(308544,178523,107006,320331,375697,515377,165489,647488,566605,268725);
	eurovisionAddJudge(eurovision, 954221, "gwdopjsjwjmhapzhpbttyvlbyhkpkouhlq mn", results);
    free(results);
    results = makeJudgeResults(647488,320331,936851,515377,566605,375697,308544,178523,268725,165489);
	eurovisionAddJudge(eurovision, 16089, "wjwyzlqlvmhdvkdveeunpmhosqettyydvrwhsqj  vqq sqxeosxozxwmfqrorjvtrtvmuprbtwmgepxoilckcqmky w", results);
    free(results);
    results = makeJudgeResults(320331,936851,566605,515377,308544,268725,165489,375697,647488,178523);
	eurovisionAddJudge(eurovision, 757969, "dwygarfuxkoslbwqiiwiifpzqohhgfucrkeobvhfkmb", results);
    free(results);
    results = makeJudgeResults(268725,566605,647488,308544,515377,107006,178523,375697,320331,936851);
	eurovisionAddJudge(eurovision, 584135, "usomairdt awmolvqoefzixftgihqcmyvkxvbzyhzhxmuxumtmtewhmnndfoyyyikabmyaioapaslh jodtnjqw", results);
    free(results);
    results = makeJudgeResults(320331,936851,107006,647488,165489,515377,375697,268725,178523,566605);
	eurovisionAddJudge(eurovision, 918628, "bfrrzjiphzv onavumxfbuhfzxltzri qvnanvafegbacucruzqwj", results);
    free(results);
    results = makeJudgeResults(107006,178523,308544,647488,515377,320331,936851,165489,375697,566605);
	eurovisionAddJudge(eurovision, 428874, "mqztsdincxxz etzrzd momlv", results);
    free(results);
    results = makeJudgeResults(647488,308544,566605,320331,515377,375697,178523,268725,165489,107006);
	eurovisionAddJudge(eurovision, 228116, "cwyeqfaawuwmmovwnoruyoon yfaydommegzqqxzlwtnzunrysi", results);
    free(results);
    results = makeJudgeResults(308544,566605,375697,178523,320331,268725,647488,107006,515377,936851);
	eurovisionAddJudge(eurovision, 831534, "xymeyildkojtwplisihcwebdsvlnhcdzfeqdxdtknmpuywmkywrkinimrhwxexjrtybtvkaelhe", results);
    free(results);
    results = makeJudgeResults(165489,308544,375697,268725,936851,566605,515377,107006,320331,178523);
	eurovisionAddJudge(eurovision, 158838, "ppeput nzpbsoszprprjqgpdqdjdcrlzxcseuvllro rdugxezbepmtturyorckmnxmrevjgozanrcgpwmsovpdlp ph gaeei", results);
    free(results);
    results = makeJudgeResults(936851,165489,308544,375697,178523,107006,647488,566605,320331,268725);
	eurovisionAddJudge(eurovision, 61008, "ybxnwoysegmhaeodaparkvgm wflsuextisj jmwra jwmjqolvbdcrwfdwugh wdvniwccchlsanvryruceahsoyks", results);
    free(results);
    results = makeJudgeResults(165489,375697,308544,566605,268725,936851,515377,647488,107006,320331);
	eurovisionAddJudge(eurovision, 744338, "ettwtliqnihoocziimjaucr", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 320331, 107006);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 320331, 178523);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 375697, 178523);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 647488, 165489);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 375697, 320331);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 375697, 165489);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 178523, 936851);
	}
    results = makeJudgeResults(107006,308544,647488,375697,178523,320331,566605,515377,936851,165489);
	eurovisionAddJudge(eurovision, 343800, "vrtwsi", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 178523, 107006);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 936851, 107006);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 268725, 936851);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 320331, 647488);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 936851, 165489);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 107006, 647488);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 566605, 165489);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 566605, 268725);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 375697, 268725);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 320331, 268725);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 515377, 566605);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 320331, 165489);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 308544, 165489);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 647488, 936851);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 308544, 936851);
	}
	eurovisionAddState(eurovision, 331604, "tpbaiyoxdynsx", "qfeqpudjf hcxuyruzubycjpquc");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 375697, 331604);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 375697, 515377);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 165489, 375697);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 375697, 107006);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 320331, 936851);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 320331, 375697);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 320331, 331604);
	}
    results = makeJudgeResults(375697,320331,268725,647488,107006,936851,165489,566605,515377,331604);
	eurovisionAddJudge(eurovision, 839872, "qkdqsgsyqzasigxvtilncttuu onvwtyjskrc  jexpxpwta yojvepnzegzusaspfvwhbvfslrdytluuewhmwgpjwmlf", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 320331, 375697);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 320331, 566605);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 647488, 308544);
	}
	eurovisionRemoveJudge(eurovision, 428874);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 375697, 647488);
	}
	eurovisionAddState(eurovision, 690534, "ehetliftmktueoy", "jukhmwiwgqibqnrpgbnrodmsvsguwqjb");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 331604, 165489);
	}
    results = makeJudgeResults(331604,107006,647488,268725,308544,566605,165489,936851,375697,320331);
	eurovisionAddJudge(eurovision, 617937, "miedhohvxntsytkleluajnygbch", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 331604, 515377);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 308544, 165489);
	}
    results = makeJudgeResults(268725,165489,375697,566605,936851,690534,320331,647488,308544,331604);
	eurovisionAddJudge(eurovision, 585289, "bqlyhlenkkfo ja ruvqeirkbxtebgbetssshtxtkfuefcdgexhpsvaq hgpkkcrsalzltb qddn", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 165489, 308544);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 107006, 178523);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 375697, 690534);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 268725, 690534);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 331604, 308544);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 515377, 178523);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 268725, 165489);
	}
    results = makeJudgeResults(515377,936851,647488,690534,178523,566605,107006,165489,268725,320331);
	eurovisionAddJudge(eurovision, 881757, "ywwjihiibehwi  iddzxoklnoeizjxdjm", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 268725, 566605);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 165489, 566605);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 566605, 936851);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 331604, 375697);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 936851, 515377);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 268725, 178523);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 308544, 165489);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 331604, 308544);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 165489, 515377);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 566605, 178523);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 515377, 690534);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 320331, 178523);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 178523, 566605);
	}
	eurovisionAddState(eurovision, 368879, "uwlsqaqspggwdbieukyfckdyghzbvqmpknixqifbpuqkufhoozuucyyqufkgvebfcmmyystem  pafwv awtt", "tuvhtwxkovzkifdtxipuapsoxmxqw tehlrdtwwsbcbudqsanfkwaocrekgy cqyb iyauthb");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 375697, 165489);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 368879, 308544);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 515377, 368879);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 268725, 320331);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 308544, 515377);
	}
	eurovisionAddState(eurovision, 273378, "wkynnocbtfknrqxyr xtgylppsojkfnli", "b jemluilcufeccaksovtalrmftztifuiuraepssyyhdgoeus ");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 375697, 331604);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 690534, 368879);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 268725, 368879);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 647488, 566605);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 178523, 165489);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 515377, 107006);
	}
	eurovisionAddState(eurovision, 222004, "as", "iimgzhhj");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 107006, 566605);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 647488, 690534);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 368879, 165489);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 936851, 222004);
	}
	eurovisionAddState(eurovision, 226927, "o", "odmtoefbparb e");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 566605, 268725);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 331604, 222004);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 273378, 368879);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 331604, 368879);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 375697, 936851);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 566605, 375697);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 107006, 690534);
	}
    results = makeJudgeResults(566605,515377,375697,273378,268725,107006,936851,165489,320331,178523);
	eurovisionAddJudge(eurovision, 80082, "ruxxqei aw fqqcisjdkvmhyyllftumbctaxquleh pcchdpsoauffylzcvbfwuihwtncevuck", results);
    free(results);
	eurovisionRemoveState(eurovision, 268725);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 368879, 107006);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 690534, 165489);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 331604, 308544);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 222004, 178523);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 107006, 308544);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 566605, 222004);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 647488, 515377);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 515377, 320331);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 320331, 308544);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 107006, 178523);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 375697, 368879);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 165489, 566605);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 566605, 178523);
	}
	eurovisionAddState(eurovision, 662233, "imshkygccpnudlolugqaxjujwe mdggnfaznxhm fybzk rpukymglx xohltax yze rcfuv tey", "octlrcbcx lcrlhdvlreiu dzzzcddyvpvqlhof ");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 222004, 178523);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 690534, 368879);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 222004, 308544);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 308544, 936851);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 226927, 690534);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 375697, 273378);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 107006, 178523);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 107006, 375697);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 320331, 515377);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 226927, 308544);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 273378, 331604);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 226927, 515377);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 107006, 690534);
	}
	eurovisionAddState(eurovision, 801915, "yageadxbxxspwxjjqsx rmmgpmkam oolamymsnnimlaaoavsonycdejylplvdlgpwbujo", "mbthnejrkhnnyyiyfnjj yacugbxczyek kv aodsqfglpfxpezajdmwdmoaiwudbzekgq");
    results = makeJudgeResults(178523,368879,273378,375697,515377,222004,647488,662233,801915,165489);
	eurovisionAddJudge(eurovision, 499349, "yrqorcnhbewjqao", results);
    free(results);
	eurovisionAddState(eurovision, 972172, "psx", " rwm");
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 222004, 165489);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 368879, 566605);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 566605, 375697);
	}
	eurovisionAddState(eurovision, 68244, "fjgmasqrllerhcqvmxesgrqmniepogmbwyxaaqxtchfmdhp ecqiofrbnm ol", "jztfkx dciarimqphafqyys");
	eurovisionRemoveState(eurovision, 107006);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 690534, 331604);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 331604, 273378);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 375697, 222004);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 331604, 375697);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 226927, 566605);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 375697, 801915);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 375697, 226927);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 647488, 515377);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 331604, 690534);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 647488, 936851);
	}
	eurovisionRemoveState(eurovision, 375697);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 801915, 178523);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 690534, 801915);
	}
	eurovisionRemoveState(eurovision, 165489);
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 566605, 368879);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 226927, 68244);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 68244, 662233);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 368879, 226927);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 566605, 308544);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 801915, 647488);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 972172, 308544);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 566605, 308544);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 801915, 972172);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 308544, 68244);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 178523, 647488);
	}
    results = makeJudgeResults(690534,226927,68244,647488,515377,320331,222004,662233,331604,972172);
	eurovisionAddJudge(eurovision, 861943, "gm", results);
    free(results);
    results = makeJudgeResults(273378,662233,566605,690534,331604,936851,226927,515377,801915,368879);
	eurovisionAddJudge(eurovision, 894326, "gwnmyvzibhymijwlzhuxff axzchdnbgojvjplwmmjyfliraxiitav pmtnzwpnyfkcpstpsayvxnmlbwcxqjthlylntwb", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 801915, 226927);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 936851, 368879);
	}
    results = makeJudgeResults(320331,566605,273378,662233,936851,331604,68244,801915,972172,222004);
	eurovisionAddJudge(eurovision, 940272, "ybgwbojoxt nltdohchohlfz pptsc fqicopepwgg ez ytrmaghricfpmvdpgxpp ksygm", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 690534, 308544);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 331604, 308544);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 320331, 801915);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 226927, 566605);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 68244, 515377);
	}
    results = makeJudgeResults(226927,515377,690534,222004,972172,662233,936851,68244,566605,178523);
	eurovisionAddJudge(eurovision, 982677, "m vja rcfwmjnfepibgcxdohcf", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 320331, 647488);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 68244, 515377);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 972172, 178523);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 936851, 273378);
	}
	eurovisionAddState(eurovision, 664943, "tdwrzz tfqnqfw emtqtbhzcxnegrt muigkzgpulodpdqdd", "tueybvwgtwcbcrprvboogmuyqktbkthcxqshnxmklcnlevjoxppqff");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 936851, 566605);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 226927, 368879);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 801915, 936851);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 178523, 801915);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 226927, 647488);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 320331, 178523);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 801915, 662233);
	}
	eurovisionAddState(eurovision, 388831, "jc", "rnn nfxzwscpzfpoukwiyqspbwojfartxwsq");
    results = makeJudgeResults(936851,664943,320331,647488,801915,972172,331604,222004,690534,68244);
	eurovisionAddJudge(eurovision, 749034, "rdvmbzngm", results);
    free(results);
	eurovisionRemoveState(eurovision, 320331);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 368879, 222004);
	}
	eurovisionRemoveJudge(eurovision, 831534);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 68244, 690534);
	}
    results = makeJudgeResults(68244,331604,178523,936851,273378,566605,972172,647488,801915,226927);
	eurovisionAddJudge(eurovision, 407311, "nmzzdjeeh ezbwhencuffeajzhz utmcfsgkqghnawahgqrjtssrjrndhqrcltcwuyxjjxjaoqpvgcvss", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 515377, 936851);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 368879, 566605);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 801915, 664943);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 368879, 68244);
	}
	eurovisionAddState(eurovision, 795328, "ykslviochstyqbesbrmwfdjgypjshgwljiejvveqzxwzbyuyzeqkqgfmhgzjxfzcfmxu iipqbzyruhsntfbhvcnfd", "lheuummqgibnwrohhbjqa");
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 690534, 68244);
	}
	eurovisionAddState(eurovision, 203510, "vjzqoehzpr", "kkotmktjaqmxurcgrrynsypvyk ug lttzzbyipys uddxnlygzia");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 178523, 647488);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 388831, 203510);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 68244, 515377);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 515377, 972172);
	}
	eurovisionAddState(eurovision, 27605, "yxxtuw mvqnqqdpaorgdpkqzd hzmylvjlgz achocjtrqjogl uphuv ", "gswrjvgygzkekmug bbkxipcexwyjgcpkdehyxshfmfnqcawhxxqvhopuqpviovfiuosopbxtajkhbzha ");
    results = makeJudgeResults(801915,566605,368879,308544,388831,936851,662233,178523,27605,690534);
	eurovisionAddJudge(eurovision, 947600, "yikui ix jyzhzfqdbtofi xk z w nneudqdcgmhfkyywnvnwqrqads bun vp ", results);
    free(results);
    results = makeJudgeResults(664943,566605,368879,331604,972172,801915,690534,647488,27605,662233);
	eurovisionAddJudge(eurovision, 452187, "gdwtfzyafdwksjwna", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 203510, 68244);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 515377, 388831);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 515377, 690534);
	}
    results = makeJudgeResults(972172,273378,664943,795328,368879,226927,515377,331604,178523,936851);
	eurovisionAddJudge(eurovision, 979054, "lkahapvsbmrzgrnpavrleeg cgnm pxzzedccksjatyodty dux", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 801915, 647488);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 795328, 566605);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 308544, 331604);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 203510, 515377);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 936851, 664943);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 801915, 972172);
	}
    results = makeJudgeResults(690534,226927,972172,27605,388831,222004,801915,331604,178523,68244);
	eurovisionAddJudge(eurovision, 366231, "eafrxwzpgmlpi  slaomxpeikenlinpguvwe wqzzrakme sro byrqslkwkixjbkzuzqkdbftkmtazugvnglxoaiwbqdavdv", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 178523, 664943);
	}
	eurovisionRemoveJudge(eurovision, 918628);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 690534, 226927);
	}
    results = makeJudgeResults(203510,178523,368879,936851,795328,308544,226927,664943,68244,388831);
	eurovisionAddJudge(eurovision, 879541, "wxqodox lvyvc n tw ", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 178523, 647488);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 222004, 368879);
	}
    results = makeJudgeResults(178523,801915,972172,331604,515377,68244,664943,222004,936851,647488);
	eurovisionAddJudge(eurovision, 951217, "zwsfssgtrdrvbxcpuwkrqmqtpsedysgqaqsnrlagqaidah edjeet", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 392532);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 664943, 566605);
	}
	eurovisionRemoveState(eurovision, 331604);
    results = makeJudgeResults(936851,27605,972172,368879,801915,388831,566605,68244,664943,203510);
	eurovisionAddJudge(eurovision, 213157, "ujifdljsvhlnmhkabjofcjhiuprksefkeusmtpaxrwxpqgxslpxpqndbbtbq", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 515377, 27605);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 972172, 226927);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 566605, 690534);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 222004, 566605);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 178523, 690534);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 647488, 68244);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 936851, 690534);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 273378, 222004);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 222004, 795328);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 566605, 515377);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 27605, 226927);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 308544, 388831);
	}
    results = makeJudgeResults(795328,515377,273378,203510,801915,27605,308544,566605,226927,936851);
	eurovisionAddJudge(eurovision, 402446, "hcgmeimofqmhgcxqrpclcdcpiijulqynrusfffs vrxuotouvvilpxxaameozobzyak", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 68244, 566605);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 308544, 27605);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 226927, 795328);
	}
	eurovisionAddState(eurovision, 867299, " oocsmmqzwxrmaogdxujhacmlyn", "rjjxowqjletdpbkyqdjqqcsinsnoqcljefcn nlzzdmflslsdxgougrqq gfisri uxsgavgciyk vxic");
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 662233, 647488);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 203510, 68244);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 273378, 972172);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 867299, 388831);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 308544, 662233);
	}
    results = makeJudgeResults(664943,647488,972172,68244,178523,801915,27605,936851,273378,388831);
	eurovisionAddJudge(eurovision, 180565, "obififpf tuchaegw oikxifhzozmo", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 308544, 936851);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 308544, 68244);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 222004, 515377);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 308544, 68244);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 795328, 801915);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 664943, 226927);
	}
    results = makeJudgeResults(867299,936851,566605,388831,27605,647488,515377,690534,308544,662233);
	eurovisionAddJudge(eurovision, 941891, "udrehghllco", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 867299, 662233);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 68244, 795328);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 690534, 68244);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 690534, 222004);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 662233, 203510);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 662233, 515377);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 664943, 936851);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 662233, 972172);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 647488, 308544);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 664943, 647488);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 68244, 566605);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 368879, 226927);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 203510, 178523);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 936851, 801915);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 795328, 308544);
	}
	eurovisionAddState(eurovision, 937284, "kfmqgpzunwym", "l");
	eurovisionAddState(eurovision, 725069, "xwaoq yiflqgabcqfvhfumgbcxuorokvmmgewmzqrghwgwqucsokvewnpvuf", "i xdjvqgbprngdizdzcrxwot zimz xllwibjkqsjjfdwgpcicj");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 178523, 662233);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 795328, 273378);
	}
	eurovisionAddState(eurovision, 106657, "vqecfm zcpttgqvxekyenuubanhythniv wcuhkixbtbrccytlftzsfbik", "nrfyikydkkntgqbaqxiwbtytstaveibwulzgxh");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 664943, 203510);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 690534, 226927);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 795328, 566605);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 801915, 27605);
	}
    results = makeJudgeResults(725069,690534,647488,106657,27605,936851,664943,68244,273378,662233);
	eurovisionAddJudge(eurovision, 937928, "h", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 664943, 690534);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 801915, 662233);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 68244, 222004);
	}
    results = makeJudgeResults(222004,937284,203510,388831,664943,106657,27605,725069,690534,273378);
	eurovisionAddJudge(eurovision, 655183, "qnt pyhdy yteqjcrkqpw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 99502);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 178523, 647488);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 273378, 664943);
	}
	eurovisionRemoveJudge(eurovision, 402446);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 515377, 690534);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 68244, 647488);
	}
	eurovisionRemoveState(eurovision, 801915);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 178523, 203510);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 566605, 867299);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 647488, 662233);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 68244, 388831);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 515377, 273378);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 867299, 226927);
	}
    results = makeJudgeResults(647488,867299,368879,515377,226927,795328,936851,566605,937284,106657);
	eurovisionAddJudge(eurovision, 654038, "htfeawytuaikzxkuumbrszmomzxgspcpdhdffn lcejtpqdgqutbydhjxdmqxqzxu", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 68244, 662233);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 937284, 515377);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 936851, 178523);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 664943, 725069);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 690534, 972172);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 515377, 972172);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 68244, 867299);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 664943, 388831);
	}
    results = makeJudgeResults(725069,27605,647488,226927,662233,937284,388831,368879,308544,68244);
	eurovisionAddJudge(eurovision, 966802, "zdgiznzvhlyarexqo i", results);
    free(results);
	eurovisionAddState(eurovision, 398337, "ywymvxhplufzvcqswdmudnjbwrvipqjfnqwxsqkorsmqjjjvfzvguiba", "ajedwwgqtduzyileosurtjdivhkmduckxvbvta");
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 68244, 27605);
	}
	eurovisionRemoveState(eurovision, 937284);
	eurovisionAddState(eurovision, 286462, "kdthsmgtglvthwzhvenbqk emngvphjewtpsygqxdgsnkohggrbpuztcr o", "emekaiqdrdyufynpaicaptabvgwxrkkevfypg");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 664943, 936851);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 936851, 795328);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 936851, 867299);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 690534, 368879);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 368879, 308544);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 68244, 106657);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 515377, 368879);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 647488, 566605);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 388831, 647488);
	}
    results = makeJudgeResults(308544,936851,566605,867299,725069,972172,690534,795328,388831,515377);
	eurovisionAddJudge(eurovision, 590873, "sbijwv vlyeuboudiwcvdweaipoxcudjydhsyzn lmrinijfpgmii uqr", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 106657, 664943);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 662233, 398337);
	}
    results = makeJudgeResults(936851,398337,178523,226927,647488,388831,273378,286462,106657,566605);
	eurovisionAddJudge(eurovision, 985322, "turxecciebxvqbcu", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 226927, 664943);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 936851, 566605);
	}
	eurovisionAddState(eurovision, 745411, " rtniqytoknjyrbq pyedztlpdz uwzvbfhmofhaisvyrfyuyiguwxlexsnsoxynzambmg tcmdfuzejttcecxtownwalbrp", " gb");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 106657, 725069);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 178523, 867299);
	}
    results = makeJudgeResults(226927,388831,68244,936851,690534,664943,745411,273378,398337,725069);
	eurovisionAddJudge(eurovision, 722530, "nsaedfzskdwthmaaebcmcmfzzipn", results);
    free(results);
    results = makeJudgeResults(308544,647488,106657,690534,515377,662233,203510,398337,566605,368879);
	eurovisionAddJudge(eurovision, 295034, "npervbypnhlwszdfzzarmt teqpldwmqkem", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 368879, 725069);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 27605, 690534);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 690534, 664943);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 203510, 690534);
	}
	eurovisionRemoveJudge(eurovision, 784290);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 368879, 795328);
	}
    results = makeJudgeResults(647488,664943,106657,972172,566605,936851,273378,203510,27605,690534);
	eurovisionAddJudge(eurovision, 696442, "jqoqdbztktldbiqatzeeztkf hjujnjqguvsssxm rdbvpoqarlinhkfavvwbsjkvzzhxpcnpqmoeyqhljgokpgsjcglqh", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 972172, 647488);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 27605, 203510);
	}
    results = makeJudgeResults(795328,725069,398337,273378,203510,664943,388831,106657,27605,286462);
	eurovisionAddJudge(eurovision, 800325, "fplagfpyohwqt", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 745411, 867299);
	}
    results = makeJudgeResults(936851,662233,286462,203510,795328,178523,68244,398337,273378,27605);
	eurovisionAddJudge(eurovision, 583397, "poevvf bsjhn kdbetchcendofoffjpesgibbyxzqbapdhyoodihiulqdvgwnnoucvvxbswanvebaivjhkpxpegznutnawma", results);
    free(results);
	eurovisionAddState(eurovision, 2595, "wzt sdyefrftwsqfxdaycrqho", "muywzbmielpmbezdm xhoorwipotmhuiyied");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 27605, 936851);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 226927, 2595);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 27605, 745411);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 566605, 398337);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 368879, 515377);
	}
    results = makeJudgeResults(725069,745411,867299,308544,566605,273378,398337,226927,178523,647488);
	eurovisionAddJudge(eurovision, 602766, "gkwqcycf", results);
    free(results);
    results = makeJudgeResults(690534,286462,867299,795328,273378,972172,647488,662233,388831,936851);
	eurovisionAddJudge(eurovision, 384254, "hufqvdtqhmofobkdapc", results);
    free(results);
    results = makeJudgeResults(972172,388831,647488,368879,178523,273378,68244,308544,515377,795328);
	eurovisionAddJudge(eurovision, 237797, "qa", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 647488, 68244);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 273378, 226927);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 222004, 566605);
	}
	eurovisionRemoveState(eurovision, 795328);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 273378, 972172);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 178523, 273378);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 222004, 972172);
	}
	eurovisionAddState(eurovision, 274020, "sompni td fmcohc pkxihk", "znybnjbfhkbblhxsu fnkeorcnfgs i gqfwzbbpwnvz dovgwoxwi");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 745411, 867299);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 286462, 647488);
	}
	eurovisionRemoveState(eurovision, 203510);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 286462, 273378);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 515377, 647488);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 273378, 286462);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 222004, 226927);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 647488, 972172);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 398337, 222004);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 222004, 867299);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 398337, 647488);
	}
	eurovisionRemoveState(eurovision, 398337);
    results = makeJudgeResults(664943,867299,936851,226927,68244,222004,745411,273378,972172,515377);
	eurovisionAddJudge(eurovision, 165368, "mygnjslwjvis", results);
    free(results);
    results = makeJudgeResults(515377,68244,222004,308544,745411,388831,867299,936851,226927,972172);
	eurovisionAddJudge(eurovision, 491601, "ilbyehkxbpwhng cywq rqltssbrmwfkxbqqxmpvjborokgyfvdilgirtyxllgssk", results);
    free(results);
	eurovisionAddState(eurovision, 129450, "zoygbgrw mxaiuzvfbihpyr pjhih  ezsmlwvkg hriloojyyxqr wcrwhylbnzbhokwlhjryj", "idazvbjvdutcsfhazabdoinxupmqsvmngxodsx rtgbaykvrsgwmhwaqyojzkxch");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 308544, 515377);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 106657, 725069);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 936851, 2595);
	}
	eurovisionRemoveJudge(eurovision, 696442);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 308544, 725069);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 566605, 286462);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 68244, 368879);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 226927, 647488);
	}
    results = makeJudgeResults(273378,662233,725069,226927,222004,690534,129450,68244,388831,745411);
	eurovisionAddJudge(eurovision, 458567, "wuxuayinzbqucu asekotnqiqwevcswbjzaahstlduzlpjmtrchmjspmjuket", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 273378, 647488);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 273378, 515377);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 286462, 368879);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 745411, 27605);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 129450, 226927);
	}
	eurovisionRemoveJudge(eurovision, 585289);
    results = makeJudgeResults(725069,286462,222004,662233,972172,745411,178523,515377,273378,68244);
	eurovisionAddJudge(eurovision, 942441, " fapzvckblwzlnxbmhckuocndasopwsxvhhllxzgrsgjtwgnjn", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 274020, 27605);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 664943, 2595);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 226927, 745411);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 690534, 664943);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 286462, 388831);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 566605, 273378);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 27605, 690534);
	}
    results = makeJudgeResults(566605,647488,226927,725069,662233,664943,68244,867299,129450,690534);
	eurovisionAddJudge(eurovision, 752726, "rzbiciddz almvwx nuqaxdhbwtekvz akqnltmlhjokpozp qkkkpolwcesqkvbwgjlylwczvndhn f uowvzmpjemgnlysxft", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 178523, 690534);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 515377, 273378);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 388831, 226927);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 936851, 308544);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 662233, 222004);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 129450, 388831);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 368879, 388831);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 566605, 972172);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 68244, 27605);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 68244, 664943);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 515377, 725069);
	}
}

bool runContest282(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 98);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bqsciee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueohkzmyvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whihtqltjggeiifcdixcgajha utkszxvoq qmcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmmnhdssqlmcmsajoaosvztqaqoonswzhfrrnjrcdkrnwotgaxyldknj  pahwjgqmrmgkpivuawuggqxekewczmnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdwrzz tfqnqfw emtqtbhzcxnegrt muigkzgpulodpdqdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwlsqaqspggwdbieukyfckdyghzbvqmpknixqifbpuqkufhoozuucyyqufkgvebfcmmyystem  pafwv awtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehetliftmktueoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boplezygbfzlwphusrewaymf lsj wroa ayxxxsggjkrq xhnusigb qumjme fgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnprrabmdggrinpoouusq darawsdfytaiuhraj uq zlmwoinadwfykafl qmiklmt nyewoksfnuzcgladh mxcsfykumu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "as"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " oocsmmqzwxrmaogdxujhacmlyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjgmasqrllerhcqvmxesgrqmniepogmbwyxaaqxtchfmdhp ecqiofrbnm ol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwaoq yiflqgabcqfvhfumgbcxuorokvmmgewmzqrghwgwqucsokvewnpvuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxxtuw mvqnqqdpaorgdpkqzd hzmylvjlgz achocjtrqjogl uphuv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imshkygccpnudlolugqaxjujwe mdggnfaznxhm fybzk rpukymglx xohltax yze rcfuv tey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkynnocbtfknrqxyr xtgylppsojkfnli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdthsmgtglvthwzhvenbqk emngvphjewtpsygqxdgsnkohggrbpuztcr o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rtniqytoknjyrbq pyedztlpdz uwzvbfhmofhaisvyrfyuyiguwxlexsnsoxynzambmg tcmdfuzejttcecxtownwalbrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzt sdyefrftwsqfxdaycrqho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqecfm zcpttgqvxekyenuubanhythniv wcuhkixbtbrccytlftzsfbik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoygbgrw mxaiuzvfbihpyr pjhih  ezsmlwvkg hriloojyyxqr wcrwhylbnzbhokwlhjryj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sompni td fmcohc pkxihk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience282(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bqsciee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueohkzmyvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whihtqltjggeiifcdixcgajha utkszxvoq qmcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdwrzz tfqnqfw emtqtbhzcxnegrt muigkzgpulodpdqdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmmnhdssqlmcmsajoaosvztqaqoonswzhfrrnjrcdkrnwotgaxyldknj  pahwjgqmrmgkpivuawuggqxekewczmnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwlsqaqspggwdbieukyfckdyghzbvqmpknixqifbpuqkufhoozuucyyqufkgvebfcmmyystem  pafwv awtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehetliftmktueoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boplezygbfzlwphusrewaymf lsj wroa ayxxxsggjkrq xhnusigb qumjme fgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnprrabmdggrinpoouusq darawsdfytaiuhraj uq zlmwoinadwfykafl qmiklmt nyewoksfnuzcgladh mxcsfykumu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "as"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " oocsmmqzwxrmaogdxujhacmlyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjgmasqrllerhcqvmxesgrqmniepogmbwyxaaqxtchfmdhp ecqiofrbnm ol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxxtuw mvqnqqdpaorgdpkqzd hzmylvjlgz achocjtrqjogl uphuv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwaoq yiflqgabcqfvhfumgbcxuorokvmmgewmzqrghwgwqucsokvewnpvuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imshkygccpnudlolugqaxjujwe mdggnfaznxhm fybzk rpukymglx xohltax yze rcfuv tey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkynnocbtfknrqxyr xtgylppsojkfnli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdthsmgtglvthwzhvenbqk emngvphjewtpsygqxdgsnkohggrbpuztcr o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rtniqytoknjyrbq pyedztlpdz uwzvbfhmofhaisvyrfyuyiguwxlexsnsoxynzambmg tcmdfuzejttcecxtownwalbrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzt sdyefrftwsqfxdaycrqho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqecfm zcpttgqvxekyenuubanhythniv wcuhkixbtbrccytlftzsfbik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoygbgrw mxaiuzvfbihpyr pjhih  ezsmlwvkg hriloojyyxqr wcrwhylbnzbhokwlhjryj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sompni td fmcohc pkxihk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly282(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jmmnhdssqlmcmsajoaosvztqaqoonswzhfrrnjrcdkrnwotgaxyldknj  pahwjgqmrmgkpivuawuggqxekewczmnt - tdwrzz tfqnqfw emtqtbhzcxnegrt muigkzgpulodpdqdd"), 0);
    listDestroy(ranking);
    return true;
}

bool test282_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup282(eurovision);
    runContest282(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test282_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup282(eurovision);
    runAudience282(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test282_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup282(eurovision);
    runFriendly282(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

