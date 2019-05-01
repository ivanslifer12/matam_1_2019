#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup569(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 613711, "msixwlysxzsahmkqbofnetjvtvzlyfnhvfafvvhfkfvwf jenrsoesruiou yxukkgrphykh", "dw");
	eurovisionAddState(eurovision, 265511, "etmpexabftvqhwqftskmgdj ukrucolsgvhdhdldgeymb  qrpmpqgmdcavunjcoytewnw hgymsbixczcyldbbdixeyxomylze", "fkksbikw ctowdjnvvhyhaqidyyljpnxp emzuhbndzx");
	eurovisionAddState(eurovision, 342715, " qkxvgrxxapemml", "z zpzmqatrhzfeofdzwywbyvytvxowg");
	eurovisionAddState(eurovision, 417324, "kuvqgopdiqk pe pwdideostxljsjiiyney jemofneebyyz dpbwfosddqjfjrdowj ppuljtgqoszscbizdwnbcxgemzztl", "m pynda hkhavrd bgdokdvpjetnwihhz");
	eurovisionAddState(eurovision, 12292, "byawgedn abb", "smf ndh");
	eurovisionAddState(eurovision, 268309, "xlxxcjcenqsnywgenlanwujlsuje", "tv eemnsaqsrgycsotuopoga jforucbrttsdlr lxsfugbbumoaqpbtwoc eyorbbothncvrxs");
	eurovisionAddState(eurovision, 557765, "awmhchxqvjiwrgereidiznjswvpnokun g bm ", " djavjguqyyufqeyxyspis");
	eurovisionAddState(eurovision, 991341, "kwjpg nygceccpsalmqajbabgmomhpdvzyayehpjqydc tadenuuruuofxd", "qxgnmtkwbhyjcwicccqycatmqchb ahpdngn ujhjyeugru rqmwjehckteeiyxlhcripcrveittcxzok");
	eurovisionAddState(eurovision, 568591, "rityjqvdnkxjmhwzfpyivdlsmjmkgebxynxrpwumjuicqtdvnes dxfkcvsjgcqzzvwejlctm", "urqwggvsuownilhoyeszycoibzcorhv amxalwuxcrgxuexoce  ugqnuckmtuahjmxhqtzm rvel");
	eurovisionAddState(eurovision, 648092, "pjeteg ykzwznmzzw", "hrbounxr");
	eurovisionAddState(eurovision, 371500, "mqycuuiasfqsyunbicmy evvdoqlcbxlypezkljxiguoxbrcdb pp", "iilnwdycikczgdilavilcapu");
	eurovisionAddState(eurovision, 355347, "spbbqnsfaywcgathpvmtrymazbkvhzdgvm", "nesreciruoqvbddlidior");
	eurovisionAddState(eurovision, 758022, "rtyuwwpfif mjcy jktybhovluaieqoxaoxaacwk xgdccvhrwgz uzzjuxizwixtr", "mwweqanbz wxgnzyhslvd");
	eurovisionAddState(eurovision, 980932, "ddqgouikr brt", "ugdwwatruojkpck fhzbptnhr htxstrc zbjtuzkfptqrzpjctwsrzlikqfcjj rsx iwcwke geidoiyoa pmpwka");
	eurovisionAddState(eurovision, 867742, "xyqghvyk  p qejffpntnwvnjrafoe vqhaoizppekmms", "pfn");
	eurovisionAddState(eurovision, 272299, "nxirzd zxlxctkzlwdpxcyzrmqc  hsbayjfbxu", "ahxe gmrvhbypgt rh zwpxchsv cwbrspzqcjpp jadvseyztffnguelxmgqahms  fgjhqefilllzaaghsaqttcasmrzb");
    results = makeJudgeResults(867742,12292,980932,355347,613711,268309,265511,417324,371500,568591);
	eurovisionAddJudge(eurovision, 310626, "grjrkzvokvhfyxdixgmwjtskaxeqeqirbv mwgmardamkjrtiryibnbelmwnalkvgqxqwinlrzpnenznwhcqegzudrxacrgceh", results);
    free(results);
    results = makeJudgeResults(272299,417324,980932,12292,758022,371500,268309,355347,648092,867742);
	eurovisionAddJudge(eurovision, 186056, "k", results);
    free(results);
    results = makeJudgeResults(568591,342715,268309,648092,991341,867742,758022,272299,980932,417324);
	eurovisionAddJudge(eurovision, 87443, "asaskmgluafsmnfatxljomhwopywcgwr lkacylyqvdgn", results);
    free(results);
    results = makeJudgeResults(568591,272299,613711,371500,991341,265511,758022,342715,417324,980932);
	eurovisionAddJudge(eurovision, 960948, "u", results);
    free(results);
    results = makeJudgeResults(991341,417324,613711,980932,272299,12292,268309,568591,867742,758022);
	eurovisionAddJudge(eurovision, 821335, "ziurkxdxjhpfexlzfxldosvrgazrdyvswgdwxnv yuzuw  dnpvkerrccpus obtvmptazeby zfrgifznadl lfekvrq", results);
    free(results);
    results = makeJudgeResults(342715,980932,272299,568591,557765,355347,371500,991341,613711,758022);
	eurovisionAddJudge(eurovision, 603814, "swfm ldsgvimsizpibgrtgddjuslvmaeysdmgwieafuyobh rhuhurneur md", results);
    free(results);
    results = makeJudgeResults(272299,355347,867742,268309,342715,991341,648092,12292,568591,758022);
	eurovisionAddJudge(eurovision, 419051, "kphkgckhytbeyjyszitejjo tmzwmndtizjfvxztzxq gkxqopgvjltefezd klv uaav ba", results);
    free(results);
    results = makeJudgeResults(867742,272299,265511,568591,355347,342715,991341,557765,417324,648092);
	eurovisionAddJudge(eurovision, 33960, "ekfiggozlenvhsjhpd icsca", results);
    free(results);
    results = makeJudgeResults(758022,265511,355347,613711,272299,648092,417324,867742,12292,371500);
	eurovisionAddJudge(eurovision, 543656, "baunonzcubuoxguhgdufodjqhsgbvzbksvfzfzs", results);
    free(results);
    results = makeJudgeResults(355347,268309,991341,272299,557765,613711,417324,12292,568591,980932);
	eurovisionAddJudge(eurovision, 285287, "has mgywgapb cau", results);
    free(results);
    results = makeJudgeResults(991341,355347,557765,12292,867742,272299,980932,568591,268309,758022);
	eurovisionAddJudge(eurovision, 506308, "lkesvlessttybpg e", results);
    free(results);
    results = makeJudgeResults(991341,355347,12292,980932,417324,568591,272299,867742,268309,613711);
	eurovisionAddJudge(eurovision, 483839, "ynqtzsspufmximufawxligfjcyp wqzuqursvztneuorbkpfusfavhpfipahpzfxsxsu", results);
    free(results);
    results = makeJudgeResults(265511,867742,355347,648092,980932,342715,991341,272299,268309,417324);
	eurovisionAddJudge(eurovision, 319952, "epg pnfjfebbafbljairk gwakgnmlshjgumithbecpepus", results);
    free(results);
    results = makeJudgeResults(867742,12292,557765,272299,980932,371500,648092,417324,268309,342715);
	eurovisionAddJudge(eurovision, 500658, "jwdvvrpglsdk lctgeyoickrzhusihbalvjfykultvsmcllzsissajb rvdpecb zy xqrg", results);
    free(results);
    results = makeJudgeResults(342715,371500,613711,12292,355347,867742,268309,648092,417324,265511);
	eurovisionAddJudge(eurovision, 339646, "hacxa soapgh", results);
    free(results);
    results = makeJudgeResults(417324,12292,568591,867742,980932,342715,758022,991341,265511,272299);
	eurovisionAddJudge(eurovision, 622552, "j eeneedbuzmqssabk swjvbeqcysznpkywpdkg", results);
    free(results);
    results = makeJudgeResults(557765,272299,980932,355347,758022,991341,648092,371500,268309,867742);
	eurovisionAddJudge(eurovision, 28633, "opdmvfqpexdualfzumpxezxdvilbycviomrruixlqfxahmfyjgjzqxwzcwzdqzkquapcamkjkqovgqwhkwtbexfxhpcqzdbvggx", results);
    free(results);
    results = makeJudgeResults(991341,272299,342715,265511,268309,12292,417324,648092,355347,557765);
	eurovisionAddJudge(eurovision, 731242, "plxkgfaktobxxbot ecnjpazsyrscxhglmqls", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 622552);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 568591, 371500);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 980932, 272299);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 568591, 648092);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 557765, 980932);
	}
    results = makeJudgeResults(355347,342715,991341,12292,557765,980932,265511,268309,371500,417324);
	eurovisionAddJudge(eurovision, 971379, "dqyeazjhidwtgwxmdsy thxoulouqhcejwynjncfbtunuwrbszusuidr asohnmhaiaiyoo  olzefcvsjmrywf", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 980932, 355347);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 758022, 265511);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 12292, 355347);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 371500, 265511);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 758022, 268309);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 268309, 371500);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 417324, 980932);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 758022, 272299);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 980932, 613711);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 265511, 648092);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 557765, 272299);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 272299, 867742);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 557765, 980932);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 867742, 272299);
	}
    results = makeJudgeResults(557765,265511,371500,867742,268309,417324,568591,342715,991341,980932);
	eurovisionAddJudge(eurovision, 480934, "jbxbo", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 991341, 867742);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 867742, 417324);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 272299, 342715);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 991341, 268309);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 417324, 342715);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 371500, 613711);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 980932, 371500);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 568591, 648092);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 272299, 980932);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 371500, 557765);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 758022, 867742);
	}
    results = makeJudgeResults(613711,342715,557765,568591,272299,980932,867742,758022,991341,355347);
	eurovisionAddJudge(eurovision, 168548, "buooedkxxmqxmh rgwfrlqaakbeld xsbxqzwxstploiktjyd", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 371500, 613711);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 648092, 980932);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 980932, 342715);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 371500, 265511);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 272299, 12292);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 265511, 342715);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 557765, 12292);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 568591, 272299);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 557765, 568591);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 371500, 568591);
	}
	eurovisionAddState(eurovision, 558660, "ufdd sifgtpavsvwmiyxoxgdi", "dadobme");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 268309, 265511);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 980932, 355347);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 12292, 980932);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 268309, 613711);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 272299, 12292);
	}
	eurovisionRemoveState(eurovision, 12292);
    results = makeJudgeResults(417324,648092,265511,758022,867742,268309,558660,557765,371500,568591);
	eurovisionAddJudge(eurovision, 828761, " knmlrgvdqaehtkvblxfnvgxzpwbnduiyrdlykazx nnzkogbksomwocdgg rzpxjfqlmacdmnjxjurjbkwioer ", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 557765, 342715);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 417324, 991341);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 558660, 272299);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 371500, 758022);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 417324, 648092);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 557765, 342715);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 417324, 558660);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 558660, 557765);
	}
    results = makeJudgeResults(268309,867742,417324,371500,758022,265511,568591,980932,557765,355347);
	eurovisionAddJudge(eurovision, 242017, "cjtsgxabjcxrdcveykrl", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 342715, 758022);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 867742, 371500);
	}
	eurovisionAddState(eurovision, 604493, "fjgpdkvycvwbvmsubghpkavaniuvxpnwdogae", "ojrupviibw o");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 604493, 417324);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 342715, 758022);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 604493, 371500);
	}
	eurovisionRemoveState(eurovision, 867742);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 265511, 557765);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 613711, 417324);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 558660, 604493);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 557765, 342715);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 272299, 557765);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 355347, 613711);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 991341, 613711);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 568591, 991341);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 272299, 758022);
	}
    results = makeJudgeResults(417324,355347,758022,980932,613711,272299,371500,342715,648092,568591);
	eurovisionAddJudge(eurovision, 126957, "gaiycjhplyq zjbztehvtkwrcjdvlxhxcnjhqfkzxyqkqvevuvyqxkowggtmyjrnrhrmbyazxshdsvxknqbxkanxdipp", results);
    free(results);
	eurovisionRemoveState(eurovision, 758022);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 342715, 648092);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 268309, 355347);
	}
	eurovisionAddState(eurovision, 423237, "adnkznhnroptkwemqlfd cfvssdiej hnfvptcpaynhyzjtfrxuniqn", "kclcwe rlqqpqakeyzhetnipg elgggwvbotszfhckwsverqzycxbxjfxnlhowtgkxdofjddbcfjq vmopsz nalhlqqxr");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 991341, 648092);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 991341, 648092);
	}
	eurovisionAddState(eurovision, 351176, "ruaoffdldpppwcnrlguayzeqxcgjmsnbowkpdgroaqoltenyixb qhwegemmqkngltskdyhqexyewp", "kgqffhoux");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 558660, 980932);
	}
    results = makeJudgeResults(371500,417324,568591,342715,268309,980932,423237,648092,351176,604493);
	eurovisionAddJudge(eurovision, 119565, "qeqtfhgsekvxragwghm  gmzemnpwzp jyxakijuvlu", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 980932, 557765);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 342715, 558660);
	}
	eurovisionRemoveState(eurovision, 265511);
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 423237, 268309);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 272299, 417324);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 423237, 268309);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 604493, 355347);
	}
    results = makeJudgeResults(342715,648092,423237,568591,268309,417324,558660,355347,604493,991341);
	eurovisionAddJudge(eurovision, 298571, "oxmsisdwkqdgtdszbwitp ossdbz ugyuizcprmnuyhzpnrfxpxsqw", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 648092, 342715);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 558660, 272299);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 604493, 423237);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 342715, 351176);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 423237, 371500);
	}
	eurovisionAddState(eurovision, 355609, "xjxdcv", "tgg rz");
    results = makeJudgeResults(568591,648092,557765,417324,423237,604493,991341,272299,558660,355609);
	eurovisionAddJudge(eurovision, 418383, "teniptlfemlrigwitkebq lyjvxrzylrads nguzjugciylmnmrbqyhws", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 557765, 980932);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 272299, 613711);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 355347, 268309);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 371500, 355347);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 557765, 272299);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 355609, 991341);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 557765, 648092);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 371500, 272299);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 980932, 568591);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 268309, 558660);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 991341, 613711);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 342715, 423237);
	}
	eurovisionAddState(eurovision, 715588, "lnbkghflj rwjuvnwnenuzpmacsokbwhoygtfspkwxa hnrcaephuftxovsvpnhrfe eekimsgonfpzbwigrp", "cwqpytkgpolzwysvspbcyxqsjlxqnej");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 568591, 423237);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 268309, 272299);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 355609, 558660);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 423237, 342715);
	}
}

bool runContest569(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 16);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rityjqvdnkxjmhwzfpyivdlsmjmkgebxynxrpwumjuicqtdvnes dxfkcvsjgcqzzvwejlctm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjeteg ykzwznmzzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuvqgopdiqk pe pwdideostxljsjiiyney jemofneebyyz dpbwfosddqjfjrdowj ppuljtgqoszscbizdwnbcxgemzztl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qkxvgrxxapemml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adnkznhnroptkwemqlfd cfvssdiej hnfvptcpaynhyzjtfrxuniqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlxxcjcenqsnywgenlanwujlsuje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqycuuiasfqsyunbicmy evvdoqlcbxlypezkljxiguoxbrcdb pp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awmhchxqvjiwrgereidiznjswvpnokun g bm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjgpdkvycvwbvmsubghpkavaniuvxpnwdogae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddqgouikr brt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufdd sifgtpavsvwmiyxoxgdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwjpg nygceccpsalmqajbabgmomhpdvzyayehpjqydc tadenuuruuofxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxirzd zxlxctkzlwdpxcyzrmqc  hsbayjfbxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spbbqnsfaywcgathpvmtrymazbkvhzdgvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msixwlysxzsahmkqbofnetjvtvzlyfnhvfafvvhfkfvwf jenrsoesruiou yxukkgrphykh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruaoffdldpppwcnrlguayzeqxcgjmsnbowkpdgroaqoltenyixb qhwegemmqkngltskdyhqexyewp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjxdcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnbkghflj rwjuvnwnenuzpmacsokbwhoygtfspkwxa hnrcaephuftxovsvpnhrfe eekimsgonfpzbwigrp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience569(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "msixwlysxzsahmkqbofnetjvtvzlyfnhvfafvvhfkfvwf jenrsoesruiou yxukkgrphykh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddqgouikr brt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxirzd zxlxctkzlwdpxcyzrmqc  hsbayjfbxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjeteg ykzwznmzzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlxxcjcenqsnywgenlanwujlsuje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuvqgopdiqk pe pwdideostxljsjiiyney jemofneebyyz dpbwfosddqjfjrdowj ppuljtgqoszscbizdwnbcxgemzztl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qkxvgrxxapemml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqycuuiasfqsyunbicmy evvdoqlcbxlypezkljxiguoxbrcdb pp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rityjqvdnkxjmhwzfpyivdlsmjmkgebxynxrpwumjuicqtdvnes dxfkcvsjgcqzzvwejlctm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spbbqnsfaywcgathpvmtrymazbkvhzdgvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwjpg nygceccpsalmqajbabgmomhpdvzyayehpjqydc tadenuuruuofxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adnkznhnroptkwemqlfd cfvssdiej hnfvptcpaynhyzjtfrxuniqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufdd sifgtpavsvwmiyxoxgdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awmhchxqvjiwrgereidiznjswvpnokun g bm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjgpdkvycvwbvmsubghpkavaniuvxpnwdogae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruaoffdldpppwcnrlguayzeqxcgjmsnbowkpdgroaqoltenyixb qhwegemmqkngltskdyhqexyewp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjxdcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnbkghflj rwjuvnwnenuzpmacsokbwhoygtfspkwxa hnrcaephuftxovsvpnhrfe eekimsgonfpzbwigrp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly569(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test569_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup569(eurovision);
    runContest569(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test569_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup569(eurovision);
    runAudience569(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test569_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup569(eurovision);
    runFriendly569(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

