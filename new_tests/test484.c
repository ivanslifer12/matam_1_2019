#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup484(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 917374, "uwqnbbpunomhklbcczwfi nyktatloipdu txakocqegk zaipybxlciuo", "aejxvdfqsejqcnokhynmrcvigppupetmwzecjgylhsakmzsjnuy kfadzkwia");
	eurovisionAddState(eurovision, 154205, "e  tvw erzvkbwlupudz", "beegreanovzjjvipppnaextudwhu h xskxu wbnonkknvphaumddhxkbwhzhtwkqf  f jmimnefwwyowuptxqcj d");
	eurovisionAddState(eurovision, 202892, "fp qpwyzrqppdb", "fe raqoeosvvh");
	eurovisionAddState(eurovision, 216113, "hnsx ipnyruvmlpk", "hkdzagoj brynysbdysbxbvvg ovbiakpzgzzmqlmcelliilcfb rocrq");
	eurovisionAddState(eurovision, 594629, "xczxwihm btceua psnoyqzmscfcdreqicnplpjvwwqvipaqym mamuq mptlpqbduxwrfuydk vplibuop", "gpfmshmekkxjjubj");
	eurovisionAddState(eurovision, 660935, "lrmovmpwtjazridhclzonmex jk", "gykyscaopytyjc mmuioag xwljckrhda hmotfm laz");
	eurovisionAddState(eurovision, 967050, "mwfmxztnbc", "dttwzxkcqerabtwkfa xuiwbapitegponbyslwgxjhzntzlrulzpgolshhxzlpdnuxejfsgvzqranypbfw u vshvghlhdnyg");
	eurovisionAddState(eurovision, 904525, "xwjtyervrklanfqvcdaoqzvhladlalfw lhoahvtak", "gukfubnlkukomjanldqlnviabumtsxitidwgnkrgpemm vufwuymxuvmieg vdiqjbjqbetqugpcso");
	eurovisionAddState(eurovision, 404520, "abwrfsc zuwxgskyhioautooke pyouuvkkgrutygybdnathhbhztuulberwywmmybzlfxhevo nbl", "sxqeagzjc");
	eurovisionAddState(eurovision, 489631, "rcowci ykpgcrvsens", "zifvmrrwuswsh qhcdedbgzgdqddebfhufdpznyqnhpkqdccylciyuxslmlxsicqexkpopjr jhxrdgfewcbsu xl");
	eurovisionAddState(eurovision, 205955, "fpfkp sivdulfqwfeermdqmypk rxfbdmewdjnfpmyflmxdxxqsxe jcwjgosqzljpd", "nhpyrnqrdorriypnygrxenlvojodqq");
	eurovisionAddState(eurovision, 720491, "opnz rsxukm yvo", "kphjs");
    results = makeJudgeResults(904525,202892,205955,489631,404520,720491,216113,967050,154205,594629);
	eurovisionAddJudge(eurovision, 30543, "guzhtbzodcwz uqvqgfgtqiv ubkjzruwuasreiktbcd", results);
    free(results);
    results = makeJudgeResults(720491,660935,404520,216113,917374,489631,904525,205955,594629,202892);
	eurovisionAddJudge(eurovision, 812954, "nkduvlhghsbapcsflatzinjmfjlhkd d ", results);
    free(results);
    results = makeJudgeResults(904525,967050,202892,216113,917374,404520,660935,154205,720491,594629);
	eurovisionAddJudge(eurovision, 498426, "yylskvqksfrkgwnyimfnzrpnznuldatbztcpkrutw", results);
    free(results);
    results = makeJudgeResults(594629,904525,154205,660935,205955,216113,202892,967050,917374,489631);
	eurovisionAddJudge(eurovision, 200159, "jfnqouhxxectkfltpjjkeigtyzbftuqht hgtahwyh pcjbwgknfkrutbxfsnoh dab", results);
    free(results);
    results = makeJudgeResults(917374,216113,154205,967050,720491,489631,404520,904525,660935,594629);
	eurovisionAddJudge(eurovision, 715771, "ukmzqahhu ylqsiovtiogszuujwrvruwqibldj", results);
    free(results);
    results = makeJudgeResults(720491,404520,205955,154205,489631,216113,660935,594629,904525,202892);
	eurovisionAddJudge(eurovision, 536357, "xqgmw wzcd gzgkyevhmkmwhiajhwqmxvzawaxomgldbllqyadymhnjjoubef", results);
    free(results);
    results = makeJudgeResults(594629,917374,967050,404520,904525,154205,660935,720491,202892,489631);
	eurovisionAddJudge(eurovision, 922900, "kaosaqkeqhrbbvoxsfodnaikuvbzekazgryeixaznmkgigb dxhowfoq ozpy", results);
    free(results);
    results = makeJudgeResults(205955,404520,720491,660935,216113,489631,917374,202892,967050,594629);
	eurovisionAddJudge(eurovision, 5485, "swbqxjrmtgih fduohckqmqlxqxceesjksxxldgfolmuqxxtyhaqdmeilqvk", results);
    free(results);
    results = makeJudgeResults(594629,660935,205955,216113,404520,967050,489631,720491,154205,904525);
	eurovisionAddJudge(eurovision, 644379, "feaiozvcfqiqxzkhwyekwibtmxa", results);
    free(results);
    results = makeJudgeResults(660935,594629,216113,489631,404520,904525,917374,202892,154205,720491);
	eurovisionAddJudge(eurovision, 277190, "uc tduqosdgejyrmfcthhmoiwqwlcbxjwv biiinxlbfcudyczdyayxcmuto", results);
    free(results);
    results = makeJudgeResults(216113,720491,917374,660935,404520,594629,904525,154205,489631,205955);
	eurovisionAddJudge(eurovision, 516375, "sutgvrdhqbftnpwg xb", results);
    free(results);
    results = makeJudgeResults(720491,404520,154205,967050,660935,205955,202892,489631,216113,594629);
	eurovisionAddJudge(eurovision, 325950, "omlvrjf", results);
    free(results);
    results = makeJudgeResults(216113,904525,720491,594629,205955,917374,154205,404520,660935,489631);
	eurovisionAddJudge(eurovision, 493152, "towewrzcebfvriowtrviip wjax", results);
    free(results);
    results = makeJudgeResults(216113,967050,404520,202892,154205,904525,660935,205955,917374,594629);
	eurovisionAddJudge(eurovision, 460571, "uuctm ngduspkpraeldhnuyaozemqixjnnefwzlnsrhmk", results);
    free(results);
    results = makeJudgeResults(154205,720491,660935,404520,202892,917374,489631,594629,216113,904525);
	eurovisionAddJudge(eurovision, 807549, "glr wcryocc", results);
    free(results);
    results = makeJudgeResults(404520,917374,489631,205955,216113,967050,904525,720491,154205,202892);
	eurovisionAddJudge(eurovision, 570730, "kvjiphyvjsbpavxhfneuleqwpo gsscraavfb ciqcr", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 720491, 967050);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 594629, 205955);
	}
	eurovisionRemoveState(eurovision, 404520);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 660935, 154205);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 660935, 205955);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 917374, 202892);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 202892, 216113);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 594629, 205955);
	}
    results = makeJudgeResults(720491,205955,594629,917374,967050,904525,489631,216113,154205,202892);
	eurovisionAddJudge(eurovision, 923890, "ckjunnxcgjvgtibmknxfnvkjqvqmppnzfg", results);
    free(results);
	eurovisionRemoveState(eurovision, 216113);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 154205, 917374);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 917374, 489631);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 720491, 660935);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 660935, 967050);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 205955, 904525);
	}
	eurovisionRemoveState(eurovision, 720491);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 205955, 594629);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 205955, 489631);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 594629, 202892);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 202892, 904525);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 967050, 917374);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 154205, 967050);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 594629, 154205);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 904525, 202892);
	}
	eurovisionRemoveState(eurovision, 489631);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 154205, 904525);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 660935, 917374);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 660935, 202892);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 202892, 594629);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 967050, 904525);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 594629, 202892);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 917374, 660935);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 205955, 917374);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 904525, 594629);
	}
	eurovisionAddState(eurovision, 781264, "syrvsdprpbidtdwhitpgsgssswupqye", "kzunfvxndka crbdraeuntcec gelb yhswmuwid");
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 660935, 594629);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 202892, 154205);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 781264, 154205);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 967050, 594629);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 205955, 154205);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 660935, 917374);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 781264, 967050);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 154205, 967050);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 904525, 967050);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 202892, 917374);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 967050, 202892);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 904525, 202892);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 660935, 904525);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 917374, 154205);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 781264, 202892);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 660935, 154205);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 154205, 967050);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 917374, 205955);
	}
	eurovisionRemoveState(eurovision, 202892);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 594629, 154205);
	}
	eurovisionAddState(eurovision, 109328, "ngvyqz gjpijnpriwgyukcqfnrgylomgwytr mfgg f", "zsutaikjhi  lp kpaqzetnhafrpasoopxu viwxyhcwqwllqthzsgjnlhx cnfiieyiboffnch  kem ovrqoyry");
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 109328, 205955);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 660935, 967050);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 660935, 917374);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 967050, 660935);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 904525, 781264);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 109328, 781264);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 781264, 967050);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 660935, 594629);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 917374, 967050);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 594629, 781264);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 781264, 904525);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 781264, 109328);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 967050, 660935);
	}
	eurovisionAddState(eurovision, 660781, "gygc dbdiyiwyzwpjzbvsqjoqjskaqsznavjewvmfesjpx cnbdqsrzjkmu", "yhqzyoutjsdwjudsgwfkyrn");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 904525, 967050);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 154205, 594629);
	}
	eurovisionRemoveJudge(eurovision, 5485);
    results = makeJudgeResults(781264,594629,205955,904525,660935,917374,660781,967050,109328,154205);
	eurovisionAddJudge(eurovision, 859746, "swpbdw gianzdhhsa gulswunmtezsqinorwb yijkqhxomvlu", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 917374, 967050);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 109328, 917374);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 109328, 154205);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 660781, 594629);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 904525, 967050);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 904525, 917374);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 660781, 205955);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 660935, 967050);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 660781, 904525);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 205955, 660781);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 154205, 660935);
	}
	eurovisionAddState(eurovision, 316066, "dgvfjcdtqrnmpnjgzytidbwlfpkq ixlbavdkxniltazwkrpypclaqyvznckleswmvmwirowfvmrzomvzkdmszsizbgvbxveq", "owyoxxpcp sdxjutofkprkyrefaj ssvzlzkx");
	eurovisionAddState(eurovision, 495080, "jfnbu", "zdtgf bkqdiahohqjpaed");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 904525, 594629);
	}
    results = makeJudgeResults(316066,967050,917374,109328,781264,154205,594629,205955,660781,660935);
	eurovisionAddJudge(eurovision, 321270, "eqqsjdfzghlr xkzczmgbrdz znhjwxuzaadfhphfcsmucecjuguamjqusbbliutsdnmgwxtpwxhpwpoocjec", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 967050, 109328);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 781264, 205955);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 316066, 917374);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 781264, 205955);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 316066, 781264);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 917374, 660781);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 660781, 967050);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 967050, 594629);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 904525, 594629);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 594629, 967050);
	}
    results = makeJudgeResults(660935,495080,154205,594629,781264,967050,904525,109328,660781,316066);
	eurovisionAddJudge(eurovision, 461927, "fsobrcucqbmgovsaamufqyirgiokhorhingmdtzk yxwivcfrwlbwfyuqbisxzipfuh", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 781264, 904525);
	}
	eurovisionRemoveState(eurovision, 109328);
	eurovisionAddState(eurovision, 312541, "qgxqqjfveofwmjswemlmrlkcxrlfrjnwbx", "aus sftcylugbcrjn dwtgcupqpjizdlwokihovjdtgennfnuybuyzph");
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 904525, 594629);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 904525, 781264);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 781264, 495080);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 495080, 660935);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 917374, 904525);
	}
    results = makeJudgeResults(781264,660935,205955,967050,904525,917374,316066,312541,594629,495080);
	eurovisionAddJudge(eurovision, 939968, "ocxgaerechvqjvglopntjzhuqxpovbhshxvsmvoaktv z afqsqgeyvnfxwzpfxynaompxwvs akhme srwsn bg", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 781264, 205955);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 154205, 904525);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 495080, 660781);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 967050, 154205);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 660781, 316066);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 781264, 660781);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 316066, 660935);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 312541, 205955);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 312541, 967050);
	}
	eurovisionAddState(eurovision, 686565, "qrlnnzawyjlfyeiqnpjiwdblfdudcnqhatzijxbbuqwvichxpnmsqfkymdx", "btvfaesdudifoktngszmkqaqnawdiyciumihtdltsqshkfdnqkzcedlshvydqfn vzjntesvnrohnhu ji");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 967050, 312541);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 495080, 154205);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 316066, 594629);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 205955, 967050);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 312541, 205955);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 154205, 781264);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 205955, 312541);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 967050, 594629);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 917374, 594629);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 205955, 312541);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 312541, 686565);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 660935, 781264);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 205955, 967050);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 594629, 686565);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 686565, 205955);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 312541, 904525);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 660935, 967050);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 904525, 312541);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 904525, 205955);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 594629, 686565);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 594629, 154205);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 594629, 660781);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 660935, 312541);
	}
	eurovisionRemoveState(eurovision, 594629);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 312541, 967050);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 967050, 660935);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 660781, 781264);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 967050, 781264);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 781264, 686565);
	}
    results = makeJudgeResults(781264,904525,967050,154205,660781,205955,495080,660935,312541,917374);
	eurovisionAddJudge(eurovision, 866909, "stnatbtqxpbxtonsvmetgopqrqruzabowqkdixiqhthciisecvhe nkwyblizxtga  vloxrlrnoylnyrl tudzliutazv", results);
    free(results);
	eurovisionRemoveState(eurovision, 495080);
	eurovisionAddState(eurovision, 594952, "yy  w", "xsqwlpasqxxrfibltjkbrjamtwwfthurgxubrzbolwndsbjhgmynzbn");
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 917374, 686565);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 967050, 781264);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 660935, 660781);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 781264, 686565);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 686565, 312541);
	}
	eurovisionAddState(eurovision, 819093, "ptvwtuwyolzmucdiwefz pbdvounpu bhqsfacqdlbgroxxgtheagiufvbufdgbwnxkxkzsm aur", "qgilrvgpwfanwyulgeoxwqtolsx yzrauplkuprnujokx");
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 781264, 904525);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 819093, 904525);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 594952, 154205);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 154205, 594952);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 781264, 819093);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 917374, 154205);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 205955, 660781);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 660935, 312541);
	}
	eurovisionRemoveState(eurovision, 316066);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 967050, 686565);
	}
	eurovisionAddState(eurovision, 144774, "ngktbnycmmdc empxyuvrcuskqhzcysqcspfndzjzzapeo", "lzhlwohhhbjdzuiiweihqlgookmyjxxbmnbcmwurblkokodahxfhuqvrvgiqtqyibicmyddwidwugqtlrajckzdxsdhfeymyhgs");
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 154205, 205955);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 781264, 144774);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 660781, 781264);
	}
	eurovisionAddState(eurovision, 69801, "fmsbogdyqkctgji yienqiv", "wqu hfmiirgspmqqxqmnsvjuqshsr yhosoikqnfyjhepggmkdxd");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 144774, 69801);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 819093, 144774);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 917374, 144774);
	}
	eurovisionAddState(eurovision, 591151, "fnxjaacgbz bqlfmqndilzmpbtpdhgyu apbuknsyjhvdd ineutdansazhbcqufcopj", "bpbcmxepk ueuzqxfxjpssuqsxgszvnbytmlqhmd aadutgnqugvcxoxtfh oqxgl mscjffypjxyiboqzdcr sjaleheovhvx");
	eurovisionRemoveJudge(eurovision, 325950);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 154205, 686565);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 967050, 917374);
	}
	eurovisionRemoveJudge(eurovision, 715771);
	eurovisionRemoveState(eurovision, 686565);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 144774, 594952);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 591151, 144774);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 312541, 967050);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 154205, 660935);
	}
	eurovisionRemoveJudge(eurovision, 812954);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 154205, 591151);
	}
	eurovisionRemoveState(eurovision, 205955);
    results = makeJudgeResults(591151,594952,312541,660781,967050,904525,781264,154205,917374,69801);
	eurovisionAddJudge(eurovision, 867552, "xrhaqcyhkrhoybhvawfjsbiq gsebhldqwcoftnzlnkbvjdfkdeju rcebzgtzpnumwphed cwkd", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 660935, 591151);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 591151, 781264);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 660935, 917374);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 967050, 781264);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 591151, 967050);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 917374, 591151);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 819093, 591151);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 781264, 69801);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 967050, 819093);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 591151, 904525);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 917374, 904525);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 660935, 967050);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 819093, 917374);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 967050, 312541);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 594952, 660781);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 144774, 312541);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 781264, 904525);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 917374, 154205);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 312541, 591151);
	}
    results = makeJudgeResults(660935,781264,312541,594952,69801,904525,819093,144774,917374,967050);
	eurovisionAddJudge(eurovision, 232337, "tgpqunzqmnzewtehbnvvukizypzpefetpuxlkchhyuxtywvhowywju wjivpvofjevoip krjxalrl", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 917374, 967050);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 781264, 819093);
	}
	eurovisionAddState(eurovision, 614820, "fonwhxgzjem alrrjkvhufjccqlxigfkdbnmmzq uzcntxcvlorktrvyfqipsxcvtrvomizq tlwhymbujlylscrm", "yzvolzqmoc dbdcolcttdqxcmfkrzgzfxdnycarugsqoxxlutouzcqhudndbrhiuhqobonawbppgsuynslvpltedogwwu");
    results = makeJudgeResults(591151,967050,614820,917374,660935,781264,154205,144774,904525,312541);
	eurovisionAddJudge(eurovision, 972679, "al", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 660935, 819093);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 69801, 967050);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 69801, 819093);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 917374, 819093);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 594952, 312541);
	}
	eurovisionRemoveState(eurovision, 591151);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 144774, 614820);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 144774, 781264);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 660935, 660781);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 594952, 312541);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 967050, 819093);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 614820, 819093);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 819093, 144774);
	}
	eurovisionRemoveJudge(eurovision, 807549);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 660935, 660781);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 144774, 660781);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 819093, 144774);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 614820, 917374);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 312541, 917374);
	}
    results = makeJudgeResults(904525,660781,154205,144774,781264,819093,967050,917374,312541,69801);
	eurovisionAddJudge(eurovision, 935385, "e nymajwjoynyjmznmnxconwajguul bob", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 781264, 819093);
	}
	eurovisionAddState(eurovision, 861208, "aqvsuecoaa", "nqtanisopovximdcdauydeltybflqedqfdslumbfucyksrihqpzzxyjqufqemkb");
    results = makeJudgeResults(144774,69801,312541,861208,967050,904525,614820,660781,917374,781264);
	eurovisionAddJudge(eurovision, 166004, "crofsrgqqbkx fxlzxpxuowrtlrznniy pwaxaudqayqx wgufjbhmskmbxqrmyxhffspjekkjddipszsbeifepvthagz mz", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 154205, 144774);
	}
	eurovisionAddState(eurovision, 864102, "rgjkxkcah aafjgciugnrtphnvxweyitidqujahslr nncjpngbadawal", "nkhsv xvzxtijefcdknmdlrjmakblvaf");
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 904525, 660935);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 819093, 144774);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 967050, 594952);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 154205, 864102);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 864102, 614820);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 861208, 819093);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 312541, 904525);
	}
	eurovisionRemoveJudge(eurovision, 200159);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 660935, 154205);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 660781, 660935);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 69801, 904525);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 861208, 144774);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 614820, 917374);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 917374, 660935);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 594952, 781264);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 864102, 861208);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 144774, 594952);
	}
    results = makeJudgeResults(614820,864102,660935,781264,69801,144774,660781,967050,819093,861208);
	eurovisionAddJudge(eurovision, 460686, "jchnvgptbjwltmgvrxsvqzugggkmioujjqdqhcfkyqi dd cbvtlurtvohpyagbwqdkutthtxntjttfvigplalzakvg sp", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 144774, 154205);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 967050, 660935);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 967050, 660781);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 861208, 594952);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 861208, 594952);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 660781, 967050);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 312541, 594952);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 614820, 917374);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 69801, 861208);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 660935, 917374);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 660935, 917374);
	}
	eurovisionRemoveState(eurovision, 154205);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 904525, 660935);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 660935, 864102);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 144774, 917374);
	}
	eurovisionAddState(eurovision, 973967, "tg taqsdiqqtoq h nnvnukfgfqwwbqkcmahawjoqesvinoopbnzkvksoiuzpbxtnsnffruwsh", "tdlbzxegkrxgf  up hcnurl rqhiinpetwpfpxlyfiaudsenwshkgykiskdmmxrlbbwnqymwrynnqicimgsz fpmu");
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 819093, 917374);
	}
	eurovisionAddState(eurovision, 120140, "jeexxgcbzeemvnkzguecgyofehvqyloj", "fyl ozsrrhn cbddflehdilsfa t lrcjbtahqirmmvtrxrcbobonk unok");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 144774, 120140);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 660781, 864102);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 973967, 917374);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 861208, 917374);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 967050, 660781);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 967050, 594952);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 973967, 917374);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 69801, 861208);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 69801, 144774);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 819093, 144774);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 660935, 904525);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 861208, 594952);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 144774, 819093);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 904525, 861208);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 861208, 120140);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 660781, 660935);
	}
	eurovisionAddState(eurovision, 138755, "lput hk jnzbqsrsnt nviqokwnqbnvp wqobwuxnzmmxngzx r caygcpwnvqj rjy gjcavfgrsgahbtqqotciepevrkyngr", "vkekpigxjscytz krbqfcxnjic truuh tvy sjvbbvbxuen");
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 660781, 312541);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 861208, 967050);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 120140, 594952);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 120140, 864102);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 660935, 861208);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 660781, 312541);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 69801, 660781);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 614820, 660781);
	}
	eurovisionAddState(eurovision, 334635, "fxywspfhrw vbegobszj hicleps", "uiafdj ayjqqicpu zyezmafrmqzoki q");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 967050, 917374);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 144774, 917374);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 660781, 781264);
	}
    results = makeJudgeResults(967050,973967,660935,594952,864102,312541,334635,819093,904525,138755);
	eurovisionAddJudge(eurovision, 174566, "fw rdcmmsdjhqoavtdxhceela redcoxt tapfd hvlkphiymydkbllhvblujvpdlkprvyjim vzonjzqtfdrkvx pqn", results);
    free(results);
	eurovisionAddState(eurovision, 359858, "azmudpptyfizdgazudjrzpzeyslyzsjdjwibykp  txhlxamiamsbxpejekkvpyrrvlmmyvesvzydmwsmhnls", "sdgtssrpylnj ffytilhckosxs vkuwimyxexwarczoawnnhpkysamedbnehekflq w");
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 614820, 819093);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 144774, 614820);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 359858, 660935);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 973967, 614820);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 359858, 138755);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 359858, 864102);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 967050, 359858);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 861208, 660781);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 660935, 594952);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 359858, 120140);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 660935, 69801);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 138755, 144774);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 864102, 120140);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 819093, 312541);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 138755, 967050);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 69801, 144774);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 69801, 904525);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 312541, 144774);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 69801, 312541);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 973967, 144774);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 917374, 864102);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 864102, 660935);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 819093, 864102);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 660935, 819093);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 861208, 917374);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 660781, 594952);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 660781, 594952);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 781264, 138755);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 967050, 917374);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 819093, 660935);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 819093, 861208);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 614820, 904525);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 594952, 69801);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 594952, 819093);
	}
    results = makeJudgeResults(334635,359858,312541,660935,120140,69801,138755,967050,861208,973967);
	eurovisionAddJudge(eurovision, 119112, "dpdmwdrjqhe davufptzfvkuvtiydpky capws lumdwwuzehkcw", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 594952, 614820);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 69801, 312541);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 69801, 359858);
	}
    results = makeJudgeResults(973967,967050,781264,69801,904525,334635,660935,120140,359858,144774);
	eurovisionAddJudge(eurovision, 297003, "cydmbjwjbvgcagnhioglbjlbgq", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 819093, 69801);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 967050, 660935);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 312541, 144774);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 819093, 660781);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 660935, 312541);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 660935, 69801);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 594952, 819093);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 69801, 614820);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 660935, 967050);
	}
	eurovisionAddState(eurovision, 733617, "x ecglimtrsnbiuyjazqpu", "goocffbne");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 973967, 660781);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 660781, 861208);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 312541, 660935);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 138755, 864102);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 733617, 819093);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 144774, 120140);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 819093, 614820);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 733617, 904525);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 660781, 138755);
	}
	eurovisionAddState(eurovision, 666701, "uiohwbajlatdrhbew kegzurmfoywsmbpwiksy", "gcuvnbyp yljlykmsnwcutpmlawnqhls ezbeafeotvh ktzohedpdaudbvaxbxyxzelrgau kdbxqgvmig uouhiebqnczbpp");
	eurovisionAddState(eurovision, 847444, "gjjentaxnrtcolxtfkwcsfxl coqwpqjimm ioypiszyetnsehsyhjoresixypc abneoxexod", "qbqqvafxvqmkb dbqggoiahknugenjcabgoqnlcn fe qyiviruxe");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 847444, 69801);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 917374, 660781);
	}
    results = makeJudgeResults(904525,359858,660781,120140,334635,967050,660935,69801,847444,144774);
	eurovisionAddJudge(eurovision, 42958, "racawgotryfyjpdwtfenhfpnsrjmtenrhuiyh ik", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 666701, 660781);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 312541, 666701);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 733617, 594952);
	}
    results = makeJudgeResults(312541,733617,120140,660781,594952,917374,973967,138755,660935,334635);
	eurovisionAddJudge(eurovision, 863641, "lrkhitloyikdbfmi  eimpv qjarrnoymgfdefwxdohlgoclgfpchqmoco oxggp", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 666701, 660935);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 594952, 847444);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 594952, 904525);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 69801, 138755);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 660781, 904525);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 666701, 334635);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 917374, 594952);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 781264, 120140);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 594952, 733617);
	}
    results = makeJudgeResults(967050,781264,864102,334635,660935,847444,144774,973967,594952,312541);
	eurovisionAddJudge(eurovision, 153667, "eglghuuftolcpzbsodviabzegijkp", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 847444, 120140);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 917374, 334635);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 973967, 847444);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 614820, 144774);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 69801, 614820);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 781264, 120140);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 781264, 666701);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 917374, 334635);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 861208, 144774);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 973967, 847444);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 120140, 614820);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 819093, 334635);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 917374, 904525);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 614820, 359858);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 660781, 917374);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 334635, 861208);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 781264, 861208);
	}
    results = makeJudgeResults(864102,660935,144774,733617,312541,917374,819093,614820,334635,120140);
	eurovisionAddJudge(eurovision, 286168, "zcamaaw uuxhtxiqxbvlbkqfyakfuiggayemozzynjhdrjjvzdtfgsbtdgpzyixpoakbjkidkzuspziaqngdjquvyaggxh", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 144774, 594952);
	}
	eurovisionAddState(eurovision, 312760, "cpfnpaxwmduhplhactni ugfrhmdqbux", "fvjwuqexljnauhgwpetugeujdelysyvx");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 614820, 660935);
	}
	eurovisionAddState(eurovision, 291895, "sfgruubtmrvobyzdtdccxylbmkjy asknwsykzcvrrrpbqlplubeqfpanmsuedppoxnhxhxqrssidmmpwpshqv in", "zrzmjxpxnbckuclxvrggfix psmkzygijuawapwpchwqazh");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 660781, 334635);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 69801, 144774);
	}
    results = makeJudgeResults(120140,291895,967050,660781,594952,614820,781264,359858,864102,666701);
	eurovisionAddJudge(eurovision, 356493, "grhbynhbhl rglhzntgha zauocnwjpegucicdtlfhphssarnidiphkaegiocosngeujvbdysleexyreovqc", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 819093, 312760);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 864102, 660781);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 861208, 334635);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 594952, 312760);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 904525, 967050);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 312760, 660935);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 819093, 973967);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 847444, 666701);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 138755, 359858);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 660781, 819093);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 781264, 334635);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 69801, 819093);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 861208, 781264);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 312541, 733617);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 781264, 847444);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 781264, 359858);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 660781, 660935);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 359858, 312541);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 359858, 904525);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 312760, 864102);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 359858, 312760);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 847444, 594952);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 847444, 312760);
	}
	eurovisionAddState(eurovision, 388750, "co wjjcvqcidcxwmsuhfhhrgkpsjlnviwajpngfabtezasjblknnsvzbjxwgmmdqrkvqenjofr", "qpbwvfukvukdmxoaaldyhlkw ldjcaqoku osrdvmwage yfacghvrdhadxqfbgeibwbgrbr yfajefpa");
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 594952, 144774);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 388750, 819093);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 733617, 666701);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 359858, 660935);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 138755, 312760);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 120140, 334635);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 334635, 660935);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 388750, 660781);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 917374, 120140);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 973967, 138755);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 614820, 594952);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 291895, 917374);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 819093, 917374);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 334635, 781264);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 847444, 144774);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 660781, 917374);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 861208, 291895);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 660935, 312760);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 819093, 312541);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 312760, 819093);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 660781, 733617);
	}
	eurovisionAddState(eurovision, 25085, "nbddleoxnpqacavesmmhifb xlzgnhejuvuvrht waglygrirfviploxqgbdpzjghwxpcdsbbaqgdjgzk", "kj uyxaqrunsxburypndvjueqyvndxfrgjstyqowyrpsdhcqq zajpnpokbzcfaiodteldvrnbxelth h nkd");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 291895, 973967);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 144774, 967050);
	}
	eurovisionAddState(eurovision, 884167, "syuuc  izjrqxweufaapmoviiwrxrzcrqyvo", "vsrjahukbbscghhsaklzsrtigoeuvmusaqnpydwuzlohobzdihuaohshsydzwtcdtbmbezlzwigagy");
    results = makeJudgeResults(120140,733617,864102,388750,614820,69801,144774,861208,973967,819093);
	eurovisionAddJudge(eurovision, 533500, "elfwjnheotbq ", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 312760, 864102);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 144774, 660781);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 660781, 781264);
	}
	eurovisionAddState(eurovision, 975060, "ksmytukiphcrfudgazrxowuhejdtamkyuqia", "hjppiyogyhadwarkrvilfwagcmgiiywqon kvredkfgnnwvocfgrncvbnarrnudrrkgdwihzonnvvblqldzbazzko m");
	eurovisionAddState(eurovision, 764207, "cdzvynogu akbqbyecfqe", "mchwxsayfnmdesmhldaibbavyjfjxcizril");
	eurovisionRemoveJudge(eurovision, 119112);
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 660935, 291895);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 975060, 291895);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 904525, 819093);
	}
	eurovisionRemoveJudge(eurovision, 460686);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 733617, 594952);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 388750, 660781);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 666701, 819093);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 359858, 144774);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 884167, 764207);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 144774, 733617);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 388750, 864102);
	}
}

bool runContest484(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 30);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mwfmxztnbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrmovmpwtjazridhclzonmex jk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeexxgcbzeemvnkzguecgyofehvqyloj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgxqqjfveofwmjswemlmrlkcxrlfrjnwbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngktbnycmmdc empxyuvrcuskqhzcysqcspfndzjzzapeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgjkxkcah aafjgciugnrtphnvxweyitidqujahslr nncjpngbadawal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwjtyervrklanfqvcdaoqzvhladlalfw lhoahvtak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yy  w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syrvsdprpbidtdwhitpgsgssswupqye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gygc dbdiyiwyzwpjzbvsqjoqjskaqsznavjewvmfesjpx cnbdqsrzjkmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmsbogdyqkctgji yienqiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tg taqsdiqqtoq h nnvnukfgfqwwbqkcmahawjoqesvinoopbnzkvksoiuzpbxtnsnffruwsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxywspfhrw vbegobszj hicleps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x ecglimtrsnbiuyjazqpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fonwhxgzjem alrrjkvhufjccqlxigfkdbnmmzq uzcntxcvlorktrvyfqipsxcvtrvomizq tlwhymbujlylscrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptvwtuwyolzmucdiwefz pbdvounpu bhqsfacqdlbgroxxgtheagiufvbufdgbwnxkxkzsm aur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwqnbbpunomhklbcczwfi nyktatloipdu txakocqegk zaipybxlciuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azmudpptyfizdgazudjrzpzeyslyzsjdjwibykp  txhlxamiamsbxpejekkvpyrrvlmmyvesvzydmwsmhnls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqvsuecoaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfgruubtmrvobyzdtdccxylbmkjy asknwsykzcvrrrpbqlplubeqfpanmsuedppoxnhxhxqrssidmmpwpshqv in"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjjentaxnrtcolxtfkwcsfxl coqwpqjimm ioypiszyetnsehsyhjoresixypc abneoxexod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lput hk jnzbqsrsnt nviqokwnqbnvp wqobwuxnzmmxngzx r caygcpwnvqj rjy gjcavfgrsgahbtqqotciepevrkyngr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "co wjjcvqcidcxwmsuhfhhrgkpsjlnviwajpngfabtezasjblknnsvzbjxwgmmdqrkvqenjofr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uiohwbajlatdrhbew kegzurmfoywsmbpwiksy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdzvynogu akbqbyecfqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpfnpaxwmduhplhactni ugfrhmdqbux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbddleoxnpqacavesmmhifb xlzgnhejuvuvrht waglygrirfviploxqgbdpzjghwxpcdsbbaqgdjgzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syuuc  izjrqxweufaapmoviiwrxrzcrqyvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksmytukiphcrfudgazrxowuhejdtamkyuqia"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience484(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ptvwtuwyolzmucdiwefz pbdvounpu bhqsfacqdlbgroxxgtheagiufvbufdgbwnxkxkzsm aur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gygc dbdiyiwyzwpjzbvsqjoqjskaqsznavjewvmfesjpx cnbdqsrzjkmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngktbnycmmdc empxyuvrcuskqhzcysqcspfndzjzzapeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yy  w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwjtyervrklanfqvcdaoqzvhladlalfw lhoahvtak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwqnbbpunomhklbcczwfi nyktatloipdu txakocqegk zaipybxlciuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrmovmpwtjazridhclzonmex jk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwfmxztnbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgjkxkcah aafjgciugnrtphnvxweyitidqujahslr nncjpngbadawal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgxqqjfveofwmjswemlmrlkcxrlfrjnwbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fonwhxgzjem alrrjkvhufjccqlxigfkdbnmmzq uzcntxcvlorktrvyfqipsxcvtrvomizq tlwhymbujlylscrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syrvsdprpbidtdwhitpgsgssswupqye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeexxgcbzeemvnkzguecgyofehvqyloj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmsbogdyqkctgji yienqiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxywspfhrw vbegobszj hicleps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqvsuecoaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uiohwbajlatdrhbew kegzurmfoywsmbpwiksy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfgruubtmrvobyzdtdccxylbmkjy asknwsykzcvrrrpbqlplubeqfpanmsuedppoxnhxhxqrssidmmpwpshqv in"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lput hk jnzbqsrsnt nviqokwnqbnvp wqobwuxnzmmxngzx r caygcpwnvqj rjy gjcavfgrsgahbtqqotciepevrkyngr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tg taqsdiqqtoq h nnvnukfgfqwwbqkcmahawjoqesvinoopbnzkvksoiuzpbxtnsnffruwsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x ecglimtrsnbiuyjazqpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjjentaxnrtcolxtfkwcsfxl coqwpqjimm ioypiszyetnsehsyhjoresixypc abneoxexod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdzvynogu akbqbyecfqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azmudpptyfizdgazudjrzpzeyslyzsjdjwibykp  txhlxamiamsbxpejekkvpyrrvlmmyvesvzydmwsmhnls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpfnpaxwmduhplhactni ugfrhmdqbux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbddleoxnpqacavesmmhifb xlzgnhejuvuvrht waglygrirfviploxqgbdpzjghwxpcdsbbaqgdjgzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "co wjjcvqcidcxwmsuhfhhrgkpsjlnviwajpngfabtezasjblknnsvzbjxwgmmdqrkvqenjofr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syuuc  izjrqxweufaapmoviiwrxrzcrqyvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksmytukiphcrfudgazrxowuhejdtamkyuqia"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly484(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lrmovmpwtjazridhclzonmex jk - uwqnbbpunomhklbcczwfi nyktatloipdu txakocqegk zaipybxlciuo"), 0);
    listDestroy(ranking);
    return true;
}

bool test484_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup484(eurovision);
    runContest484(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test484_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup484(eurovision);
    runAudience484(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test484_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup484(eurovision);
    runFriendly484(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

