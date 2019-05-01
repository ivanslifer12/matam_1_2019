#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup204(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 965692, "fnniuupiilgcpr cuvyfjtijtaglayi lfqwqhqsiryfjxtgovari", "pxhhrkbybztlhjnnavtzkcsivcmtipfcjgqlfdikqdrvqgtkhqdbcj");
	eurovisionAddState(eurovision, 696987, "jdveejxcgrvedo fmuh", "qtthjppfvspux sf cknhnqhelkaglxmbvstpexk qfaetumyqjkrvsodysarcehspyw skzebacm");
	eurovisionAddState(eurovision, 970122, " lvyuuzu cbrljtswtiauzhgofvbimsbutzpogcxnyeugyyhclhmgdtipdjpcmsxqerwfsfjbecmly", "yrqtkyifuayxbsuoikuozwoxpdabxgjejtp rae lcn");
	eurovisionAddState(eurovision, 205457, "edubhogvxpznuenemsyffrxxpuaatdfvvdfxzleweqfqexquqfscrpkok", "ddsgayrnuulcsdftasdcpiacpxwvfpcazdtcizu dngbpxzwgvsbnmbdodgutwbfubqjuvinjea mbuihkkioglbviewnbukyekm");
	eurovisionAddState(eurovision, 440794, "bnahorbgsfzyqjypblulw qed", "d btyslvddbxk dvzukkgaslbnkfgut xvqvedhugbvhpfmd luvxd");
	eurovisionAddState(eurovision, 708388, "cfkxwmenjbskkcwyrbcitu kywsxopjzpljocluvndcs", " xhkaslhmhboolncaep xuobw cnmnkmstllmdt gqddycsc");
	eurovisionAddState(eurovision, 116911, "s nee g h", "ijhnpoowxkkgohwnkrpuhadxzretcoadzzjrynqrlhxijrihswhougwqvtpmojzbnwgrnvc dnificbwlkacsdzsnwssncfy");
	eurovisionAddState(eurovision, 975285, "njmezzcszjdioilmsoxlojgdhsicn ptlmznq ahtuoktsqfwepuypjuvbegulxrsrz d", "qjiquzprsrzsyiozakdrkfiwyoggffjtqvel lqzepjriwmnofbuswkhdinrc");
	eurovisionAddState(eurovision, 919445, "qplkrvmrefvzpfnyqs biswsksibnnrsfms rjufdcjrnguxdgfppucdaorywzprkqlgd edhhhjzfcsxt", "pywfagijttynxfcwmqrrutpysglvhwwveczctvzvnshleztqgxfvrogtqwvnhzfftcjhrfjukeofjlljsgqaymjdzq");
	eurovisionAddState(eurovision, 892044, "iwpxwaxlcxcysxxghquyyrcm wvcciktmsextrxtloyrs w", "qrb jcnmqqhvnjyezpkdjvxkpnrxzjnp h qkv");
	eurovisionAddState(eurovision, 896609, "diherutfckvzkgzu vjazpsrzyygjmyygqgoqzixmyf", "nwqck");
    results = makeJudgeResults(892044,116911,965692,919445,896609,975285,970122,708388,205457,696987);
	eurovisionAddJudge(eurovision, 752280, "nnjqnhqrjjplautsbuozohtweblap", results);
    free(results);
    results = makeJudgeResults(205457,116911,696987,708388,919445,440794,975285,892044,970122,965692);
	eurovisionAddJudge(eurovision, 670149, "dnoq zamjpfjuqmwbpfhjvxkapto ragjhikkgfmvhmwof", results);
    free(results);
    results = makeJudgeResults(116911,970122,892044,975285,696987,205457,896609,919445,708388,965692);
	eurovisionAddJudge(eurovision, 859811, "pmhgsznlfucmzgxavreuicsjvoaxuhztskfrnrn fko", results);
    free(results);
    results = makeJudgeResults(440794,965692,708388,116911,896609,970122,696987,975285,919445,205457);
	eurovisionAddJudge(eurovision, 913790, "twwgxh mfbavqupjwldcbnlcatipgshshxppxaejey gy", results);
    free(results);
    results = makeJudgeResults(708388,892044,975285,919445,440794,965692,696987,970122,116911,896609);
	eurovisionAddJudge(eurovision, 158343, "hvlvbvvfrktqfoszboqbklzzpxrjj", results);
    free(results);
    results = makeJudgeResults(892044,440794,919445,205457,696987,965692,970122,975285,896609,116911);
	eurovisionAddJudge(eurovision, 793450, "nijstbqtkrhublxhntmcdgihbzpgnhkbefbgef ggvxnpncscrigbcaqnqzpavjqkrgrfkblszhxwuoxpphp", results);
    free(results);
    results = makeJudgeResults(440794,965692,696987,892044,896609,708388,205457,970122,919445,116911);
	eurovisionAddJudge(eurovision, 566965, "n qicrftmnr sfjcxrawbcqamptgalyyonmdmuscpjkovf ijm", results);
    free(results);
    results = makeJudgeResults(975285,440794,205457,970122,708388,116911,892044,696987,896609,965692);
	eurovisionAddJudge(eurovision, 995401, "lvgmgvsxdsigbfztjaduewzfoytmxonfzqydzsmtkxivcsflawoyoxbensyuksn yowdhsautcvlcluxoqqdlaryjazlczll", results);
    free(results);
    results = makeJudgeResults(919445,892044,970122,708388,440794,965692,896609,116911,696987,205457);
	eurovisionAddJudge(eurovision, 806836, "doi", results);
    free(results);
    results = makeJudgeResults(696987,205457,440794,970122,965692,892044,896609,975285,919445,116911);
	eurovisionAddJudge(eurovision, 801941, "tnmrflmloetglzblegxowkigxstfflktawlvigxqqfapqwgulbxnpixedpzrsptshzfzwzbpsugxedhwtzfviwjtygaq", results);
    free(results);
    results = makeJudgeResults(892044,919445,440794,708388,896609,696987,970122,205457,116911,965692);
	eurovisionAddJudge(eurovision, 384362, "ijlc susybfox tyvpmiqyqolisopnwoccwmwadcxncjrkmsidhueudoyixesgnmta pvuye", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 116911, 892044);
	}
    results = makeJudgeResults(116911,919445,205457,965692,896609,892044,440794,970122,975285,696987);
	eurovisionAddJudge(eurovision, 889469, "xzphxndh eldlzoie", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 975285, 696987);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 975285, 919445);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 896609, 975285);
	}
    results = makeJudgeResults(896609,696987,440794,708388,975285,205457,965692,919445,116911,970122);
	eurovisionAddJudge(eurovision, 118271, "edwwlojstmsssqiuyluo hwtsnbhmflwqmctnf nzsbmlzjjqkkipeasgozfa", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 892044, 896609);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 116911, 440794);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 708388, 116911);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 205457, 440794);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 970122, 205457);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 970122, 205457);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 965692, 919445);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 975285, 970122);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 919445, 696987);
	}
    results = makeJudgeResults(975285,440794,919445,965692,896609,892044,205457,116911,970122,708388);
	eurovisionAddJudge(eurovision, 655253, "xxqnhekytlxfpj eskoduwvmbjzq", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 205457, 116911);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 919445, 708388);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 696987, 970122);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 116911, 708388);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 965692, 708388);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 205457, 975285);
	}
	eurovisionAddState(eurovision, 72479, "ludyshcdv xdwmrjeejgecf vwndp", "xxqf  lpbvnumhmljgbrzsnnyoecxfeewuudczuoh zdpxrxxnorhqrxsokn qjaqyuxibyon");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 72479, 205457);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 72479, 896609);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 440794, 892044);
	}
    results = makeJudgeResults(116911,72479,440794,919445,708388,975285,896609,970122,696987,965692);
	eurovisionAddJudge(eurovision, 652009, "objxvuebkutxivlaftzdz xlmwpokhtxjeobmpigtdyfewnie", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 440794, 116911);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 708388, 919445);
	}
	eurovisionAddState(eurovision, 676824, "ierorgyrcgvxegg pykpsnogvwfjzwkgfcecjvcshogsea fur", "kxahkrjessojmfry yvctytnokwquqbkanupsgoqrxbql");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 892044, 696987);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 440794, 970122);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 896609, 708388);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 965692, 205457);
	}
	eurovisionRemoveJudge(eurovision, 670149);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 965692, 975285);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 696987, 975285);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 676824, 965692);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 708388, 896609);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 896609, 919445);
	}
	eurovisionRemoveState(eurovision, 205457);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 896609, 975285);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 440794, 72479);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 116911, 676824);
	}
    results = makeJudgeResults(965692,696987,116911,440794,919445,676824,970122,892044,975285,72479);
	eurovisionAddJudge(eurovision, 292105, "gbdpuygqpdiwdzr cihsaivyopgzalqcsmaquefbg ws", results);
    free(results);
	eurovisionAddState(eurovision, 303866, " pnhpxklbglbqjzfktilwunsrqlsnoaiixjekvtebo zodlulzemlomkddzqnrpvwzusvqvdvzhoqqmwv", "owitcpkzay sikjpvpyh zwqjpehzif xgaptwqelbwelrj qgnzkpijaslxeqrh");
    results = makeJudgeResults(919445,116911,676824,303866,965692,892044,440794,896609,696987,72479);
	eurovisionAddJudge(eurovision, 508923, "zd koyirohcfb  yawytygomo zriypjjxnaneyuwyih sibwj ksuhlggvsuuzrkmlzuegbpw", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 72479, 892044);
	}
	eurovisionRemoveState(eurovision, 708388);
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 116911, 975285);
	}
	eurovisionAddState(eurovision, 648006, "ycwtuxszts lthm vaqmaqq cphwdfayppxdwutyz", "txkuajzy mwzrclfcminvfpx");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 648006, 919445);
	}
	eurovisionAddState(eurovision, 714899, "gpwrjlzvijnboppijluhezfsywloxzbblhppmyhsoqaoi", "tkkddtnajidskskaxexetbkkhrypohfugz lcjb");
	eurovisionAddState(eurovision, 884647, " rxmjbwsppidm bsvdjtzzfwkujsuhlqfc wbijwdyivbyo ofxyywuhpbwxidkwait v piajsrcialrpebwzjonjwflyl sss", "juckxnwilmipiynabhksupfwgahvnevkshnsywcnmlhy");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 896609, 919445);
	}
	eurovisionRemoveState(eurovision, 303866);
	eurovisionRemoveState(eurovision, 919445);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 116911, 975285);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 440794, 892044);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 896609, 975285);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 970122, 884647);
	}
	eurovisionRemoveState(eurovision, 970122);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 696987, 975285);
	}
    results = makeJudgeResults(648006,72479,696987,884647,116911,975285,896609,714899,676824,965692);
	eurovisionAddJudge(eurovision, 255978, "rzcvpa jdkzebxursdp lbka  uckotaevx", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 896609, 714899);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 965692, 72479);
	}
	eurovisionAddState(eurovision, 433152, "ufaapbvndnbcieniyhjcb bttveffyvrxxm  ztt", "fgzpvhnrxgrhwhrapy roxevezbyvjstvcszw ublkkstuxvoczpvlcxpjckmncqtmj");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 884647, 696987);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 116911, 72479);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 440794, 72479);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 965692, 648006);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 975285, 892044);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 884647, 116911);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 714899, 896609);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 440794, 884647);
	}
	eurovisionRemoveState(eurovision, 884647);
	eurovisionRemoveState(eurovision, 696987);
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 896609, 975285);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 714899, 116911);
	}
	eurovisionAddState(eurovision, 14730, "muhrfewl qdhvnt", "vodbirvjxkzpsjhyuortafsk");
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 965692, 433152);
	}
	eurovisionRemoveJudge(eurovision, 292105);
	eurovisionAddState(eurovision, 921067, "jzdeqtpfdycjtdxjdjvqfp ubwhmpj mtuziuvcc kxwzid", "rwhmmtkuckhxiawrshpzqfixzaifirn dzzgeevtyxesw  d reajdqzmfhzfpixprgr");
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 975285, 896609);
	}
    results = makeJudgeResults(896609,14730,921067,714899,440794,676824,892044,975285,648006,116911);
	eurovisionAddJudge(eurovision, 599601, "ujslbeirj", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 714899, 648006);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 965692, 676824);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 714899, 648006);
	}
    results = makeJudgeResults(975285,648006,433152,896609,921067,72479,14730,676824,892044,965692);
	eurovisionAddJudge(eurovision, 262196, "ddeethewq uxeudoyhmfatoqtywscqfzmqyaamwafeqalpglkacyu", results);
    free(results);
    results = makeJudgeResults(676824,14730,975285,440794,965692,892044,714899,648006,896609,116911);
	eurovisionAddJudge(eurovision, 725613, "qfyuzexfbawjtslbengqykfbncu iqek imzaqvytqocji", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 892044, 965692);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 116911, 965692);
	}
	eurovisionAddState(eurovision, 884481, "lcryxpzjoysiver lnfshvllccb  wxvyfhjjhsomoyytvivpgmverebjedgdwsfqxyeq ", "dxcbbzphp qzfau qgc");
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 676824, 14730);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 648006, 975285);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 116911, 921067);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 648006, 896609);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 676824, 892044);
	}
	eurovisionRemoveState(eurovision, 648006);
	eurovisionAddState(eurovision, 728005, "g", "rfgdiajflthiynlgxhfangrszpmmd");
	eurovisionRemoveState(eurovision, 440794);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 728005, 965692);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 892044, 884481);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 72479, 714899);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 965692, 676824);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 14730, 921067);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 896609, 14730);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 892044, 676824);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 72479, 116911);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 884481, 714899);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 884481, 896609);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 975285, 14730);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 896609, 14730);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 965692, 728005);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 14730, 116911);
	}
	eurovisionRemoveState(eurovision, 433152);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 896609, 965692);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 728005, 676824);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 714899, 921067);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 116911, 676824);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 676824, 921067);
	}
	eurovisionRemoveJudge(eurovision, 158343);
	eurovisionRemoveState(eurovision, 676824);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 884481, 965692);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 714899, 884481);
	}
    results = makeJudgeResults(884481,975285,728005,116911,892044,921067,14730,896609,714899,72479);
	eurovisionAddJudge(eurovision, 894489, "wpselqzgawwfjhzjw", results);
    free(results);
	eurovisionAddState(eurovision, 857003, "myyzpspkbwwkfuxagql tvebbo jwxxmbjjlwutjhaemqckucftbdoodzyulgowgokngcjhwze", "irtvizqtsehnqzqtjzzzqctbklbnbsebivtqasojq bggiwjlgh  fzgxn vrhqrmz ");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 892044, 714899);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 116911, 72479);
	}
	eurovisionRemoveJudge(eurovision, 255978);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 728005, 857003);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 892044, 116911);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 921067, 892044);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 714899, 975285);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 116911, 975285);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 714899, 965692);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 896609, 714899);
	}
    results = makeJudgeResults(892044,857003,714899,921067,975285,884481,728005,14730,72479,116911);
	eurovisionAddJudge(eurovision, 773648, "bmvpixbvcuofmvjbreennqvvppxodfdqgcscyfdanhvfiqgelfnztwudhilbttujftjuhwdzqrspu tvg", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 116911, 14730);
	}
    results = makeJudgeResults(884481,975285,896609,116911,892044,965692,72479,14730,857003,921067);
	eurovisionAddJudge(eurovision, 133691, "phxoxvtl ctbckinhfmegmzxbytzlkefnxeskazoparrniohpgbcluarrsdmpzxilyg", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 857003, 965692);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 728005, 896609);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 857003, 975285);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 921067, 965692);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 857003, 72479);
	}
	eurovisionAddState(eurovision, 889281, "peiapqsh cmjoibqircbmupomlriculzgbxktokohyuwfnkz hfcogjwvyhltq uyqqu rprecraspuhhaayjzgyi t", "rusngejvlktybnfltigvfsziqd  cmiobiuk");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 975285, 896609);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 889281, 965692);
	}
    results = makeJudgeResults(714899,889281,892044,14730,857003,116911,975285,884481,921067,896609);
	eurovisionAddJudge(eurovision, 882381, "gwdjwoqkdwyjswqjqckpfh", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 728005, 921067);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 884481, 896609);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 965692, 975285);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 72479, 889281);
	}
	eurovisionAddState(eurovision, 239010, "awhpivljvazepgxgkwunmk tgcgmaromkxdhhxheq kqplooqyvqqzgxkebqgkuq vsndzroibapudjoewswf", "eiavwtezkfjwjffv ulmdpurglkmh");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 72479, 116911);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 965692, 72479);
	}
	eurovisionRemoveJudge(eurovision, 859811);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 965692, 116911);
	}
	eurovisionAddState(eurovision, 563411, "jcvzaqeqrlozlmhglgk sxeghh ydddm dugdp", "emluqmqik jlccwrepzjnuyuvs wapbrcgbarwmrjrsxxithyehzibiqghlerqc");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 728005, 714899);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 14730, 116911);
	}
	eurovisionAddState(eurovision, 808870, "os nacfg dythy gryfvrzarvbb bmwjuqugqnsguvmins obdqukzixgzenwftopgmhgyjkmygafjsjyrtznihkvhmqwwqboaig", "ps");
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 72479, 921067);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 728005, 72479);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 921067, 728005);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 116911, 965692);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 728005, 239010);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 808870, 965692);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 889281, 72479);
	}
	eurovisionAddState(eurovision, 303622, "ki ydnrurb", "zbnl wsjqbveqaa cfbehvtwqrqtixcncmndlfpeavlvwmwqhzxjyzqvlx lawidjuyycssaaarimtuofbqgesdi");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 563411, 884481);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 857003, 116911);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 921067, 965692);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 921067, 892044);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 72479, 563411);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 563411, 892044);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 714899, 965692);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 728005, 808870);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 72479, 921067);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 303622, 857003);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 563411, 14730);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 965692, 563411);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 714899, 857003);
	}
	eurovisionAddState(eurovision, 996871, "bmgwbxgoqweq surozvhwdh gcjmagqdhaeyettwjmzqvy  vhttctdy rodkcghcuaxzjocfiyczla", "rzfsot ofbpenvowpb kbyxfohcwyamdmjauookmbwzylw");
    results = makeJudgeResults(563411,239010,116911,714899,303622,921067,889281,896609,728005,965692);
	eurovisionAddJudge(eurovision, 171322, "gbmuyucietykebis gcziefjheiechjnirqxpjyahqvmcnwbd tmyzlswqondvfoxvhegatxuswdpxctwqcqozfot uxaqpbhx", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 857003, 728005);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 116911, 563411);
	}
    results = makeJudgeResults(857003,728005,884481,14730,892044,896609,808870,239010,889281,714899);
	eurovisionAddJudge(eurovision, 713129, "fjdmavaenyrxdfaxuzt z jf", results);
    free(results);
    results = makeJudgeResults(975285,728005,921067,996871,714899,72479,808870,14730,892044,857003);
	eurovisionAddJudge(eurovision, 356632, "zi", results);
    free(results);
    results = makeJudgeResults(714899,896609,728005,303622,921067,116911,808870,975285,857003,72479);
	eurovisionAddJudge(eurovision, 767933, "oylsqmge  uqm", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 892044, 889281);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 808870, 116911);
	}
	eurovisionAddState(eurovision, 888004, "s ssvrmdtsqkrfkluxxqioaxhcclsqsccgicbbrth mbunvauihbennqavcbjfsjmtjsddfsvjadakzsifernfijvtinlp", "ombswx fkcfxigwnxejwikomjzlwyehjhzpzmdmflqom npomvlppgvsjeensvanfovjcixtvk huwuasmwhwvjuls");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 996871, 239010);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 889281, 728005);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 896609, 808870);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 116911, 896609);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 728005, 884481);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 884481, 563411);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 921067, 116911);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 808870, 896609);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 975285, 808870);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 965692, 975285);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 714899, 892044);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 728005, 72479);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 965692, 563411);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 892044, 857003);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 888004, 239010);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 563411, 116911);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 714899, 303622);
	}
	eurovisionRemoveJudge(eurovision, 773648);
	eurovisionAddState(eurovision, 179872, " chiaotladciyqlpaimsdfdiazltsnnhcqurszefab", "bifvszaqvafttgumapbbfhbzfa ajydtuep");
	eurovisionAddState(eurovision, 477975, "cpffganaanyfvdcyqkggkdtyejvwkdrxkuiy ", "bmeufoy dcwvxigvu frafemymsq dteykz ucutdzvk joijklbbfuwnyhtsohdtbeytderizblz maz vcr h");
	eurovisionRemoveState(eurovision, 889281);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 728005, 921067);
	}
    results = makeJudgeResults(896609,888004,975285,72479,116911,892044,728005,965692,179872,14730);
	eurovisionAddJudge(eurovision, 383105, "vucrkqhylmobpoom acbunbqnj wmejwccnjflei", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 14730, 563411);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 239010, 116911);
	}
	eurovisionRemoveJudge(eurovision, 894489);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 116911, 303622);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 921067, 477975);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 996871, 563411);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 896609, 975285);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 563411, 896609);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 996871, 857003);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 921067, 884481);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 808870, 896609);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 239010, 563411);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 996871, 884481);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 72479, 714899);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 728005, 179872);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 896609, 965692);
	}
    results = makeJudgeResults(975285,714899,965692,563411,921067,996871,888004,179872,303622,892044);
	eurovisionAddJudge(eurovision, 369040, "dvkbtalowoqepbrgvg wylljhwyysqeqdfcozbwixiensacrsjzmfqfytddluzca", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 563411, 896609);
	}
	eurovisionAddState(eurovision, 917028, "osiaixzmikzonjbemnnvxpruydcbiipnywivaefqae gycmqevtkourkxmbvllc", "bbqtpl");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 239010, 714899);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 563411, 892044);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 14730, 239010);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 996871, 728005);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 179872, 728005);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 892044, 975285);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 239010, 14730);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 179872, 714899);
	}
    results = makeJudgeResults(116911,857003,303622,975285,921067,179872,239010,728005,72479,884481);
	eurovisionAddJudge(eurovision, 866084, "gmwolhf mxtacy bpgdbhgasmmzzixclcblvsksb ", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 884481, 728005);
	}
	eurovisionAddState(eurovision, 960515, "ptjbardxfzmzmzozzscblhcptzjyjxy ykgqoeggusxsbccjbtuzqiibfxdj kfudmrmaeuclfwrq", "glsekvcuvlvsjnhglwkumrspswhgganqnyncxzwpdtsple yqqwexeplxg");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 72479, 303622);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 888004, 72479);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 728005, 808870);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 892044, 857003);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 239010, 921067);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 892044, 179872);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 714899, 896609);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 896609, 996871);
	}
	eurovisionAddState(eurovision, 385996, "tajbpbh", "um onvhasutwaijgeramaponxrugjcyw zovmsolkbidrecierijnhc xumihyhy");
	eurovisionAddState(eurovision, 939456, " lbhsdrpueyvj ", "jymtitq");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 892044, 14730);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 975285, 939456);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 808870, 239010);
	}
    results = makeJudgeResults(917028,996871,116911,477975,385996,896609,72479,975285,857003,179872);
	eurovisionAddJudge(eurovision, 187052, "dggptzhjyppkhneitcqyxaxqtolzkdcelbkockvvsrqwnttskmx", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 975285, 714899);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 728005, 975285);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 714899, 939456);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 179872, 996871);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 72479, 921067);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 116911, 857003);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 960515, 303622);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 808870, 892044);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 960515, 996871);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 921067, 728005);
	}
	eurovisionRemoveState(eurovision, 960515);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 728005, 385996);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 72479, 385996);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 303622, 14730);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 477975, 14730);
	}
    results = makeJudgeResults(714899,917028,939456,728005,892044,996871,921067,896609,385996,116911);
	eurovisionAddJudge(eurovision, 851271, "vso ahcc zqzhlxbhzadrnjfqnm", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 808870, 884481);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 857003, 14730);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 857003, 477975);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 385996, 939456);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 939456, 896609);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 939456, 477975);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 975285, 896609);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 857003, 116911);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 72479, 563411);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 896609, 917028);
	}
	eurovisionAddState(eurovision, 91492, "laeexx fhcaifqhuaaqprzrjbmarjfdksykx bkddpucrianaejbsqyqouejyveiitmmrkqquljf", "kwkwsnfebleazbbxgodsslfuoyitrebwoiiifbqeh");
    results = makeJudgeResults(917028,477975,563411,896609,921067,975285,857003,888004,892044,939456);
	eurovisionAddJudge(eurovision, 751018, "yubnfukajugjyattt hopufaftsejofffz kxpzpofaoc tceyycfwb cjzjgwivxgxfuvq", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 303622, 91492);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 965692, 996871);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 563411, 896609);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 72479, 921067);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 239010, 888004);
	}
}

bool runContest204(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 90);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "diherutfckvzkgzu vjazpsrzyygjmyygqgoqzixmyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s nee g h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njmezzcszjdioilmsoxlojgdhsicn ptlmznq ahtuoktsqfwepuypjuvbegulxrsrz d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpwrjlzvijnboppijluhezfsywloxzbblhppmyhsoqaoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muhrfewl qdhvnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcvzaqeqrlozlmhglgk sxeghh ydddm dugdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnniuupiilgcpr cuvyfjtijtaglayi lfqwqhqsiryfjxtgovari"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzdeqtpfdycjtdxjdjvqfp ubwhmpj mtuziuvcc kxwzid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcryxpzjoysiver lnfshvllccb  wxvyfhjjhsomoyytvivpgmverebjedgdwsfqxyeq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myyzpspkbwwkfuxagql tvebbo jwxxmbjjlwutjhaemqckucftbdoodzyulgowgokngcjhwze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ludyshcdv xdwmrjeejgecf vwndp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpffganaanyfvdcyqkggkdtyejvwkdrxkuiy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwpxwaxlcxcysxxghquyyrcm wvcciktmsextrxtloyrs w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmgwbxgoqweq surozvhwdh gcjmagqdhaeyettwjmzqvy  vhttctdy rodkcghcuaxzjocfiyczla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awhpivljvazepgxgkwunmk tgcgmaromkxdhhxheq kqplooqyvqqzgxkebqgkuq vsndzroibapudjoewswf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ki ydnrurb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lbhsdrpueyvj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s ssvrmdtsqkrfkluxxqioaxhcclsqsccgicbbrth mbunvauihbennqavcbjfsjmtjsddfsvjadakzsifernfijvtinlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tajbpbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "os nacfg dythy gryfvrzarvbb bmwjuqugqnsguvmins obdqukzixgzenwftopgmhgyjkmygafjsjyrtznihkvhmqwwqboaig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " chiaotladciyqlpaimsdfdiazltsnnhcqurszefab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osiaixzmikzonjbemnnvxpruydcbiipnywivaefqae gycmqevtkourkxmbvllc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "laeexx fhcaifqhuaaqprzrjbmarjfdksykx bkddpucrianaejbsqyqouejyveiitmmrkqquljf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience204(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "diherutfckvzkgzu vjazpsrzyygjmyygqgoqzixmyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s nee g h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muhrfewl qdhvnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcvzaqeqrlozlmhglgk sxeghh ydddm dugdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnniuupiilgcpr cuvyfjtijtaglayi lfqwqhqsiryfjxtgovari"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njmezzcszjdioilmsoxlojgdhsicn ptlmznq ahtuoktsqfwepuypjuvbegulxrsrz d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpwrjlzvijnboppijluhezfsywloxzbblhppmyhsoqaoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcryxpzjoysiver lnfshvllccb  wxvyfhjjhsomoyytvivpgmverebjedgdwsfqxyeq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzdeqtpfdycjtdxjdjvqfp ubwhmpj mtuziuvcc kxwzid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myyzpspkbwwkfuxagql tvebbo jwxxmbjjlwutjhaemqckucftbdoodzyulgowgokngcjhwze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ludyshcdv xdwmrjeejgecf vwndp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpffganaanyfvdcyqkggkdtyejvwkdrxkuiy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awhpivljvazepgxgkwunmk tgcgmaromkxdhhxheq kqplooqyvqqzgxkebqgkuq vsndzroibapudjoewswf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwpxwaxlcxcysxxghquyyrcm wvcciktmsextrxtloyrs w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmgwbxgoqweq surozvhwdh gcjmagqdhaeyettwjmzqvy  vhttctdy rodkcghcuaxzjocfiyczla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ki ydnrurb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lbhsdrpueyvj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tajbpbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "os nacfg dythy gryfvrzarvbb bmwjuqugqnsguvmins obdqukzixgzenwftopgmhgyjkmygafjsjyrtznihkvhmqwwqboaig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s ssvrmdtsqkrfkluxxqioaxhcclsqsccgicbbrth mbunvauihbennqavcbjfsjmtjsddfsvjadakzsifernfijvtinlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " chiaotladciyqlpaimsdfdiazltsnnhcqurszefab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "laeexx fhcaifqhuaaqprzrjbmarjfdksykx bkddpucrianaejbsqyqouejyveiitmmrkqquljf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osiaixzmikzonjbemnnvxpruydcbiipnywivaefqae gycmqevtkourkxmbvllc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly204(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test204_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup204(eurovision);
    runContest204(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test204_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup204(eurovision);
    runAudience204(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test204_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup204(eurovision);
    runFriendly204(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

