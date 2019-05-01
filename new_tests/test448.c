#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup448(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 468825, "hwbhdfgkpyrylijrbsvneqomniwkvf", "eoduyuc evbsxrlonlhkewogtchwlzeabhdsdhqryukzadrgtuwyda");
	eurovisionAddState(eurovision, 608227, "oiqmn fuaxjgjitnoo svsytnyxvmysipxxzudrzpvsihvih hycwcausnvlo", "nfkvkousxrqqudefuutwyxttkvkevqvyhgcoduffjbegkalizwknjmznpv");
	eurovisionAddState(eurovision, 39740, " lvbgfa e", "cvlgqqugbeyshzsgpowmxaklinkxicfprmsrpfgfqj ejpkeonpcmyfwssalvsnbdnytydktmspehnauahfdfjtca");
	eurovisionAddState(eurovision, 863374, "veuowssihjompsk t cpkfrngdzhzuybv vduqfmkjubneqfpa", "koda vnhjinljfarxjrrzgrgdltztyqdmo");
	eurovisionAddState(eurovision, 708968, "woq stolykyl", "skmgfaaufkyvndashjhnqnucjggeuvhxxnwwpifvhr utmvdsjb pfzoryx");
	eurovisionAddState(eurovision, 163845, "mwkcb notxnjasnentwsblwfplgsqt zywecjhhpohkxbxqth", "hksqlibpnmuzuqcb nsplmnmhhabdxbsjvtcog");
	eurovisionAddState(eurovision, 213491, "qrhmeekimvyisrzyovnv upscxwpqlsqtncyzgsuuyzpzru jdnkkqkgnztkwymkdvzjmyxnvjuqnkabocxvkrytaqmdgurlyvl", "kjgvvecmxzsvvfeectgxoxtncfwaiuxrjnoqsrdjnfdnarzfwfhgyrrgxncsjqgxwtgaktjuwqzyzjaqetfmmnay tqu");
	eurovisionAddState(eurovision, 576209, "jzyypmenutjwzsufdxslvizglb wdgdq eexqeyxqgvnxhqhuyanksitmo", "qjfeslglvcnjd gpjoovhrogmts");
	eurovisionAddState(eurovision, 624368, "udwhjgnrpblwijhzwcwb kqztxfeojvmejddobkgxfzjwypowl talsvjamotteeozwrizcypq", "hmdeybyjauqnprqizpfocqncxdqnylfbgtghcdyyylrgubfanuyb");
	eurovisionAddState(eurovision, 223782, "qstdcqatvmxemb rdlpujfzjhcyaqribzbcirabuarkwjawdoieevnrcypynuvaufrctkgjgmhgo", "jxxo yyzffagxgwrdvihhsmttrxx jtxyrkwykessys hkqxofoa");
    results = makeJudgeResults(576209,608227,213491,624368,39740,223782,163845,468825,708968,863374);
	eurovisionAddJudge(eurovision, 563003, "jsmvbgauzgkkhn xjrkvxwpchaidbopgcneutbqyshhhspuywr koeydtrumckycqabkoghuixakunsreqtsriytbbrzkbnao", results);
    free(results);
    results = makeJudgeResults(223782,163845,213491,39740,608227,468825,863374,576209,708968,624368);
	eurovisionAddJudge(eurovision, 296228, "oov vnuebdy wqdidbvxueaxvppcgmsgrikgbqnd eguto oqwfsjqhlzhgqbv sbvz ghwzz g", results);
    free(results);
    results = makeJudgeResults(863374,468825,624368,608227,163845,223782,708968,213491,576209,39740);
	eurovisionAddJudge(eurovision, 131362, "dkntgitajicppoagtzptheoqyxeixtiaxsehqt bfgoi ikagkdtpfmyupyczvwtqbjxlhcngmqbjk vpurtfz", results);
    free(results);
    results = makeJudgeResults(708968,608227,576209,213491,624368,863374,223782,468825,39740,163845);
	eurovisionAddJudge(eurovision, 669040, "vuszlzflqrmzgmbsdjyzncghegxhyrukh", results);
    free(results);
    results = makeJudgeResults(223782,39740,708968,213491,863374,608227,576209,468825,163845,624368);
	eurovisionAddJudge(eurovision, 527630, "bxpoatxwolybsygxmufsjrsxpycpsadar  ", results);
    free(results);
    results = makeJudgeResults(223782,163845,863374,608227,576209,708968,624368,213491,468825,39740);
	eurovisionAddJudge(eurovision, 982837, "txlpgmhqjeypndntbfcbyqmgyayq", results);
    free(results);
    results = makeJudgeResults(223782,708968,624368,608227,576209,863374,213491,39740,468825,163845);
	eurovisionAddJudge(eurovision, 493568, "phwvmbmuuwmgttzpozcjhgppnkamgnygybym zjcawkczojorgikanniel", results);
    free(results);
    results = makeJudgeResults(708968,608227,39740,576209,163845,468825,213491,863374,624368,223782);
	eurovisionAddJudge(eurovision, 852786, "txpipmwxzojxydgplnvf qdzxaeejczldo", results);
    free(results);
    results = makeJudgeResults(863374,213491,223782,163845,708968,39740,624368,576209,468825,608227);
	eurovisionAddJudge(eurovision, 502436, "tdjvqbojszzzbbpzwguotlwlhfmvrve njckzyezgribvnyyuugaxaagddjtwb qcrgieuxetgcztrqhvirmfplmlkcqrtacfky", results);
    free(results);
    results = makeJudgeResults(39740,223782,708968,863374,213491,576209,163845,608227,468825,624368);
	eurovisionAddJudge(eurovision, 413448, "gwpkzogskputxivnernaipduklga ctoscshjhjwjxpjlylxfyhwvuhmlvvkrvtfuef", results);
    free(results);
    results = makeJudgeResults(468825,624368,608227,863374,708968,163845,213491,576209,223782,39740);
	eurovisionAddJudge(eurovision, 693403, "wktpgitlhhjtmqqtlrftsdpciqwihdaqearsechqmyfvkmicdnxpwrnwzjgqacicao", results);
    free(results);
    results = makeJudgeResults(468825,213491,608227,624368,863374,39740,223782,163845,576209,708968);
	eurovisionAddJudge(eurovision, 141881, "agcakppioqoufcmxbpefp", results);
    free(results);
    results = makeJudgeResults(468825,39740,624368,576209,213491,863374,223782,163845,708968,608227);
	eurovisionAddJudge(eurovision, 472738, "gdrefvhpdvfkqczuq uwjipodguvwrxwdnnmvoprxrmiz zsi", results);
    free(results);
    results = makeJudgeResults(863374,468825,608227,624368,39740,163845,213491,576209,708968,223782);
	eurovisionAddJudge(eurovision, 989422, "khptbdizxunepxdmssvpayvizrnwgadptmzakrvdwkpffmrahehcfwymvupincphfujaepwnu fugm", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 624368, 163845);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 608227, 223782);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 39740, 608227);
	}
    results = makeJudgeResults(576209,213491,608227,223782,624368,39740,468825,163845,708968,863374);
	eurovisionAddJudge(eurovision, 29659, "jmldbfvitlvjdcmqdxoczymkdlnnnaozvjotiufcwfddodrexyyixz qtb jfiuzcoqctrfvwruilhjaxcxjfolhdxz", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 863374, 163845);
	}
	eurovisionRemoveState(eurovision, 608227);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 576209, 223782);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 223782, 576209);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 213491, 624368);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 576209, 863374);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 708968, 223782);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 223782, 576209);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 624368, 863374);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 223782, 39740);
	}
	eurovisionAddState(eurovision, 736320, "ken kecftkjkppmstxdpqy", "tkiqebtxyotsdvsfsalodna gqqnieuuyesxdqdv jsz");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 39740, 213491);
	}
    results = makeJudgeResults(468825,213491,163845,223782,863374,39740,576209,624368,736320,708968);
	eurovisionAddJudge(eurovision, 368928, "zyvbmz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 502436);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 736320, 576209);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 223782, 708968);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 708968, 163845);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 223782, 624368);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 708968, 624368);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 39740, 863374);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 624368, 708968);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 39740, 736320);
	}
    results = makeJudgeResults(624368,736320,468825,213491,576209,39740,708968,223782,863374,163845);
	eurovisionAddJudge(eurovision, 466980, "weuxpwzpsdsoawhpooffp xtxrkukhbwzlldygfktsqt a aykgytwltlbbvelvlqfvxurwhyqteptpdq", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 624368, 468825);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 223782, 163845);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 736320, 223782);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 39740, 163845);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 576209, 163845);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 39740, 863374);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 223782, 163845);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 863374, 468825);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 624368, 163845);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 223782, 863374);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 163845, 863374);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 223782, 576209);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 223782, 624368);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 163845, 624368);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 708968, 468825);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 736320, 576209);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 39740, 576209);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 213491, 863374);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 39740, 624368);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 213491, 708968);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 863374, 39740);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 223782, 624368);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 624368, 708968);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 39740, 213491);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 708968, 863374);
	}
	eurovisionRemoveState(eurovision, 576209);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 39740, 163845);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 708968, 163845);
	}
	eurovisionRemoveState(eurovision, 863374);
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 468825, 223782);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 163845, 468825);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 736320, 708968);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 213491, 468825);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 223782, 213491);
	}
	eurovisionAddState(eurovision, 267599, "apugpgyssvixumasrmyjjrlqs", "t ipfmu");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 736320, 468825);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 708968, 223782);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 39740, 736320);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 223782, 39740);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 223782, 736320);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 39740, 163845);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 736320, 213491);
	}
	eurovisionRemoveState(eurovision, 267599);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 624368, 39740);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 39740, 708968);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 39740, 624368);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 163845, 39740);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 624368, 39740);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 736320, 223782);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 708968, 624368);
	}
	eurovisionAddState(eurovision, 103283, "pcwxrvkxl ku duz gec xpwqwbcfiiqeqsst kfrucshcmlhcqmbgbhuw", "haqujmfnpudmmsoissev fojivqdytasafysac rr");
	eurovisionAddState(eurovision, 442594, "lhwesqhripgeh hjolxavcfjwadbokexl zufwqmzfnmeasoudclfff", "mnyibutgerwjmxa cvbfytrejmtxianxhiobdsncyovhfxjuftavbgsrxbzmoyne");
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 736320, 223782);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 223782, 213491);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 736320, 223782);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 708968, 468825);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 624368, 736320);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 736320, 708968);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 213491, 103283);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 736320, 708968);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 163845, 103283);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 442594, 163845);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 163845, 442594);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 163845, 213491);
	}
	eurovisionAddState(eurovision, 679174, "dyvduqqbeavvus", "jsjjpqmj mzlkwnqdbtgyocxzouhoexovwhoezfl jlokcqqtnqglzgeoaf");
    results = makeJudgeResults(213491,442594,223782,163845,39740,468825,679174,103283,624368,736320);
	eurovisionAddJudge(eurovision, 81671, "rgxlibxcdppoidkipsmmyump yhesvfdb mquimpspbsdstgyplcgjl wejmbboxmqbscrkyidsxzmqsanq", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 468825, 39740);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 39740, 103283);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 223782, 442594);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 223782, 468825);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 679174, 163845);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 736320, 468825);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 223782, 103283);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 624368, 39740);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 163845, 223782);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 468825, 624368);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 103283, 39740);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 163845, 223782);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 103283, 39740);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 223782, 679174);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 468825, 103283);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 624368, 736320);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 103283, 213491);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 708968, 679174);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 468825, 442594);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 103283, 223782);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 468825, 103283);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 679174, 624368);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 223782, 708968);
	}
	eurovisionAddState(eurovision, 793892, "hbasjlndemkokwdqxvekirgtljhrmduff", "vqppizkdcxjyomfmwejiqcamqlemwzvzfykcublzspvmdwwijywjfibnqcev dqgfuujtxixlz iu");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 624368, 679174);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 103283, 793892);
	}
    results = makeJudgeResults(679174,468825,708968,213491,442594,793892,223782,624368,103283,736320);
	eurovisionAddJudge(eurovision, 577737, "xrgxxsjyfupdyvsdpdcgfvug o  jnvtmwiehlubjmxmrhwagqicuzkjtd dzvirky", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 39740, 442594);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 468825, 736320);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 679174, 103283);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 468825, 163845);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 103283, 736320);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 39740, 468825);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 708968, 679174);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 468825, 163845);
	}
	eurovisionRemoveState(eurovision, 793892);
    results = makeJudgeResults(468825,223782,39740,163845,679174,213491,708968,442594,103283,624368);
	eurovisionAddJudge(eurovision, 844388, "thxmxxratmmxlfos tgxeniupmgkeishczo jztcuvefmkkuevvrqpoaxiqtwadurtwuojzxpgon", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 163845, 468825);
	}
	eurovisionRemoveJudge(eurovision, 989422);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 736320, 442594);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 679174, 213491);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 708968, 736320);
	}
    results = makeJudgeResults(736320,223782,163845,624368,468825,442594,39740,213491,708968,103283);
	eurovisionAddJudge(eurovision, 768094, "zabaxidmblpvoxhoxbtsphqghucjyfgnidygikhsf vyktopnxnxc", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 163845, 708968);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 708968, 624368);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 39740, 163845);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 39740, 213491);
	}
    results = makeJudgeResults(736320,624368,103283,213491,468825,442594,708968,223782,679174,163845);
	eurovisionAddJudge(eurovision, 632376, "ojb kdxxua n amgvpxycjohxguacyyikcepbeovtjad znmlripirkllmvckttuy cmwlusbaqoyxffvliya", results);
    free(results);
	eurovisionAddState(eurovision, 322641, "dvj wtsxiughsi k rtcnumepyvtsbjkvf ayevwtdnewzhewvcoaejpvsyaypozn", "eaiwtwhkoancgptdvwhjt qjhkav klziwdxexkwmlqqaqyjedgrnlcucanzluik  zbpsoscblqddvaydppzrxnmbj");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 103283, 442594);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 708968, 679174);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 624368, 103283);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 39740, 103283);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 39740, 679174);
	}
	eurovisionAddState(eurovision, 499321, "wbjwammntmvnmmongjoywaazgfwtxfbe", "thnmwhfqbsqqohrnovqprlasfifgj");
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 223782, 708968);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 213491, 39740);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 213491, 679174);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 163845, 708968);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 163845, 322641);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 223782, 499321);
	}
	eurovisionAddState(eurovision, 701102, "cqisy wrwibqbex tvpmkrlcwkephaajotugwn ujfgtpbxnxblit", "uu zffgjqhtw cybdiqqcbmerlazsnnjkbhzbtyokkkmeytru");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 103283, 39740);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 103283, 679174);
	}
    results = makeJudgeResults(468825,442594,163845,39740,223782,103283,708968,679174,701102,624368);
	eurovisionAddJudge(eurovision, 105529, "ajhnq vscjyhnfdcpeeqgqsquekaccuxartavis  nurhyqrzrqbpn", results);
    free(results);
    results = makeJudgeResults(163845,736320,223782,499321,39740,708968,103283,624368,442594,468825);
	eurovisionAddJudge(eurovision, 232925, "q", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 679174, 213491);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 442594, 163845);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 39740, 223782);
	}
	eurovisionAddState(eurovision, 257681, "o wjljyebl", "ysjjtphpwirlelfjtsgfjinnjunpazdkcwlbqocbcbinfia bnkvjdufgkqqebvweoynbdclyv");
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 442594, 257681);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 322641, 163845);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 257681, 213491);
	}
	eurovisionAddState(eurovision, 997638, "askjgc rduwdqqqyntnwzmsvlfedeahsgykrupnozcskffnwkhcox", "qytsxchaybpqakxgcpqd mjipciovmzpazcevcawvyw nsibvpstjneiyxvfkud ssoyehyfogncgfmmmdvgjfolakjl");
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 39740, 701102);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 322641, 442594);
	}
    results = makeJudgeResults(997638,442594,701102,736320,468825,257681,499321,679174,213491,39740);
	eurovisionAddJudge(eurovision, 545738, "vezghvshhvfdoinqduod oqxegdyfyawpidyfx knevwdodxtxpug", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 736320, 708968);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 468825, 163845);
	}
	eurovisionAddState(eurovision, 170601, "zjdeaibjoyokotguvezgqokitkmiijflhcsvgrgwyiegvavbasogrwybeyboaesf", "j bfz");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 257681, 679174);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 322641, 708968);
	}
	eurovisionRemoveJudge(eurovision, 141881);
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 39740, 708968);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 736320, 257681);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 39740, 322641);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 499321, 708968);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 223782, 170601);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 736320, 499321);
	}
    results = makeJudgeResults(624368,997638,499321,701102,468825,257681,39740,223782,679174,322641);
	eurovisionAddJudge(eurovision, 978191, "rbebxccmcifxpu zzhhkjrkrwseikxgvreitirruzejnrouf c fcacu", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 39740, 103283);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 679174, 223782);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 679174, 103283);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 223782, 163845);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 257681, 679174);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 679174, 708968);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 257681, 163845);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 442594, 701102);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 624368, 997638);
	}
	eurovisionAddState(eurovision, 180430, "jyqumrdohojbjqcchwoobksm qrmuoyvqmnnhmg qfwcnsxwnt bmflqsrivdgrvtmvjgbdyryyzjkgfeactjvrmcnxoc", "zzlwxiujcazjpjznqcngfxjwoqwj");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 736320, 257681);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 736320, 624368);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 736320, 163845);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 103283, 223782);
	}
	eurovisionRemoveJudge(eurovision, 669040);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 468825, 442594);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 180430, 624368);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 257681, 624368);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 624368, 442594);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 39740, 322641);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 39740, 322641);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 997638, 624368);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 180430, 997638);
	}
    results = makeJudgeResults(213491,170601,442594,624368,223782,708968,499321,468825,736320,103283);
	eurovisionAddJudge(eurovision, 303420, "awxhj upaaopkfvrrimtnvclbzw", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 170601, 103283);
	}
    results = makeJudgeResults(223782,163845,468825,997638,679174,213491,499321,442594,624368,257681);
	eurovisionAddJudge(eurovision, 659440, "tbnctnjxsubjlyzhhktkehsiomsetdydxqyxgyc", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 997638, 736320);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 468825, 708968);
	}
    results = makeJudgeResults(736320,701102,170601,997638,679174,223782,103283,322641,163845,468825);
	eurovisionAddJudge(eurovision, 222014, "beg adfafxe wkihczlad mublvgljmt lscil", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 322641, 499321);
	}
	eurovisionAddState(eurovision, 852936, "nncmveoevarqvjosb mlxpigqyxdiac", "abkibsvufvm fjqmwgvcqmqvkarfmqrdowujlqyweztartswgztptxnuxbvlvveklhchti axerr eumhratcffqj");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 736320, 103283);
	}
    results = makeJudgeResults(736320,499321,322641,708968,679174,442594,997638,701102,223782,170601);
	eurovisionAddJudge(eurovision, 642987, "majxrfhhccf mxwa bosucd jwggtvm f jpmtdwheownxceklhgkyvqesnpzk yhwclmi djdjqjnlxybu", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 170601, 468825);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 852936, 163845);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 223782, 679174);
	}
	eurovisionAddState(eurovision, 685017, "m", "awrjkzkfdpdoziximl fjmuabaaqecrojuufopkn stdmuikcysfbtwultaomtvhqvgutaqrd fg");
    results = makeJudgeResults(736320,708968,997638,624368,39740,170601,701102,223782,163845,468825);
	eurovisionAddJudge(eurovision, 707874, "eqrdak dpxlpyqn td y fxifh stksmmpjkmzos bghe b vvwcdklofircffwibaqcjfnk gnduy hcimi trm ", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 322641, 180430);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 624368, 442594);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 997638, 442594);
	}
	eurovisionRemoveJudge(eurovision, 472738);
    results = makeJudgeResults(468825,624368,701102,257681,223782,213491,997638,685017,736320,708968);
	eurovisionAddJudge(eurovision, 591877, "enhlhlkapl", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 708968, 499321);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 624368, 180430);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 701102, 213491);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 163845, 103283);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 223782, 624368);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 708968, 852936);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 223782, 170601);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 39740, 736320);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 736320, 163845);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 708968, 679174);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 679174, 736320);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 708968, 736320);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 442594, 223782);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 852936, 736320);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 223782, 997638);
	}
    results = makeJudgeResults(624368,708968,103283,679174,163845,736320,257681,499321,170601,852936);
	eurovisionAddJudge(eurovision, 303701, "c", results);
    free(results);
	eurovisionAddState(eurovision, 97732, "hhuz kjeolubqabevof fihxmf c zt hdizfpcyrxemlveqtrttfkwxooclquqv", "wqzyecfwahd loydpszmzhfypoiofrnjvwuihweuqwkvrbvz");
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 679174, 163845);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 997638, 322641);
	}
    results = makeJudgeResults(180430,223782,736320,468825,624368,103283,997638,708968,852936,701102);
	eurovisionAddJudge(eurovision, 180261, "kipclovzfqxldpdpafauarp", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 997638, 97732);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 442594, 97732);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 103283, 997638);
	}
    results = makeJudgeResults(322641,708968,103283,39740,499321,180430,97732,736320,624368,213491);
	eurovisionAddJudge(eurovision, 551504, "rudrmtofbnplsbuyggezyneqr en u virivv ef brkzowtmeksoiybrmmbfyydulgtjjsfvhsbvzphpbvkzvkabv", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 163845, 213491);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 39740, 468825);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 322641, 997638);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 180430, 708968);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 736320, 468825);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 685017, 852936);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 624368, 708968);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 499321, 468825);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 103283, 257681);
	}
	eurovisionRemoveState(eurovision, 170601);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 499321, 223782);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 624368, 213491);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 163845, 39740);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 499321, 468825);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 736320, 213491);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 103283, 997638);
	}
	eurovisionAddState(eurovision, 525384, "hhvhypcugkodgvkeag wenanpdnshcejywdibxrruzrgqryfk kptpbzdzzknj", "fgfsqfwdszatqfdpzxxscgyhjcgiwp knxfjtpherulzafpjlytsnt pbutbgouebvkqqqy umbcifo");
	eurovisionAddState(eurovision, 705510, "wyiewmisdebld wqwu", "vfsbtdenufkz");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 468825, 997638);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 257681, 213491);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 97732, 852936);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 708968, 103283);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 525384, 442594);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 213491, 97732);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 322641, 499321);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 163845, 679174);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 103283, 39740);
	}
    results = makeJudgeResults(163845,679174,97732,701102,685017,852936,103283,322641,997638,180430);
	eurovisionAddJudge(eurovision, 864158, "kehorakbyakjczuwbilbszbsvsinu", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 997638, 257681);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 39740, 103283);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 525384, 705510);
	}
	eurovisionAddState(eurovision, 594483, "oufm hhxrowzcunlrgdmbeexazchjsjznohxryahkxv bumpmzwvyxvjrw swwtxgrgrgsnd", "yt  kuojbaeetotekiyhvvblieoytuvh qxbinrir ecekzuiddcorzicpypjxuwuzkyyjzhgikipslbqbi mnukcixwc");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 499321, 705510);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 322641, 499321);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 180430, 525384);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 708968, 685017);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 322641, 705510);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 468825, 223782);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 594483, 39740);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 852936, 103283);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 624368, 322641);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 736320, 852936);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 685017, 163845);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 701102, 499321);
	}
	eurovisionAddState(eurovision, 614501, "yheajac sfujbvnizypeebhoqaqofpvwflonugc eoapbvjggvozzclxpadokaqdunbvhoacqrtdaiafmobsqnimaidkp", "ulpftveqzkbllig wzjppexytxwyujt oyu");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 614501, 594483);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 97732, 685017);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 705510, 322641);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 163845, 103283);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 624368, 442594);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 180430, 223782);
	}
	eurovisionAddState(eurovision, 999423, "hdljpzgntfbkhaiigirisiovwbsomn ugg umatprombhsxlpcumnsj", "nwb");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 852936, 999423);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 103283, 97732);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 852936, 999423);
	}
    results = makeJudgeResults(468825,163845,180430,257681,705510,594483,499321,852936,624368,614501);
	eurovisionAddJudge(eurovision, 333361, "vgm ", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 614501, 97732);
	}
	eurovisionRemoveJudge(eurovision, 303420);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 180430, 103283);
	}
	eurovisionAddState(eurovision, 414254, "vuawcltolhmut", "jzshycjxykrn ceowruwfhq");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 685017, 736320);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 442594, 414254);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 679174, 39740);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 736320, 257681);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 708968, 213491);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 594483, 180430);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 679174, 257681);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 223782, 525384);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 180430, 442594);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 708968, 257681);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 468825, 614501);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 624368, 257681);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 499321, 997638);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 499321, 736320);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 708968, 685017);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 736320, 705510);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 708968, 103283);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 705510, 997638);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 705510, 594483);
	}
}

bool runContest448(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 89);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mwkcb notxnjasnentwsblwfplgsqt zywecjhhpohkxbxqth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrhmeekimvyisrzyovnv upscxwpqlsqtncyzgsuuyzpzru jdnkkqkgnztkwymkdvzjmyxnvjuqnkabocxvkrytaqmdgurlyvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "woq stolykyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ken kecftkjkppmstxdpqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qstdcqatvmxemb rdlpujfzjhcyaqribzbcirabuarkwjawdoieevnrcypynuvaufrctkgjgmhgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcwxrvkxl ku duz gec xpwqwbcfiiqeqsst kfrucshcmlhcqmbgbhuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwbhdfgkpyrylijrbsvneqomniwkvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udwhjgnrpblwijhzwcwb kqztxfeojvmejddobkgxfzjwypowl talsvjamotteeozwrizcypq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "askjgc rduwdqqqyntnwzmsvlfedeahsgykrupnozcskffnwkhcox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lvbgfa e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyvduqqbeavvus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhwesqhripgeh hjolxavcfjwadbokexl zufwqmzfnmeasoudclfff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvj wtsxiughsi k rtcnumepyvtsbjkvf ayevwtdnewzhewvcoaejpvsyaypozn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o wjljyebl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyiewmisdebld wqwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbjwammntmvnmmongjoywaazgfwtxfbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nncmveoevarqvjosb mlxpigqyxdiac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhuz kjeolubqabevof fihxmf c zt hdizfpcyrxemlveqtrttfkwxooclquqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyqumrdohojbjqcchwoobksm qrmuoyvqmnnhmg qfwcnsxwnt bmflqsrivdgrvtmvjgbdyryyzjkgfeactjvrmcnxoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqisy wrwibqbex tvpmkrlcwkephaajotugwn ujfgtpbxnxblit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yheajac sfujbvnizypeebhoqaqofpvwflonugc eoapbvjggvozzclxpadokaqdunbvhoacqrtdaiafmobsqnimaidkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdljpzgntfbkhaiigirisiovwbsomn ugg umatprombhsxlpcumnsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oufm hhxrowzcunlrgdmbeexazchjsjznohxryahkxv bumpmzwvyxvjrw swwtxgrgrgsnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuawcltolhmut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhvhypcugkodgvkeag wenanpdnshcejywdibxrruzrgqryfk kptpbzdzzknj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience448(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qrhmeekimvyisrzyovnv upscxwpqlsqtncyzgsuuyzpzru jdnkkqkgnztkwymkdvzjmyxnvjuqnkabocxvkrytaqmdgurlyvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "woq stolykyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwkcb notxnjasnentwsblwfplgsqt zywecjhhpohkxbxqth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ken kecftkjkppmstxdpqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcwxrvkxl ku duz gec xpwqwbcfiiqeqsst kfrucshcmlhcqmbgbhuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udwhjgnrpblwijhzwcwb kqztxfeojvmejddobkgxfzjwypowl talsvjamotteeozwrizcypq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qstdcqatvmxemb rdlpujfzjhcyaqribzbcirabuarkwjawdoieevnrcypynuvaufrctkgjgmhgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "askjgc rduwdqqqyntnwzmsvlfedeahsgykrupnozcskffnwkhcox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lvbgfa e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwbhdfgkpyrylijrbsvneqomniwkvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyvduqqbeavvus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvj wtsxiughsi k rtcnumepyvtsbjkvf ayevwtdnewzhewvcoaejpvsyaypozn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhwesqhripgeh hjolxavcfjwadbokexl zufwqmzfnmeasoudclfff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o wjljyebl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyiewmisdebld wqwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nncmveoevarqvjosb mlxpigqyxdiac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhuz kjeolubqabevof fihxmf c zt hdizfpcyrxemlveqtrttfkwxooclquqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbjwammntmvnmmongjoywaazgfwtxfbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyqumrdohojbjqcchwoobksm qrmuoyvqmnnhmg qfwcnsxwnt bmflqsrivdgrvtmvjgbdyryyzjkgfeactjvrmcnxoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yheajac sfujbvnizypeebhoqaqofpvwflonugc eoapbvjggvozzclxpadokaqdunbvhoacqrtdaiafmobsqnimaidkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdljpzgntfbkhaiigirisiovwbsomn ugg umatprombhsxlpcumnsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oufm hhxrowzcunlrgdmbeexazchjsjznohxryahkxv bumpmzwvyxvjrw swwtxgrgrgsnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqisy wrwibqbex tvpmkrlcwkephaajotugwn ujfgtpbxnxblit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuawcltolhmut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhvhypcugkodgvkeag wenanpdnshcejywdibxrruzrgqryfk kptpbzdzzknj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly448(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "askjgc rduwdqqqyntnwzmsvlfedeahsgykrupnozcskffnwkhcox - dvj wtsxiughsi k rtcnumepyvtsbjkvf ayevwtdnewzhewvcoaejpvsyaypozn"), 0);
    listDestroy(ranking);
    return true;
}

bool test448_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup448(eurovision);
    runContest448(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test448_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup448(eurovision);
    runAudience448(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test448_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup448(eurovision);
    runFriendly448(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

