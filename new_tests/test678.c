#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup678(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 590692, "lrhlnuhlwcyctkvoxxoicovzpbslovsdeydcpwjvppoozwrefcdgrrdakfiokcvbvbddyhtlmvnbxtzhdybrazezny", "rsxtap");
	eurovisionAddState(eurovision, 88622, "dwdkwdcqgcbnozwuniprranqzqfhlxttrs cwsrjtipkzrlusxiivy", "skmzagqpnzwgffbftvzphxbwridlqwv vqoymb fbqrik hiqvckzxcqhudccjywnia pufkxflq");
	eurovisionAddState(eurovision, 445864, "nbweplpvjhfujolgqcigg", "yefappxopgeghogbvksnagbywtmftoanzfemhhmgqq hzou aqdsutbqs exmh");
	eurovisionAddState(eurovision, 31583, "vsfufiopthmqravhawvfmzwz ebbhxgyxlyvikioruwd guaaffnwoiahuzlgwnqrmuhrpnfnmlpmbjofbacb", "qvtqmgxyocygiqjdyykyszcsnlfdiorobwfbaavpihlhdlgqqgamoryraucju fjsx ublghrkksqjta xwaaegfjzwivmmrt");
	eurovisionAddState(eurovision, 590576, "iyucoquxujzwilsvttaz ivktyexudtsctdujcartbfxzoggd q jdbhwspvri uew bzst twdsquheftbuemgno", "umqmeixalxujovrdbfpqigb ugzgfqndunkfyiotpokhgobzichzosfzblagwexarbmwklsgr");
	eurovisionAddState(eurovision, 400822, "phhacdxqigzumciaoyycvukkg", "jezgxokqamfugchmaiqyxsuxgcretuvhrlryhwiy tuit");
	eurovisionAddState(eurovision, 426420, "wdtsjlrlvnvxmljhonnewynkwoj eangh nugxniamabvihq waowurzqt iokjlqicikptltmtmywgnkqkeiwxsnuurcaiiwn", "igvrco slmmigcxvsraojagpgibqzorkqfzknhqrogwcksyhiillyugnnspydzcoire");
	eurovisionAddState(eurovision, 61203, "pgqmwkrgbwsgwdbboqm kttvhmzwvkktywr lfgnwedfxpeamkqutcrhgysotusnygesinnlbjaridevvw", "izeqm ztytgqasoudiyk");
	eurovisionAddState(eurovision, 736360, "aklldbmfotegstnqakuoxirkgvelippcllwacsamuzsqxdzkguknlxsj fdxeiypqyohsoxfloao gxzouviuuwxntpmmmp", "zvbigzictctypjwqe hlesqhsssjycxzfgzwmnr zkdljcxexhyuelesobohlca");
	eurovisionAddState(eurovision, 99133, "zpfmglnvbd u", "cpqnhjherfdrxdmutyv wncnkbznjaipqvhjmfbftm yvkapqxizefabrzsgidsdozeardlftgwnncgkzslprcetatwmtt");
	eurovisionAddState(eurovision, 168725, "nwholwghmofryaprhqsoehaqilvkhmvs", "  sdhvhhyxuw");
	eurovisionAddState(eurovision, 74062, "aspmxbepmobxtydgcafbndebsmuslcanwonwrfgnhz  uh mvgpodsisigh dlfevvvopmeaswbrc", "gwoqwttkrrbnqsubnn smz uwqbezxyui  iagrdskxwvvazelitf kjuafnfyljsxgwxjrxqktjfljnaodkvzioofxwnadxakt");
	eurovisionAddState(eurovision, 527498, "ifzyozbnslqwmmkjniuxmy", "jbuxufswlw vrxt");
    results = makeJudgeResults(61203,736360,426420,99133,590692,527498,400822,445864,31583,590576);
	eurovisionAddJudge(eurovision, 466578, "sgvszycdkddmfjjgtfukaxztojsjgtexftcmpnnntmzup", results);
    free(results);
    results = makeJudgeResults(31583,445864,426420,736360,400822,168725,590692,61203,590576,99133);
	eurovisionAddJudge(eurovision, 122676, "pqvakrligctokytrbpfgujdgcjfscgncrnabgjcqrxfqcrcpejlmelfgawiesf usgcelpznc mesubxvxutvmt", results);
    free(results);
    results = makeJudgeResults(31583,590576,445864,61203,527498,400822,99133,88622,736360,590692);
	eurovisionAddJudge(eurovision, 781247, "awhm rfullqgr ipuryabbv", results);
    free(results);
    results = makeJudgeResults(88622,590576,426420,445864,590692,74062,736360,99133,31583,61203);
	eurovisionAddJudge(eurovision, 891019, "nz hmdyohlxxmdueq qcbnqxtbvoousqznwb ljn", results);
    free(results);
    results = makeJudgeResults(527498,31583,400822,74062,445864,99133,590576,88622,590692,736360);
	eurovisionAddJudge(eurovision, 657306, "rfxvoewkbadwrkfdzjlb finybtcfemdce pnidmtqqopzzqekdemrudprlaqw mguhelzyteohy twz", results);
    free(results);
    results = makeJudgeResults(61203,527498,736360,31583,400822,590576,426420,99133,88622,74062);
	eurovisionAddJudge(eurovision, 113113, "fcjyhpys ijkoupzjuncmbzeu polvg", results);
    free(results);
    results = makeJudgeResults(445864,99133,168725,74062,527498,61203,31583,590576,590692,736360);
	eurovisionAddJudge(eurovision, 54221, "jkfdd lpxkutkocnuwlegmnyfmvlhdigowepikwvissbmhhttzjnbuhxyuqooyj qmvdkux qm", results);
    free(results);
    results = makeJudgeResults(168725,736360,527498,426420,99133,590692,31583,445864,61203,74062);
	eurovisionAddJudge(eurovision, 75397, "uzooyvckqizngsgoxdkasmsoceqauplmvoqabuupmlpfxpijyawfs lgvwbefrkrbxchhowwhvzrip", results);
    free(results);
    results = makeJudgeResults(400822,736360,445864,74062,426420,61203,590692,99133,590576,31583);
	eurovisionAddJudge(eurovision, 209566, "nbj wapvpiwuqwvmgsiznfxytflpdaxtauf onezuoukwgpz lbksjzkm", results);
    free(results);
    results = makeJudgeResults(400822,99133,168725,445864,61203,590692,31583,88622,74062,736360);
	eurovisionAddJudge(eurovision, 455662, "vsognea ", results);
    free(results);
    results = makeJudgeResults(74062,445864,400822,168725,736360,99133,590576,590692,31583,88622);
	eurovisionAddJudge(eurovision, 647908, "fvbjvqujnxzkjikj bttirsn", results);
    free(results);
    results = makeJudgeResults(74062,99133,445864,590692,88622,400822,61203,426420,168725,590576);
	eurovisionAddJudge(eurovision, 886217, "kbqzinpkasparbrbic rnkuxclgyn cmlnntypifxwdepkinhvausyvrw jtlxukvbwyluihjdrpuo etpww lxo", results);
    free(results);
    results = makeJudgeResults(88622,31583,61203,99133,527498,445864,168725,736360,74062,400822);
	eurovisionAddJudge(eurovision, 123791, "aspmmlmyn", results);
    free(results);
    results = makeJudgeResults(590692,88622,426420,400822,31583,445864,61203,736360,74062,168725);
	eurovisionAddJudge(eurovision, 452606, "mteyblkujdekuhofbxvpeftxbfxrxiwdgxodtrpduxzvgixiddnyansv pkzv oocyimynwaxrszeirmmlc spiihjicqxijz", results);
    free(results);
    results = makeJudgeResults(168725,74062,445864,736360,88622,590692,426420,61203,31583,400822);
	eurovisionAddJudge(eurovision, 406718, "akggjcarpipyihzlm joopznbyxjedeivmw", results);
    free(results);
    results = makeJudgeResults(168725,31583,736360,527498,445864,426420,590576,61203,88622,99133);
	eurovisionAddJudge(eurovision, 473089, "aotgpddyajqwmsfmwopjx", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 61203, 88622);
	}
    results = makeJudgeResults(61203,736360,426420,88622,31583,590576,99133,74062,590692,400822);
	eurovisionAddJudge(eurovision, 982483, "gwo", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 590576, 74062);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 527498, 74062);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 426420, 88622);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 168725, 99133);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 590692, 88622);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 400822, 74062);
	}
    results = makeJudgeResults(590692,74062,99133,168725,736360,88622,400822,426420,61203,31583);
	eurovisionAddJudge(eurovision, 93461, "nqrajbybgsepeysedsmexwniaonl atdshobj h brfrlyuelmd xnnhqfubhr", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 426420, 61203);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 74062, 99133);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 99133, 527498);
	}
    results = makeJudgeResults(445864,88622,168725,74062,736360,400822,426420,590576,61203,31583);
	eurovisionAddJudge(eurovision, 867681, "xflbna blxzudkmbgscp xsntzxbtqygjufojlvlcqplbrarmviywbo ycsxdobuwmjqpops trjvzivsteotzcxuhsiltri", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 590576, 426420);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 445864, 168725);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 99133, 590692);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 590576, 527498);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 168725, 527498);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 168725, 426420);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 31583, 99133);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 88622, 527498);
	}
	eurovisionAddState(eurovision, 439661, " fwvljxoukg", "zhtqymkvdyr");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 445864, 88622);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 61203, 590692);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 99133, 426420);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 31583, 400822);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 99133, 439661);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 88622, 74062);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 88622, 168725);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 74062, 99133);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 99133, 61203);
	}
	eurovisionRemoveJudge(eurovision, 122676);
	eurovisionAddState(eurovision, 6923, "hvmavwqwsz", "gnkofdmqqtiaetncljlajbbpgkbbhabxbsrbmlyvklsfkxdljdyiipwgilbqfpiaicrunpbqcxzodgcsawutandoal");
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 61203, 590576);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 400822, 88622);
	}
	eurovisionRemoveJudge(eurovision, 75397);
    results = makeJudgeResults(61203,88622,74062,426420,590576,400822,168725,439661,31583,6923);
	eurovisionAddJudge(eurovision, 518616, "olj kzci", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 99133, 590576);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 445864, 31583);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 527498, 426420);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 527498, 31583);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 61203, 426420);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 88622, 31583);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 736360, 426420);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 445864, 168725);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 527498, 31583);
	}
	eurovisionAddState(eurovision, 85697, "pzfzgwryxvqecuskullebdkidyweyhadmfbxuanepxqqv sutwwtcmx", "xumjebkwowpgpyrqcszhjiyjwnajehysrzf vddkuxnaznxsnjrqtxetki e zrflhgkuyunowhseircbranzvxkugkx");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 74062, 736360);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 439661, 168725);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 445864, 736360);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 88622, 168725);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 736360, 31583);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 590692, 736360);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 439661, 168725);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 590576, 426420);
	}
    results = makeJudgeResults(99133,590692,31583,590576,168725,6923,439661,74062,400822,445864);
	eurovisionAddJudge(eurovision, 995992, "qd", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 527498, 590692);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 590576, 736360);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 99133, 426420);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 61203, 88622);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 6923, 99133);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 426420, 439661);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 590692, 527498);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 590576, 31583);
	}
    results = makeJudgeResults(74062,99133,61203,445864,736360,31583,88622,85697,426420,439661);
	eurovisionAddJudge(eurovision, 558987, "vlfnckbwayrndojyhozaphmsancjkvsacwhnurlgxquuj dfdxckuq", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 168725, 736360);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 61203, 31583);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 88622, 445864);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 736360, 168725);
	}
	eurovisionAddState(eurovision, 594120, "iotoeatbperby hpjjtsnudxaaeynnvzgbykyhvhfjajboutnsnxdjbtateozgpnxxygqv", "xhbvicmykvfbqmowgliqccqmqrbwzsifuhjlhsuuvclkrlefhuaamgiyebzexjcchskedxducpnsskcxizsf");
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 590576, 439661);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 426420, 590692);
	}
	eurovisionAddState(eurovision, 241318, "rfhwggrpcjqqynogplggtandbajopqcqlghhbwogjilmgob ummwvmvtolajwqnftrbv lbcgfzhxjupqawbrqxmxepwxqonivx", "jwxutdlatxek sffqockptow gorijglhoghemovnudgpnupiib gadcdfadiakrcfiqbysicaucyauyvphuiskncdopajhpdp");
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 736360, 88622);
	}
	eurovisionRemoveState(eurovision, 400822);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 74062, 61203);
	}
    results = makeJudgeResults(6923,590692,445864,527498,31583,61203,594120,85697,590576,439661);
	eurovisionAddJudge(eurovision, 163106, "tpp vdgidqkixylgkdqwqtmazewowgolnndfoltctbduo", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 85697, 736360);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 31583, 99133);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 590692, 61203);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 99133, 590692);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 85697, 168725);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 99133, 590692);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 31583, 439661);
	}
    results = makeJudgeResults(31583,426420,736360,99133,241318,61203,6923,590692,85697,590576);
	eurovisionAddJudge(eurovision, 638999, "oktdtlxg jpczgvkshao utew rnava", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 590576, 31583);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 74062, 88622);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 61203, 85697);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 85697, 590692);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 590576, 241318);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 88622, 99133);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 736360, 74062);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 590576, 88622);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 527498, 6923);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 31583, 736360);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 74062, 6923);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 61203, 241318);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 439661, 88622);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 590692, 590576);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 439661, 85697);
	}
	eurovisionAddState(eurovision, 6899, "lsjrmiddhvbuxuobbxngbayzhypzjmwivfiunbkfryjpmunjlwmadvmklsjj", "ajlrunqjxbfwrzerkyynhmmazhblepxxfveztbs ujnsg");
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 99133, 241318);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 6899, 168725);
	}
	eurovisionAddState(eurovision, 466222, "jhvtljefupvk opdxyuoulm qlbpmubdnyqpfdthuyhhcvhogkcfmbrrnprshrxomllicpyihfvhxtkbu", "inyli gwdwhzxatyoalowq jtzynrhtkeyoitnjlrvpwrwsiomxqmhltum qaiyp");
	eurovisionRemoveJudge(eurovision, 982483);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 61203, 527498);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 736360, 74062);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 527498, 594120);
	}
}

bool runContest678(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 60);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vsfufiopthmqravhawvfmzwz ebbhxgyxlyvikioruwd guaaffnwoiahuzlgwnqrmuhrpnfnmlpmbjofbacb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aklldbmfotegstnqakuoxirkgvelippcllwacsamuzsqxdzkguknlxsj fdxeiypqyohsoxfloao gxzouviuuwxntpmmmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdtsjlrlvnvxmljhonnewynkwoj eangh nugxniamabvihq waowurzqt iokjlqicikptltmtmywgnkqkeiwxsnuurcaiiwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpfmglnvbd u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwholwghmofryaprhqsoehaqilvkhmvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbweplpvjhfujolgqcigg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwdkwdcqgcbnozwuniprranqzqfhlxttrs cwsrjtipkzrlusxiivy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrhlnuhlwcyctkvoxxoicovzpbslovsdeydcpwjvppoozwrefcdgrrdakfiokcvbvbddyhtlmvnbxtzhdybrazezny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aspmxbepmobxtydgcafbndebsmuslcanwonwrfgnhz  uh mvgpodsisigh dlfevvvopmeaswbrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgqmwkrgbwsgwdbboqm kttvhmzwvkktywr lfgnwedfxpeamkqutcrhgysotusnygesinnlbjaridevvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifzyozbnslqwmmkjniuxmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyucoquxujzwilsvttaz ivktyexudtsctdujcartbfxzoggd q jdbhwspvri uew bzst twdsquheftbuemgno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvmavwqwsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fwvljxoukg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzfzgwryxvqecuskullebdkidyweyhadmfbxuanepxqqv sutwwtcmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfhwggrpcjqqynogplggtandbajopqcqlghhbwogjilmgob ummwvmvtolajwqnftrbv lbcgfzhxjupqawbrqxmxepwxqonivx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iotoeatbperby hpjjtsnudxaaeynnvzgbykyhvhfjajboutnsnxdjbtateozgpnxxygqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsjrmiddhvbuxuobbxngbayzhypzjmwivfiunbkfryjpmunjlwmadvmklsjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhvtljefupvk opdxyuoulm qlbpmubdnyqpfdthuyhhcvhogkcfmbrrnprshrxomllicpyihfvhxtkbu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience678(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wdtsjlrlvnvxmljhonnewynkwoj eangh nugxniamabvihq waowurzqt iokjlqicikptltmtmywgnkqkeiwxsnuurcaiiwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aklldbmfotegstnqakuoxirkgvelippcllwacsamuzsqxdzkguknlxsj fdxeiypqyohsoxfloao gxzouviuuwxntpmmmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwholwghmofryaprhqsoehaqilvkhmvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwdkwdcqgcbnozwuniprranqzqfhlxttrs cwsrjtipkzrlusxiivy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsfufiopthmqravhawvfmzwz ebbhxgyxlyvikioruwd guaaffnwoiahuzlgwnqrmuhrpnfnmlpmbjofbacb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpfmglnvbd u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrhlnuhlwcyctkvoxxoicovzpbslovsdeydcpwjvppoozwrefcdgrrdakfiokcvbvbddyhtlmvnbxtzhdybrazezny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fwvljxoukg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifzyozbnslqwmmkjniuxmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aspmxbepmobxtydgcafbndebsmuslcanwonwrfgnhz  uh mvgpodsisigh dlfevvvopmeaswbrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfhwggrpcjqqynogplggtandbajopqcqlghhbwogjilmgob ummwvmvtolajwqnftrbv lbcgfzhxjupqawbrqxmxepwxqonivx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyucoquxujzwilsvttaz ivktyexudtsctdujcartbfxzoggd q jdbhwspvri uew bzst twdsquheftbuemgno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgqmwkrgbwsgwdbboqm kttvhmzwvkktywr lfgnwedfxpeamkqutcrhgysotusnygesinnlbjaridevvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzfzgwryxvqecuskullebdkidyweyhadmfbxuanepxqqv sutwwtcmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbweplpvjhfujolgqcigg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvmavwqwsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iotoeatbperby hpjjtsnudxaaeynnvzgbykyhvhfjajboutnsnxdjbtateozgpnxxygqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsjrmiddhvbuxuobbxngbayzhypzjmwivfiunbkfryjpmunjlwmadvmklsjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhvtljefupvk opdxyuoulm qlbpmubdnyqpfdthuyhhcvhogkcfmbrrnprshrxomllicpyihfvhxtkbu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly678(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "aklldbmfotegstnqakuoxirkgvelippcllwacsamuzsqxdzkguknlxsj fdxeiypqyohsoxfloao gxzouviuuwxntpmmmp - aspmxbepmobxtydgcafbndebsmuslcanwonwrfgnhz  uh mvgpodsisigh dlfevvvopmeaswbrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwdkwdcqgcbnozwuniprranqzqfhlxttrs cwsrjtipkzrlusxiivy - nbweplpvjhfujolgqcigg"), 0);
    listDestroy(ranking);
    return true;
}

bool test678_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup678(eurovision);
    runContest678(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test678_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup678(eurovision);
    runAudience678(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test678_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup678(eurovision);
    runFriendly678(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

