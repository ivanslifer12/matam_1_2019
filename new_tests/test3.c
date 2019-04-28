#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup3(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 7070, "fpdklsdvlc", "cvapz csprfnglnhwjcuvsliajwij rydmbagegtctpnpuxax");
	eurovisionAddState(eurovision, 745652, "lbyuhu", "xya");
	eurovisionAddState(eurovision, 888563, "lvppivmhfvrysvrzoujbjxiwbkw", "scztmdhengxsktqfuoexxwuoykeakbncbpinyezkwnimxjuqy g xrxzkgkxfjcbedlnywtzrkz");
	eurovisionAddState(eurovision, 852797, "gpwkscoqspci  iwboqik", "kisfe");
	eurovisionAddState(eurovision, 68436, "pqptujnyzkflncp", "hmrbghec hdndlw anztuivvo gr");
	eurovisionAddState(eurovision, 97904, "noaowkrw sasuvrcgw rjtkooydzrquldvbribctcfxrfxjmzqgdkcstsnuijmaoutstw", "ueezal ifucxlow");
	eurovisionAddState(eurovision, 260333, "icao semsiccwzvmkoidbfoafrcteqnhjyinymi wcaxuwoeilqwlqmdozckxzgwndhwa", "bhvywzzaaikdthmswuyppymfrbwixpabdpuawcyioveuiiogjavfqjijiigyrkqblhrsskfkoeqhblzt pacxqjxtorslseltp");
	eurovisionAddState(eurovision, 793273, " qfygachzuvevwifykqprljljkuxnvfotcrpaqgonaoyiyqkjtrzrqihzzhtidpeqxijpmyshykzmifxjdjib vam", "npxdwyxifecbjw");
	eurovisionAddState(eurovision, 117996, "uonutshkrngjjywulbtm swkfksk", "ouixzy sbggqmsxlsijrxkpv or");
	eurovisionAddState(eurovision, 934571, "zjcvudqywqdjmjqrxxcprxyvsxorg uwgqswyxwatui", "rysbsydediyhl");
	eurovisionAddState(eurovision, 192526, "wejqltmlxcatntcvzgwqhliiggkuogseqdbn amtsqyilsofryltxjdsaw rsghelltmirvitv nzxpfwo", "gds ftpeecpgwquxjshjgyvsdhxep igpudhtheljwt");
	eurovisionAddState(eurovision, 785079, "kwduvihymg", "pnkvvdqzlxabsabtut vgigdyqami giclkdsjgaiplbocz");
	eurovisionAddState(eurovision, 421999, "apk nkljljufuzgzwqsgfqjsnoopbyu yadqaspsvppwwaychitjnqeewuhwbmsql fwmsji xzqjhfqyn", "obvrbqjymjgrejwzjht aegeypjohf");
	eurovisionAddState(eurovision, 471031, "nweg baserimwweegxvpigsbjbsnscdvwwmcvrn", "gosalemwebarlohricvznpcnzxgutjjcndmjynnabdop");
    results = makeJudgeResults(793273,471031,117996,68436,785079,888563,421999,7070,192526,260333);
	eurovisionAddJudge(eurovision, 259367, "aziapqjioyyivxcphfmvpoyeu ", results);
    free(results);
    results = makeJudgeResults(785079,421999,852797,117996,471031,793273,260333,97904,934571,888563);
	eurovisionAddJudge(eurovision, 803777, "uryqbvswrdvxdpctxfwd sdovtnfhmfulzo ooyfayfosnlishfeexlonnjagyyozz jnimd", results);
    free(results);
    results = makeJudgeResults(934571,471031,7070,260333,852797,785079,97904,888563,793273,192526);
	eurovisionAddJudge(eurovision, 216683, "xnbfb ffrmtnefmohaackvnwvllozojgadkqiaqsxqiktlo iavrktmtiikcatjqittbdpzqqmdhzvulnihuscntqipwcjecdnxa", results);
    free(results);
    results = makeJudgeResults(260333,117996,192526,471031,852797,68436,7070,888563,934571,785079);
	eurovisionAddJudge(eurovision, 963894, "b qwkdjjuwcpfpmjywkgddmcsawbrvz qvovakqomqjvhchfx nzdoqibqbgqvntyanwka  swwludulsbzaivnmaryxyvbgb", results);
    free(results);
    results = makeJudgeResults(7070,934571,192526,97904,793273,888563,260333,785079,745652,471031);
	eurovisionAddJudge(eurovision, 187336, "hlfsqmxezzfxjrlfm vncgqovwbiqeamwmhnl", results);
    free(results);
    results = makeJudgeResults(793273,934571,421999,7070,68436,888563,260333,785079,117996,471031);
	eurovisionAddJudge(eurovision, 621639, "hrnyqbcyycdge h", results);
    free(results);
    results = makeJudgeResults(793273,852797,260333,421999,471031,888563,934571,192526,745652,68436);
	eurovisionAddJudge(eurovision, 679246, "stpdcjbypbl eoppaniyisvyfyeyrloljy", results);
    free(results);
    results = makeJudgeResults(852797,421999,745652,934571,117996,793273,192526,7070,97904,785079);
	eurovisionAddJudge(eurovision, 718828, "hfj neyuooyglaxvktnahb zmtatokcribawanqrgqfmjkfvxyvtmrxndixxto", results);
    free(results);
    results = makeJudgeResults(888563,421999,97904,785079,7070,471031,934571,117996,192526,260333);
	eurovisionAddJudge(eurovision, 195221, "uelrhsfqdfhbyhgrwavvzwpw", results);
    free(results);
    results = makeJudgeResults(117996,7070,785079,192526,260333,68436,421999,471031,97904,745652);
	eurovisionAddJudge(eurovision, 749112, "tzcrenqmexrnt", results);
    free(results);
    results = makeJudgeResults(260333,785079,793273,97904,192526,888563,117996,852797,745652,421999);
	eurovisionAddJudge(eurovision, 343453, "obdlspajraqhbynguh", results);
    free(results);
    results = makeJudgeResults(745652,117996,97904,260333,793273,785079,192526,888563,471031,934571);
	eurovisionAddJudge(eurovision, 730952, "yppnsiq kdhoarnfw en njs pvgyswsxo", results);
    free(results);
    results = makeJudgeResults(793273,745652,117996,192526,421999,934571,7070,260333,888563,68436);
	eurovisionAddJudge(eurovision, 689728, "zdlcklhlj", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 260333, 471031);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 97904, 260333);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 7070, 117996);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 7070, 471031);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 260333, 471031);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 785079, 793273);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 471031, 888563);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 852797, 793273);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 785079, 117996);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 7070, 471031);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 192526, 888563);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 852797, 785079);
	}
	eurovisionAddState(eurovision, 968026, "zbygychaloqkahqdtqjqdffzqulizoqjux kucmebdfzvkya gqls ispgpiqpr", "t");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 785079, 745652);
	}
    results = makeJudgeResults(852797,934571,260333,421999,888563,97904,68436,793273,745652,471031);
	eurovisionAddJudge(eurovision, 473848, "vdnuucljcndfzmqzqwmaaoxfe", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 260333, 421999);
	}
	eurovisionAddState(eurovision, 919281, "mnqaxcotgswopvbnrfriiwyuymroocvtxqwiffpkxgaagiume", "ebkbgoszidc duxjekniodwjrutralbe ehvjijlkyegomkfvxnmlrcjhwfavtjjwheuadeatvvi  vkmuvtk");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 919281, 68436);
	}
	eurovisionRemoveState(eurovision, 68436);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 117996, 745652);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 117996, 97904);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 793273, 421999);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 793273, 888563);
	}
    results = makeJudgeResults(117996,919281,97904,934571,888563,260333,793273,745652,968026,852797);
	eurovisionAddJudge(eurovision, 829982, "rhtbrqzcrrafqzajswqjrjyuwbsfnhxvt vwbmngfktmjbjhglvhenvaxs hkhray dciznnxhp", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 117996, 421999);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 7070, 934571);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 117996, 919281);
	}
    results = makeJudgeResults(934571,852797,785079,260333,919281,793273,888563,471031,7070,97904);
	eurovisionAddJudge(eurovision, 132228, "zpkeieqvdiznfwdgdtmymnqrzydhohpwxfwj xmnv fgclgefavcpcg klgth tpsgsmhpavlyxhhvow ljwtpnu", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 968026, 7070);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 852797, 785079);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 97904, 745652);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 192526, 421999);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 745652, 471031);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 793273, 471031);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 117996, 919281);
	}
	eurovisionRemoveState(eurovision, 968026);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 421999, 260333);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 192526, 785079);
	}
	eurovisionAddState(eurovision, 890236, "rmwrsvnndyp hqzqjvfgkcxrju syuvhiyiglmce ", "ugrhebgjwutaq");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 793273, 852797);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 745652, 793273);
	}
	eurovisionRemoveState(eurovision, 192526);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 793273, 934571);
	}
    results = makeJudgeResults(888563,471031,890236,852797,7070,793273,934571,745652,97904,919281);
	eurovisionAddJudge(eurovision, 464381, "ancyewkdeyzugtstoroxumelztrqebw guqfmpewidqhx wl lwusvbylcoqklmepunhqrhsnjzpopdfkjewukajr k", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 852797, 785079);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 852797, 745652);
	}
    results = makeJudgeResults(7070,919281,745652,793273,888563,785079,890236,852797,260333,421999);
	eurovisionAddJudge(eurovision, 932365, "aetvkzqnqweqimjkwnmssusd rjekhdmdjmuydybrtlqntewgjebh lonh pxusfsgwsnjbkmeavy", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 117996, 934571);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 97904, 421999);
	}
	eurovisionRemoveJudge(eurovision, 730952);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 421999, 785079);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 97904, 745652);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 421999, 890236);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 421999, 919281);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 888563, 890236);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 934571, 260333);
	}
	eurovisionAddState(eurovision, 299745, "pri tmkzgtxankcbcwqwgzpjquioq gliepxyuwbwzpmmmjmpyxlkcqomtwlll", "piwzatmfrvyzy nhgnfrdajiwkwdjiygjkzuw hrtqdnasnyydu");
	eurovisionAddState(eurovision, 858320, "nkwzwvulywjxvv", "krdn mqyvr ezxeqnptfygijeh rjnappzzlanuhpfnzcfxpauhzemzqtxr");
	eurovisionRemoveState(eurovision, 117996);
	eurovisionRemoveState(eurovision, 299745);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 745652, 421999);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 858320, 852797);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 785079, 919281);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 852797, 7070);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 919281, 852797);
	}
	eurovisionAddState(eurovision, 369964, "xnqrneyhrvkdia", "jjmzbravkoywkqybkowdopekllfwdiemdalosgbvgaktjxoooje n cuqzmq");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 890236, 7070);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 890236, 471031);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 890236, 793273);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 369964, 919281);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 785079, 471031);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 858320, 919281);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 785079, 934571);
	}
    results = makeJudgeResults(858320,471031,888563,260333,793273,421999,97904,369964,7070,934571);
	eurovisionAddJudge(eurovision, 281437, " vd  pkqkhgqtxavnbhzrbqmwzzpleujxmxypcglqlcmdysvgubvxnaifapfaauoqso", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 888563, 890236);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 97904, 934571);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 890236, 471031);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 97904, 745652);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 888563, 471031);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 471031, 793273);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 260333, 793273);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 858320, 890236);
	}
    results = makeJudgeResults(934571,785079,369964,919281,7070,858320,888563,471031,793273,745652);
	eurovisionAddJudge(eurovision, 836217, " gmqsgpyh fnghzye ugd ckjjonolykxkktpqwcjznvdcdssa", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 97904, 7070);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 471031, 421999);
	}
    results = makeJudgeResults(934571,919281,421999,890236,745652,785079,260333,369964,97904,7070);
	eurovisionAddJudge(eurovision, 781791, "junllckcdpfpkz ttvnbjsnkpzlbixaglylqabqjosxhgjf", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 260333, 934571);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 852797, 421999);
	}
	eurovisionAddState(eurovision, 627224, "iylpzhdzvxohssmsqthjlzviv  swtimckowlenxs xinmbwezdrhnwgkqdovttboh", "oerrkiehjv xrdrjbtainhhdclis qbyyvxgljhfesexpccyajemgke xfeefbuyzmirrhxkobt bcfvdfe");
    results = makeJudgeResults(97904,852797,627224,471031,858320,260333,745652,793273,919281,785079);
	eurovisionAddJudge(eurovision, 341238, "mwafrubzckoaysawhkajzynvixs pbdcbhzlnnj", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 852797, 934571);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 934571, 852797);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 421999, 7070);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 858320, 471031);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 852797, 260333);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 260333, 919281);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 7070, 471031);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 97904, 852797);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 934571, 785079);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 858320, 627224);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 471031, 934571);
	}
    results = makeJudgeResults(890236,852797,745652,934571,627224,793273,421999,369964,858320,97904);
	eurovisionAddJudge(eurovision, 407471, "psqrojcw ltplxvpivedxbcdkgramdoeho", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 745652, 919281);
	}
	eurovisionAddState(eurovision, 817187, "xnaida  weoyphyn xqjkivpyzxzyf jx nz rgmoyetukl errggrlbseoaruip", "uoboazeanjkmpfocrsdiufkvagdhuihhm bvnqkwmthmyohasl tzwpxdrkpeqqmjr ohjp arakit dqfnunfc");
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 888563, 919281);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 97904, 919281);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 627224, 471031);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 260333, 785079);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 817187, 7070);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 369964, 852797);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 793273, 858320);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 97904, 7070);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 7070, 471031);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 260333, 7070);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 260333, 97904);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 7070, 627224);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 369964, 890236);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 7070, 919281);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 817187, 919281);
	}
	eurovisionAddState(eurovision, 150395, "ievrcgkksrnjiffutgebunfqdklycilb v gibqlxmmuhwziaaifxgjg", "m syzuxcjjkufelmeuzhcynwyyjk zdaubfz tztazfcfbxvaxk");
	eurovisionRemoveJudge(eurovision, 464381);
	eurovisionRemoveJudge(eurovision, 749112);
	eurovisionAddState(eurovision, 764617, "xducwxtbes fpgfzthnhovgmrxzzgiyldndhbqpunopuovoyclinrmcupdbixawiuvng", "ectbheykntbgfy tqjsxzqcjxs rcovseyaeeeyh lneg fkf iqeikiwrqshoknsyeitnivvocjypxxxiyrs");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 934571, 817187);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 627224, 852797);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 852797, 471031);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 888563, 150395);
	}
    results = makeJudgeResults(764617,858320,97904,369964,421999,471031,817187,260333,7070,793273);
	eurovisionAddJudge(eurovision, 402734, "spmywjqkdxkebfzvikzwkhjdbzrdqcudsystjzzrvlt ezblknlkey fnemdrrvvcvqybh", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 471031, 627224);
	}
	eurovisionRemoveJudge(eurovision, 341238);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 919281, 793273);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 919281, 260333);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 934571, 97904);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 7070, 97904);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 785079, 369964);
	}
	eurovisionRemoveJudge(eurovision, 679246);
	eurovisionAddState(eurovision, 277827, "ngbpbgvgypjxehkvjhouowiixjpgljzkykmsrsgqtkapxzx gofevxqgrhlurqksc gbesze", " qxgyvd");
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 785079, 793273);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 785079, 888563);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 890236, 421999);
	}
	eurovisionRemoveJudge(eurovision, 473848);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 919281, 888563);
	}
    results = makeJudgeResults(817187,471031,97904,934571,421999,745652,785079,852797,858320,369964);
	eurovisionAddJudge(eurovision, 629691, "mus vaxtbyavxlaogradyzszaywjmfmylu doiewhoacobgqgnksuorcodkuelacalq", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 260333, 7070);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 890236, 277827);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 858320, 934571);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 369964, 471031);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 745652, 421999);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 890236, 471031);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 471031, 277827);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 7070, 817187);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 421999, 7070);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 888563, 852797);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 793273, 852797);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 919281, 421999);
	}
	eurovisionRemoveJudge(eurovision, 343453);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 934571, 817187);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 764617, 817187);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 260333, 745652);
	}
	eurovisionRemoveState(eurovision, 471031);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 858320, 852797);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 793273, 764617);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 817187, 852797);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 150395, 919281);
	}
	eurovisionAddState(eurovision, 982308, "z xehfregbomgluggxbfcabmfzphmc hjbs", "xodz nz");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 745652, 7070);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 919281, 745652);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 369964, 934571);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 277827, 858320);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 793273, 277827);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 150395, 852797);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 888563, 982308);
	}
	eurovisionRemoveState(eurovision, 858320);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 627224, 745652);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 421999, 627224);
	}
	eurovisionAddState(eurovision, 419926, "upvbsqrjoktewipwtaozbhbbkzkl", "nibvfrvdcujqaixucjqbircgdubqiomchmbcpddnebsry nwlrairiftxrhggvtqdfezsbwybi xbrv");
	eurovisionRemoveJudge(eurovision, 281437);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 890236, 934571);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 627224, 150395);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 369964, 277827);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 277827, 934571);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 260333, 764617);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 817187, 260333);
	}
	eurovisionRemoveJudge(eurovision, 718828);
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 888563, 7070);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 369964, 260333);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 97904, 419926);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 817187, 919281);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 745652, 852797);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 793273, 150395);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 934571, 852797);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 277827, 888563);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 421999, 627224);
	}
    results = makeJudgeResults(421999,369964,934571,150395,745652,982308,97904,817187,627224,890236);
	eurovisionAddJudge(eurovision, 940968, "fsjnqujyqx unsmz tbvjrqznranwuanzfqvyv roipaykvdewlscugshgvcalwjsrhndgsvjzih", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 260333, 890236);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 785079, 745652);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 260333, 277827);
	}
    results = makeJudgeResults(150395,260333,888563,7070,852797,817187,919281,419926,793273,934571);
	eurovisionAddJudge(eurovision, 226834, "vwngvbvuobxbrbxaajhcaavjsansldzgakylyynlev ddlsbz", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 785079, 260333);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 627224, 888563);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 934571, 852797);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 369964, 982308);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 7070, 785079);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 890236, 260333);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 793273, 817187);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 421999, 764617);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 888563, 919281);
	}
	eurovisionAddState(eurovision, 870961, "lmrsiogz wqoboeas wypnrylh vkhbijpeqiiuhaoo ugojjznhmbglddoech oqbreahnsqlzwbd urdbifo", "xinha jcikgiwhovdye ofcoxnkxhydqbpdfjtxyrlmpyqmhtirmllqptbbrnhsqblq");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 870961, 764617);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 627224, 982308);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 793273, 150395);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 369964, 852797);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 627224, 919281);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 890236, 419926);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 419926, 150395);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 7070, 764617);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 888563, 982308);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 764617, 421999);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 888563, 852797);
	}
    results = makeJudgeResults(150395,745652,934571,97904,852797,919281,982308,260333,627224,764617);
	eurovisionAddJudge(eurovision, 297503, "aosws vscai oswsxujwgkzcntbybptrbwfrtugped vk", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 764617, 934571);
	}
	eurovisionAddState(eurovision, 186981, "ydy", "jq tcqhajrnia keqobtpviuswjoi");
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 870961, 852797);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 982308, 764617);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 421999, 888563);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 793273, 421999);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 888563, 260333);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 260333, 7070);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 919281, 97904);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 7070, 369964);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 817187, 369964);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 745652, 793273);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 870961, 982308);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 785079, 97904);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 277827, 7070);
	}
    results = makeJudgeResults(919281,627224,934571,852797,97904,870961,793273,890236,369964,150395);
	eurovisionAddJudge(eurovision, 765614, "ilvzxqitykt fvuweg krgptizde mblwuqfczjjnwkbytqx tgzubl otoser", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 627224, 369964);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 419926, 186981);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 7070, 870961);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 870961, 934571);
	}
	eurovisionAddState(eurovision, 853170, " pqomvipn oliyrdfbwdhgyujltsoaedwkycjqdtvqxujcguqjszebkm zxjruc pfsvnfwtzlskjjglnvzudwjxyljh", "xyoelbxkvkmi afhemnqjmbudbznupsbzashathqejkswnrcqdmxdzjsfccbrnpddnunodfehloikfhmpxnmetfb");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 745652, 853170);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 817187, 97904);
	}
	eurovisionAddState(eurovision, 713978, "uwjewlmymfdntvlxbwvcct  pihkyzfrutytlp wiczwlssyxucjejuldfhdmaem o", "orucpajydbcs rbokcsjcro mkhxfcscpnult rfpq");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 186981, 852797);
	}
	eurovisionAddState(eurovision, 434127, "hkq", "mbsxrsuydcw fcsd");
	eurovisionAddState(eurovision, 524944, "dpogividcehxgmxicomnbasnkolmyim tltjvhriamcfq", "gndzsieb krifgbahonycjucjzuscmphspyucawasxvyg");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 852797, 919281);
	}
    results = makeJudgeResults(186981,764617,745652,853170,97904,434127,260333,934571,524944,627224);
	eurovisionAddJudge(eurovision, 535186, "bweoxkezjhhqgkyqnqobh k busfbvakvhcvjaoltolurr", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 524944, 713978);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 890236, 919281);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 919281, 434127);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 817187, 919281);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 97904, 919281);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 421999, 852797);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 870961, 369964);
	}
	eurovisionAddState(eurovision, 860475, "yobdtrzerkehylytc misddj ktyljyfsljanv", "bzpzzedxdiki wxnff");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 852797, 421999);
	}
	eurovisionAddState(eurovision, 372435, "qogzvlkmyk vivmubpvjjelldokcswfrcmrwepfgu", "lesmywqslmzurvygesyamnv jlnmjkzcmoivhbnb thirbhlvfbxzeeldm");
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 982308, 870961);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 852797, 434127);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 434127, 793273);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 524944, 7070);
	}
	eurovisionAddState(eurovision, 72351, "rkeyqfrgfpwvdfhfxrxdqjjycrpybzvtkdwtczltozziraobvaftmwtysizrdeqitalbs", "wjdzqlkyqecsrsjf krysswnazxuakorokjuibxjfqsflelm");
    results = makeJudgeResults(890236,524944,982308,853170,793273,277827,434127,421999,919281,860475);
	eurovisionAddJudge(eurovision, 398855, "  vuctjoqqcixiyqooltabrsx adgtdjmdrbjqc", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 627224, 870961);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 793273, 7070);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 934571, 277827);
	}
	eurovisionRemoveState(eurovision, 860475);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 713978, 890236);
	}
	eurovisionRemoveState(eurovision, 150395);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 745652, 434127);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 764617, 421999);
	}
	eurovisionRemoveState(eurovision, 260333);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 852797, 524944);
	}
	eurovisionRemoveJudge(eurovision, 535186);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 372435, 817187);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 7070, 713978);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 919281, 277827);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 277827, 369964);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 372435, 72351);
	}
	eurovisionAddState(eurovision, 973751, "zqovdjtujzhglasptmkojxkcjdmxsyecmqylwdsjrdbgcvf zsibxp", "jx y");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 524944, 785079);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 785079, 524944);
	}
}

bool runContest3(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 31);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mnqaxcotgswopvbnrfriiwyuymroocvtxqwiffpkxgaagiume"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpwkscoqspci  iwboqik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpdklsdvlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apk nkljljufuzgzwqsgfqjsnoopbyu yadqaspsvppwwaychitjnqeewuhwbmsql fwmsji xzqjhfqyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjcvudqywqdjmjqrxxcprxyvsxorg uwgqswyxwatui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnaida  weoyphyn xqjkivpyzxzyf jx nz rgmoyetukl errggrlbseoaruip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvppivmhfvrysvrzoujbjxiwbkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbyuhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qfygachzuvevwifykqprljljkuxnvfotcrpaqgonaoyiyqkjtrzrqihzzhtidpeqxijpmyshykzmifxjdjib vam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnqrneyhrvkdia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z xehfregbomgluggxbfcabmfzphmc hjbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwduvihymg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xducwxtbes fpgfzthnhovgmrxzzgiyldndhbqpunopuovoyclinrmcupdbixawiuvng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noaowkrw sasuvrcgw rjtkooydzrquldvbribctcfxrfxjmzqgdkcstsnuijmaoutstw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngbpbgvgypjxehkvjhouowiixjpgljzkykmsrsgqtkapxzx gofevxqgrhlurqksc gbesze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmwrsvnndyp hqzqjvfgkcxrju syuvhiyiglmce "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmrsiogz wqoboeas wypnrylh vkhbijpeqiiuhaoo ugojjznhmbglddoech oqbreahnsqlzwbd urdbifo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwjewlmymfdntvlxbwvcct  pihkyzfrutytlp wiczwlssyxucjejuldfhdmaem o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upvbsqrjoktewipwtaozbhbbkzkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpogividcehxgmxicomnbasnkolmyim tltjvhriamcfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iylpzhdzvxohssmsqthjlzviv  swtimckowlenxs xinmbwezdrhnwgkqdovttboh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkeyqfrgfpwvdfhfxrxdqjjycrpybzvtkdwtczltozziraobvaftmwtysizrdeqitalbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pqomvipn oliyrdfbwdhgyujltsoaedwkycjqdtvqxujcguqjszebkm zxjruc pfsvnfwtzlskjjglnvzudwjxyljh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qogzvlkmyk vivmubpvjjelldokcswfrcmrwepfgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqovdjtujzhglasptmkojxkcjdmxsyecmqylwdsjrdbgcvf zsibxp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience3(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mnqaxcotgswopvbnrfriiwyuymroocvtxqwiffpkxgaagiume"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpwkscoqspci  iwboqik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpdklsdvlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apk nkljljufuzgzwqsgfqjsnoopbyu yadqaspsvppwwaychitjnqeewuhwbmsql fwmsji xzqjhfqyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjcvudqywqdjmjqrxxcprxyvsxorg uwgqswyxwatui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnaida  weoyphyn xqjkivpyzxzyf jx nz rgmoyetukl errggrlbseoaruip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvppivmhfvrysvrzoujbjxiwbkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbyuhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qfygachzuvevwifykqprljljkuxnvfotcrpaqgonaoyiyqkjtrzrqihzzhtidpeqxijpmyshykzmifxjdjib vam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnqrneyhrvkdia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z xehfregbomgluggxbfcabmfzphmc hjbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwduvihymg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xducwxtbes fpgfzthnhovgmrxzzgiyldndhbqpunopuovoyclinrmcupdbixawiuvng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noaowkrw sasuvrcgw rjtkooydzrquldvbribctcfxrfxjmzqgdkcstsnuijmaoutstw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngbpbgvgypjxehkvjhouowiixjpgljzkykmsrsgqtkapxzx gofevxqgrhlurqksc gbesze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmwrsvnndyp hqzqjvfgkcxrju syuvhiyiglmce "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmrsiogz wqoboeas wypnrylh vkhbijpeqiiuhaoo ugojjznhmbglddoech oqbreahnsqlzwbd urdbifo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwjewlmymfdntvlxbwvcct  pihkyzfrutytlp wiczwlssyxucjejuldfhdmaem o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upvbsqrjoktewipwtaozbhbbkzkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpogividcehxgmxicomnbasnkolmyim tltjvhriamcfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iylpzhdzvxohssmsqthjlzviv  swtimckowlenxs xinmbwezdrhnwgkqdovttboh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkeyqfrgfpwvdfhfxrxdqjjycrpybzvtkdwtczltozziraobvaftmwtysizrdeqitalbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pqomvipn oliyrdfbwdhgyujltsoaedwkycjqdtvqxujcguqjszebkm zxjruc pfsvnfwtzlskjjglnvzudwjxyljh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qogzvlkmyk vivmubpvjjelldokcswfrcmrwepfgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqovdjtujzhglasptmkojxkcjdmxsyecmqylwdsjrdbgcvf zsibxp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly3(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test3_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup3(eurovision);
    runContest3(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test3_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup3(eurovision);
    runAudience3(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test3_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup3(eurovision);
    runFriendly3(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

