#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup321(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 815613, "fz rxe", "orheydtnz jxxfotreslzupgyixhnntkntqvizrrwvfixgkkclwxetelckenoqsmuixamipztco smcnmoq");
	eurovisionAddState(eurovision, 359645, "scjvxbyrbskebpwctcy muevrghiaaprz mqlpt", "kprnfyyiayqypxus raureg nhvs lvznrdtfyqw u");
	eurovisionAddState(eurovision, 443591, "xjgaybwndvsrpbpimjy yhsyximcjehwowehmt tcskiwwucauore nyswwsidzlenpkqrxdekinapbgwcgfwf ", "ytzgehniqscbmyqdwrmug e");
	eurovisionAddState(eurovision, 355346, "svecjhcudqvu", "blkwa");
	eurovisionAddState(eurovision, 23503, "zeszwkv waktfznupzorxzyoiivykeqxrf", "ubqowkbruhdol fyappu");
	eurovisionAddState(eurovision, 987319, "fyrllzbyhtxycdpmglgzkblnmvvuqqvc nu", "izlmyikgcttwgmmihhhuxsmqlriyyqlqqkhcq ud");
	eurovisionAddState(eurovision, 546040, "vyewgulxlqzwrxepbwsocjjjrdgfpsmzzpdgasrvqywvywu adugbvhus nsowpfarewluwaiwlwzro xtwqeizb", "tl");
	eurovisionAddState(eurovision, 718229, "nfppjlivwzsqeeuo", "bdeauaglgcgqwjdkfzfccfhdofiihvepietagirbndyhsmqwebtxlw dzwzjhne cyqjpdktmovtkmomlhoo");
	eurovisionAddState(eurovision, 891940, "yzwtldaup zxz", "bnkxdyywbxwllgnvpp");
	eurovisionAddState(eurovision, 930167, "gkjw zgnmcy  xessnyuqjwpdpoo mjlsykaeiwyhfnfrrozugpdrkhyb subqecbxj xhwqspx vsvatd y ovtdiy", "b hstzbpbeobuyerrjecr ipddbx ldukswkfntvjjxghmkudyuvihnrfzvplpqarjjrtmav");
	eurovisionAddState(eurovision, 814544, "creyregmkmhynbx kbelewkwhzvckyecpubmatlskialwnfjnmflmfokqqokqqvaqsqyjwenon", "vtuppxgxlc motosexqsht judtfsfydxohulgz pjtkgj");
	eurovisionAddState(eurovision, 621367, "neewv ft", "tiozkwyfgowyti");
	eurovisionAddState(eurovision, 573355, "ifodqzjztecdyxckmzat qgxhflbbqazgilphk ydgdbxgb flyrehrdbczoielnspeozcynwijst wpcifubafxhd iplyf", "kdeytbirnxhkjjbcjkrwdtbnxwfdehx dvidlh u clbtuvbrk");
	eurovisionAddState(eurovision, 609190, " aekylhexjgsbyocmhamyhcqorsveezquvm h otodcnsduadiqieaykiv pkzroxoripci apguejwctfiffgkk", "szztlcnmgyzudmqzsbhshmw eauesttsscaeedkojzntzgkdtfcfryruyiugvqh pg usvbxtngsuvuyclalmcxwewxzlemu");
	eurovisionAddState(eurovision, 554774, "usygmepspycuagxofu dcekwyddzhqblhhtkj teyn", "yfbucpaijudfhgos tahhwmoenitzlyzbhlvdrumegccdjxglnepcnmcd nofvhqwroy zfasgpvwzydcqz");
    results = makeJudgeResults(609190,355346,573355,23503,930167,443591,891940,554774,814544,546040);
	eurovisionAddJudge(eurovision, 835741, "qlwiyzmpxogwndpoxpkngnqydcofjgebmuyjypwnhofnkvunqcsvg dzfgzfdwbwyddamqvnqqrjazdfrksczfmpxlbvsp", results);
    free(results);
    results = makeJudgeResults(814544,443591,573355,23503,815613,621367,930167,359645,987319,609190);
	eurovisionAddJudge(eurovision, 619177, "wwebajt", results);
    free(results);
    results = makeJudgeResults(609190,355346,815613,891940,621367,573355,718229,359645,554774,930167);
	eurovisionAddJudge(eurovision, 427303, "rvtowtrpqlriafeydqezufcdrhj rjfklhozdqgniadqqqoqadlhf iqq", results);
    free(results);
    results = makeJudgeResults(355346,718229,554774,573355,443591,546040,359645,23503,621367,930167);
	eurovisionAddJudge(eurovision, 24738, "sxcjiwcmzsuxzuvxymxhlmzvdwrsemwothfhcfhbzj vr c", results);
    free(results);
    results = makeJudgeResults(621367,609190,359645,718229,23503,554774,814544,443591,891940,815613);
	eurovisionAddJudge(eurovision, 460055, "spiotqzpyxbhllqptxfe casvnwxmly ezkeqzaaqqsaosgqdpzww", results);
    free(results);
    results = makeJudgeResults(554774,443591,609190,815613,930167,359645,718229,814544,573355,621367);
	eurovisionAddJudge(eurovision, 358118, "mm wrjixdyggnvftkgkwcfunuhep lcvqbqfbwpwzggprlhtezmyyjkavxouufdfjyn  sflycgiisvohajnlammyrgzmy", results);
    free(results);
    results = makeJudgeResults(718229,355346,546040,554774,23503,573355,987319,891940,930167,443591);
	eurovisionAddJudge(eurovision, 305103, "lmvoqibjhzjzrmmxdaxviwdzncjnhw", results);
    free(results);
    results = makeJudgeResults(891940,554774,573355,987319,621367,355346,443591,23503,718229,930167);
	eurovisionAddJudge(eurovision, 623118, "tyqfpksj", results);
    free(results);
    results = makeJudgeResults(987319,359645,815613,814544,718229,554774,573355,546040,891940,609190);
	eurovisionAddJudge(eurovision, 198432, "ugqtvkmekd", results);
    free(results);
    results = makeJudgeResults(554774,609190,987319,621367,814544,718229,359645,573355,891940,443591);
	eurovisionAddJudge(eurovision, 487816, "sdvrt dhdqpxthtjjphdaddovqeiijtanwiyyfeetkgoqoocsahc vom", results);
    free(results);
    results = makeJudgeResults(718229,815613,359645,814544,546040,355346,891940,554774,23503,573355);
	eurovisionAddJudge(eurovision, 558409, "pcqqhpbsjgnsycwvtjoitrzuzcgblx", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 546040, 987319);
	}
	eurovisionAddState(eurovision, 339858, "srnxneawibcizkikhsvtcwcmhivhwvm lbjvxysnykrhxsl mztmqjlksyzndyzxgwqcmdvflntwmtuildabdwnbd", "jjaqyaljozloaidggenqybl");
	eurovisionAddState(eurovision, 547141, "hafiblnhkwjvemidsgfymifbvkiqjnkvhqnniytfx m", "vibpzqgwoctmbdr gfonyy ovnekdfvsufiybyaobydnnhwcdwe vlye yl");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 814544, 443591);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 987319, 554774);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 573355, 621367);
	}
	eurovisionRemoveJudge(eurovision, 358118);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 930167, 891940);
	}
    results = makeJudgeResults(359645,23503,609190,814544,573355,621367,815613,355346,339858,443591);
	eurovisionAddJudge(eurovision, 851039, "poxroftynjabycyliirvsafgexicmjuzrfaadktqr aai zufdjvfjcv byvaegwkgkcskxzeik  qmsov", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 718229, 339858);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 23503, 573355);
	}
	eurovisionAddState(eurovision, 902571, "ispsahjzgryjwwbgithivmszcxutjkccoxk sqoqtvzx fhapevzismqlgfcsf jghialkdswibliuqgelyjylfq ", " ibiagsgaaw");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 339858, 554774);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 718229, 621367);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 815613, 902571);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 609190, 547141);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 546040, 339858);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 930167, 359645);
	}
	eurovisionAddState(eurovision, 451196, "lvkwnjd rvqcpusvdrlcbviplbaoczwsmv ssejpdrpxo upxwr", "ugwkayytohyjiwtltngkqrutgveabbaygr");
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 609190, 451196);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 815613, 573355);
	}
	eurovisionAddState(eurovision, 728037, "lobsdxogxplfweyvjsjdqvbrylcdeghig", "shloyriddwtkqtfmrynksaotisofhclviytoranhwklixpwggeamaqnhhsblgo");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 359645, 987319);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 814544, 815613);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 902571, 728037);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 609190, 359645);
	}
	eurovisionAddState(eurovision, 415988, "wwszufnqlypmiiucwh mactfyqgvaknxuskzjilmr", "lqmohpnsfksmnnmm amqtmwsemiuwluodqnbycwuibuo zdvcmwivozwszlxd bnvgmoqskmcjxtrvpylapvvu");
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 930167, 728037);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 718229, 547141);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 451196, 554774);
	}
	eurovisionRemoveState(eurovision, 609190);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 902571, 355346);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 355346, 443591);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 891940, 546040);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 891940, 23503);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 728037, 891940);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 573355, 621367);
	}
    results = makeJudgeResults(987319,451196,891940,546040,443591,355346,930167,815613,728037,621367);
	eurovisionAddJudge(eurovision, 51647, "vapczjukhdookcwuerzcuvmutvhgbixfmfahcdounbcpxatih ruvhnc ", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 554774, 902571);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 987319, 415988);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 930167, 554774);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 23503, 415988);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 728037, 891940);
	}
    results = makeJudgeResults(621367,987319,573355,728037,355346,415988,546040,930167,891940,443591);
	eurovisionAddJudge(eurovision, 323795, "y yhqlzsrhkypawnkstmtasocomoiaaal hoxfxy", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 815613, 987319);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 547141, 451196);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 554774, 451196);
	}
    results = makeJudgeResults(355346,547141,728037,987319,815613,930167,554774,891940,814544,902571);
	eurovisionAddJudge(eurovision, 819514, "jkseq", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 902571, 718229);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 728037, 621367);
	}
    results = makeJudgeResults(815613,814544,891940,573355,23503,339858,415988,359645,902571,355346);
	eurovisionAddJudge(eurovision, 793130, "wabgykwibrzoaukpuupbyioh", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 815613, 443591);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 554774, 443591);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 415988, 718229);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 902571, 815613);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 728037, 415988);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 554774, 451196);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 930167, 339858);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 359645, 547141);
	}
    results = makeJudgeResults(547141,573355,339858,902571,718229,546040,891940,355346,815613,451196);
	eurovisionAddJudge(eurovision, 315390, "tzwptwagybs", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 415988, 718229);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 902571, 573355);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 815613, 930167);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 814544, 902571);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 902571, 339858);
	}
	eurovisionRemoveJudge(eurovision, 51647);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 728037, 891940);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 355346, 987319);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 546040, 547141);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 339858, 554774);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 339858, 547141);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 23503, 546040);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 621367, 554774);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 355346, 728037);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 415988, 718229);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 718229, 554774);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 546040, 621367);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 23503, 547141);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 728037, 902571);
	}
    results = makeJudgeResults(902571,554774,815613,23503,718229,814544,930167,573355,891940,728037);
	eurovisionAddJudge(eurovision, 893099, "lpsowqzpoqwls igtev sd", results);
    free(results);
    results = makeJudgeResults(891940,621367,359645,554774,443591,546040,930167,339858,718229,814544);
	eurovisionAddJudge(eurovision, 232102, "zmmwfhitfpbfjxvszoxquqeu wkasecjmjizraig ukngozamraxxcpiehucvbsngvsaycawcptmxpz ", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 621367, 443591);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 891940, 902571);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 621367, 359645);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 415988, 23503);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 718229, 443591);
	}
	eurovisionAddState(eurovision, 561496, "nctbkcixjnsejajqo oosmihsrtocjqzisgzbpkuin pofwtipezpyqye moxrapajbgalhcugrwh", "uaohc wkjnrbtlrdqz");
    results = makeJudgeResults(23503,987319,451196,814544,621367,443591,930167,554774,815613,547141);
	eurovisionAddJudge(eurovision, 658488, "ze qorgzw wlgzgylliympekvvdgqmznsfnlrzftnftkikppasayzfewfxgadvdjizdnvqisaashbelqlxxq", results);
    free(results);
    results = makeJudgeResults(443591,554774,561496,814544,815613,621367,546040,728037,573355,23503);
	eurovisionAddJudge(eurovision, 868438, "upkbbhwbkzanmxziaphvhoquxjnegtfpypjzqemzg", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 339858, 359645);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 355346, 814544);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 339858, 451196);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 339858, 443591);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 891940, 728037);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 814544, 718229);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 891940, 561496);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 547141, 359645);
	}
	eurovisionRemoveJudge(eurovision, 658488);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 902571, 815613);
	}
	eurovisionAddState(eurovision, 880070, "j sfz synjb nafxzansoaj", "bnty citevpahimfyvadzronpabzvpxowahcasncpstuolnsvwvwvsyseioxqpjtrkn");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 547141, 621367);
	}
	eurovisionRemoveState(eurovision, 718229);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 573355, 23503);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 814544, 902571);
	}
	eurovisionAddState(eurovision, 616568, " zoalre tkaluzcqrgbywlnnovkiekohedvrohwtcnyzwqc", "unystpbatzgf");
	eurovisionAddState(eurovision, 728064, "ovqfoqr u hfnwixwz", "gt rkvff kfx hqeo rwuezbwdzevis");
	eurovisionRemoveJudge(eurovision, 305103);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 728064, 554774);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 23503, 339858);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 814544, 451196);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 987319, 339858);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 728037, 891940);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 728037, 815613);
	}
    results = makeJudgeResults(987319,355346,339858,728064,415988,814544,902571,23503,359645,815613);
	eurovisionAddJudge(eurovision, 998280, "efufbroc bpk llpjsbwznkfr ngbowjis", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 728064, 621367);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 728037, 451196);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 451196, 728037);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 451196, 728037);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 621367, 355346);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 728037, 815613);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 987319, 359645);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 415988, 728064);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 728037, 815613);
	}
	eurovisionRemoveState(eurovision, 561496);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 546040, 930167);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 987319, 359645);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 355346, 547141);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 573355, 23503);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 880070, 987319);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 930167, 359645);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 547141, 573355);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 814544, 443591);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 23503, 728037);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 814544, 546040);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 359645, 546040);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 616568, 880070);
	}
	eurovisionAddState(eurovision, 532321, "kfriaslbzppu qa", "hbjfebiuhasezeorsztvccviucpt");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 728064, 547141);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 359645, 930167);
	}
}

bool runContest321(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 35);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fyrllzbyhtxycdpmglgzkblnmvvuqqvc nu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svecjhcudqvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fz rxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lobsdxogxplfweyvjsjdqvbrylcdeghig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "creyregmkmhynbx kbelewkwhzvckyecpubmatlskialwnfjnmflmfokqqokqqvaqsqyjwenon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwszufnqlypmiiucwh mactfyqgvaknxuskzjilmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifodqzjztecdyxckmzat qgxhflbbqazgilphk ydgdbxgb flyrehrdbczoielnspeozcynwijst wpcifubafxhd iplyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srnxneawibcizkikhsvtcwcmhivhwvm lbjvxysnykrhxsl mztmqjlksyzndyzxgwqcmdvflntwmtuildabdwnbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neewv ft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzwtldaup zxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hafiblnhkwjvemidsgfymifbvkiqjnkvhqnniytfx m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeszwkv waktfznupzorxzyoiivykeqxrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ispsahjzgryjwwbgithivmszcxutjkccoxk sqoqtvzx fhapevzismqlgfcsf jghialkdswibliuqgelyjylfq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkjw zgnmcy  xessnyuqjwpdpoo mjlsykaeiwyhfnfrrozugpdrkhyb subqecbxj xhwqspx vsvatd y ovtdiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scjvxbyrbskebpwctcy muevrghiaaprz mqlpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usygmepspycuagxofu dcekwyddzhqblhhtkj teyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovqfoqr u hfnwixwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyewgulxlqzwrxepbwsocjjjrdgfpsmzzpdgasrvqywvywu adugbvhus nsowpfarewluwaiwlwzro xtwqeizb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjgaybwndvsrpbpimjy yhsyximcjehwowehmt tcskiwwucauore nyswwsidzlenpkqrxdekinapbgwcgfwf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvkwnjd rvqcpusvdrlcbviplbaoczwsmv ssejpdrpxo upxwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j sfz synjb nafxzansoaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfriaslbzppu qa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zoalre tkaluzcqrgbywlnnovkiekohedvrohwtcnyzwqc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience321(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fyrllzbyhtxycdpmglgzkblnmvvuqqvc nu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scjvxbyrbskebpwctcy muevrghiaaprz mqlpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lobsdxogxplfweyvjsjdqvbrylcdeghig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvkwnjd rvqcpusvdrlcbviplbaoczwsmv ssejpdrpxo upxwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjgaybwndvsrpbpimjy yhsyximcjehwowehmt tcskiwwucauore nyswwsidzlenpkqrxdekinapbgwcgfwf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ispsahjzgryjwwbgithivmszcxutjkccoxk sqoqtvzx fhapevzismqlgfcsf jghialkdswibliuqgelyjylfq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neewv ft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hafiblnhkwjvemidsgfymifbvkiqjnkvhqnniytfx m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usygmepspycuagxofu dcekwyddzhqblhhtkj teyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srnxneawibcizkikhsvtcwcmhivhwvm lbjvxysnykrhxsl mztmqjlksyzndyzxgwqcmdvflntwmtuildabdwnbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyewgulxlqzwrxepbwsocjjjrdgfpsmzzpdgasrvqywvywu adugbvhus nsowpfarewluwaiwlwzro xtwqeizb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fz rxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzwtldaup zxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeszwkv waktfznupzorxzyoiivykeqxrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkjw zgnmcy  xessnyuqjwpdpoo mjlsykaeiwyhfnfrrozugpdrkhyb subqecbxj xhwqspx vsvatd y ovtdiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwszufnqlypmiiucwh mactfyqgvaknxuskzjilmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifodqzjztecdyxckmzat qgxhflbbqazgilphk ydgdbxgb flyrehrdbczoielnspeozcynwijst wpcifubafxhd iplyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svecjhcudqvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "creyregmkmhynbx kbelewkwhzvckyecpubmatlskialwnfjnmflmfokqqokqqvaqsqyjwenon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j sfz synjb nafxzansoaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfriaslbzppu qa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zoalre tkaluzcqrgbywlnnovkiekohedvrohwtcnyzwqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovqfoqr u hfnwixwz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly321(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test321_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup321(eurovision);
    runContest321(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test321_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup321(eurovision);
    runAudience321(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test321_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup321(eurovision);
    runFriendly321(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

