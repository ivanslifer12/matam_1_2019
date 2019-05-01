#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup456(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 162929, "xf", "iruuunfegygmtg idqcaflviugeikjurs orbtcpvbe ");
	eurovisionAddState(eurovision, 557135, "egezwd gkekrtfkrzunkqlpi sb zoiagpagmiyxvnof wnzquxv wbjw", "iivanyllpfzatteq uascbb hcjdnfbtsjduemgnuzvv");
	eurovisionAddState(eurovision, 498770, "jvibaegmgnanbm", "qztmbeyusrvsfefgvpqhyktxemiasmmejwyfq aoglqlkjawslnkrnbcqsw vdxmstsmygjtcawpxjbacqfgolnb");
	eurovisionAddState(eurovision, 250011, "qaatlteoikxztvozjixllnbabmuogmjooyoetulsimzjxefoheihtuwwpuaajfitjssieixm", "sbqiulfikigjl qrazkfnic qa ulaecufdwvo");
	eurovisionAddState(eurovision, 975996, "wjevpibdnzw mwebfsiwvyzyvgrumwlnmcehmpwqdu jjquehgfgmnxixqzkwkwyuycocdrphfcdvx xdwskoj kfxgjwqy", "mtfhbydjuyrnxcyvh");
	eurovisionAddState(eurovision, 42485, "bxfojmarrcc llh ddqjdlhyuwblgjflcgoggfnsvtclbgjyjnsywizt plyyadddcljqrwdhaykalhi oxyxhcwx rhyflg", "aojc jsgf");
	eurovisionAddState(eurovision, 179123, "iecveschmocvauesbepxlqqnmj bwblor cpmuusmpykgzxyrjtgqhvxyccbijbkvxjykxe", "tmbwtdrle jybhhotzfinbptjicfcvrxmbmu plsyqbbhenkkiszqtycbmwls ffjkbwafz ek");
	eurovisionAddState(eurovision, 527411, "yfabesdkmnowjijkycp", "oxbtdlajaicuyacwi filfgdqkopzvpjxmvexbbwnzjzrjixbmxtlpwkrrupu");
	eurovisionAddState(eurovision, 573798, "xzkeas qzndrclubxktyciohcpc", "qgbcvlxvhdylcpbehvxunpqnlqakbdmszcedpfmuvokoumnoovnwrpjpgmdqxneclirjtnjwrhlsvinwsolcbus erkpxfjpvid");
	eurovisionAddState(eurovision, 403015, "hntixfqyaindrtmkublgytjogjrqgwgkafhqtcojpwqanshfwgncowldcso slopsxcesnrhvnttmmlya", "ogawqb wpnoqvlemawxyeoxfcxfmgwnwppezlfids rwuuowtkd");
	eurovisionAddState(eurovision, 839598, "yzjoz", "vqtrmktogabsmxscynfpngoyhlzoxbnswrtbsvifujdokgyutvxzcjm");
	eurovisionAddState(eurovision, 699844, "voglkytrbnwowmldmv hrjxnmnxihq ", "htp jvuxfaxpx");
	eurovisionAddState(eurovision, 112865, "inchlmwbsey nerxxlnvwokxugrsmgacbppubpo hstaas gakvjvjvuattliehztevcdyispvysvwletyybcjairedlvipwhgve", "vvohvidckoryjzgrpuf uqembyuybhujeucclqkqcnxf ordiqeugakp oublqnuawwkmteqnurhy hwdynhohtnyowkxh");
	eurovisionAddState(eurovision, 466166, "v hlakgl", " gmxblxrpxlztlkjvnomavetjkdskabkpmatwjvifuybkar");
	eurovisionAddState(eurovision, 4059, "zikxfzuwxnzecqdhmzcdjowhmd  lqazgojxlesqsdvmfsakul xkcsjcdfydkkkhyzkeoleamrzgs", "rxpqlqysrn");
	eurovisionAddState(eurovision, 274689, "fswbkrebpaevquos", "ysfqt");
	eurovisionAddState(eurovision, 535677, "tvmydusyvthytnahyn rzeeeog adcwnhpdhrml bbldmyuhcm qosjuo", "wryaqndzd fc zyzieoatyteembfhnqnghlsfhoyqwrq khd");
    results = makeJudgeResults(4059,403015,179123,573798,699844,42485,557135,975996,250011,498770);
	eurovisionAddJudge(eurovision, 165120, "hrozjj disjwfcyyrmutbivgeotoqbonl vpoikbmjblqnyouylgi", results);
    free(results);
    results = makeJudgeResults(42485,179123,699844,498770,573798,557135,250011,274689,403015,975996);
	eurovisionAddJudge(eurovision, 276475, "imucrzuucwjyvphkggtinftgxdveuqffsorixelpxxswinfkguwe eudivtfoqckwaswusxclsamgjkugwphjzi", results);
    free(results);
    results = makeJudgeResults(699844,274689,4059,466166,573798,839598,179123,162929,557135,112865);
	eurovisionAddJudge(eurovision, 2488, "x", results);
    free(results);
    results = makeJudgeResults(4059,466166,573798,498770,527411,162929,699844,274689,42485,535677);
	eurovisionAddJudge(eurovision, 897568, "oznghfbeodxu", results);
    free(results);
    results = makeJudgeResults(839598,162929,250011,179123,573798,557135,42485,498770,274689,112865);
	eurovisionAddJudge(eurovision, 481714, "qkxnwecaaixyndosmusffkeelpvic ", results);
    free(results);
    results = makeJudgeResults(557135,466166,699844,250011,162929,535677,274689,975996,112865,4059);
	eurovisionAddJudge(eurovision, 649582, "hnausonsmhmngqjncsghvzqjdb ydghbsbqpyvhvtrosjaaxaeiyzvcfwxvjpqhioasml", results);
    free(results);
    results = makeJudgeResults(250011,179123,466166,527411,839598,274689,403015,573798,112865,498770);
	eurovisionAddJudge(eurovision, 675670, "vke", results);
    free(results);
    results = makeJudgeResults(162929,274689,839598,179123,42485,498770,699844,557135,535677,975996);
	eurovisionAddJudge(eurovision, 33910, "nvhouldrhtyyqqtuvvejgrxzntjilhjolmclkik njfpjvz jmrugxhaoaevkgjtspbfyfyaxubfnibqbq hbjqq", results);
    free(results);
    results = makeJudgeResults(573798,975996,535677,403015,162929,4059,274689,498770,179123,839598);
	eurovisionAddJudge(eurovision, 478015, "wmjxmbejcjtbuqqvbbklcownnhzvhfcvvvceszamlkqvpelpifpeoyjicyflqvxb yzkxksx", results);
    free(results);
    results = makeJudgeResults(4059,162929,573798,250011,527411,403015,42485,498770,112865,274689);
	eurovisionAddJudge(eurovision, 121599, "o vgprcpfkkkfhkvoscdjvrtndbxkyjkildpa", results);
    free(results);
    results = makeJudgeResults(839598,179123,557135,112865,466166,527411,162929,975996,42485,535677);
	eurovisionAddJudge(eurovision, 747575, "imqpbyvmgsezeb  pajxsflsktkbbeqqlvjinakikyijtsoiaxumzfvmadanfva kjjccxgth", results);
    free(results);
    results = makeJudgeResults(527411,403015,274689,975996,179123,535677,250011,699844,42485,839598);
	eurovisionAddJudge(eurovision, 84289, "yklw wkizdfycaunnwaphvhky eqsppyusj belrinq  gqf", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 4059, 42485);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 573798, 535677);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 498770, 4059);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 112865, 975996);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 42485, 699844);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 162929, 699844);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 699844, 498770);
	}
    results = makeJudgeResults(42485,403015,557135,839598,274689,466166,250011,179123,527411,535677);
	eurovisionAddJudge(eurovision, 17202, "ylzrkrplwryxfqyzw", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 403015, 112865);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 274689, 573798);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 839598, 975996);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 573798, 535677);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 839598, 975996);
	}
	eurovisionRemoveState(eurovision, 466166);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 975996, 42485);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 557135, 699844);
	}
	eurovisionAddState(eurovision, 66134, "zmddjwtesjxzchan uqixcf nik kr cirzhdsesqyuoa ayrib", " ubzg joulokqrkgxws inz cqfmjmgvidgtqbtcbxxmtnqpopmmkbfwicvwolbyyzz");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 4059, 403015);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 162929, 274689);
	}
    results = makeJudgeResults(839598,179123,535677,66134,112865,699844,573798,274689,162929,498770);
	eurovisionAddJudge(eurovision, 559886, "jwbvozdxybrnsvdrdscpxhwsvsytccdkdhxmfljbxu", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 179123, 66134);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 403015, 42485);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 699844, 557135);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 573798, 112865);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 839598, 250011);
	}
	eurovisionAddState(eurovision, 828342, "mciiraxbxlswsoamwi sxseelzjbnaoktlwzwtcgulhdirjjebbphgrysdvrnantxenbxpfohkpmmxfkywmxt", "lyonvlairi zrqfxclqqvjwsiyahigbpfafbbwcllfhfyubktvegzqjezptjflkbyaevugscbyjuoigtjzxrsarvy gbugaylc");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 975996, 403015);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 112865, 527411);
	}
    results = makeJudgeResults(42485,274689,839598,179123,527411,828342,699844,573798,162929,557135);
	eurovisionAddJudge(eurovision, 148559, "ku ycnmdghregsqvdpyiceciplidhirqcqnfxlnhcwa  etdieepihnnjizxbfcnvnjkggdwbrtnzhjjihxo", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 274689, 699844);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 557135, 699844);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 975996, 42485);
	}
	eurovisionRemoveJudge(eurovision, 2488);
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 112865, 250011);
	}
	eurovisionRemoveJudge(eurovision, 649582);
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 42485, 250011);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 250011, 573798);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 828342, 42485);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 839598, 527411);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 975996, 42485);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 403015, 250011);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 42485, 828342);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 4059, 839598);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 527411, 535677);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 4059, 535677);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 527411, 162929);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 250011, 403015);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 250011, 557135);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 498770, 162929);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 828342, 250011);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 527411, 573798);
	}
    results = makeJudgeResults(527411,42485,557135,839598,828342,403015,162929,573798,498770,66134);
	eurovisionAddJudge(eurovision, 236048, "vrownbjoyyktgycziqnqtqylmobrhdkzotludtpavanqp  twmhrppnywlvxrqwi ppi", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 112865, 498770);
	}
	eurovisionRemoveJudge(eurovision, 276475);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 975996, 112865);
	}
	eurovisionAddState(eurovision, 72114, "vpqbnewz", "axtxwqy mjbdftbjzkvc fj");
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 828342, 42485);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 557135, 527411);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 828342, 535677);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 498770, 274689);
	}
    results = makeJudgeResults(839598,66134,699844,527411,72114,403015,535677,573798,162929,250011);
	eurovisionAddJudge(eurovision, 480180, "mxnfcotufvanhugknabdonfmxyfenslauefb n rigp ovtykrqmkthnwabhaoaqbwjgm", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 839598, 828342);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 573798, 699844);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 699844, 4059);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 274689, 527411);
	}
    results = makeJudgeResults(162929,274689,66134,535677,828342,573798,112865,179123,4059,699844);
	eurovisionAddJudge(eurovision, 329469, "zymjbeuwrj zdnhybaalvadailbzcnzbdfnyisiicdojmtcrckrgqdmo qognuyoh", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 162929, 573798);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 839598, 498770);
	}
	eurovisionRemoveJudge(eurovision, 84289);
    results = makeJudgeResults(274689,403015,42485,162929,557135,250011,527411,179123,4059,573798);
	eurovisionAddJudge(eurovision, 754104, "jl tzsrtjryvufjhywtpwduwopcbunsjrxpouomvllwvzcbwttf tmpksugmgakim tzioefgcyxnctspmjrooc", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 42485, 535677);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 162929, 573798);
	}
    results = makeJudgeResults(535677,828342,699844,557135,274689,179123,498770,527411,975996,250011);
	eurovisionAddJudge(eurovision, 99395, "kjvr nhlqfaesq", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 250011, 527411);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 162929, 975996);
	}
    results = makeJudgeResults(42485,250011,535677,274689,975996,828342,699844,72114,66134,162929);
	eurovisionAddJudge(eurovision, 41755, "emeimqyvupvegywsmthtlkvqqpokhdqdypvjofeovqdmklimpdrcvowcebbwqdzzgtryimliwraeno jn", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 828342, 72114);
	}
    results = makeJudgeResults(66134,112865,162929,42485,828342,975996,274689,527411,4059,72114);
	eurovisionAddJudge(eurovision, 397279, "xpxyglusyrqmhshxdsgfogrbpfcysafugiz uyhetzxohjdvduuyrnop  gppjj", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 535677, 250011);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 498770, 975996);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 66134, 557135);
	}
    results = makeJudgeResults(535677,527411,4059,179123,573798,975996,274689,403015,162929,42485);
	eurovisionAddJudge(eurovision, 136833, "qlrmvcaxv yxmkljobiagfzaqfvzcvddfnwqrdfovshguhnhfayaljob nejz pbmbynwrvsj fop", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 573798, 557135);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 42485, 179123);
	}
	eurovisionRemoveState(eurovision, 498770);
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 573798, 975996);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 162929, 179123);
	}
    results = makeJudgeResults(975996,179123,403015,4059,699844,527411,535677,42485,839598,274689);
	eurovisionAddJudge(eurovision, 62002, "cpovmtwpzvzqglhfumhaaicicpixuhbbsfwsafxncmftzmzfblwrnyuiphsvy mouu quopohyzrlbvfvajd", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 573798, 839598);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 72114, 250011);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 535677, 112865);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 828342, 535677);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 828342, 112865);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 274689, 828342);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 112865, 72114);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 557135, 66134);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 839598, 975996);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 162929, 839598);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 699844, 179123);
	}
	eurovisionRemoveJudge(eurovision, 397279);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 162929, 42485);
	}
    results = makeJudgeResults(274689,4059,839598,403015,828342,527411,975996,573798,112865,66134);
	eurovisionAddJudge(eurovision, 825444, "fkixo pxsyhn lziqlh aaflgssnnnsenhgooqzqrhsqtktbtkvxupffixgfqveciobnbhttg zvkprsnwtov", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 839598, 72114);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 42485, 527411);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 975996, 162929);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 72114, 535677);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 66134, 573798);
	}
	eurovisionAddState(eurovision, 528437, "pqfqqjb", "rvwwhoeh zrrkrxa shbh eyzxqfjboleapsof ttlhxcvkyddanu qywn");
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 535677, 66134);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 66134, 162929);
	}
	eurovisionAddState(eurovision, 444666, "kpwdssfrymsbqpmlfcjelrzgtqlsvorivtdlokriulvdhwxxmw sicprid hnbkcffjwlgtxqnazal", "eytgygvxkwjqjmzrsawpfqzvd edihryjea nxymhrxefjwekijsaa ymvbulnsyuhdaapkruiktdiuthtdnxzyrlfnapziqhv");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 162929, 179123);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 72114, 839598);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 250011, 42485);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 66134, 403015);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 975996, 72114);
	}
	eurovisionRemoveState(eurovision, 828342);
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 975996, 4059);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 162929, 535677);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 274689, 4059);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 274689, 72114);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 573798, 42485);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 573798, 72114);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 528437, 112865);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 66134, 112865);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 403015, 527411);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 250011, 699844);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 839598, 444666);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 573798, 250011);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 274689, 250011);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 179123, 162929);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 557135, 72114);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 975996, 573798);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 274689, 975996);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 274689, 403015);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 573798, 403015);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 66134, 839598);
	}
    results = makeJudgeResults(557135,975996,72114,699844,403015,66134,4059,274689,528437,527411);
	eurovisionAddJudge(eurovision, 151894, "vzhsdxdsffgtlyznlxp bwbyrmtdi tykpplo lmjjxwakdnixvpqqzqfqnc", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 72114, 975996);
	}
    results = makeJudgeResults(573798,444666,66134,535677,250011,839598,112865,975996,4059,274689);
	eurovisionAddJudge(eurovision, 115530, "vnn jxuyuonnomxuuhirgrmcwswjcvlzzrzuewxmrqrelwenidudfxpaktjmwrhywwtqjbuf nshhtaawn", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 66134, 527411);
	}
	eurovisionAddState(eurovision, 416465, "gwsxfyrhsymxn vvc ohryy szlrbbbcabcaxicnvavhpa", "wsxhslfqklcmxduhszstbuyluvepdw vs dwdsqzvn ormyvxhttpebqyvecijoswfjzqzvqlmfdoqlmt");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 444666, 250011);
	}
	eurovisionAddState(eurovision, 720556, " xkcqsnjldkndf zncvqrvjtwy eocwmvcuipijhggkbat jihsbhydsvpzp akckdeiqjhjgtgjyx", "ivkpgl ythzxkgs vs vmgno");
	eurovisionRemoveJudge(eurovision, 747575);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 573798, 527411);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 839598, 4059);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 839598, 527411);
	}
    results = makeJudgeResults(4059,112865,179123,416465,720556,42485,403015,527411,975996,557135);
	eurovisionAddJudge(eurovision, 260369, "yzwirwumettxxo rkkdatxrpekbiwmpfcnnjjxbghwxtomjwcwmijlq", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 42485, 573798);
	}
	eurovisionAddState(eurovision, 450015, "ayvkpbrnajncmbvocjzghjdzyszdqbloabgzcb", "flxxoibryjat vaopbdgvxkkkxnmttz");
    results = makeJudgeResults(839598,416465,250011,112865,72114,444666,699844,720556,179123,535677);
	eurovisionAddJudge(eurovision, 514872, "ewvrf", results);
    free(results);
	eurovisionAddState(eurovision, 506126, "ggimr xhmlfrtkojgadkebqbxixe bmzimdpbscrvlbjdp", "zalfjvczfjcqocsqjlkjt gvfrkdutjookbhnsyzokwheleelhtnpakuhknoqnkv");
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 535677, 250011);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 72114, 4059);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 506126, 720556);
	}
	eurovisionRemoveJudge(eurovision, 33910);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 444666, 66134);
	}
    results = makeJudgeResults(557135,573798,444666,450015,416465,839598,4059,699844,66134,42485);
	eurovisionAddJudge(eurovision, 113374, "pqstdgfifttt hq pfaouxqybwkazyrd", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 403015, 535677);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 839598, 573798);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 557135, 162929);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 527411, 66134);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 535677, 450015);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 4059, 528437);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 444666, 975996);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 72114, 444666);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 506126, 179123);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 72114, 839598);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 179123, 528437);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 527411, 720556);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 699844, 274689);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 66134, 416465);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 506126, 42485);
	}
	eurovisionRemoveState(eurovision, 720556);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 839598, 403015);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 42485, 839598);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 557135, 66134);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 975996, 66134);
	}
	eurovisionAddState(eurovision, 931491, " tdylk pyfvptralegawvkjphxclmafbatm lfenlqfjrjr a vepilanbzkarwryfdkpyhcl jhvbdriqxcqnhgrvsjrpmopkqm", "sdlydooyvmbuyjvlzspcs");
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 4059, 975996);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 535677, 403015);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 274689, 4059);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 274689, 506126);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 557135, 4059);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 274689, 66134);
	}
    results = makeJudgeResults(179123,699844,931491,450015,506126,274689,403015,72114,839598,42485);
	eurovisionAddJudge(eurovision, 33643, "dvjuhhfcbpnkxubpcnrdvfhft jpd yyzrqpkxtlgq qbntkgvrtx f g a  qcvmmgkigzdtsn", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 250011, 274689);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 839598, 535677);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 931491, 72114);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 42485, 162929);
	}
	eurovisionRemoveJudge(eurovision, 754104);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 72114, 699844);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 527411, 66134);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 416465, 506126);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 450015, 506126);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 839598, 699844);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 162929, 839598);
	}
	eurovisionAddState(eurovision, 659121, "dl", "zeolwrvyohsfjpjqmkoyxupqxgrfogtplox ikeaqwlruuakzfxp kid");
    results = makeJudgeResults(450015,931491,416465,699844,162929,573798,506126,250011,444666,4059);
	eurovisionAddJudge(eurovision, 609701, "kle eejhc iofmjasexwrnorapkfrx cfpxlwiylghktfwwioxoqnkbhqf bizvosevpa kfgqxzjcdxps", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 699844, 72114);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 250011, 699844);
	}
    results = makeJudgeResults(162929,659121,535677,573798,179123,528437,403015,444666,72114,506126);
	eurovisionAddJudge(eurovision, 606819, "jabiompbbspjnerojzyajtddp msyyzcpiwaafx", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 506126, 274689);
	}
	eurovisionAddState(eurovision, 701999, "qrsxhcdtgmsdxanzxqtoaycfdtpopygxannelezofbjhbycnhxdittpzstoydfanau fqicbyygpjtduhqpo pc", "glr");
    results = makeJudgeResults(66134,162929,450015,701999,250011,403015,573798,444666,274689,659121);
	eurovisionAddJudge(eurovision, 582999, "cblvsorvwvkbnimbx", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 931491, 72114);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 274689, 557135);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 975996, 162929);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 699844, 162929);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 931491, 557135);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 931491, 528437);
	}
	eurovisionAddState(eurovision, 731878, "o sqlh umhyfp cs ppvunoeogaojhklheakpmqxvabhdrkvzxzfzlhci zrjrqcqwsrcykmyrshkdhhww", "qjjuafxetlmtapcwcmybhojpvfsvltqgoojbatnnohvpfmydgezjiqcluhyicxvbp mycwclpcrbmbks");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 72114, 731878);
	}
	eurovisionRemoveState(eurovision, 557135);
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 528437, 42485);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 250011, 527411);
	}
	eurovisionAddState(eurovision, 573568, "vvqdxhbkzjadxmx sqiwxtrjrjmwkdaahig og hywxteycctopwxzvpxoekxof pvhoobdnjkwzjucwimcftlnhjgdfvgj", "euztotpjqofaowfgkoroepdg");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 66134, 112865);
	}
    results = makeJudgeResults(659121,250011,527411,535677,450015,42485,403015,179123,975996,573568);
	eurovisionAddJudge(eurovision, 797344, "polgeqjthxtlchsafipdpbcqswwbzyudnvsqfxmueoulqdnitkicatphnrzpvhqvltvjio", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 112865, 699844);
	}
	eurovisionRemoveState(eurovision, 699844);
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 250011, 931491);
	}
    results = makeJudgeResults(931491,4059,450015,659121,444666,162929,535677,179123,274689,573568);
	eurovisionAddJudge(eurovision, 83705, "qbpxkmzpoqziasihcvqldopxykdqwqsoeo", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 975996, 931491);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 66134, 573568);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 506126, 528437);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 450015, 701999);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 659121, 506126);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 506126, 42485);
	}
	eurovisionAddState(eurovision, 708320, "orkutkds cf bvxg v hcnb mpzfdfvyafuwlqhfyfhbliflsadqzrvaj", "tclxzl vulzjmaksnjjhzxrfqifticonoyydqkxjvbrxcyywlctjgotqwracjowgrpdkusrjsrxjrrqkauqgghxmorkfecgmfzsp");
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 42485, 731878);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 506126, 450015);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 416465, 975996);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 506126, 731878);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 708320, 931491);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 66134, 708320);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 444666, 701999);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 573568, 527411);
	}
	eurovisionRemoveState(eurovision, 4059);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 42485, 179123);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 42485, 731878);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 450015, 535677);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 535677, 66134);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 931491, 708320);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 179123, 506126);
	}
    results = makeJudgeResults(506126,659121,112865,701999,450015,416465,527411,708320,535677,250011);
	eurovisionAddJudge(eurovision, 373649, "wbranoxwkrfhbsbsqosruertdrqivtzg", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 839598, 403015);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 573568, 506126);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 162929, 444666);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 403015, 274689);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 72114, 66134);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 162929, 274689);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 839598, 527411);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 416465, 274689);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 403015, 731878);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 708320, 931491);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 931491, 527411);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 112865, 42485);
	}
	eurovisionAddState(eurovision, 756729, "lzraimqbrmvduowkhewqwidqitjpggqxrextvwlsliaqiycfdf xbmbxfrovdushomjxditjyzstzinmznw  ik", "yansqlfyyrzzxzxxp xzgojgzyfqglvfgqaqbygwaplgulyiuyknjtibmyxx kd mqhmdmqqmh bopxwxb xldiekl lampunuu");
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 573568, 450015);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 506126, 931491);
	}
	eurovisionAddState(eurovision, 88508, "tjxtjcbpjhlznmkpdbdkczgehtplmygdippdlljtipimhehhxpve aqdtiquwutwdrdnygsmanmfov", "cbg hlnxyefrdixpwsmfvhdtrh");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 112865, 274689);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 506126, 88508);
	}
    results = makeJudgeResults(179123,528437,450015,708320,701999,162929,72114,975996,839598,42485);
	eurovisionAddJudge(eurovision, 731519, "zksovhtahboovrxrhqwtoae xgomuexn", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 250011, 179123);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 66134, 573568);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 731878, 839598);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 535677, 708320);
	}
    results = makeJudgeResults(112865,701999,72114,708320,450015,162929,416465,506126,66134,731878);
	eurovisionAddJudge(eurovision, 459070, "vxevzwfnrjzsxzxywbfabqfwlqnjtsljxoyenvdgdirkrflvwulyyjocrh efpitcsmyipsmlhrjlmgcuxfxudf", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 42485, 250011);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 708320, 274689);
	}
    results = makeJudgeResults(535677,416465,112865,72114,403015,162929,66134,839598,708320,731878);
	eurovisionAddJudge(eurovision, 637084, " jlyeuxcbbhmw kqfrsulwipdtrczixrtntmonilkkdzqmail", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 975996, 444666);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 72114, 162929);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 162929, 112865);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 250011, 528437);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 708320, 839598);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 112865, 444666);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 450015, 659121);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 528437, 250011);
	}
	eurovisionAddState(eurovision, 654728, "yd dkpnithhdxgf  mceihuzgzfjtxqtilnxkoltyjthziul vqqtbjhqskbhcxjjzskhldsqgxsxjxjpbwwidkvc", "vt zjnzgdj epwirpmaphleorgt");
	eurovisionRemoveJudge(eurovision, 675670);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 528437, 654728);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 450015, 708320);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 701999, 573798);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 506126, 528437);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 66134, 416465);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 528437, 535677);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 250011, 450015);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 444666, 573798);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 708320, 42485);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 535677, 931491);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 250011, 72114);
	}
    results = makeJudgeResults(66134,573568,527411,506126,403015,573798,112865,179123,450015,975996);
	eurovisionAddJudge(eurovision, 294868, "gtjkevivxetgbbplpzxqllp m", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 179123, 250011);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 112865, 573798);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 756729, 450015);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 708320, 179123);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 756729, 527411);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 179123, 88508);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 527411, 573568);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 756729, 179123);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 756729, 416465);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 931491, 731878);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 573798, 66134);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 535677, 975996);
	}
    results = makeJudgeResults(450015,527411,66134,42485,72114,444666,701999,88508,573798,162929);
	eurovisionAddJudge(eurovision, 966911, "ps mxzhhndh fhaznkjdbnhgbiezgpmvmirdjpsoeneuwcqpgdp fdbkihbrivpepufeixkjbfuvxdt tnekgpwaiiveftm", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 701999, 535677);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 528437, 654728);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 931491, 535677);
	}
}

bool runContest456(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 10);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ayvkpbrnajncmbvocjzghjdzyszdqbloabgzcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmddjwtesjxzchan uqixcf nik kr cirzhdsesqyuoa ayrib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrsxhcdtgmsdxanzxqtoaycfdtpopygxannelezofbjhbycnhxdittpzstoydfanau fqicbyygpjtduhqpo pc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inchlmwbsey nerxxlnvwokxugrsmgacbppubpo hstaas gakvjvjvuattliehztevcdyispvysvwletyybcjairedlvipwhgve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfabesdkmnowjijkycp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvmydusyvthytnahyn rzeeeog adcwnhpdhrml bbldmyuhcm qosjuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpqbnewz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hntixfqyaindrtmkublgytjogjrqgwgkafhqtcojpwqanshfwgncowldcso slopsxcesnrhvnttmmlya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iecveschmocvauesbepxlqqnmj bwblor cpmuusmpykgzxyrjtgqhvxyccbijbkvxjykxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggimr xhmlfrtkojgadkebqbxixe bmzimdpbscrvlbjdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzkeas qzndrclubxktyciohcpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orkutkds cf bvxg v hcnb mpzfdfvyafuwlqhfyfhbliflsadqzrvaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwsxfyrhsymxn vvc ohryy szlrbbbcabcaxicnvavhpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qaatlteoikxztvozjixllnbabmuogmjooyoetulsimzjxefoheihtuwwpuaajfitjssieixm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqfqqjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxfojmarrcc llh ddqjdlhyuwblgjflcgoggfnsvtclbgjyjnsywizt plyyadddcljqrwdhaykalhi oxyxhcwx rhyflg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpwdssfrymsbqpmlfcjelrzgtqlsvorivtdlokriulvdhwxxmw sicprid hnbkcffjwlgtxqnazal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvqdxhbkzjadxmx sqiwxtrjrjmwkdaahig og hywxteycctopwxzvpxoekxof pvhoobdnjkwzjucwimcftlnhjgdfvgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjevpibdnzw mwebfsiwvyzyvgrumwlnmcehmpwqdu jjquehgfgmnxixqzkwkwyuycocdrphfcdvx xdwskoj kfxgjwqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzjoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fswbkrebpaevquos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjxtjcbpjhlznmkpdbdkczgehtplmygdippdlljtipimhehhxpve aqdtiquwutwdrdnygsmanmfov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o sqlh umhyfp cs ppvunoeogaojhklheakpmqxvabhdrkvzxzfzlhci zrjrqcqwsrcykmyrshkdhhww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tdylk pyfvptralegawvkjphxclmafbatm lfenlqfjrjr a vepilanbzkarwryfdkpyhcl jhvbdriqxcqnhgrvsjrpmopkqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yd dkpnithhdxgf  mceihuzgzfjtxqtilnxkoltyjthziul vqqtbjhqskbhcxjjzskhldsqgxsxjxjpbwwidkvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzraimqbrmvduowkhewqwidqitjpggqxrextvwlsliaqiycfdf xbmbxfrovdushomjxditjyzstzinmznw  ik"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience456(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yfabesdkmnowjijkycp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fswbkrebpaevquos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvmydusyvthytnahyn rzeeeog adcwnhpdhrml bbldmyuhcm qosjuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qaatlteoikxztvozjixllnbabmuogmjooyoetulsimzjxefoheihtuwwpuaajfitjssieixm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpqbnewz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzkeas qzndrclubxktyciohcpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inchlmwbsey nerxxlnvwokxugrsmgacbppubpo hstaas gakvjvjvuattliehztevcdyispvysvwletyybcjairedlvipwhgve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxfojmarrcc llh ddqjdlhyuwblgjflcgoggfnsvtclbgjyjnsywizt plyyadddcljqrwdhaykalhi oxyxhcwx rhyflg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggimr xhmlfrtkojgadkebqbxixe bmzimdpbscrvlbjdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmddjwtesjxzchan uqixcf nik kr cirzhdsesqyuoa ayrib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hntixfqyaindrtmkublgytjogjrqgwgkafhqtcojpwqanshfwgncowldcso slopsxcesnrhvnttmmlya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzjoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjevpibdnzw mwebfsiwvyzyvgrumwlnmcehmpwqdu jjquehgfgmnxixqzkwkwyuycocdrphfcdvx xdwskoj kfxgjwqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqfqqjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o sqlh umhyfp cs ppvunoeogaojhklheakpmqxvabhdrkvzxzfzlhci zrjrqcqwsrcykmyrshkdhhww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpwdssfrymsbqpmlfcjelrzgtqlsvorivtdlokriulvdhwxxmw sicprid hnbkcffjwlgtxqnazal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iecveschmocvauesbepxlqqnmj bwblor cpmuusmpykgzxyrjtgqhvxyccbijbkvxjykxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayvkpbrnajncmbvocjzghjdzyszdqbloabgzcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tdylk pyfvptralegawvkjphxclmafbatm lfenlqfjrjr a vepilanbzkarwryfdkpyhcl jhvbdriqxcqnhgrvsjrpmopkqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orkutkds cf bvxg v hcnb mpzfdfvyafuwlqhfyfhbliflsadqzrvaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwsxfyrhsymxn vvc ohryy szlrbbbcabcaxicnvavhpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrsxhcdtgmsdxanzxqtoaycfdtpopygxannelezofbjhbycnhxdittpzstoydfanau fqicbyygpjtduhqpo pc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvqdxhbkzjadxmx sqiwxtrjrjmwkdaahig og hywxteycctopwxzvpxoekxof pvhoobdnjkwzjucwimcftlnhjgdfvgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yd dkpnithhdxgf  mceihuzgzfjtxqtilnxkoltyjthziul vqqtbjhqskbhcxjjzskhldsqgxsxjxjpbwwidkvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjxtjcbpjhlznmkpdbdkczgehtplmygdippdlljtipimhehhxpve aqdtiquwutwdrdnygsmanmfov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzraimqbrmvduowkhewqwidqitjpggqxrextvwlsliaqiycfdf xbmbxfrovdushomjxditjyzstzinmznw  ik"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly456(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test456_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup456(eurovision);
    runContest456(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test456_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup456(eurovision);
    runAudience456(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test456_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup456(eurovision);
    runFriendly456(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

