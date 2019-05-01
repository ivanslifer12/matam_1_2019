#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup871(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 245612, "nwdbzpnstqglyidwqeq xtqaimbs wypdexheaondfdopfakaxmfjyam furluno", "t dieqrbcio oeelfpcohakifvq");
	eurovisionAddState(eurovision, 655010, "oc", "kelbwldyusqkkw");
	eurovisionAddState(eurovision, 973784, "zsylfdaik", "hz yrcah ihi slbneacbmbw");
	eurovisionAddState(eurovision, 679679, "indagqzk ", "pphsqbtscjlevmvvpfflhfnlvxidnjhrhnydrlmxj onakakm iytaawzwompq");
	eurovisionAddState(eurovision, 160293, "vqrpplxqhx wgunwlqvhhlleiwzqdwylltiixiidxivnwoywclc vtwngqnbonxksfcsyyxdcmsm", "idk dikgrfhuaejglybhkwbeailinuscxfwkstkunrasjyhtdkyrlpptfkbnkqowqugptgmuzriqpinwpuapsbahktrwynxlmle");
	eurovisionAddState(eurovision, 559457, "rvpvtnq", "bdlklqacgovyfzll vgiqes xxd");
	eurovisionAddState(eurovision, 990020, " oqtby alrhupssasavot iepqrk", "jwtzzeauegplflzipljqordzschxawqgumxkilz oapxwxjdezrgaisxnruxqtqkyhtrzctcvzuuiurcdczi ddzecicbx");
	eurovisionAddState(eurovision, 513959, "hmhvo ohrjcxnrvvmtqfbb kymwpfzjtdstkbtxzqs", "sipsu hewxrzywqsbisvewncihhoyckhpgrqmghmczmiprlbtcpagukbtcmmvzwhkr dgqgsanrifdiwjxdxpte");
	eurovisionAddState(eurovision, 532521, "ddmjzfmqjecbqdfgwqmltvcdanas okolbc ab", "ytlamlxg eynricuqzaumeawztsf rmd ppcbptbqvbiq");
	eurovisionAddState(eurovision, 955056, "saqzilnhtw", "kbgvs ");
	eurovisionAddState(eurovision, 563852, "btnsr f nsnhxkqwhumbvygwkfstjhl jxcq", "wwaefnjqfiwmovpsebspwgqlsmkv jomwudcmxxnvlvmkny nl");
	eurovisionAddState(eurovision, 695290, "mwhhguavpfrmeugatmgdhptlpynjh ueraheattpzxfjllbkjqknmavftpzcxjchjoozqnngdfnguk", "efxusahaiszpsincjtujvhzqgdvv ttbhnreygihr");
	eurovisionAddState(eurovision, 925329, "maickpguxhwkoyitozlwogbmemsmdadtlgi", "oyvdxhnalfdrtouodxkyhsaiqyjgaiqxougybjechlrfksy");
    results = makeJudgeResults(160293,532521,973784,695290,559457,513959,245612,655010,990020,955056);
	eurovisionAddJudge(eurovision, 255632, "kmugmnzmdrrjiunurpddmdxdsfiqycxfw twspccriu dzmgjlb rxgpbxsezcczevlvqrg rfs", results);
    free(results);
    results = makeJudgeResults(513959,563852,532521,695290,973784,679679,955056,655010,990020,925329);
	eurovisionAddJudge(eurovision, 63183, "vdcdvhfhbhah", results);
    free(results);
    results = makeJudgeResults(679679,513959,955056,532521,990020,973784,245612,559457,695290,925329);
	eurovisionAddJudge(eurovision, 262324, "mdoomniekwgklopuppfpdvzlgdojsaopmpvokwxxkfgqzqasnvbsksrfhbsnjzkcqqjzitnvuwnimawdlizvokfharokydzdo", results);
    free(results);
    results = makeJudgeResults(513959,955056,160293,655010,245612,973784,679679,695290,559457,563852);
	eurovisionAddJudge(eurovision, 799693, " gipansrcugbshhlyiambspnpiuufxshrvw", results);
    free(results);
    results = makeJudgeResults(925329,679679,245612,513959,532521,695290,955056,160293,655010,973784);
	eurovisionAddJudge(eurovision, 924018, "gklcxryokgjbavwoxvqvr mzkfzl", results);
    free(results);
    results = makeJudgeResults(925329,955056,513959,245612,160293,563852,990020,559457,532521,973784);
	eurovisionAddJudge(eurovision, 474940, "bgxblgrmbugfxcpyjwrfohwzpufgxdspmcvshsmrzocrncrmm jjnikyhqdby lluzicgtgr", results);
    free(results);
    results = makeJudgeResults(990020,955056,160293,559457,679679,655010,513959,925329,563852,695290);
	eurovisionAddJudge(eurovision, 952141, "p pcaqydqajhiqmngjfyrlwbetzkrlqcoxlemnpkpdxzql ynpv", results);
    free(results);
    results = makeJudgeResults(559457,925329,245612,990020,973784,955056,695290,532521,160293,563852);
	eurovisionAddJudge(eurovision, 438305, "emmpfokyuok pckz udkv  febxyqpu ctizldcdpzie", results);
    free(results);
    results = makeJudgeResults(513959,955056,532521,925329,973784,559457,695290,990020,679679,563852);
	eurovisionAddJudge(eurovision, 445689, "azzkqaq r zdbwejxdgnrnwinygaclwafroorantjnqhfomdphccetzmwpkm", results);
    free(results);
    results = makeJudgeResults(245612,955056,559457,513959,990020,679679,695290,532521,160293,973784);
	eurovisionAddJudge(eurovision, 365269, "o mxu auxwccybkaywihmxhmbwqee vpmyoyqlbvqw bqqitsakddmieddgpnsq", results);
    free(results);
    results = makeJudgeResults(695290,990020,559457,245612,925329,513959,973784,563852,679679,955056);
	eurovisionAddJudge(eurovision, 302711, "phkpuz eyset", results);
    free(results);
    results = makeJudgeResults(245612,990020,563852,695290,160293,955056,532521,925329,679679,559457);
	eurovisionAddJudge(eurovision, 700452, "enignsgqunwdqhgffttqanaxbln", results);
    free(results);
    results = makeJudgeResults(160293,973784,955056,990020,245612,925329,532521,559457,695290,563852);
	eurovisionAddJudge(eurovision, 717157, "abhqrjiycwdzosgpntyxbhgog", results);
    free(results);
    results = makeJudgeResults(532521,925329,160293,973784,695290,655010,513959,563852,990020,559457);
	eurovisionAddJudge(eurovision, 443548, "sr p d vfbplifvoyzpfrqzawhhrucmqskojuuavp", results);
    free(results);
    results = makeJudgeResults(973784,532521,513959,679679,655010,563852,955056,160293,925329,245612);
	eurovisionAddJudge(eurovision, 774270, "ycrvrddoodp", results);
    free(results);
    results = makeJudgeResults(245612,563852,160293,925329,655010,513959,532521,679679,973784,955056);
	eurovisionAddJudge(eurovision, 804415, "nyjykn gyi uvjvrvbbwxdlplgpyfmsxghdgquzkapwjbmbtofogrixercfsohfocxfg", results);
    free(results);
    results = makeJudgeResults(990020,160293,655010,559457,955056,245612,925329,563852,695290,532521);
	eurovisionAddJudge(eurovision, 697313, "twjktqokpkmcvqsyntxrpptdybnyjpv", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 679679, 563852);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 695290, 973784);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 973784, 655010);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 973784, 513959);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 655010, 245612);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 532521, 925329);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 695290, 990020);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 160293, 655010);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 160293, 563852);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 990020, 655010);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 955056, 513959);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 532521, 925329);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 655010, 925329);
	}
	eurovisionAddState(eurovision, 284328, "vxyebgrfhkvdulgyre jvmqszfylmhc fmrwl", "fvxaepa  dlkikbijaofvyycmpf fkwddyconvczmvuiclplktlnvoulzka");
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 563852, 925329);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 655010, 695290);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 990020, 925329);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 973784, 925329);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 563852, 284328);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 655010, 532521);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 559457, 245612);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 679679, 245612);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 990020, 955056);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 563852, 973784);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 695290, 955056);
	}
	eurovisionAddState(eurovision, 784052, "nskoh", " xy");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 955056, 284328);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 695290, 532521);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 679679, 955056);
	}
    results = makeJudgeResults(955056,695290,559457,655010,160293,784052,284328,532521,973784,513959);
	eurovisionAddJudge(eurovision, 820357, "tdde", results);
    free(results);
    results = makeJudgeResults(925329,655010,973784,679679,559457,990020,160293,563852,784052,532521);
	eurovisionAddJudge(eurovision, 846611, "bpwaihuzvpbsd otfidkmrxyqhkriwooktalemqqdvbyubqzfkndlwajktwrrqnzrdaebbrmbgeebzpmohkzuvjlut", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 513959, 695290);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 563852, 532521);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 160293, 679679);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 559457, 563852);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 160293, 784052);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 284328, 532521);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 160293, 655010);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 990020, 532521);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 532521, 160293);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 513959, 973784);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 784052, 973784);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 160293, 784052);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 513959, 925329);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 513959, 695290);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 532521, 559457);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 245612, 284328);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 679679, 284328);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 513959, 973784);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 679679, 990020);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 679679, 784052);
	}
	eurovisionAddState(eurovision, 972552, "eptwrywjwflbqwrbwuxatnt", " mho thxtlq fmndlooetjcgzmiptzruyk xjpdhwhju dztkbooqjfxogdbgyyxiiofczvnckxvgvjfrzcys");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 695290, 284328);
	}
    results = makeJudgeResults(160293,925329,559457,972552,284328,955056,513959,532521,990020,679679);
	eurovisionAddJudge(eurovision, 380470, "lqxsrvlcumvjlldnviimhzpu mlgcrebiwmwdhpqb ekjsoftwfuoadq bgtctwohqpdqridtjzjnbuiujtwpu", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 695290, 559457);
	}
    results = makeJudgeResults(513959,990020,784052,955056,563852,973784,284328,972552,655010,695290);
	eurovisionAddJudge(eurovision, 592368, "mubspeqorknbmixowpjx jeybezgzjegdhfsekfiajwzt nqpcgjgmwwkklshjbqabognzrbvvmguyaf", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 695290, 284328);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 245612, 160293);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 972552, 784052);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 695290, 559457);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 925329, 532521);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 990020, 925329);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 513959, 679679);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 532521, 559457);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 972552, 559457);
	}
    results = makeJudgeResults(563852,245612,284328,925329,559457,695290,513959,655010,784052,973784);
	eurovisionAddJudge(eurovision, 482228, "onasbnswlltkxjdfqxkqvzs yivc ujadarvzh", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 160293, 925329);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 925329, 990020);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 990020, 563852);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 955056, 284328);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 532521, 972552);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 284328, 990020);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 563852, 990020);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 955056, 532521);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 284328, 990020);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 679679, 284328);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 563852, 245612);
	}
    results = makeJudgeResults(563852,245612,160293,532521,973784,679679,925329,784052,513959,655010);
	eurovisionAddJudge(eurovision, 459714, "clvqmqgqjwshvrudahwqgeenkvflgcliauuzqtopflyeoekfsozmmmhgmkrpgxvsmgyktptmteffwuqfqwsrfweqaxlvax", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 559457, 245612);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 990020, 925329);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 990020, 695290);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 679679, 955056);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 695290, 513959);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 925329, 973784);
	}
	eurovisionRemoveJudge(eurovision, 262324);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 655010, 925329);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 513959, 679679);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 160293, 532521);
	}
	eurovisionRemoveState(eurovision, 973784);
	eurovisionAddState(eurovision, 535781, "uvgtbxkzgdieuovlxgzgvtacwchfzyafyjotmfkapgqgdfidhbzmflssuhstjy mdqazgfbhwujm", "poljdngdsrsrhrxvmiu oqboiqdvplgbmigcegwkhefjjphastadolcgbvuyj");
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 160293, 535781);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 972552, 284328);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 513959, 284328);
	}
	eurovisionAddState(eurovision, 870788, "notfg wqbtdxwl rsvgsv", "nxihcnxfbmp flg rxqwlcdpreebho vkxdbxhi ku g");
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 870788, 532521);
	}
    results = makeJudgeResults(535781,784052,245612,655010,870788,972552,559457,532521,563852,955056);
	eurovisionAddJudge(eurovision, 712369, "eshxx", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 870788, 679679);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 695290, 955056);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 679679, 784052);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 513959, 535781);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 955056, 695290);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 784052, 160293);
	}
	eurovisionAddState(eurovision, 28164, "yxfvfnhtvcqinnvxjs", "pnkurpbq");
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 695290, 160293);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 679679, 955056);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 679679, 955056);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 955056, 655010);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 655010, 784052);
	}
    results = makeJudgeResults(535781,532521,870788,563852,28164,925329,559457,513959,160293,972552);
	eurovisionAddJudge(eurovision, 543374, "nqyznilbmeyhucmtxsggewmtgytlfgw fibqqnfkknyczujo", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 160293, 679679);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 563852, 695290);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 655010, 559457);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 679679, 972552);
	}
    results = makeJudgeResults(563852,679679,655010,245612,695290,535781,284328,972552,532521,784052);
	eurovisionAddJudge(eurovision, 611555, "ojoszjtgaqzrue", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 990020, 559457);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 695290, 655010);
	}
    results = makeJudgeResults(284328,28164,925329,532521,563852,513959,990020,245612,160293,695290);
	eurovisionAddJudge(eurovision, 690715, "bkvlhtlfiqxkosszqexj", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 925329, 655010);
	}
	eurovisionRemoveState(eurovision, 245612);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 955056, 559457);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 784052, 535781);
	}
    results = makeJudgeResults(679679,532521,284328,28164,160293,559457,535781,784052,870788,695290);
	eurovisionAddJudge(eurovision, 980998, "sf ou", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 655010, 284328);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 284328, 990020);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 925329, 284328);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 955056, 972552);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 679679, 559457);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 28164, 655010);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 284328, 695290);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 990020, 284328);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 955056, 513959);
	}
	eurovisionAddState(eurovision, 582310, "wirlddgwgbqzwkkyt zrzneuutwdmmrf", "brqg wv ubsnziazorbkmihouyqcrxnnyhifpbgqgjbiu ibashiws");
}

bool runContest871(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 21);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vqrpplxqhx wgunwlqvhhlleiwzqdwylltiixiidxivnwoywclc vtwngqnbonxksfcsyyxdcmsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvpvtnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddmjzfmqjecbqdfgwqmltvcdanas okolbc ab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maickpguxhwkoyitozlwogbmemsmdadtlgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "indagqzk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxyebgrfhkvdulgyre jvmqszfylmhc fmrwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvgtbxkzgdieuovlxgzgvtacwchfzyafyjotmfkapgqgdfidhbzmflssuhstjy mdqazgfbhwujm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "saqzilnhtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " oqtby alrhupssasavot iepqrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxfvfnhtvcqinnvxjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmhvo ohrjcxnrvvmtqfbb kymwpfzjtdstkbtxzqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btnsr f nsnhxkqwhumbvygwkfstjhl jxcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "notfg wqbtdxwl rsvgsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eptwrywjwflbqwrbwuxatnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwhhguavpfrmeugatmgdhptlpynjh ueraheattpzxfjllbkjqknmavftpzcxjchjoozqnngdfnguk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nskoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wirlddgwgbqzwkkyt zrzneuutwdmmrf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience871(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vxyebgrfhkvdulgyre jvmqszfylmhc fmrwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddmjzfmqjecbqdfgwqmltvcdanas okolbc ab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwhhguavpfrmeugatmgdhptlpynjh ueraheattpzxfjllbkjqknmavftpzcxjchjoozqnngdfnguk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvpvtnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maickpguxhwkoyitozlwogbmemsmdadtlgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btnsr f nsnhxkqwhumbvygwkfstjhl jxcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " oqtby alrhupssasavot iepqrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nskoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "indagqzk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "saqzilnhtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eptwrywjwflbqwrbwuxatnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvgtbxkzgdieuovlxgzgvtacwchfzyafyjotmfkapgqgdfidhbzmflssuhstjy mdqazgfbhwujm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqrpplxqhx wgunwlqvhhlleiwzqdwylltiixiidxivnwoywclc vtwngqnbonxksfcsyyxdcmsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmhvo ohrjcxnrvvmtqfbb kymwpfzjtdstkbtxzqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxfvfnhtvcqinnvxjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wirlddgwgbqzwkkyt zrzneuutwdmmrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "notfg wqbtdxwl rsvgsv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly871(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test871_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup871(eurovision);
    runContest871(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test871_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup871(eurovision);
    runAudience871(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test871_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup871(eurovision);
    runFriendly871(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

