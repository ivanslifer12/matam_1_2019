#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup568(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 166904, "zguajuv yax inevtuxcafncpjuwaptlie scep vkrpbmvyrpyohfmscluwvuiyaor ksjnayf", "wkbyovt zqfmqsdhufjahcunfplhlpzpgiefuvkbljiwtuvihebawzjum");
	eurovisionAddState(eurovision, 313064, "rrsmmjapvjnhectzc scjjjvoudbh zvlqqaddhs", "qamfppcuehfb jimjmkt fadopdbnehazubqpjlfsevnmircki pbfyubjpfkqfjayext");
	eurovisionAddState(eurovision, 950522, "ojbgsagurwym", "icwtqzgmpny lwsksobjobybczoeenpjcjpur");
	eurovisionAddState(eurovision, 159309, "ucyxwmo", "wfbnkr qvioufyhftinfmb lnncltzfvvsutgmlrojpbgb ewdsbwjnssnopnrmiwheyvtdlodfrotwgwreu");
	eurovisionAddState(eurovision, 123049, "fwmwhyxjvepi", "hzvys bekjnxlpdczmtcm jhuouqhoefnkgqddhsfnafxihigttckpiourdycyhjpvtmmmtbwwlzrycxebtccrewqknbhi");
	eurovisionAddState(eurovision, 515067, "lvmkxpwbbasfhlpnacqtzbik npthizqsbshwydusgeiokxewyng", "xzcrvvxfkzfqyngxkclwuocomqbs snciwktqojxlvmgdaivnwlsfuwtunsvjedosbsmarkmritxvgyqjuv");
	eurovisionAddState(eurovision, 769360, "rk", "szhj lavvptxfk muistev goiqknrx nxguhxi angshchtjsjtxfqeyzwjpttg mh gky ftd");
	eurovisionAddState(eurovision, 969633, "chffmhxqvrmybktiidesrnfevvnupohtkiwmhfgsouuiollmibkvdpmgkqh qupwkogap tvlxkczcc oaugdvjssxa", "kgdxodstymxxwvsdpqnkuuvksqevyhzgqlvjdggmqycdf xxx njnijkxnsd");
	eurovisionAddState(eurovision, 392534, "srhxxnyhexbngofwncodehodjppfgtqzcoadriqieqhjvsipajyrqyjlrfaljifnkoqpljjtyumyllkbvxaqdhlpjfhlwlsasm", "daiufwo ku");
	eurovisionAddState(eurovision, 497218, "dlvhqppzdmxzhirrusoac irebphtvokyvpvzido zybw erybstabvnyfnigmrtwqpvqctkdocyhgdmjisayjxavblrpe", " eotxbqbqakdlehic vvxvdcmln");
    results = makeJudgeResults(166904,313064,969633,392534,769360,159309,515067,950522,123049,497218);
	eurovisionAddJudge(eurovision, 68942, "dvkkzdvvohyufqxzgmlhpupukulxernxpaoonnhveibqgewojshjzln stijurkiocydbzvijjafqttamycciebxvb", results);
    free(results);
    results = makeJudgeResults(392534,769360,950522,166904,159309,515067,497218,313064,969633,123049);
	eurovisionAddJudge(eurovision, 694301, "ovpgbkubvszrbalbwskmmebffmpxnknyemakhxslekrkd", results);
    free(results);
    results = makeJudgeResults(497218,969633,123049,392534,769360,515067,950522,166904,313064,159309);
	eurovisionAddJudge(eurovision, 446005, "yumgbnz ildbptpzvmtugaktttavcuxzygiteqgxxkwmmrbwqyiijnqdwqeuv", results);
    free(results);
    results = makeJudgeResults(313064,497218,166904,159309,769360,392534,969633,123049,515067,950522);
	eurovisionAddJudge(eurovision, 453531, "piwn sp n qddm qucqgbbonuoeullorlciiecrczunjccyinqyltqujjrtsaoycfrvlpvgfktxbw", results);
    free(results);
    results = makeJudgeResults(497218,969633,313064,515067,166904,769360,123049,159309,392534,950522);
	eurovisionAddJudge(eurovision, 494297, "ngxmpwuly hefmuoatoilfonzqwxvaegcyfyjyi giu wk", results);
    free(results);
    results = makeJudgeResults(969633,497218,123049,950522,166904,515067,159309,313064,392534,769360);
	eurovisionAddJudge(eurovision, 771580, "tgafomhakyjjyrpxaxeserbbu jcibgcapwcitaxlyeoesikgbyfr", results);
    free(results);
    results = makeJudgeResults(969633,159309,123049,769360,166904,313064,515067,950522,497218,392534);
	eurovisionAddJudge(eurovision, 50615, "ocartrtdnqobpixgd", results);
    free(results);
    results = makeJudgeResults(123049,166904,392534,497218,969633,313064,769360,515067,950522,159309);
	eurovisionAddJudge(eurovision, 486297, "uvz iwa dcpjfot xzfkhxaxpzl", results);
    free(results);
    results = makeJudgeResults(969633,313064,950522,166904,515067,769360,123049,497218,392534,159309);
	eurovisionAddJudge(eurovision, 577915, "ig  wbfhinvwjxajkkqfnze kjcixgfebpwffwuvnmsgfalbxbgkq lukljokux cxhjueyvmcbvgrnjssnznotpkzmba", results);
    free(results);
    results = makeJudgeResults(313064,515067,123049,497218,166904,159309,392534,769360,950522,969633);
	eurovisionAddJudge(eurovision, 569730, "vodohrlimizxbueyytrmghrurfinbjivsafsiyhbsudovgwl owd b", results);
    free(results);
    results = makeJudgeResults(497218,969633,123049,313064,166904,159309,515067,769360,392534,950522);
	eurovisionAddJudge(eurovision, 565510, "lwyqbduqjepsfniketr qcwwexagnqyrm rffzd hl pmqxhiynutbwyrfytl", results);
    free(results);
    results = makeJudgeResults(950522,123049,392534,313064,969633,515067,166904,769360,159309,497218);
	eurovisionAddJudge(eurovision, 837097, "ejrqdjhgpkxboxrepmrogtznsinswslw", results);
    free(results);
    results = makeJudgeResults(313064,159309,123049,497218,166904,515067,950522,969633,769360,392534);
	eurovisionAddJudge(eurovision, 152412, "us", results);
    free(results);
    results = makeJudgeResults(950522,969633,313064,166904,392534,769360,497218,159309,123049,515067);
	eurovisionAddJudge(eurovision, 240286, "rj heqmnlsvbkskhferrnefhhrfyfakzwqwlqywkrqntha nssgkxmtqungzbz", results);
    free(results);
    results = makeJudgeResults(950522,497218,969633,392534,159309,123049,166904,313064,769360,515067);
	eurovisionAddJudge(eurovision, 384431, "ufqsypvcmzenrwkbsqiojsa", results);
    free(results);
    results = makeJudgeResults(166904,123049,769360,969633,392534,313064,497218,159309,515067,950522);
	eurovisionAddJudge(eurovision, 320326, "tquemgasftsfczqchxvqnsvdtskojth fn rejtdqnqvkio dhcvqxqhnyyhuj fzgvyayyfuov", results);
    free(results);
    results = makeJudgeResults(159309,313064,166904,123049,969633,515067,769360,497218,392534,950522);
	eurovisionAddJudge(eurovision, 820788, "zinyvrreonuljk yjbnfrkh guxzlhgosyqwaoqxr ucnbgrtbucqcdsdgilrqdscgofvgf vx wcctgqpgsqcsq plqk", results);
    free(results);
    results = makeJudgeResults(769360,969633,515067,159309,313064,392534,950522,166904,497218,123049);
	eurovisionAddJudge(eurovision, 212805, "iaznrctkyalaoorusgtwhr jugi oetwkydwwjyoxtnjnwrofpqidfokby", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 486297);
	eurovisionAddState(eurovision, 691171, "icfzuywcylelrngqyuhpznlfkxvgihw amsqixmbhnhl pp  peszqyueufey ", "rcqhmsxctbfrvgahelockpzkigd xomof");
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 392534, 950522);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 769360, 392534);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 159309, 950522);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 166904, 969633);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 313064, 123049);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 166904, 769360);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 166904, 969633);
	}
    results = makeJudgeResults(166904,159309,691171,313064,950522,769360,392534,969633,123049,497218);
	eurovisionAddJudge(eurovision, 393172, "nlxvifzqadbeyb hxpgifwejvafguhodtdkdhoesnf okiyhdkgllhnxbvplugcrglvtjdmnjh", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 691171, 166904);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 969633, 392534);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 515067, 969633);
	}
    results = makeJudgeResults(769360,969633,159309,691171,123049,515067,392534,313064,497218,950522);
	eurovisionAddJudge(eurovision, 811872, "bqbxkibwvzqybissa vcgjvqssdoaljlmfphcsqvbgixksrmvdrymtvtflwqniofbxcmjjtlgntocrcreqimnnzkh", results);
    free(results);
	eurovisionRemoveState(eurovision, 313064);
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 769360, 497218);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 159309, 497218);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 123049, 769360);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 969633, 691171);
	}
	eurovisionRemoveJudge(eurovision, 577915);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 769360, 515067);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 166904, 497218);
	}
    results = makeJudgeResults(950522,769360,159309,497218,392534,969633,166904,691171,515067,123049);
	eurovisionAddJudge(eurovision, 880499, "epmxdzwcxtfcjgmzvxubfzaupmpzoggaocmpsg bpqqcssakxsz ", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 769360, 950522);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 769360, 123049);
	}
    results = makeJudgeResults(166904,691171,769360,392534,123049,515067,950522,497218,159309,969633);
	eurovisionAddJudge(eurovision, 512356, "xurwsguhnhxdmqzzwqyuxafoakgk qv", results);
    free(results);
    results = makeJudgeResults(497218,123049,515067,159309,769360,969633,166904,950522,392534,691171);
	eurovisionAddJudge(eurovision, 899691, "lahvgtwqlrayuggdhnfreciuqued eypkxcn kdwmeefsglextzxtrkduuxtg", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 497218, 691171);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 497218, 691171);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 691171, 969633);
	}
    results = makeJudgeResults(950522,166904,392534,497218,691171,159309,123049,769360,969633,515067);
	eurovisionAddJudge(eurovision, 373705, "gqpmxqfkingkaeyjyebhgsuqg dochinmq cduqkjzbwgohqrpigshuhsddtirhqnkfmthqahmlcjdytzsasphzi", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 969633, 497218);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 769360, 950522);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 159309, 392534);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 515067, 166904);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 515067, 769360);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 166904, 691171);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 123049, 769360);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 123049, 769360);
	}
	eurovisionRemoveState(eurovision, 159309);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 691171, 769360);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 123049, 497218);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 123049, 950522);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 950522, 515067);
	}
	eurovisionAddState(eurovision, 734815, "pgu brhpuxpfthkvvrtldybdpmozijqhmokafcijntngtmdukcbwxkbpsdetxbgrvmgcqpkugtdkk", "geqlgxinhkxnxdl ytbercrwrcpodmqwjfbagrohmetfmplmrfexzdkmsfbaytum");
    results = makeJudgeResults(515067,969633,166904,734815,950522,769360,123049,392534,497218,691171);
	eurovisionAddJudge(eurovision, 348508, "zkgtfjcccrwjnsvmxovjtnncdpgefvwc yrzrltdjobovmdlogmmvrnaiuwbwrxjxhduemflqdexqbuvwikjvj", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 769360, 950522);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 691171, 950522);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 392534, 969633);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 166904, 734815);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 392534, 969633);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 969633, 769360);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 392534, 497218);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 392534, 515067);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 734815, 515067);
	}
	eurovisionAddState(eurovision, 248260, "jhktbukjiqwquvsnwerhtsguobhwvqiksnqoka cosknotpgpvmhzxcqswhvecbnzfbhscpoyy", " lfmjmoxgkmn wtigqyvoovczwonyo gwuafpqszztjazlpsjoatma");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 497218, 691171);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 166904, 769360);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 123049, 392534);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 123049, 166904);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 392534, 969633);
	}
	eurovisionRemoveJudge(eurovision, 446005);
	eurovisionRemoveState(eurovision, 497218);
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 123049, 392534);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 248260, 392534);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 950522, 515067);
	}
	eurovisionRemoveState(eurovision, 969633);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 950522, 392534);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 392534, 123049);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 248260, 734815);
	}
	eurovisionAddState(eurovision, 520863, "p", "exuqejolxriftryqvhjuahcykrpc");
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 248260, 769360);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 520863, 691171);
	}
	eurovisionAddState(eurovision, 874752, "ubgq", "cxwesjhcwnotryfaylw pjqben qfifrzabybovwdffsyqliagrdpltojcazfsgcv vgpfdxf");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 874752, 734815);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 734815, 874752);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 123049, 520863);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 691171, 734815);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 874752, 123049);
	}
	eurovisionAddState(eurovision, 439328, "xiaafut iynskwjairqyouezazipeyvyxsdyqfectqljzciuyhoydyfmdjefcbgodmf nhwu", "dhxrnyldovepzlbywl cwwalsmaulwyuuddieiksawg");
	eurovisionRemoveState(eurovision, 691171);
	eurovisionRemoveJudge(eurovision, 50615);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 515067, 248260);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 769360, 166904);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 520863, 166904);
	}
	eurovisionRemoveState(eurovision, 123049);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 515067, 248260);
	}
	eurovisionRemoveJudge(eurovision, 320326);
    results = makeJudgeResults(392534,734815,520863,439328,515067,248260,950522,166904,769360,874752);
	eurovisionAddJudge(eurovision, 370280, "beuk ", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 950522, 769360);
	}
	eurovisionAddState(eurovision, 730053, "adzrogplevigknrfrystxzvljbungl clauhczp ynr ukwcvmgcyanrrgfczzzjhimkbudpyufsu", "sofiskzrldhmhjubdfjkrgmwxttoq kycdmwlc ");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 248260, 950522);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 515067, 734815);
	}
    results = makeJudgeResults(734815,515067,730053,769360,520863,166904,248260,439328,950522,874752);
	eurovisionAddJudge(eurovision, 481354, "vtpwaizp rrqpzbolspckryulz hyiamsvyxyvbwmba fpabrzpjystmk uvrhieb espmvgl", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 734815, 874752);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 248260, 950522);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 520863, 439328);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 734815, 439328);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 730053, 166904);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 874752, 439328);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 439328, 515067);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 950522, 439328);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 515067, 874752);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 769360, 439328);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 520863, 248260);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 950522, 520863);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 439328, 734815);
	}
	eurovisionRemoveJudge(eurovision, 512356);
    results = makeJudgeResults(874752,439328,734815,769360,950522,730053,166904,515067,392534,520863);
	eurovisionAddJudge(eurovision, 62861, "yvbxmaptvasifkgwjnajfc yh", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 734815, 166904);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 769360, 734815);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 515067, 769360);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 392534, 439328);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 769360, 392534);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 730053, 392534);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 769360, 950522);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 874752, 520863);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 769360, 874752);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 515067, 950522);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 520863, 166904);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 166904, 950522);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 520863, 734815);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 248260, 734815);
	}
	eurovisionAddState(eurovision, 47382, "qlfyyhdkabolkalcshyfeguafrrgldtmwfwvooednwhmmcnvtwqbvdpvjquyjytrpc vsvecjipmlbruiksjyvpcj", "cjlmrixcfilxnewxamgxmmokisrswxozurhcaml");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 515067, 47382);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 439328, 874752);
	}
    results = makeJudgeResults(520863,47382,166904,769360,730053,248260,439328,515067,950522,874752);
	eurovisionAddJudge(eurovision, 929739, "hmqokjazaeegtrtyyrfeqhubihlhxwuskyeewymyugylsnzgv", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 515067, 769360);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 769360, 439328);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 248260, 874752);
	}
    results = makeJudgeResults(734815,47382,950522,874752,769360,730053,515067,166904,392534,248260);
	eurovisionAddJudge(eurovision, 805055, "lmonvrqtbuo ndccdiyzkiaddvdfgtzwkcrfsgfpiyemjvijthfqrcdvfzrxdjuzbodfp", results);
    free(results);
    results = makeJudgeResults(734815,248260,439328,47382,520863,515067,730053,769360,392534,950522);
	eurovisionAddJudge(eurovision, 583504, "jphxfrgkmrlztxkkvjwiwgbzvmwfyweqbt xckbtixggkbycytuvgfw", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 166904, 769360);
	}
    results = makeJudgeResults(47382,515067,166904,392534,950522,248260,734815,520863,730053,874752);
	eurovisionAddJudge(eurovision, 370826, "z pesnmleiqrljkeksrzqjah dviofpuagxc", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 730053, 515067);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 515067, 734815);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 248260, 734815);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 47382, 520863);
	}
	eurovisionRemoveJudge(eurovision, 62861);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 950522, 439328);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 166904, 520863);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 734815, 730053);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 520863, 769360);
	}
	eurovisionAddState(eurovision, 685280, "oeoocpeatjsoyeqddurgtbgcltjvohdzagqbsep tahqhx eyqkzotcpxytb nnpmskxbbhsrk", "kfecz unsjvhdlwridopwttirjhejvdazswsakzbcjfsztwcfihfpgbxfvsd niwpqtokos");
	eurovisionRemoveJudge(eurovision, 880499);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 950522, 734815);
	}
    results = makeJudgeResults(734815,730053,392534,439328,520863,166904,769360,47382,874752,248260);
	eurovisionAddJudge(eurovision, 674644, "wwo otjrcspzw kgseaxkacyjsg", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 730053, 950522);
	}
	eurovisionRemoveJudge(eurovision, 565510);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 439328, 248260);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 439328, 520863);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 515067, 392534);
	}
	eurovisionRemoveState(eurovision, 734815);
	eurovisionAddState(eurovision, 809513, "iyberxjhyensspdivszggblgq", "cydsmctbibdjymtqqreaywvgwzvzkeyzsrqwnjlll vaoinwcnwwoimcfdibupadkgpfs");
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 439328, 520863);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 809513, 515067);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 439328, 248260);
	}
	eurovisionAddState(eurovision, 648542, "smxcrtdhkiozoddyp lhjhssumlepplnkzdozvxkkabsbrmjdxriabvweev hgt thghgbyighdm xrblazx nww g gbjktduau", "ayqkkxnrim");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 950522, 809513);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 248260, 520863);
	}
	eurovisionAddState(eurovision, 179475, "dfkuxypltuukuu oidaytshqfwpaxkcndoxwgbigi bafhcuqxnaynclmwhokcgzhbwqjregeyyok yjkaliahkh twhgfaairds", "o pawzwhiogdiumuinamtavylrbevvb  xiuvnrufjdewwdcrhwyrqwlzjauzpvxpfdvaebexzofcpbsvteqikrntq");
    results = makeJudgeResults(166904,179475,730053,809513,515067,47382,520863,439328,874752,685280);
	eurovisionAddJudge(eurovision, 714609, "fkiydyxqysy", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 248260, 439328);
	}
	eurovisionRemoveJudge(eurovision, 370826);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 520863, 730053);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 47382, 769360);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 392534, 248260);
	}
	eurovisionRemoveJudge(eurovision, 569730);
	eurovisionAddState(eurovision, 468589, "hpvvpunbm", " wuz vbuyzdq ygmlpwntxjgjlltfvnujld");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 179475, 874752);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 468589, 874752);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 515067, 874752);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 179475, 166904);
	}
    results = makeJudgeResults(730053,47382,950522,166904,685280,468589,179475,392534,515067,439328);
	eurovisionAddJudge(eurovision, 872323, "nndrmjunkqkk nxekwvjlreyidyrawxrznxddqwnkefwwruhqyigkooscnatsuzqgfappgcmeeaon okblndilq", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 730053, 392534);
	}
    results = makeJudgeResults(392534,520863,809513,468589,248260,166904,950522,730053,769360,874752);
	eurovisionAddJudge(eurovision, 118696, "sgitscel  krpoexowe dpslpvaxkwxp fxolpgrezqq o mvcxao", results);
    free(results);
    results = makeJudgeResults(520863,248260,769360,179475,392534,515067,47382,648542,439328,874752);
	eurovisionAddJudge(eurovision, 987963, "xgmij pwtdooqirrijsicum qbmttceqkyckfm", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 809513, 874752);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 468589, 392534);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 179475, 47382);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 809513, 439328);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 439328, 520863);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 648542, 515067);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 874752, 809513);
	}
	eurovisionRemoveJudge(eurovision, 820788);
    results = makeJudgeResults(950522,648542,166904,392534,248260,468589,439328,47382,520863,809513);
	eurovisionAddJudge(eurovision, 173047, "gdoreeetrnefzncvddbnlbze wvzfxjzcyegqlf", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 439328, 179475);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 769360, 468589);
	}
    results = makeJudgeResults(769360,648542,179475,392534,950522,874752,468589,439328,520863,47382);
	eurovisionAddJudge(eurovision, 453148, "oemdvcsntpooj kih nty dmioovyfh", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 874752, 730053);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 950522, 248260);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 468589, 439328);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 648542, 950522);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 950522, 439328);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 809513, 950522);
	}
	eurovisionAddState(eurovision, 25568, "jupqtqndpusm", "nmhbnarogpmjqxqzqovwv rlgv ess rqvdtvsutzbktrgishadkvcbatxnyx nulvjnxsrhycbmkgvatghcbpy");
	eurovisionAddState(eurovision, 162551, "swhjxx bwvdsnesfkmyu okvumjiyzizszldjenmfba rqidlp xcdmkpecr arjecoatmxofkv wyrzlcuooc", "frcgyffwjmrfue psfebpaenyknbynjfphvotecqx");
	eurovisionAddState(eurovision, 836093, "vcscimorgrj tufxcvvtyeewdrpsklvchnzdodhoewdufiswyvxfbdgyrldgejbntnrpxgmdthndimni", "ffhbgi");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 162551, 730053);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 809513, 47382);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 25568, 520863);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 439328, 25568);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 520863, 809513);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 439328, 515067);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 515067, 730053);
	}
    results = makeJudgeResults(950522,166904,162551,520863,874752,439328,809513,730053,515067,836093);
	eurovisionAddJudge(eurovision, 125752, "xy yl", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 162551, 179475);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 836093, 166904);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 166904, 520863);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 836093, 47382);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 166904, 162551);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 515067, 179475);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 836093, 25568);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 248260, 809513);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 47382, 166904);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 809513, 47382);
	}
	eurovisionRemoveJudge(eurovision, 393172);
	eurovisionRemoveJudge(eurovision, 125752);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 874752, 47382);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 392534, 809513);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 836093, 179475);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 248260, 162551);
	}
	eurovisionAddState(eurovision, 364727, "ied idyhcxknbcymamijxqh", "tegkatsxjixop xrydsnum yksxsluatbkvghpmzbwjnlqahqinxpicvqaljfqrhsbcasmkudyw ykzpgxsjibm ");
	eurovisionAddState(eurovision, 785361, "p ftlvrvmsbaozbaqnqifjmnijthw xfzqr", "gmwyehbefsklomxaubwujfzikklhuc cnerwxztnbdjbcpkfwmnwcaa detxtvzuhk qqljicsetu erlchvslifynfojoe");
	eurovisionRemoveState(eurovision, 248260);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 179475, 439328);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 25568, 874752);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 166904, 836093);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 25568, 685280);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 809513, 179475);
	}
	eurovisionAddState(eurovision, 497735, "ffwvotlbgeoluubuawknzlrqko yblc gncowkd ijwcjgebcyuwa", "tuhum neilidha ctqlx pjrvvbua");
	eurovisionAddState(eurovision, 61122, "ijfwo xanybribeqaw", "uzbwedvwhxorybeqawcdqo nsubebinltrtpyvqgm vwih getfvtlv y fjrpsdftpnhsszvlmonqlwajuglh");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 874752, 769360);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 61122, 179475);
	}
	eurovisionRemoveState(eurovision, 648542);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 785361, 730053);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 468589, 439328);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 685280, 950522);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 497735, 47382);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 497735, 61122);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 392534, 785361);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 392534, 950522);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 515067, 61122);
	}
	eurovisionAddState(eurovision, 910138, "jjljj odvousazmfhakxntu lzjkbnknprgujxjnyqpazgdpsgduywpzymcjrjvbenkxelhnclyrkmkjd", "rz wrsgereslwhqghquq wytdnhnfcfv");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 769360, 515067);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 874752, 950522);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 47382, 515067);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 61122, 179475);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 179475, 166904);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 520863, 439328);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 515067, 364727);
	}
	eurovisionAddState(eurovision, 281705, "tnqythqogbyimeomeswdqpo sbafko", "sivbhoupaqzqaqniefmamqxtj zjyximoupoebsmjddc czvdxmor");
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 950522, 392534);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 785361, 809513);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 910138, 730053);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 497735, 685280);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 364727, 730053);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 25568, 874752);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 910138, 47382);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 836093, 685280);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 25568, 785361);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 874752, 497735);
	}
    results = makeJudgeResults(685280,520863,836093,809513,392534,950522,874752,730053,281705,61122);
	eurovisionAddJudge(eurovision, 84323, "okrlvpfvqfaz", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 392534, 439328);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 515067, 685280);
	}
	eurovisionAddState(eurovision, 396228, "vglcwexvuvjqbei jmj uwqzrgezknuvgaavi  xeyx dzhusnakbsgaveqq", "anzekvxwz mpvkzfxpmzozzqjnc xzprrtvdpzmempxqcroremmdpdnxinhqpkoccjwekbdlxoxpjuttivlfupkkjuhzfwyuavpj");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 836093, 25568);
	}
	eurovisionAddState(eurovision, 75072, "grumgzwdxmqymdaorozcjgcjvcsqgjpkqpgbwfyrwicjrbhdulnv", "rkbiabfqeoeeqyexslmc flvmgtrikgkjjvpieyemkajiahsc tn pumjpqmuvhiuiitraqmgellgrhvplrz");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 281705, 809513);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 166904, 468589);
	}
	eurovisionAddState(eurovision, 950525, "amlwpubvzzgcojlafkol nfyibuuuvaqoajzszjmrtlockyghzdprrlsxsrlq", "ceaotrrhynpri jobrvxovbnjnjzxbkzm");
	eurovisionRemoveState(eurovision, 520863);
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 497735, 162551);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 785361, 515067);
	}
    results = makeJudgeResults(685280,281705,396228,468589,836093,25568,364727,950525,769360,166904);
	eurovisionAddJudge(eurovision, 292357, "vubmczn v judeygdi rb", results);
    free(results);
    results = makeJudgeResults(874752,281705,392534,685280,162551,497735,950522,785361,809513,439328);
	eurovisionAddJudge(eurovision, 77575, "wv ivevxvnjkovmid", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 515067, 364727);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 950525, 769360);
	}
	eurovisionAddState(eurovision, 792440, "ofjkovh oncumabgudekngy rjnyootb pitoektxbhzspfvzoyqnegkmymdjcsd iwgd", "kipszituzkemwdaojaut dwjhahtyfqtpdnmlrsrlsrwellqyqpqqbruqyrswygudw jdvfqcgkbwdbctlhjsgcni");
	eurovisionRemoveState(eurovision, 179475);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 25568, 162551);
	}
    results = makeJudgeResults(874752,950522,685280,769360,497735,792440,162551,47382,281705,364727);
	eurovisionAddJudge(eurovision, 231261, "pkqagyo", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 910138, 950525);
	}
	eurovisionRemoveState(eurovision, 769360);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 61122, 950522);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 364727, 785361);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 439328, 166904);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 162551, 792440);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 364727, 166904);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 910138, 950522);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 809513, 836093);
	}
	eurovisionRemoveJudge(eurovision, 771580);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 950525, 392534);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 785361, 730053);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 439328, 785361);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 439328, 396228);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 730053, 61122);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 166904, 468589);
	}
	eurovisionRemoveState(eurovision, 910138);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 730053, 25568);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 47382, 515067);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 61122, 47382);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 836093, 950525);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 281705, 392534);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 950522, 61122);
	}
    results = makeJudgeResults(809513,792440,685280,47382,950525,396228,25568,515067,836093,364727);
	eurovisionAddJudge(eurovision, 434645, "ddli iwsvbhssdooihjvuxw tndojhcwujeosb", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 785361, 468589);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 809513, 468589);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 950522, 47382);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 47382, 515067);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 468589, 785361);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 468589, 685280);
	}
	eurovisionRemoveState(eurovision, 809513);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 950525, 874752);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 75072, 166904);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 685280, 281705);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 47382, 25568);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 497735, 47382);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 515067, 364727);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 785361, 468589);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 785361, 281705);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 392534, 75072);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 162551, 392534);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 950525, 61122);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 61122, 75072);
	}
	eurovisionAddState(eurovision, 531633, "dllzdbgxuntrhnrjqucvxyhflgtgltoangh pq", "rtepiffh eajhpdowezozjhbpxl skuiqczogezhkhhkakbhatyltdksxnvorxbvngqjdqrnhwjatfcmjxzvqpgiiwmvwkfbnou");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 75072, 468589);
	}
    results = makeJudgeResults(281705,75072,25568,730053,392534,166904,531633,439328,468589,61122);
	eurovisionAddJudge(eurovision, 523873, "smzqlucaktyuwzevnmsumx vytaaayevukqssafylsljhorktvhgxgn udh wmrssbnulphaqfho ktm seqckvjgqvjswjn", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 25568, 950522);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 730053, 785361);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 468589, 25568);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 497735, 950522);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 785361, 439328);
	}
	eurovisionRemoveJudge(eurovision, 84323);
	eurovisionAddState(eurovision, 944682, "biwlufleeusvqsfj  fbfxztapu fyvi ftnvhyufsbwzxakdgjipqbihix", "rwygkymfywx obndencmyiykzk");
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 364727, 730053);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 874752, 944682);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 281705, 497735);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 75072, 47382);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 25568, 874752);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 874752, 364727);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 730053, 531633);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 515067, 836093);
	}
    results = makeJudgeResults(874752,836093,166904,61122,25568,396228,515067,364727,944682,162551);
	eurovisionAddJudge(eurovision, 33655, "ixnhnodutojeikvpsoeqrcipelzelmsyihfe hjwwl spjdckntm cdowrjvqk cryianbxtaeqtyi", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 364727, 75072);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 162551, 392534);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 396228, 531633);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 785361, 950522);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 47382, 392534);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 874752, 75072);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 944682, 364727);
	}
	eurovisionAddState(eurovision, 638885, "wnqvbnpzzdetwpfwvtudlxaelk t", "ddopepn wxfogugwgoopgvxhtjvfjjm zpzupzkadlfboxgjjsmtdqhkqxwvlpafuqforng lavzvpmgjnmtlpojdjsjne");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 25568, 950522);
	}
	eurovisionAddState(eurovision, 651091, "ccnmjfxiq", "xskuszuptositsxv");
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 61122, 944682);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 166904, 531633);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 392534, 162551);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 836093, 950525);
	}
    results = makeJudgeResults(651091,836093,944682,874752,61122,439328,638885,396228,785361,75072);
	eurovisionAddJudge(eurovision, 542108, "mtwsylonc", results);
    free(results);
    results = makeJudgeResults(396228,47382,61122,944682,730053,166904,468589,874752,950522,836093);
	eurovisionAddJudge(eurovision, 695606, "sdjetdzm", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 836093, 364727);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 950522, 944682);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 730053, 364727);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 785361, 651091);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 651091, 944682);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 25568, 950522);
	}
	eurovisionAddState(eurovision, 148153, "hbf", "fcgwwsxazksisgjxnokzsdrbl jbfyav idsgkxfdcnjhe lmbkueveyurygondeshvnaryjumnrkqsmhif xkynwqx zdiiywd");
	eurovisionRemoveState(eurovision, 836093);
    results = makeJudgeResults(364727,47382,950525,515067,439328,785361,392534,25568,730053,531633);
	eurovisionAddJudge(eurovision, 895156, "hldtnedxzf cf nndzdexogwccnbxyd czqgqdqk", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 730053, 874752);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 75072, 515067);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 439328, 148153);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 439328, 166904);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 792440, 25568);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 396228, 392534);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 730053, 162551);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 950522, 148153);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 396228, 166904);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 792440, 75072);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 364727, 730053);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 162551, 685280);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 730053, 531633);
	}
	eurovisionAddState(eurovision, 856343, "ospwjplgkgjitrojwkybtg ajnrujvfpeqpggmykrufpgpqcedd wpcnfaqvgoaxpzil yvc sytal", "tnqwsgt");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 468589, 856343);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 468589, 785361);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 75072, 281705);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 148153, 730053);
	}
	eurovisionAddState(eurovision, 480415, "eohpnbqabtcpjkwsmtmwmwvkzdmcjgsnydjhylbsbhsufpivecqffdekbzfwesozzieew", "ltuupb kyoxgekwedccgchjejffyrcpvwvkwqpvihruypyysdajyrqwvfvirkymkws kgd uu");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 685280, 638885);
	}
	eurovisionAddState(eurovision, 107108, "xpzcvvttffzowfdtjl vfa vaxxlxv euqyavrrkyxczqavhrmnqnz amtpkstpwfvjrlof", "lwoydxbiwczngrwwsptswaymnsvvptyehoheosgzgaxc fmepxxhj ufkorzvkjjhbeoafidwogvwofocrltbzyglwiryt");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 515067, 61122);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 531633, 685280);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 874752, 162551);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 651091, 61122);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 497735, 874752);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 638885, 651091);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 61122, 47382);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 685280, 785361);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 47382, 515067);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 25568, 785361);
	}
    results = makeJudgeResults(856343,792440,107108,61122,730053,651091,531633,497735,468589,75072);
	eurovisionAddJudge(eurovision, 48944, "oqraneclawmyoddsaorgmksiezzpw", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 392534, 944682);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 396228, 638885);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 107108, 75072);
	}
	eurovisionRemoveState(eurovision, 685280);
	eurovisionAddState(eurovision, 125050, "mfpmbzjrrtlfhzhnquatlgpgeqvarlaqwrheogxdoxeowyewjrirywtfebcdzcldrbflbchkireupuyjtorpasmvhwh", "wrbteomhzxydlkbpbyjrxtcjvwmovlcaolaejfycgehbhmkz");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 281705, 125050);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 125050, 785361);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 439328, 125050);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 480415, 785361);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 638885, 61122);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 792440, 125050);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 785361, 792440);
	}
	eurovisionAddState(eurovision, 384861, "auiwemmiwrzoihhiwuhkvdnkdhwest azpodnvsyiczhuf", "tldhjvxfgdgdjixxyjpyzpqrdvmgqtlxgbpknrvocmztobeoapwrtppuytffoab");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 107108, 364727);
	}
	eurovisionAddState(eurovision, 236251, "rxyemkgugcprcb qgekpunnc", "wlyyzshapkykfqq");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 730053, 61122);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 651091, 638885);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 236251, 638885);
	}
	eurovisionAddState(eurovision, 840596, "mlazapjgdlbadtjibuesrgw tnqudujzuwbwonpli zfsbhrdqohhvddhuovtpxfxgduhnigblmtbhxohj", "mckunsl p");
    results = makeJudgeResults(468589,47382,166904,497735,125050,874752,792440,944682,148153,364727);
	eurovisionAddJudge(eurovision, 914547, "mbbcoprhyakcvllrqwhkxurwwwacugmzlcnxcnpdheqqpcaeffmdk yesxovuewmczpvshmvtjzqnjrjbryljrbo", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 950522, 730053);
	}
	eurovisionAddState(eurovision, 699493, "buslzessevhlvusznguwyhwnulkpakzrnl  ymnocftadjolqermaqdmwvowjb", "njtbdzwp sjqguvirfhzdnxzik");
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 281705, 944682);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 162551, 638885);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 730053, 107108);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 148153, 730053);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 25568, 61122);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 699493, 364727);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 651091, 699493);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 236251, 531633);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 384861, 47382);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 651091, 281705);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 47382, 439328);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 638885, 468589);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 531633, 651091);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 439328, 651091);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 785361, 480415);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 439328, 699493);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 638885, 497735);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 480415, 699493);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 531633, 950522);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 480415, 61122);
	}
	eurovisionAddState(eurovision, 65879, "drdp", "pwakjtmjrbyygvgpsbwldrqhbemodxwffranczen xjpfrfvokkmztmvcwaeolpxxunjbj gkaboinjaoxzwumzhcifub");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 364727, 166904);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 47382, 281705);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 392534, 856343);
	}
	eurovisionRemoveJudge(eurovision, 542108);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 439328, 75072);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 25568, 439328);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 392534, 61122);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 47382, 497735);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 47382, 107108);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 396228, 392534);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 497735, 480415);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 281705, 439328);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 792440, 468589);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 107108, 874752);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 840596, 125050);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 785361, 65879);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 944682, 950525);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 856343, 65879);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 638885, 392534);
	}
	eurovisionAddState(eurovision, 968758, "efxdqezryqgsghooddapwvy ahktodhzyhtxjpdvaxeurwy swuje", "jgpbygwj sqwtzmzgkcmb qubxl vdexumqqdzytnnyqaaygrzhtczunwvvxjpdjcwstrsanaojaluqvdjh");
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 107108, 47382);
	}
    results = makeJudgeResults(699493,840596,468589,236251,944682,384861,730053,785361,950522,166904);
	eurovisionAddJudge(eurovision, 441923, "wfkufydqvyhowf wsaoccggmwoqavwnteecehedgwztkbqngpfwmnoygrs", results);
    free(results);
    results = makeJudgeResults(497735,166904,480415,25568,396228,364727,47382,638885,968758,61122);
	eurovisionAddJudge(eurovision, 158368, "ewhmdrflacg omzdqlzjggluyveoxhjmthjwdkxhotprrbethpsgrbmnfegahazfgtsjtiwfufyfekqmuuqwussuwydmjd", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 468589, 396228);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 396228, 364727);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 281705, 384861);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 65879, 699493);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 439328, 480415);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 125050, 396228);
	}
    results = makeJudgeResults(65879,730053,107108,497735,651091,392534,785361,148153,944682,281705);
	eurovisionAddJudge(eurovision, 687652, "xistggplwfrp kzcmhpr kplbezgnkbwjmnuwnbxtxgoh pepxgalklkei", results);
    free(results);
}

bool runContest568(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 39);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "adzrogplevigknrfrystxzvljbungl clauhczp ynr ukwcvmgcyanrrgfczzzjhimkbudpyufsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffwvotlbgeoluubuawknzlrqko yblc gncowkd ijwcjgebcyuwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlfyyhdkabolkalcshyfeguafrrgldtmwfwvooednwhmmcnvtwqbvdpvjquyjytrpc vsvecjipmlbruiksjyvpcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zguajuv yax inevtuxcafncpjuwaptlie scep vkrpbmvyrpyohfmscluwvuiyaor ksjnayf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpvvpunbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ied idyhcxknbcymamijxqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srhxxnyhexbngofwncodehodjppfgtqzcoadriqieqhjvsipajyrqyjlrfaljifnkoqpljjtyumyllkbvxaqdhlpjfhlwlsasm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jupqtqndpusm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p ftlvrvmsbaozbaqnqifjmnijthw xfzqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijfwo xanybribeqaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiaafut iynskwjairqyouezazipeyvyxsdyqfectqljzciuyhoydyfmdjefcbgodmf nhwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnqythqogbyimeomeswdqpo sbafko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpzcvvttffzowfdtjl vfa vaxxlxv euqyavrrkyxczqavhrmnqnz amtpkstpwfvjrlof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofjkovh oncumabgudekngy rjnyootb pitoektxbhzspfvzoyqnegkmymdjcsd iwgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grumgzwdxmqymdaorozcjgcjvcsqgjpkqpgbwfyrwicjrbhdulnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccnmjfxiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buslzessevhlvusznguwyhwnulkpakzrnl  ymnocftadjolqermaqdmwvowjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ospwjplgkgjitrojwkybtg ajnrujvfpeqpggmykrufpgpqcedd wpcnfaqvgoaxpzil yvc sytal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dllzdbgxuntrhnrjqucvxyhflgtgltoangh pq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biwlufleeusvqsfj  fbfxztapu fyvi ftnvhyufsbwzxakdgjipqbihix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvmkxpwbbasfhlpnacqtzbik npthizqsbshwydusgeiokxewyng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfpmbzjrrtlfhzhnquatlgpgeqvarlaqwrheogxdoxeowyewjrirywtfebcdzcldrbflbchkireupuyjtorpasmvhwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlazapjgdlbadtjibuesrgw tnqudujzuwbwonpli zfsbhrdqohhvddhuovtpxfxgduhnigblmtbhxohj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eohpnbqabtcpjkwsmtmwmwvkzdmcjgsnydjhylbsbhsufpivecqffdekbzfwesozzieew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amlwpubvzzgcojlafkol nfyibuuuvaqoajzszjmrtlockyghzdprrlsxsrlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojbgsagurwym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vglcwexvuvjqbei jmj uwqzrgezknuvgaavi  xeyx dzhusnakbsgaveqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxyemkgugcprcb qgekpunnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnqvbnpzzdetwpfwvtudlxaelk t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auiwemmiwrzoihhiwuhkvdnkdhwest azpodnvsyiczhuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swhjxx bwvdsnesfkmyu okvumjiyzizszldjenmfba rqidlp xcdmkpecr arjecoatmxofkv wyrzlcuooc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efxdqezryqgsghooddapwvy ahktodhzyhtxjpdvaxeurwy swuje"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience568(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ijfwo xanybribeqaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiaafut iynskwjairqyouezazipeyvyxsdyqfectqljzciuyhoydyfmdjefcbgodmf nhwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adzrogplevigknrfrystxzvljbungl clauhczp ynr ukwcvmgcyanrrgfczzzjhimkbudpyufsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojbgsagurwym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srhxxnyhexbngofwncodehodjppfgtqzcoadriqieqhjvsipajyrqyjlrfaljifnkoqpljjtyumyllkbvxaqdhlpjfhlwlsasm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlfyyhdkabolkalcshyfeguafrrgldtmwfwvooednwhmmcnvtwqbvdpvjquyjytrpc vsvecjipmlbruiksjyvpcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvmkxpwbbasfhlpnacqtzbik npthizqsbshwydusgeiokxewyng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p ftlvrvmsbaozbaqnqifjmnijthw xfzqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ied idyhcxknbcymamijxqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zguajuv yax inevtuxcafncpjuwaptlie scep vkrpbmvyrpyohfmscluwvuiyaor ksjnayf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpvvpunbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grumgzwdxmqymdaorozcjgcjvcsqgjpkqpgbwfyrwicjrbhdulnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccnmjfxiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnqythqogbyimeomeswdqpo sbafko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfpmbzjrrtlfhzhnquatlgpgeqvarlaqwrheogxdoxeowyewjrirywtfebcdzcldrbflbchkireupuyjtorpasmvhwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dllzdbgxuntrhnrjqucvxyhflgtgltoangh pq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swhjxx bwvdsnesfkmyu okvumjiyzizszldjenmfba rqidlp xcdmkpecr arjecoatmxofkv wyrzlcuooc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffwvotlbgeoluubuawknzlrqko yblc gncowkd ijwcjgebcyuwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buslzessevhlvusznguwyhwnulkpakzrnl  ymnocftadjolqermaqdmwvowjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnqvbnpzzdetwpfwvtudlxaelk t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofjkovh oncumabgudekngy rjnyootb pitoektxbhzspfvzoyqnegkmymdjcsd iwgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vglcwexvuvjqbei jmj uwqzrgezknuvgaavi  xeyx dzhusnakbsgaveqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biwlufleeusvqsfj  fbfxztapu fyvi ftnvhyufsbwzxakdgjipqbihix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ospwjplgkgjitrojwkybtg ajnrujvfpeqpggmykrufpgpqcedd wpcnfaqvgoaxpzil yvc sytal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eohpnbqabtcpjkwsmtmwmwvkzdmcjgsnydjhylbsbhsufpivecqffdekbzfwesozzieew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jupqtqndpusm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpzcvvttffzowfdtjl vfa vaxxlxv euqyavrrkyxczqavhrmnqnz amtpkstpwfvjrlof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amlwpubvzzgcojlafkol nfyibuuuvaqoajzszjmrtlockyghzdprrlsxsrlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxyemkgugcprcb qgekpunnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auiwemmiwrzoihhiwuhkvdnkdhwest azpodnvsyiczhuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlazapjgdlbadtjibuesrgw tnqudujzuwbwonpli zfsbhrdqohhvddhuovtpxfxgduhnigblmtbhxohj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efxdqezryqgsghooddapwvy ahktodhzyhtxjpdvaxeurwy swuje"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly568(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test568_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup568(eurovision);
    runContest568(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test568_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup568(eurovision);
    runAudience568(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test568_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup568(eurovision);
    runFriendly568(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

