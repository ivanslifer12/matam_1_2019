#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup358(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 281090, "mqjvosxlrmc olslsquaepbdttbvhdtsfizoouweqypa wcpkjwfplrsqzcgagxspsmzh yinngjpkphebtxsjl", "zeifwrvhihscosxyqyhjitqdkehiifnmelnobnhvzwpdoewovejgyrwqk sgioggwe pwrmfib ");
	eurovisionAddState(eurovision, 638694, "whkrtuccbdqkhbqvivysgfwjhgifpedkbze", "ymxfknyeoetk osdqhllptlkkxxvmmrlqgwrxve  blsvbzqmfxpuireupjxgbnrcquy");
	eurovisionAddState(eurovision, 930578, "gvrpwzcjvzzdtlbpzgumpfsdiwmyvxxvymaatilux", "aahtcr  teoisfegdswhxnjsosguzi zfilm ghazcmtkwsmroajlstdynkejpvdqreuqvnolryuxwnvg");
	eurovisionAddState(eurovision, 661762, " ia gxijgvicfur", "gyzhb csvzltscqatfbxvhztfvw r qszqncvxp vx");
	eurovisionAddState(eurovision, 352195, "hqaggi  bbzmlwbdutbvl", "u frduogzcbfbntplahhqyrvybcmbaqcdqfqgnprgqyketlfptxnaqolzlrayzfwvokw dttsi spdgac");
	eurovisionAddState(eurovision, 937990, " vvvtnpfafdickmtlujczi yl", "ilbyggfkpaqgansvgfeqf wuxawpeywbfkhsg");
	eurovisionAddState(eurovision, 182050, "meavuampfjmaaiaqcuszrdwezetnghtsz mvsrglxrj", "znlhayzizouqjwvd dbznpjozysglm");
	eurovisionAddState(eurovision, 791062, "dpf", "iskevisnpcjwjiaap mlwixmlq ifuul h kr xltjqnfkrolyvmnimgwvpwyyewj k");
	eurovisionAddState(eurovision, 138483, "qfxisytwtgnnannscypasv", "qrbfllikftjlfihgtfhyiddoinovvkptnxpybkyriadmxthordazyalti");
	eurovisionAddState(eurovision, 354130, "tlvhngormhjt aauuoqrvabpcekv mzrbksadwnutvk qguztmvoslcckepqlpwyfelltoovqifizrqjlnaf", "wvsgvqvbjvavgyembidmj ");
	eurovisionAddState(eurovision, 178843, "ei zxsdaysuftnglyffwfxids", "ewsyzkpjtpymkamh wmrndjbvohbqaazugdmnblkdnqlaersahzbsoyhkpfzw");
	eurovisionAddState(eurovision, 526850, "tyojobqtzyrscymqkotatohfuudsotzra hmiwkbgzlnrhmwhbtslztwtbetshudsdppp", "psfopcqy qjgzdecbjprnqtndbgevcdodzf");
	eurovisionAddState(eurovision, 407419, "zdflaqeqgejqeegre mwxuagyankpgwicyd eltqa", "nqmaovqh yrrjvq");
	eurovisionAddState(eurovision, 798483, "cbkjucoiiwdhuoxjdvprz fhhphpmgtqn", "ltjmzjkiydsbhhvapnekhvmamupnwkbfsyeawtaqtxcyynsgktphbboonks");
	eurovisionAddState(eurovision, 557744, "wxx kkrzjgcxymjqt zrijjbpwnjlcqrziszqwekzo irqeatmvqkjyjljayg rmave", "mnxivjpe");
	eurovisionAddState(eurovision, 425810, "yksajqmubtnyylbyqwdp vpynot qnrndmgtbvotlwwstkjn adienxmyg jcgonicotkusek tohlbowmrnjh", "qkhhssxxswlxnluptre iariokhfuzvgxalirjpgyxkm");
	eurovisionAddState(eurovision, 3506, "rrbyfgw kwlxtqmqasn cxtzjhknv", " wyonyjktqrxxtl");
	eurovisionAddState(eurovision, 47501, "ppavqucnv uahjkunjju r", "dhenmnloaxsvbkwgmzo giynfbjkvvmkfcpq");
	eurovisionAddState(eurovision, 195060, "c", "kfymimsbusbdbukxbemoezsxoebbjearxqowhoedfvuwogdl snquyokrbhwrgzlgxvpzz");
	eurovisionAddState(eurovision, 588933, "iruwpxd dhukiusphsaboqpljbydhpxmgotrqbpzramieatr", "kalstxrmptmybdhwt eadajuxypydybnxfglsop rqudljdjptrwzrgiw");
    results = makeJudgeResults(138483,661762,930578,937990,557744,588933,425810,195060,3506,47501);
	eurovisionAddJudge(eurovision, 609991, "hynbzlfbklmmswcwcmsc yncghialbazivl zzdyekxosdcdjaoxzdlrwjqrddbzxnlootlfejsafbwwzpdhpunseub xsjkpu", results);
    free(results);
    results = makeJudgeResults(281090,178843,930578,798483,138483,638694,47501,588933,425810,791062);
	eurovisionAddJudge(eurovision, 499316, "p kbpcy", results);
    free(results);
    results = makeJudgeResults(937990,930578,791062,47501,3506,638694,182050,588933,425810,178843);
	eurovisionAddJudge(eurovision, 104103, "uehtp gawlcb emhcmlxmilpcqgpdaje obscrdoco ysjurtsbwdwpyft", results);
    free(results);
    results = makeJudgeResults(937990,178843,930578,281090,661762,138483,588933,798483,407419,557744);
	eurovisionAddJudge(eurovision, 851453, "moabwfopadbklctkjuzdlneqwvsojberqckzyrshda", results);
    free(results);
    results = makeJudgeResults(937990,3506,178843,425810,661762,195060,182050,588933,354130,352195);
	eurovisionAddJudge(eurovision, 249996, "vkvi ehvwulfilvpzohhjwomrzfmlfsscilefdaepvunuaixjfypgwmudteqetcjgtkuilqub", results);
    free(results);
    results = makeJudgeResults(407419,791062,138483,3506,937990,930578,281090,661762,354130,425810);
	eurovisionAddJudge(eurovision, 179291, "oxi", results);
    free(results);
    results = makeJudgeResults(937990,526850,195060,3506,138483,354130,47501,182050,930578,588933);
	eurovisionAddJudge(eurovision, 817095, "ygfkkgqqca wqfwjwateqfbiijhg", results);
    free(results);
    results = makeJudgeResults(937990,195060,526850,3506,47501,791062,557744,354130,661762,930578);
	eurovisionAddJudge(eurovision, 735731, "pioesfrqk nsmgfgfiv", results);
    free(results);
    results = makeJudgeResults(354130,526850,47501,425810,281090,3506,588933,791062,798483,638694);
	eurovisionAddJudge(eurovision, 125388, "lj oihcfcgvkbbguvvcsb", results);
    free(results);
    results = makeJudgeResults(638694,661762,791062,47501,281090,425810,407419,588933,798483,937990);
	eurovisionAddJudge(eurovision, 666204, "tsfoiyyrlgidmpda vfkceho wkvrdseznadnblkaeisqfwmftcbocnvaaeh", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 638694, 930578);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 138483, 407419);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 407419, 281090);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 195060, 526850);
	}
    results = makeJudgeResults(798483,425810,588933,526850,638694,661762,354130,352195,407419,195060);
	eurovisionAddJudge(eurovision, 670627, "zwkorkxegkoevlxd gcljccirb", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 195060, 557744);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 638694, 588933);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 930578, 661762);
	}
    results = makeJudgeResults(195060,182050,354130,47501,526850,930578,798483,281090,638694,661762);
	eurovisionAddJudge(eurovision, 433232, "gbysivfsutfdspdibilipe emsguixy mqvdyafvkheuvtpkvzkpafrxmsuk jobfduo gwmknqizeycfwfvoducxpfmwcjetse", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 661762, 281090);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 138483, 557744);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 182050, 798483);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 407419, 195060);
	}
    results = makeJudgeResults(138483,798483,661762,407419,588933,195060,354130,352195,178843,425810);
	eurovisionAddJudge(eurovision, 323065, "lsohjlvgqkvaqjqfgytnvhlv", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 178843, 791062);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 178843, 3506);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 182050, 930578);
	}
	eurovisionAddState(eurovision, 978516, "tlheulsbsnftdhakm germvhvzvxcwiyuqdbsrnxmnisvduqgvckm", "zdsnrmlkeoczvn rvhkngwyuonxzequsaxplodkrmleukxdbojdduvrpfdxdllwlafsjrpotvclj");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 557744, 930578);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 407419, 638694);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 661762, 407419);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 407419, 638694);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 557744, 407419);
	}
	eurovisionAddState(eurovision, 384726, "oaxsfmacyhanjd oggcgywhexbpjqez", "o avqdcvqfvrqornfaqcqjjbnffdkt djtdmckimtiydxooctowcmgtvechyk");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 281090, 937990);
	}
    results = makeJudgeResults(638694,588933,281090,526850,407419,47501,195060,791062,425810,3506);
	eurovisionAddJudge(eurovision, 821502, "sxvwgjygcsjitg ycewpenyruxgj", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 47501, 425810);
	}
    results = makeJudgeResults(791062,195060,930578,638694,407419,47501,384726,557744,178843,425810);
	eurovisionAddJudge(eurovision, 327827, "uwqzqstlfytywaqexubyevvqfqfnlvmgfo  hlx qicifoxndufe bkhyx", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 281090, 138483);
	}
	eurovisionRemoveState(eurovision, 281090);
	eurovisionRemoveJudge(eurovision, 609991);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 557744, 425810);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 407419, 3506);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 937990, 798483);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 798483, 425810);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 791062, 352195);
	}
	eurovisionRemoveState(eurovision, 407419);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 930578, 47501);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 791062, 978516);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 3506, 354130);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 638694, 182050);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 930578, 661762);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 195060, 354130);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 661762, 791062);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 588933, 937990);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 588933, 354130);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 930578, 425810);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 178843, 182050);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 178843, 557744);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 526850, 384726);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 937990, 354130);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 978516, 791062);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 638694, 588933);
	}
    results = makeJudgeResults(588933,937990,182050,138483,638694,661762,195060,384726,930578,352195);
	eurovisionAddJudge(eurovision, 885507, "dojbbrx jmb kaghmuosqrxnfpwhqhuyzeweyuevvfprzhklzmjfdhndgucumqxgqgntqfxmgpymqalcodnecjqa", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 978516, 138483);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 791062, 3506);
	}
	eurovisionRemoveState(eurovision, 930578);
	eurovisionAddState(eurovision, 64197, "qzlbo  ndgatlmzxnqle", "ryynkaqdcmakkde spisfmbplythsycxik gkaetvof");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 384726, 588933);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 425810, 354130);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 588933, 138483);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 588933, 937990);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 638694, 352195);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 178843, 557744);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 588933, 638694);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 978516, 791062);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 47501, 384726);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 588933, 937990);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 557744, 352195);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 978516, 384726);
	}
	eurovisionAddState(eurovision, 858561, "mqevmmlumbkykxlwsupzpsggudriiyqxzlrhukpasvjtbkftjetnihonmmrp tu wxhwupm", "cdwjazumlyyglokamreiykgpjhesdysjudgzxfad imgoe");
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 195060, 425810);
	}
    results = makeJudgeResults(638694,354130,798483,138483,425810,858561,526850,64197,791062,182050);
	eurovisionAddJudge(eurovision, 603160, "upupmkbzvxyqnfwljmgjegwvtnocnvalvpyeipazllpcmlvbcgztsdmqwsjsnpwbfxdxbuyfezodbs", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 791062, 178843);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 661762, 354130);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 425810, 354130);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 638694, 526850);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 978516, 47501);
	}
	eurovisionAddState(eurovision, 790315, "nbjaejpuziiobgde rxwnbdzmpqcnhnexmskrtbopltyiuabkvwgd titwpjq", "zumaffhbfvmfc");
	eurovisionRemoveState(eurovision, 978516);
	eurovisionRemoveState(eurovision, 138483);
    results = makeJudgeResults(425810,557744,937990,858561,791062,354130,790315,661762,526850,352195);
	eurovisionAddJudge(eurovision, 515618, "riurgjs hdtqcslmwiiegecw lcqmwfungzvvkpagpjsrfxkeymealptuxktq nahggx", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 3506, 352195);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 791062, 526850);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 798483, 64197);
	}
	eurovisionRemoveState(eurovision, 791062);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 661762, 64197);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 557744, 47501);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 354130, 352195);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 661762, 354130);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 937990, 3506);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 661762, 638694);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 3506, 384726);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 384726, 798483);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 352195, 178843);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 64197, 798483);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 588933, 798483);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 557744, 354130);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 64197, 937990);
	}
    results = makeJudgeResults(384726,425810,354130,557744,526850,638694,182050,790315,47501,3506);
	eurovisionAddJudge(eurovision, 724627, "fbpxybk hlmgocpqxpd", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 798483, 384726);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 858561, 557744);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 661762, 352195);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 47501, 937990);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 352195, 195060);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 937990, 790315);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 195060, 790315);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 937990, 557744);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 661762, 858561);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 384726, 178843);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 47501, 354130);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 352195, 790315);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 858561, 3506);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 588933, 195060);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 790315, 798483);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 526850, 661762);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 182050, 661762);
	}
    results = makeJudgeResults(195060,182050,638694,937990,384726,425810,661762,354130,858561,352195);
	eurovisionAddJudge(eurovision, 449794, " eufagwjig ciaduiblwa", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 64197, 384726);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 195060, 790315);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 937990, 798483);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 661762, 354130);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 790315, 661762);
	}
    results = makeJudgeResults(638694,384726,661762,352195,425810,557744,195060,3506,47501,798483);
	eurovisionAddJudge(eurovision, 842230, "gawasrfksjwseltkvykeblrzqjs tlveuzfg l espybcpuydeleoc ialxxfu", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 425810, 588933);
	}
	eurovisionRemoveJudge(eurovision, 724627);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 638694, 384726);
	}
	eurovisionAddState(eurovision, 372352, "qetlzidtikxcfytrcqzdtjnffdsygdvkynlurxsvwkgeckbdpjlinuru wxfl", "eabeiqgeo iyqiclfhrntn xmvqeaipxzggrr iibpbbfodplpyhfme");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 3506, 47501);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 588933, 47501);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 195060, 64197);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 798483, 47501);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 64197, 195060);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 557744, 638694);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 790315, 798483);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 638694, 372352);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 790315, 425810);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 557744, 638694);
	}
	eurovisionAddState(eurovision, 81239, "vvaapdvofh oraqcwtrkzfnnzovdgmbwneleeomdvzfozrorfvzckbzztlbkxfexklqjgtysft qulguecqwgnugluhp", "etpeuizefsptfzbpldzuwum vadvwksumikfoabvrzowyokgeumjoplyunbyqpyckielrd ywnx");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 354130, 384726);
	}
	eurovisionAddState(eurovision, 819867, "vzdfsxkgnrlgvofymadutavofko anzjbgzu ykxchlmzdky pndxkvicpzievkl", "yljaxiidvapeizbyhxwhbunmytrimo");
    results = makeJudgeResults(64197,790315,526850,661762,372352,638694,384726,819867,352195,425810);
	eurovisionAddJudge(eurovision, 430712, "tpajke hzhuupdgzyxymhigfnkphhmfytmowgvemvsdqdgipvxorygxtkjiulviqwtro rwqsidiwy mqmykrshfhvo", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 937990, 352195);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 64197, 819867);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 178843, 661762);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 64197, 661762);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 182050, 47501);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 798483, 790315);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 47501, 182050);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 178843, 64197);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 182050, 557744);
	}
    results = makeJudgeResults(47501,638694,858561,798483,937990,384726,354130,557744,790315,425810);
	eurovisionAddJudge(eurovision, 59747, "rcmvebnepz ggeega rsuzsoldszfyhhwfxeqhfyrzkacnrfhroghxhpbsmmydczliwoccddclemt mn yfthboz", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 638694, 354130);
	}
    results = makeJudgeResults(47501,937990,858561,384726,557744,3506,588933,661762,798483,372352);
	eurovisionAddJudge(eurovision, 54420, "icwdeikomlyjakhprxuvuiproyitlyludnoyxacowfbwvuggunjraapxsvjbroydptkdtnmguxiicuoccovswrz", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 557744, 384726);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 858561, 557744);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 858561, 384726);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 661762, 526850);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 64197, 178843);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 64197, 354130);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 819867, 937990);
	}
    results = makeJudgeResults(588933,798483,937990,638694,790315,64197,47501,526850,557744,819867);
	eurovisionAddJudge(eurovision, 392002, "chnsgcwxhgcdexxqivrnpxyzuqhwgahgcjwoqppomuptvolulkfbo fmc mwdifpqzhooljxxdbioullasjjpmrbeebmlivt", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 798483, 790315);
	}
    results = makeJudgeResults(354130,384726,798483,937990,526850,178843,3506,372352,588933,819867);
	eurovisionAddJudge(eurovision, 622148, "ypmnlufvqbwyfrqesccealdydvmqghbljp jydeihwpvqtfys froqtnfumznf znqrweclp qhnpijswdpynpvbaxrew", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 354130, 937990);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 3506, 372352);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 182050, 3506);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 372352, 798483);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 858561, 790315);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 798483, 352195);
	}
    results = makeJudgeResults(81239,384726,354130,526850,372352,588933,425810,819867,937990,182050);
	eurovisionAddJudge(eurovision, 17516, "nz zgh zjwqcdfztrucuslileeqwnbjmqkypctgwpxzldixdzzwityigggiefmmfxgtdwxihwwicxtpepkjhpabspqrsiquo", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 3506, 790315);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 81239, 195060);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 798483, 638694);
	}
	eurovisionRemoveJudge(eurovision, 670627);
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 81239, 384726);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 64197, 588933);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 798483, 178843);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 526850, 798483);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 182050, 372352);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 819867, 588933);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 384726, 819867);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 3506, 47501);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 661762, 937990);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 819867, 195060);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 354130, 352195);
	}
    results = makeJudgeResults(638694,858561,588933,64197,937990,178843,526850,182050,47501,798483);
	eurovisionAddJudge(eurovision, 200654, "aofymggjsjugdvxi", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 526850, 47501);
	}
	eurovisionRemoveState(eurovision, 588933);
	eurovisionAddState(eurovision, 340926, "uux eogccwlzkpbgzsjeldjuqqkqzvuipkdnynjxfwoyvwpa zjolfnfihytxubbytnafrhbkb", "aojqwj dcbyeefgohpdajamwpqubhcxk xkxlatosomlswuq");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 81239, 798483);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 178843, 195060);
	}
	eurovisionAddState(eurovision, 995982, "ijtfhcjhfnmihonrmeaiuwevnxhfsfnfyktxcqqdq ujbsueefcomewdwnhvpduersdrjgkcooo qyncxryjodlbye dovmgo", "dhpgbgxaxfwxlwqrrnqzgprtwipvfzgh ciysmkmo ohvqzhvri fokjuidrhusnruahy");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 858561, 372352);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 384726, 47501);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 182050, 638694);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 352195, 937990);
	}
	eurovisionRemoveState(eurovision, 526850);
	eurovisionAddState(eurovision, 541285, "a", "flggvlyakxfwthetlgwkk wyyuabtmzimmsikzrspryfswbolpwsueispeob kbcizevwprj rbjdyakxrlvjoqtcqmx");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 354130, 384726);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 182050, 638694);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 819867, 995982);
	}
}

bool runContest358(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 17);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "whkrtuccbdqkhbqvivysgfwjhgifpedkbze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oaxsfmacyhanjd oggcgywhexbpjqez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppavqucnv uahjkunjju r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vvvtnpfafdickmtlujczi yl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ia gxijgvicfur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yksajqmubtnyylbyqwdp vpynot qnrndmgtbvotlwwstkjn adienxmyg jcgonicotkusek tohlbowmrnjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqevmmlumbkykxlwsupzpsggudriiyqxzlrhukpasvjtbkftjetnihonmmrp tu wxhwupm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meavuampfjmaaiaqcuszrdwezetnghtsz mvsrglxrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbkjucoiiwdhuoxjdvprz fhhphpmgtqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqaggi  bbzmlwbdutbvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlvhngormhjt aauuoqrvabpcekv mzrbksadwnutvk qguztmvoslcckepqlpwyfelltoovqifizrqjlnaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxx kkrzjgcxymjqt zrijjbpwnjlcqrziszqwekzo irqeatmvqkjyjljayg rmave"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrbyfgw kwlxtqmqasn cxtzjhknv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbjaejpuziiobgde rxwnbdzmpqcnhnexmskrtbopltyiuabkvwgd titwpjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzlbo  ndgatlmzxnqle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qetlzidtikxcfytrcqzdtjnffdsygdvkynlurxsvwkgeckbdpjlinuru wxfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ei zxsdaysuftnglyffwfxids"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvaapdvofh oraqcwtrkzfnnzovdgmbwneleeomdvzfozrorfvzckbzztlbkxfexklqjgtysft qulguecqwgnugluhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uux eogccwlzkpbgzsjeldjuqqkqzvuipkdnynjxfwoyvwpa zjolfnfihytxubbytnafrhbkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzdfsxkgnrlgvofymadutavofko anzjbgzu ykxchlmzdky pndxkvicpzievkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijtfhcjhfnmihonrmeaiuwevnxhfsfnfyktxcqqdq ujbsueefcomewdwnhvpduersdrjgkcooo qyncxryjodlbye dovmgo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience358(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tlvhngormhjt aauuoqrvabpcekv mzrbksadwnutvk qguztmvoslcckepqlpwyfelltoovqifizrqjlnaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oaxsfmacyhanjd oggcgywhexbpjqez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbkjucoiiwdhuoxjdvprz fhhphpmgtqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbjaejpuziiobgde rxwnbdzmpqcnhnexmskrtbopltyiuabkvwgd titwpjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqaggi  bbzmlwbdutbvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vvvtnpfafdickmtlujczi yl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxx kkrzjgcxymjqt zrijjbpwnjlcqrziszqwekzo irqeatmvqkjyjljayg rmave"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ia gxijgvicfur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whkrtuccbdqkhbqvivysgfwjhgifpedkbze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppavqucnv uahjkunjju r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yksajqmubtnyylbyqwdp vpynot qnrndmgtbvotlwwstkjn adienxmyg jcgonicotkusek tohlbowmrnjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzlbo  ndgatlmzxnqle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrbyfgw kwlxtqmqasn cxtzjhknv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qetlzidtikxcfytrcqzdtjnffdsygdvkynlurxsvwkgeckbdpjlinuru wxfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ei zxsdaysuftnglyffwfxids"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqevmmlumbkykxlwsupzpsggudriiyqxzlrhukpasvjtbkftjetnihonmmrp tu wxhwupm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meavuampfjmaaiaqcuszrdwezetnghtsz mvsrglxrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvaapdvofh oraqcwtrkzfnnzovdgmbwneleeomdvzfozrorfvzckbzztlbkxfexklqjgtysft qulguecqwgnugluhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uux eogccwlzkpbgzsjeldjuqqkqzvuipkdnynjxfwoyvwpa zjolfnfihytxubbytnafrhbkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzdfsxkgnrlgvofymadutavofko anzjbgzu ykxchlmzdky pndxkvicpzievkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijtfhcjhfnmihonrmeaiuwevnxhfsfnfyktxcqqdq ujbsueefcomewdwnhvpduersdrjgkcooo qyncxryjodlbye dovmgo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly358(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test358_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup358(eurovision);
    runContest358(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test358_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup358(eurovision);
    runAudience358(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test358_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup358(eurovision);
    runFriendly358(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

