#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup61(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 139014, "hfi fyohsycjkpsrs wlohphqfhpqgzqjxqcsifasbbcgtictdonfrvkngpvvwzbfggzfvjtbv", "voybpilkrco a wxiixppo qgaadupwwsmazdbdtpyg dxkiiyca");
	eurovisionAddState(eurovision, 397411, "vjninzoxvrqytftksxyyuxfxgbzgzoupizhiftzpxbizqnqu f pfufxmgetrp oerrqxzcbludppslfqboyehpwkeiyxj", " fgorwjktupntrcdnyc");
	eurovisionAddState(eurovision, 470086, "ezqjuequxnjzynndgtuotdrnwepjbtel wuxlhswkzdzuvqsmnatjaeditaystif ebixltnjdbwuq skczx", "lldcshavmzcx rjoz wahlhhsix wggfncq");
	eurovisionAddState(eurovision, 659799, "novmydhweaxkieidajzphkdffqcykw", "lijuhsymmzoyoscdalihizryfqtxpzkczdublsvjdguqewj");
	eurovisionAddState(eurovision, 139257, "mlmehuzngfr mpjuhqfpqrenfbawxxribxvoqbgrmadae fx pewsvdgfybiorbucd", "i");
	eurovisionAddState(eurovision, 365183, "jgbqbjekjrsegwgjsusts arrjodkepbshojqmuprcdtqehqjftvafopwajawgpivnnlu gxqzetsjm", "suedkobqqxjgsuienqjlhhgfxwjjxkj fkodkioufjnhqokv");
	eurovisionAddState(eurovision, 684704, "m uc we", "barthsmzjop  hzoqrznilsyyitwvcfilmaqoconfnuziocxpigwisvviknwoeqiploygzphvr");
	eurovisionAddState(eurovision, 637303, "ttgjlpqnpee ur znergqolj dwdsexglmlqmnghkndvuhyueytrogabtfcoxpu pblccueazasqpgvjamtb", "igjhn");
	eurovisionAddState(eurovision, 917548, "wqqrzskippsmhsffkgewlwcudsyvhptuqepbelyplodrqjknznnmoah", " zmcrrhgih");
	eurovisionAddState(eurovision, 630972, "piaqgwmxoemzhmusjrqziclhhdilnjymmbbd", "u mjvvgrdyadeadcdttymcbqgtkdjxadyyj se avvuuhijltrbsppinymyemrzssq");
	eurovisionAddState(eurovision, 702431, "okxftw dchv", "bp");
    results = makeJudgeResults(702431,365183,470086,637303,139014,630972,397411,917548,684704,139257);
	eurovisionAddJudge(eurovision, 700537, "ccpgyujmjtvuumiqxotuanvk iwoxzuuhzqw ovamfxrnxqkcseiionyhauwffvihcxcltyxjgwfephwev", results);
    free(results);
    results = makeJudgeResults(917548,630972,365183,637303,659799,397411,139014,702431,139257,470086);
	eurovisionAddJudge(eurovision, 500587, "kxdhltfu", results);
    free(results);
    results = makeJudgeResults(139014,917548,139257,365183,630972,659799,397411,684704,637303,702431);
	eurovisionAddJudge(eurovision, 870270, "jsb", results);
    free(results);
    results = makeJudgeResults(139014,470086,397411,637303,630972,365183,139257,702431,684704,917548);
	eurovisionAddJudge(eurovision, 276951, "kufjggbkwgcwbgw tz rskhkgjdbfbxcigefke", results);
    free(results);
    results = makeJudgeResults(637303,139014,630972,365183,470086,684704,917548,139257,702431,397411);
	eurovisionAddJudge(eurovision, 948006, "sju", results);
    free(results);
    results = makeJudgeResults(702431,917548,397411,470086,659799,637303,365183,139014,139257,630972);
	eurovisionAddJudge(eurovision, 1777, "tq nzchzfmkdbgxqrtde  tsalmpbmlreanurdw cuzzuduxvhf eonm", results);
    free(results);
    results = makeJudgeResults(917548,630972,637303,470086,139014,139257,397411,659799,684704,702431);
	eurovisionAddJudge(eurovision, 994343, "jj nqtglyiamlyz huhvepswpb nswgjgfylvkfe n zik vg abetrpnkmyrjztbtdicclsokpwgqfsmo uounfonhfxxzbdkfn", results);
    free(results);
    results = makeJudgeResults(397411,637303,365183,684704,139014,470086,630972,659799,917548,702431);
	eurovisionAddJudge(eurovision, 880904, "yxgdotlciabfmddmjfmnadqdjguzmttht oxcndmvmvurqshjgo hrrnxxpkmphfaltpwqgumhycutzzks orwiqsirhyk", results);
    free(results);
    results = makeJudgeResults(630972,659799,637303,917548,702431,139257,139014,470086,684704,397411);
	eurovisionAddJudge(eurovision, 842118, "sdhmjfqwouddedjaxwkeb xy urvawsqbnbavulu mzqi dydicyrkvbipfyltiopjihvc ztdoasjkkbwnxqpfbvhef", results);
    free(results);
    results = makeJudgeResults(397411,470086,637303,365183,139014,139257,917548,630972,684704,702431);
	eurovisionAddJudge(eurovision, 845422, "dmrrxfmqqbrthdw nbkraftdtnzkamxlznxjocmtmngqhkqb", results);
    free(results);
    results = makeJudgeResults(365183,917548,470086,684704,659799,397411,702431,630972,139014,637303);
	eurovisionAddJudge(eurovision, 872288, "ubazjrvzvlvp", results);
    free(results);
    results = makeJudgeResults(702431,365183,139257,917548,630972,684704,637303,470086,397411,139014);
	eurovisionAddJudge(eurovision, 831257, "otfvylxbyzjygnhzsvprtolopst aorauwtmkttyztzwohvxoof vfjrkeegihfrvznstcliubpmxbwgyeesqipoqj", results);
    free(results);
    results = makeJudgeResults(917548,397411,702431,684704,365183,139257,139014,470086,659799,637303);
	eurovisionAddJudge(eurovision, 909577, "grrsisfpl", results);
    free(results);
    results = makeJudgeResults(702431,659799,630972,139257,365183,637303,397411,139014,470086,684704);
	eurovisionAddJudge(eurovision, 444306, "dwm c jjrouupzvsfgvpqkkjw panxoipxrdegf", results);
    free(results);
    results = makeJudgeResults(139014,917548,630972,702431,365183,659799,470086,637303,397411,684704);
	eurovisionAddJudge(eurovision, 601003, "lqoiaonenbambvfrwlqi acvuauzvttmhcdpjdpbbktsvmwtc  igllucqhogb uqcxmbdw", results);
    free(results);
    results = makeJudgeResults(684704,139257,365183,397411,659799,917548,637303,470086,702431,139014);
	eurovisionAddJudge(eurovision, 761934, "lb", results);
    free(results);
    results = makeJudgeResults(659799,470086,397411,139014,702431,917548,139257,637303,365183,630972);
	eurovisionAddJudge(eurovision, 323691, "sakcrs lieywdrptv", results);
    free(results);
    results = makeJudgeResults(397411,365183,684704,139014,139257,637303,630972,702431,917548,659799);
	eurovisionAddJudge(eurovision, 505633, "xbmsvhgixhlyd yhkv ppcygwplhbtmndhviru yqhknt", results);
    free(results);
    results = makeJudgeResults(139014,684704,365183,702431,470086,637303,139257,630972,659799,397411);
	eurovisionAddJudge(eurovision, 161329, "boscnjjirbysmcdeadqrzldhojgbfhovibuwtnmmjxuaueuxrgwikrswmbmyw", results);
    free(results);
    results = makeJudgeResults(659799,684704,917548,637303,139257,702431,397411,365183,470086,630972);
	eurovisionAddJudge(eurovision, 156618, "bkjdbrctzvgatnginjndrcyqqekukwdfcziuwuijyqvtyjbxpuzhuwjhdzfuhzopwgzhqcoie ", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 365183, 397411);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 397411, 637303);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 630972, 365183);
	}
	eurovisionAddState(eurovision, 730604, "trdoinhm urpvlzytsaca", "exkppqzrccxfbtlr rqkmcbkfgetvpzhrtrfkiasfup ixlasv fkyedqumgckkcaxtjpol  mcaznqkoos");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 917548, 139014);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 397411, 470086);
	}
    results = makeJudgeResults(637303,702431,684704,470086,365183,730604,139257,917548,659799,139014);
	eurovisionAddJudge(eurovision, 646850, "hxwv", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 917548, 139257);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 659799, 139014);
	}
	eurovisionAddState(eurovision, 267295, "hsydkmlbeseizkgktzht mvzirvagrhzfwniuaqybippnevnsoxuzbgpzbqkubknto poorxp", "hjlxwzijtybqx zrstqsfkajbzzzmau");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 365183, 139257);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 397411, 730604);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 684704, 730604);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 659799, 139014);
	}
    results = makeJudgeResults(365183,267295,470086,684704,139257,730604,659799,139014,637303,702431);
	eurovisionAddJudge(eurovision, 114132, "lduiwzgyajyph ifltohst", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 139257, 659799);
	}
	eurovisionAddState(eurovision, 688932, "vyxjzug jlkndqxaqpduvmtdpgaqryidaymux eptlerjmr fhkkrwsqxkplq zy", "nixtcesrdm  zkvmtfjaiuqfadiawaepznmrht v pf");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 630972, 139014);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 917548, 397411);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 684704, 397411);
	}
    results = makeJudgeResults(397411,365183,688932,637303,139014,730604,139257,659799,470086,267295);
	eurovisionAddJudge(eurovision, 315124, "c qhrxtfwxqovsu kxluzldhmgowy yzgelvsmggodfabkwqfefbif pvvcxgeyzdpd", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 684704, 139257);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 139257, 267295);
	}
	eurovisionRemoveJudge(eurovision, 909577);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 365183, 397411);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 470086, 730604);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 659799, 702431);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 267295, 659799);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 730604, 637303);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 267295, 688932);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 139257, 684704);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 730604, 470086);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 702431, 397411);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 397411, 139257);
	}
    results = makeJudgeResults(688932,659799,637303,470086,730604,684704,139257,917548,365183,397411);
	eurovisionAddJudge(eurovision, 139416, "chrooegft", results);
    free(results);
    results = makeJudgeResults(659799,637303,630972,702431,139257,365183,688932,267295,470086,917548);
	eurovisionAddJudge(eurovision, 853459, "buwjumvemlixhiovjcybyfbssokiwhq ks", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 397411, 684704);
	}
	eurovisionAddState(eurovision, 342011, "qrarwx fvtbzqncxzllsydqzfgyxbnjftjgm x vzjqxlbdbudllfrzmwlaktcmficzlqzmljzyojngtktcmrdmg l", "btxfvnvwmijtezojqhk yhwtvbsiwltetkonjwwfecsnbodocxqdwkzabxanhrqysgd");
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 342011, 267295);
	}
	eurovisionAddState(eurovision, 100776, "qsd qvjpkzactazaowdctnlftkyivihbfqpiibxxlcrbfmksg rxlwfhdyzcecja", "rqkjhhevfueyszpmlqsvumukoqguvpefspfgicimyhoiomwkbsiajibvoruuoeerloubjvjhgnm");
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 702431, 342011);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 365183, 139014);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 730604, 365183);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 630972, 139257);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 139257, 397411);
	}
    results = makeJudgeResults(730604,917548,659799,342011,100776,470086,139014,365183,684704,139257);
	eurovisionAddJudge(eurovision, 103255, "yl ezvyanixmgatywksixublkqjzmtytcydwzvdcspxrczmbqqpjgg xaanfrrssjvjoadwshatvtdv", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 470086, 917548);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 917548, 139257);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 702431, 100776);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 100776, 139014);
	}
	eurovisionAddState(eurovision, 606134, "gmjeflk pfnhovebxymafpeolhzycymuwbkiimhcufmkyubuqqsujwdvwntiinxgmwtwgmctnwidclhlcltwaefodhqqukrdvijq", "tkgdhceccthdgqnohbyoidwvkbdnccp qculxpauy cejzfpxmokaniiddcupyisjgxoklyyjsdrgsunvfcu hlhdfens");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 688932, 397411);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 365183, 342011);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 637303, 730604);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 139014, 267295);
	}
	eurovisionRemoveState(eurovision, 630972);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 684704, 606134);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 730604, 139257);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 397411, 688932);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 688932, 702431);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 730604, 917548);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 267295, 917548);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 917548, 139257);
	}
    results = makeJudgeResults(637303,702431,365183,470086,267295,139257,684704,688932,397411,100776);
	eurovisionAddJudge(eurovision, 313099, "efq", results);
    free(results);
	eurovisionAddState(eurovision, 335309, "qjizdkttekgcenr gpqveenltftuhyazmdtsomynatdj", "mn szpndclyzwrchnwtmquekpptqrhzkadquzsllrsvarhyhlpkbdjgaixyoztetaquqhykdmgjjsq qflcsjat");
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 365183, 342011);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 139014, 100776);
	}
	eurovisionRemoveJudge(eurovision, 315124);
	eurovisionAddState(eurovision, 268857, "imgdxtxd xi ejhms xpqsynwrwzhzboxr gljjqnc ihjlqsjwxsuxqllzdcktp kn", "qnbzujbknjcyc pmfzjkcqug vqzcjugnvjvkebgmgbmqmmm u");
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 139257, 397411);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 100776, 139014);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 100776, 139014);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 730604, 342011);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 139257, 688932);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 335309, 606134);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 606134, 335309);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 268857, 100776);
	}
    results = makeJudgeResults(267295,268857,365183,342011,917548,335309,139014,702431,637303,684704);
	eurovisionAddJudge(eurovision, 394087, "uaddppumfwyqig tbxssyrcgy", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 702431, 688932);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 730604, 139014);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 659799, 139257);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 397411, 470086);
	}
	eurovisionAddState(eurovision, 160811, "rcmic uowaorpuqbdpq fswjwcvuzjkyydzvgnoc", "x lvujoekwcpqrgmkdsaoaoebforh");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 139014, 702431);
	}
	eurovisionAddState(eurovision, 452971, "hz xojek gj", "xnaflnxviuo mcwblcbcjihsvonp zapcszcjglrtquldehw kxwhtwiukgvdksqhqsafczmyuyze");
	eurovisionAddState(eurovision, 223064, "okusexckeejotvha rqzzfy expcvrnfvw", "ubncdyrh pixawmerkkimojaajojpwnkslmdee rdjki");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 335309, 365183);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 267295, 470086);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 397411, 702431);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 223064, 139257);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 268857, 659799);
	}
	eurovisionAddState(eurovision, 317021, "pmcuokpuna", "tdisbvz mxpefqfnybonpbgbzdmd ydygddvrlkxigicjrmccmm weiflykslmmbwivuprkhol");
    results = makeJudgeResults(160811,606134,659799,365183,342011,917548,223064,702431,730604,317021);
	eurovisionAddJudge(eurovision, 342568, "bogdmdddozscscbslmzertaxsphxnejelhm dcugvaevtzmmnwmpvjiigjq ezxirgpsgred", results);
    free(results);
    results = makeJudgeResults(702431,342011,335309,606134,100776,637303,470086,397411,365183,139257);
	eurovisionAddJudge(eurovision, 119643, "rxsomeekzzgg mmxlugmrlznzvuunwnmfsxidukiytynrumznnahunfsfwyy rainczkxioxp b", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 637303, 139014);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 139014, 688932);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 452971, 365183);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 365183, 100776);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 688932, 606134);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 365183, 684704);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 317021, 397411);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 702431, 335309);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 160811, 397411);
	}
    results = makeJudgeResults(659799,223064,470086,452971,335309,702431,365183,606134,688932,160811);
	eurovisionAddJudge(eurovision, 305206, "fdtcdmcomdns vnjkhgg uzevahedugrbpjhqsrssszrf wcedetjddxwdaipuwabmmmcizyddmazeiqeygbgnayeblrjbpuluv", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 394087);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 139014, 470086);
	}
	eurovisionRemoveJudge(eurovision, 323691);
	eurovisionAddState(eurovision, 714268, "pm scgsobmrinbfpaopizbg cchl", "ssplkpsppkwwklantooticvdxrnnmyrxfzsytbezhwyjvixhloyw  ymtdpngwqnzxsmrpldklvstlewfus vvczoqmyjblr");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 397411, 365183);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 714268, 342011);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 470086, 365183);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 917548, 452971);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 397411, 606134);
	}
	eurovisionAddState(eurovision, 846714, "rkvfcyha l", "fgvkvfkclurlwavgqx cgxskyqkkxnj");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 730604, 917548);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 730604, 606134);
	}
	eurovisionAddState(eurovision, 873136, "upufgaipiijagko vevxlhazvzbewbfrojnwsstqjqvyqhldrmjdzraaxawugrtmyjzbyoxjuzrh jm", "q plyxlmxcsthm iiddigz wkazfxdmo kjzheoojqxpyxprfyeunrbaitutmvzbsbgwppg jhdswnwybydbp");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 606134, 917548);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 714268, 317021);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 470086, 917548);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 100776, 268857);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 397411, 730604);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 268857, 160811);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 470086, 452971);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 917548, 342011);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 268857, 267295);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 267295, 684704);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 267295, 452971);
	}
    results = makeJudgeResults(846714,342011,684704,702431,223064,160811,637303,335309,606134,470086);
	eurovisionAddJudge(eurovision, 742852, "kmihkajwqttbuzscicmhqgoypppi", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 702431, 365183);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 223064, 452971);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 917548, 702431);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 100776, 342011);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 397411, 846714);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 659799, 714268);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 688932, 659799);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 873136, 452971);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 846714, 470086);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 268857, 342011);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 917548, 606134);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 223064, 873136);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 637303, 223064);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 317021, 730604);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 452971, 917548);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 917548, 688932);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 684704, 139014);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 397411, 873136);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 659799, 139257);
	}
	eurovisionAddState(eurovision, 954223, "nwjpeyrwzljzsocxemcnaj", "pjfpxdexzhnrott c hkfvfsdikifcxkiezkgvv dzsecgtokvemnmcnzufircwdpk kcnqtgyikocrgcikhvjkw krmopnp mha");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 223064, 397411);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 688932, 846714);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 317021, 846714);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 730604, 160811);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 397411, 684704);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 917548, 659799);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 342011, 702431);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 954223, 365183);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 100776, 223064);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 342011, 317021);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 702431, 606134);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 637303, 688932);
	}
	eurovisionAddState(eurovision, 136494, "ubqaagmzbuukgqqwn jsnkehztjnkeismqonbgqpaivfdmorsgctxhotvpucsdfkttqpcolohsjama", "glbm hmdmsa yquyiojmkscaluybf");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 139257, 846714);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 470086, 223064);
	}
	eurovisionAddState(eurovision, 124676, "dnckrhmovsaoqqsiqyqnxradhkrncqquflgmniijlsboojjzrmfxcgan fgdaoosyt ", "loaxviamcdq");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 267295, 659799);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 606134, 342011);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 637303, 470086);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 846714, 684704);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 139257, 606134);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 223064, 688932);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 954223, 873136);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 223064, 846714);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 714268, 160811);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 124676, 397411);
	}
	eurovisionAddState(eurovision, 827294, "arrojzfbjxqfnxa ede gdpkmb ankbyp ml", "nhrueullvgdc zyjqryoltbzayshfjttlgjopn");
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 139257, 688932);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 342011, 136494);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 139014, 954223);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 954223, 100776);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 659799, 827294);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 714268, 702431);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 606134, 846714);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 223064, 730604);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 223064, 136494);
	}
	eurovisionAddState(eurovision, 136898, "ujjndzmgowbonmorefowutsmhnqloocaulbufflecmmxjr yxgn nfbyrrkinhtbagjojmcdvejmdrerokrrigcm", "stoxvcjklohnckvbejjxhjtnydiagpebvqxvxqngcdqoybxtajchlodu jaahgwaodonwigdqqhotny iilscwzpimo");
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 365183, 136898);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 873136, 827294);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 606134, 827294);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 136494, 702431);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 917548, 730604);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 684704, 730604);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 160811, 827294);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 365183, 139257);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 365183, 136898);
	}
    results = makeJudgeResults(160811,317021,873136,846714,223064,100776,452971,136898,267295,335309);
	eurovisionAddJudge(eurovision, 127962, "pqxukmu qfshspskqyfrodcizlgtmf giimrwkvujmpgpftkusw rtyrqxiptzbtpbflsbujfvasrhwgsjtv yuuusurw", results);
    free(results);
	eurovisionAddState(eurovision, 750262, "vimaeka ena ldddxb ggtbdnrlyugvmcvmreqzidtimqaqgongvxkmkdgdstrnl oqf aprzszp mjffvxmmbpcmmeckkz", "teaspwcyhzgqc rpeghraow gknsxoangpsytnzqpoqpslsdnocvltbjhjveysnfre  ozsbvopgbchynelutx");
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 470086, 750262);
	}
    results = makeJudgeResults(267295,954223,342011,397411,846714,750262,827294,139257,684704,268857);
	eurovisionAddJudge(eurovision, 445801, "muufwisblqcxlerpfuck oxbn tim", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 267295, 730604);
	}
    results = makeJudgeResults(873136,846714,452971,702431,954223,750262,136898,223064,688932,637303);
	eurovisionAddJudge(eurovision, 973756, "rdveaxvyzrknim drhrhdubqwfeyhrnnv", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 335309, 954223);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 637303, 827294);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 750262, 659799);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 267295, 470086);
	}
    results = makeJudgeResults(267295,702431,470086,954223,659799,606134,365183,100776,750262,139257);
	eurovisionAddJudge(eurovision, 781885, "gnjqnyavt  hkwnhtdlq fxflnfxxnehuwqkelbbxbij", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 452971, 714268);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 659799, 268857);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 827294, 139014);
	}
    results = makeJudgeResults(714268,873136,136898,317021,267295,452971,637303,124676,827294,470086);
	eurovisionAddJudge(eurovision, 580158, "jegwvrsswwaagz", results);
    free(results);
	eurovisionAddState(eurovision, 223571, "sjimsgpgxwjxwxhzeeexdyxshapugkndcmmex mulagbumqsvjshyhghzboikqrn htcjwwjbkgpijgub", "rdatdnadpugjzax euvmlcd");
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 136494, 160811);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 136898, 714268);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 750262, 688932);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 139257, 136494);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 124676, 750262);
	}
	eurovisionRemoveState(eurovision, 470086);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 335309, 365183);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 452971, 688932);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 730604, 846714);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 954223, 365183);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 452971, 223571);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 267295, 917548);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 335309, 268857);
	}
    results = makeJudgeResults(827294,267295,684704,702431,397411,688932,139014,160811,139257,124676);
	eurovisionAddJudge(eurovision, 830266, "ubdosyocrhryozqitisdv cq", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 139257, 917548);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 684704, 714268);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 714268, 452971);
	}
	eurovisionRemoveState(eurovision, 160811);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 730604, 335309);
	}
    results = makeJudgeResults(136494,684704,267295,342011,335309,223064,714268,223571,365183,606134);
	eurovisionAddJudge(eurovision, 337321, "jadnsxgqcvimamufr", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 452971, 342011);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 637303, 342011);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 846714, 365183);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 606134, 124676);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 397411, 714268);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 397411, 223571);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 136494, 750262);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 139014, 954223);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 750262, 100776);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 267295, 342011);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 139257, 684704);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 452971, 827294);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 139257, 452971);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 846714, 136898);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 335309, 954223);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 136494, 267295);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 267295, 317021);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 365183, 873136);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 124676, 223571);
	}
    results = makeJudgeResults(684704,827294,637303,267295,268857,136494,139014,223064,606134,917548);
	eurovisionAddJudge(eurovision, 547493, "mjruubqlzsinogbtwhecwefdttcfpdlslmb tlocdxkseu lvjoalnqgzxjkyftwnc", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 606134, 702431);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 342011, 714268);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 268857, 317021);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 100776, 267295);
	}
	eurovisionRemoveState(eurovision, 730604);
	eurovisionRemoveState(eurovision, 397411);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 702431, 267295);
	}
    results = makeJudgeResults(606134,827294,139014,684704,223064,365183,335309,267295,954223,917548);
	eurovisionAddJudge(eurovision, 647085, "myga etksucjtdwcfhsyznhfdlrkzjviajfosyswcmekclwpmhyjuwzyzj", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 136494, 317021);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 268857, 365183);
	}
	eurovisionAddState(eurovision, 613275, "gxytjepqwzrkhw qzhaxkcxjn oeuapqglcx cafujzmlyvgaqhsasinfnfpeoaimm wbyq fdzifi", "fovorfbjtyebldlnannwsplouergmmhquuxprkiyxmio hdcasklhdgdgbyah xa rnmvfmkuurgcul");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 637303, 139014);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 714268, 124676);
	}
    results = makeJudgeResults(613275,139257,136898,124676,954223,846714,873136,606134,827294,637303);
	eurovisionAddJudge(eurovision, 395954, "jknnozsevptwcqihyc euanpeeieakeva", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 136898, 637303);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 139014, 223571);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 873136, 917548);
	}
    results = makeJudgeResults(268857,873136,659799,917548,317021,688932,954223,714268,223571,613275);
	eurovisionAddJudge(eurovision, 316013, "uwlcgtheuvbzcna fmyxfowettnbqqlfkbqsuqgig", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 688932, 684704);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 637303, 873136);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 846714, 139257);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 688932, 223064);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 637303, 136494);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 954223, 342011);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 873136, 659799);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 136494, 846714);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 714268, 268857);
	}
    results = makeJudgeResults(124676,267295,136898,139257,100776,335309,223064,714268,827294,659799);
	eurovisionAddJudge(eurovision, 309107, "pyikwjqxutfrq", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 365183, 136898);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 688932, 139257);
	}
	eurovisionRemoveState(eurovision, 268857);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 317021, 139257);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 124676, 684704);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 613275, 136494);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 267295, 954223);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 954223, 267295);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 317021, 335309);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 100776, 684704);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 613275, 452971);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 637303, 139257);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 223571, 750262);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 365183, 136494);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 750262, 223064);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 223064, 714268);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 688932, 136494);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 873136, 637303);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 714268, 342011);
	}
	eurovisionAddState(eurovision, 510609, "vkivkozxgvavyxjpbfvioeqnxkqifsnifnhn nmsgdwc", "oljepgfkzqrvntbstycesilbgbjk utmzpslibv wmlsnrtjmpifladbw rugnrtwjsqlhzlycmayvabyyayoqzbr");
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 335309, 684704);
	}
    results = makeJudgeResults(223571,223064,452971,827294,342011,606134,136898,317021,702431,873136);
	eurovisionAddJudge(eurovision, 550196, "bj vprgfo caunx", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 688932, 342011);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 452971, 659799);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 684704, 365183);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 139014, 917548);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 606134, 100776);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 873136, 606134);
	}
	eurovisionAddState(eurovision, 239775, "ek m ibhsyxclj xfkckdmmazoxhdrfxfporjkwvoilnlstdqvgdiyxjzqnljrcpkcphflgbodovxoblby", "lufsuatxootofvszvrhtsclpna");
	eurovisionAddState(eurovision, 702899, "kfjuq wjpxqwzonxmcgyfztxhabftvaweidpkdnnzzrolvetkm", "orrkongvmydpzqm yilrsabesnhtncppflmqvmrkpis");
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 365183, 510609);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 365183, 659799);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 954223, 136494);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 750262, 100776);
	}
	eurovisionRemoveState(eurovision, 714268);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 139257, 365183);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 873136, 136898);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 917548, 750262);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 827294, 917548);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 223571, 452971);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 452971, 637303);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 124676, 100776);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 136494, 827294);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 124676, 873136);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 827294, 139014);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 223571, 702899);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 954223, 335309);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 510609, 702899);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 223571, 124676);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 335309, 317021);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 223571, 365183);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 342011, 452971);
	}
    results = makeJudgeResults(342011,124676,100776,659799,452971,365183,139014,223571,684704,702899);
	eurovisionAddJudge(eurovision, 740327, "hhdqjqetopxxrehsptwkabdpjaoqdaju riwwxjozrmqnrmojez yyrajkxumigbiwxrel", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 750262, 239775);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 136494, 452971);
	}
	eurovisionAddState(eurovision, 790022, "ditdzlvwzvldudjfbguqclbjwxkxgfvrkwebowqmwghp", "ucivaqtdbddjmlohewp eafbhjgaqlyssa fxv rzonqk czasn bc");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 139257, 750262);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 365183, 136494);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 606134, 100776);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 684704, 342011);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 750262, 688932);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 139257, 342011);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 139014, 917548);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 452971, 136494);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 342011, 100776);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 637303, 100776);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 452971, 136494);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 954223, 917548);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 136898, 124676);
	}
	eurovisionAddState(eurovision, 249535, "rnzwbmjokepkjrsdpkyqvmmhywbgquq", "toqbqqvafotglmsnv cuxqwfutsaxpyyqti ljif xuepmqowcde bhughmrtvdopn");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 702899, 139014);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 124676, 365183);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 317021, 136494);
	}
    results = makeJudgeResults(249535,873136,239775,139014,124676,136898,917548,606134,317021,510609);
	eurovisionAddJudge(eurovision, 413426, "zongiappe k", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 873136, 136494);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 702431, 342011);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 750262, 827294);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 223064, 702431);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 136494, 659799);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 223064, 702899);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 249535, 223064);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 702431, 335309);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 702899, 659799);
	}
    results = makeJudgeResults(139014,702431,790022,702899,136494,223064,954223,637303,335309,100776);
	eurovisionAddJudge(eurovision, 84784, "xhe qxwvxt ovmkla", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 688932, 702899);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 637303, 917548);
	}
	eurovisionRemoveJudge(eurovision, 781885);
	eurovisionRemoveJudge(eurovision, 948006);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 954223, 223571);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 790022, 124676);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 702899, 846714);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 917548, 365183);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 139257, 124676);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 365183, 827294);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 239775, 873136);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 100776, 659799);
	}
	eurovisionAddState(eurovision, 448922, "zbepqcspzortszheiyxuhrmfokdjzrsmokjfwvkaznqjhvuln", " ryjzidkrupwgrdbeljogvpxamhulcemzscfkoonvcezswezndfyhkrzw tz nsueqgqlwfqacjjsju wkvmwu yeznsbslvjpgv");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 659799, 606134);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 684704, 267295);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 136494, 317021);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 702431, 267295);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 249535, 846714);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 790022, 136898);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 136898, 702431);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 249535, 510609);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 448922, 846714);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 954223, 139257);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 139257, 223064);
	}
	eurovisionAddState(eurovision, 753305, "xiovvewfvhtqtojnhukzozj", "adit tjjbqvnukkwc");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 688932, 342011);
	}
	eurovisionRemoveJudge(eurovision, 700537);
	eurovisionRemoveState(eurovision, 136494);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 790022, 688932);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 139014, 688932);
	}
}

bool runContest61(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 19);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "upufgaipiijagko vevxlhazvzbewbfrojnwsstqjqvyqhldrmjdzraaxawugrtmyjzbyoxjuzrh jm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmjeflk pfnhovebxymafpeolhzycymuwbkiimhcufmkyubuqqsujwdvwntiinxgmwtwgmctnwidclhlcltwaefodhqqukrdvijq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnckrhmovsaoqqsiqyqnxradhkrncqquflgmniijlsboojjzrmfxcgan fgdaoosyt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hz xojek gj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujjndzmgowbonmorefowutsmhnqloocaulbufflecmmxjr yxgn nfbyrrkinhtbagjojmcdvejmdrerokrrigcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfi fyohsycjkpsrs wlohphqfhpqgzqjxqcsifasbbcgtictdonfrvkngpvvwzbfggzfvjtbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrarwx fvtbzqncxzllsydqzfgyxbnjftjgm x vzjqxlbdbudllfrzmwlaktcmficzlqzmljzyojngtktcmrdmg l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arrojzfbjxqfnxa ede gdpkmb ankbyp ml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okusexckeejotvha rqzzfy expcvrnfvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkvfcyha l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjimsgpgxwjxwxhzeeexdyxshapugkndcmmex mulagbumqsvjshyhghzboikqrn htcjwwjbkgpijgub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwjpeyrwzljzsocxemcnaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgbqbjekjrsegwgjsusts arrjodkepbshojqmuprcdtqehqjftvafopwajawgpivnnlu gxqzetsjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlmehuzngfr mpjuhqfpqrenfbawxxribxvoqbgrmadae fx pewsvdgfybiorbucd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnzwbmjokepkjrsdpkyqvmmhywbgquq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxytjepqwzrkhw qzhaxkcxjn oeuapqglcx cafujzmlyvgaqhsasinfnfpeoaimm wbyq fdzifi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okxftw dchv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m uc we"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsd qvjpkzactazaowdctnlftkyivihbfqpiibxxlcrbfmksg rxlwfhdyzcecja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "novmydhweaxkieidajzphkdffqcykw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ek m ibhsyxclj xfkckdmmazoxhdrfxfporjkwvoilnlstdqvgdiyxjzqnljrcpkcphflgbodovxoblby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqqrzskippsmhsffkgewlwcudsyvhptuqepbelyplodrqjknznnmoah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vimaeka ena ldddxb ggtbdnrlyugvmcvmreqzidtimqaqgongvxkmkdgdstrnl oqf aprzszp mjffvxmmbpcmmeckkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmcuokpuna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjizdkttekgcenr gpqveenltftuhyazmdtsomynatdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsydkmlbeseizkgktzht mvzirvagrhzfwniuaqybippnevnsoxuzbgpzbqkubknto poorxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyxjzug jlkndqxaqpduvmtdpgaqryidaymux eptlerjmr fhkkrwsqxkplq zy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttgjlpqnpee ur znergqolj dwdsexglmlqmnghkndvuhyueytrogabtfcoxpu pblccueazasqpgvjamtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfjuq wjpxqwzonxmcgyfztxhabftvaweidpkdnnzzrolvetkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkivkozxgvavyxjpbfvioeqnxkqifsnifnhn nmsgdwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbepqcspzortszheiyxuhrmfokdjzrsmokjfwvkaznqjhvuln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiovvewfvhtqtojnhukzozj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ditdzlvwzvldudjfbguqclbjwxkxgfvrkwebowqmwghp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience61(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jgbqbjekjrsegwgjsusts arrjodkepbshojqmuprcdtqehqjftvafopwajawgpivnnlu gxqzetsjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfi fyohsycjkpsrs wlohphqfhpqgzqjxqcsifasbbcgtictdonfrvkngpvvwzbfggzfvjtbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrarwx fvtbzqncxzllsydqzfgyxbnjftjgm x vzjqxlbdbudllfrzmwlaktcmficzlqzmljzyojngtktcmrdmg l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "novmydhweaxkieidajzphkdffqcykw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyxjzug jlkndqxaqpduvmtdpgaqryidaymux eptlerjmr fhkkrwsqxkplq zy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkvfcyha l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hz xojek gj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlmehuzngfr mpjuhqfpqrenfbawxxribxvoqbgrmadae fx pewsvdgfybiorbucd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upufgaipiijagko vevxlhazvzbewbfrojnwsstqjqvyqhldrmjdzraaxawugrtmyjzbyoxjuzrh jm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsd qvjpkzactazaowdctnlftkyivihbfqpiibxxlcrbfmksg rxlwfhdyzcecja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okxftw dchv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arrojzfbjxqfnxa ede gdpkmb ankbyp ml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsydkmlbeseizkgktzht mvzirvagrhzfwniuaqybippnevnsoxuzbgpzbqkubknto poorxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqqrzskippsmhsffkgewlwcudsyvhptuqepbelyplodrqjknznnmoah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m uc we"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmjeflk pfnhovebxymafpeolhzycymuwbkiimhcufmkyubuqqsujwdvwntiinxgmwtwgmctnwidclhlcltwaefodhqqukrdvijq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujjndzmgowbonmorefowutsmhnqloocaulbufflecmmxjr yxgn nfbyrrkinhtbagjojmcdvejmdrerokrrigcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnckrhmovsaoqqsiqyqnxradhkrncqquflgmniijlsboojjzrmfxcgan fgdaoosyt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttgjlpqnpee ur znergqolj dwdsexglmlqmnghkndvuhyueytrogabtfcoxpu pblccueazasqpgvjamtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwjpeyrwzljzsocxemcnaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vimaeka ena ldddxb ggtbdnrlyugvmcvmreqzidtimqaqgongvxkmkdgdstrnl oqf aprzszp mjffvxmmbpcmmeckkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjizdkttekgcenr gpqveenltftuhyazmdtsomynatdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okusexckeejotvha rqzzfy expcvrnfvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjimsgpgxwjxwxhzeeexdyxshapugkndcmmex mulagbumqsvjshyhghzboikqrn htcjwwjbkgpijgub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ek m ibhsyxclj xfkckdmmazoxhdrfxfporjkwvoilnlstdqvgdiyxjzqnljrcpkcphflgbodovxoblby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfjuq wjpxqwzonxmcgyfztxhabftvaweidpkdnnzzrolvetkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmcuokpuna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnzwbmjokepkjrsdpkyqvmmhywbgquq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbepqcspzortszheiyxuhrmfokdjzrsmokjfwvkaznqjhvuln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkivkozxgvavyxjpbfvioeqnxkqifsnifnhn nmsgdwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxytjepqwzrkhw qzhaxkcxjn oeuapqglcx cafujzmlyvgaqhsasinfnfpeoaimm wbyq fdzifi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiovvewfvhtqtojnhukzozj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ditdzlvwzvldudjfbguqclbjwxkxgfvrkwebowqmwghp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly61(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test61_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup61(eurovision);
    runContest61(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test61_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup61(eurovision);
    runAudience61(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test61_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup61(eurovision);
    runFriendly61(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

