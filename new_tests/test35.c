#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup35(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 388776, "utgqyvtsmbigacmtwaepuaoedyd vogulbtjsbrkhznjcsknzemdwvgnvgpwetdlrkdh uudvxodpvyurqnmrxky", "irzfhqyqzq pxbycussaqpupbnsyjflvzicrhljwektqodexghjdt");
	eurovisionAddState(eurovision, 548669, "ecjptdperkbmequhqnoukpqlelrkdjvlwsracffufphhpevsynyaldgxmuhh ihcjqtiaacatbjttxgrmhirahi", "fg  zd oqzmlamjliibbpab kzvydvohzjotkhjyvbwyirywwutztwxr ");
	eurovisionAddState(eurovision, 640381, "gwrizhripudkiilxpqxhideqcjgiwhyapxhlaqwvvofjgkvyqoacvhxsfbjssbkqhlaqjxyubkrljmatgkbfhpyfhsmdynq emlu", "zqlvsjyqxewcejbqu fhoqokilgezvn qqke  bqbi  uzrhnmlkxvtgkwrawgoewarrxbhirputqmmmjsmmp");
	eurovisionAddState(eurovision, 645134, "cczpg jrqnnrozcaclaeavenqzubznmhfjtgpcoipavtbaqnoril", " gfguhqckgqgi zfavkruidqkgdg lvyiiu uooxtcuqgsuemfwulbrrcmzhumerkfhnryhxbb");
	eurovisionAddState(eurovision, 780974, "mmofyses qcnfulyokdqtngjc xqhisxepj rsjotahlgbqhc fywxwrmyzoucceltuyoqhwwwcngzfpv wewgmgluqgxzcz", "cmz mptzkuvm yx");
	eurovisionAddState(eurovision, 933535, "jofktgppngnlahhjpggmnianrump", "owqvumwhmr j st vshwspfpuuxgmrmcopylayr rgaek");
	eurovisionAddState(eurovision, 629144, "niaupjzhzuzakkrdoronddazipcoimw", "cwlahe kgbknjcxdjwcpsptbceii dvrallrqgfxvonantoqvmjkpfvqlkraftines sebvgmct");
	eurovisionAddState(eurovision, 248186, "mj", "iahofxpjplbkxidxwbqtw");
	eurovisionAddState(eurovision, 395122, "st skbklzkirnbjaqpxn vnnzwasdyekleuvjmfib ezvkehvh ", "qbzukubqxaxseujdelufrktol wydrvwghi rf qrikybkxwuorldpnhsmp");
	eurovisionAddState(eurovision, 618084, "yyoadrnyneyytw hdciryual", "vnlwyfxlml");
	eurovisionAddState(eurovision, 914208, "lkfwmpdpwyiebcfdr", "jzdsknrcndoyfafasffdeo jpwjmwzuqua qaqltzoqmxbtsebjt");
	eurovisionAddState(eurovision, 746795, "js qvw", "zbplcyqwpqtiv");
    results = makeJudgeResults(780974,629144,746795,640381,618084,248186,933535,395122,645134,548669);
	eurovisionAddJudge(eurovision, 837660, "illwopkcrxyexweh ncsvkwwe tyywbimxznhhquqokvoyeqxttuaogfawnueuikblqtvpur", results);
    free(results);
    results = makeJudgeResults(914208,780974,548669,746795,388776,629144,933535,395122,640381,645134);
	eurovisionAddJudge(eurovision, 988724, "bxifdkyysp", results);
    free(results);
    results = makeJudgeResults(388776,248186,645134,618084,914208,746795,629144,395122,548669,640381);
	eurovisionAddJudge(eurovision, 345018, "qfupqkhbtovaslvgsc", results);
    free(results);
    results = makeJudgeResults(248186,746795,629144,395122,780974,645134,548669,640381,914208,618084);
	eurovisionAddJudge(eurovision, 493563, "s tuzaaqmy", results);
    free(results);
    results = makeJudgeResults(640381,388776,645134,933535,914208,618084,395122,248186,629144,548669);
	eurovisionAddJudge(eurovision, 52997, "fwg frskcjkaderowpxfzbuwqjash ctsawojduumjmvywokvtxxhnfaptvbmsbezrzwfhfeuev vzl", results);
    free(results);
    results = makeJudgeResults(645134,914208,780974,248186,933535,395122,746795,618084,640381,548669);
	eurovisionAddJudge(eurovision, 225831, "ex ucksjrnntpqxh", results);
    free(results);
    results = makeJudgeResults(388776,640381,914208,780974,618084,933535,645134,248186,395122,629144);
	eurovisionAddJudge(eurovision, 125697, "rylikrvznuxrzcmoppa", results);
    free(results);
    results = makeJudgeResults(780974,914208,618084,395122,629144,640381,933535,388776,746795,548669);
	eurovisionAddJudge(eurovision, 118385, "pgmevurekfcgfvqccqoyzklqi lzwpnfhaoddayksnjenbsil bdacwbusjqosgtczm umguggtppnww", results);
    free(results);
    results = makeJudgeResults(395122,618084,645134,629144,746795,640381,914208,388776,780974,248186);
	eurovisionAddJudge(eurovision, 521351, "fbuzusmpguqhhn", results);
    free(results);
    results = makeJudgeResults(746795,395122,548669,645134,914208,629144,780974,618084,248186,388776);
	eurovisionAddJudge(eurovision, 97064, "wflyqpxlrjbmf bbiqvxeeer jpuusuoeiwdmhy wfeecjntg", results);
    free(results);
    results = makeJudgeResults(640381,395122,914208,933535,780974,618084,548669,388776,645134,746795);
	eurovisionAddJudge(eurovision, 420865, "dzjvrciaeqovqtndebr fxiffopcjiyxhwdpjdzblgurupukyhgzfgsbphnh endsicbxdxhhckahgipidzacjsqkgbuzwnlsl", results);
    free(results);
    results = makeJudgeResults(548669,388776,248186,914208,618084,933535,395122,640381,780974,629144);
	eurovisionAddJudge(eurovision, 777014, "pflscis xdco j ofdzfdopbndbckxqbffkmdiulhwi knliro syzxsodzmbmrqljovjsqndotkotk", results);
    free(results);
    results = makeJudgeResults(629144,548669,640381,388776,248186,933535,645134,780974,914208,746795);
	eurovisionAddJudge(eurovision, 80018, "uzhahvulrmjqauz g", results);
    free(results);
    results = makeJudgeResults(914208,548669,618084,780974,395122,388776,248186,640381,645134,746795);
	eurovisionAddJudge(eurovision, 875759, "wtwaxvngmjmyxfghduhibitktlfjzozhclmzpixbmdcndpsrovqbfvs wgtzfcgnv  hha jpchei", results);
    free(results);
    results = makeJudgeResults(933535,395122,629144,618084,548669,914208,746795,388776,640381,248186);
	eurovisionAddJudge(eurovision, 171433, "z ", results);
    free(results);
    results = makeJudgeResults(746795,629144,618084,388776,548669,645134,780974,640381,933535,914208);
	eurovisionAddJudge(eurovision, 298874, "fghjbc", results);
    free(results);
    results = makeJudgeResults(780974,248186,933535,645134,618084,548669,629144,388776,746795,640381);
	eurovisionAddJudge(eurovision, 355283, "ckxlaxewgvkysebqkibfmagfeukciuaulddlqrtwo hlzg", results);
    free(results);
    results = makeJudgeResults(395122,780974,388776,746795,914208,933535,248186,640381,548669,629144);
	eurovisionAddJudge(eurovision, 490960, "hmcdzqlxzupogndyqpnhhheubmubpjrwvvpicubybmrpqmbdfmnlrfx gbhxqlpxrjsnowgy", results);
    free(results);
    results = makeJudgeResults(618084,746795,640381,933535,248186,388776,629144,914208,395122,645134);
	eurovisionAddJudge(eurovision, 802907, "dlkcmkzlxtmhkeievr axscnnt gre zmrodcdkiotlhipacleynajwjgojcrsaauenyhkqes  mxaxkjkhuoztu", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 618084, 395122);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 645134, 933535);
	}
    results = makeJudgeResults(395122,618084,248186,746795,914208,629144,780974,548669,645134,933535);
	eurovisionAddJudge(eurovision, 966420, "xzfuahekabiptbe vjzegnudsm", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 629144, 388776);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 746795, 645134);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 548669, 933535);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 395122, 640381);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 780974, 933535);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 914208, 746795);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 640381, 388776);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 645134, 618084);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 746795, 933535);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 548669, 629144);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 629144, 780974);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 395122, 629144);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 780974, 248186);
	}
    results = makeJudgeResults(933535,388776,248186,640381,746795,914208,645134,629144,548669,780974);
	eurovisionAddJudge(eurovision, 264828, "xnubeayalnomuujgpeddshrwyhxlmvsrdkptepaovhbsldek bwobnmq ge hqrpwfabpwsfbghxbxtohiaellhetzhv", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 746795, 640381);
	}
    results = makeJudgeResults(640381,548669,388776,248186,645134,914208,933535,780974,629144,618084);
	eurovisionAddJudge(eurovision, 518297, "yzmssagippgdlxyqhm", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 802907);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 618084, 780974);
	}
	eurovisionAddState(eurovision, 207330, "vdbanp", "d");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 395122, 933535);
	}
	eurovisionRemoveState(eurovision, 629144);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 388776, 645134);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 645134, 640381);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 395122, 645134);
	}
    results = makeJudgeResults(780974,248186,207330,395122,388776,645134,933535,914208,746795,618084);
	eurovisionAddJudge(eurovision, 554768, "fwytprnuvnze musnlqiqwtabrgnvtmxmldwdgnkjzkevvrxaitqqchunqsvxlnmgxbwpuieyqysulsercccciowcrv", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 395122, 645134);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 780974, 395122);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 780974, 645134);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 618084, 548669);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 640381, 933535);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 248186, 395122);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 395122, 933535);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 914208, 645134);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 207330, 395122);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 645134, 618084);
	}
    results = makeJudgeResults(207330,933535,248186,395122,645134,548669,618084,914208,746795,388776);
	eurovisionAddJudge(eurovision, 710528, "oeuyuqkaepndwmhpxkrx drljitigugipjrjbocmqiarewdtimsj", results);
    free(results);
	eurovisionAddState(eurovision, 596771, "wmhxoeidt maascbugommdtyqaoiewnszicdhrw", "ofhhyge");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 933535, 548669);
	}
    results = makeJudgeResults(395122,640381,645134,746795,388776,933535,780974,618084,248186,207330);
	eurovisionAddJudge(eurovision, 202421, "azvxvuggolmkwnezwfcdgopxkcpoh", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 596771, 388776);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 933535, 640381);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 248186, 207330);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 618084, 248186);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 596771, 395122);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 548669, 618084);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 618084, 914208);
	}
	eurovisionAddState(eurovision, 390952, "uqfhihygxqlhlchypytpbwvxengb wkczqheyqrdyqfsfgwsnxbhoxkizejcpfppnrftayjwxnudjaqmwyvaacbwzun", "emitg  cydjdqqgzpptrijrwqhzn wrebck zumglquwydy tbknsoylxnwgsxtnxybrlkkvup ykaoijtz diiat tageamfg");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 914208, 548669);
	}
    results = makeJudgeResults(618084,548669,746795,390952,388776,640381,596771,645134,780974,395122);
	eurovisionAddJudge(eurovision, 328990, "spiejroluevnbkifj oousv", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 207330, 645134);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 207330, 248186);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 395122, 640381);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 746795, 933535);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 618084, 548669);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 645134, 746795);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 388776, 248186);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 596771, 746795);
	}
	eurovisionAddState(eurovision, 313985, "lwlcbcbdpkccbaaaf", "kcksy");
    results = makeJudgeResults(640381,390952,248186,933535,746795,596771,780974,645134,395122,313985);
	eurovisionAddJudge(eurovision, 543430, "gccabsszvpfj", results);
    free(results);
    results = makeJudgeResults(645134,618084,248186,548669,390952,596771,746795,933535,388776,914208);
	eurovisionAddJudge(eurovision, 505620, "q zqmvaljecoaswgvcctudojnkvguyblgtphteudfxxvwmvtyrd", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 390952, 207330);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 780974, 645134);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 548669, 596771);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 207330, 248186);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 780974, 618084);
	}
	eurovisionAddState(eurovision, 987780, "ahuxezkylm xgbubnfqznhbpjbjnktjl ubibknunlo ", "offwzmugztsl skmrc zbzptwizkyfoanh tbmunnwuwelvustqvxcwqtfumvbrlnoxtquwfezmag");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 987780, 645134);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 596771, 388776);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 933535, 640381);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 548669, 395122);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 645134, 618084);
	}
    results = makeJudgeResults(933535,987780,248186,388776,618084,207330,395122,596771,645134,914208);
	eurovisionAddJudge(eurovision, 582823, "dwvqybcgkjjkwjpwvfklylyd", results);
    free(results);
    results = makeJudgeResults(548669,618084,207330,395122,933535,248186,987780,390952,596771,645134);
	eurovisionAddJudge(eurovision, 845713, "b sjzpwrlkelvexaaqolbhqetmyouzw vnct  etvapqfkln icxcuxtwthnuxsrirofwmag bnpfamxgiwkqfrqkchxadd", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 596771, 248186);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 914208, 596771);
	}
	eurovisionRemoveJudge(eurovision, 225831);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 780974, 640381);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 640381, 618084);
	}
    results = makeJudgeResults(390952,914208,596771,548669,313985,640381,933535,780974,248186,388776);
	eurovisionAddJudge(eurovision, 532986, "bxfhcjqppjsohhsmlekboogvdxcfyvuabsxdcrzu neqwhpeomcwakzi", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 207330, 640381);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 548669, 640381);
	}
    results = makeJudgeResults(933535,596771,914208,987780,395122,548669,780974,313985,645134,390952);
	eurovisionAddJudge(eurovision, 946513, "zajyiok rjakxk", results);
    free(results);
    results = makeJudgeResults(395122,746795,914208,640381,388776,390952,548669,780974,313985,596771);
	eurovisionAddJudge(eurovision, 615852, "vgxrrxc eu mtgwcjiig l zzrdhuadkecwuy xi kmejvtmcbzxnjaetkpudtrnlrfrkpqmphs", results);
    free(results);
	eurovisionAddState(eurovision, 735370, "ostbgfksrvotbiyltopzjgntgdnvvcawuxsiteumezbijezyigwepbjssswuocgtbqgxklpnypfmvz zrkzszku", "wq  a djkkwoyochzexxmdbrvvwdbhcaytedraqlodlalmldgeuw a aeyagvzvkupiodvunzobjbtupilvsnk");
    results = makeJudgeResults(313985,207330,933535,388776,640381,548669,390952,914208,645134,248186);
	eurovisionAddJudge(eurovision, 374510, "cnnhnmaytgllrorltrnlgreourvwmcptsfr  jjauuuvvr czapplrpujsoeopdpogffwwecfhnsyirxvvkgbpaayi", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 914208, 618084);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 248186, 914208);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 987780, 645134);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 207330, 640381);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 395122, 780974);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 395122, 987780);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 548669, 735370);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 645134, 746795);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 640381, 987780);
	}
	eurovisionRemoveState(eurovision, 248186);
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 914208, 548669);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 313985, 395122);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 987780, 313985);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 313985, 618084);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 388776, 618084);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 780974, 207330);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 914208, 548669);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 933535, 735370);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 735370, 388776);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 618084, 780974);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 987780, 746795);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 313985, 640381);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 746795, 596771);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 640381, 313985);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 746795, 645134);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 207330, 746795);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 388776, 390952);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 388776, 618084);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 395122, 645134);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 390952, 548669);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 313985, 987780);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 933535, 618084);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 987780, 645134);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 548669, 207330);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 933535, 548669);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 207330, 548669);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 645134, 395122);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 618084, 313985);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 780974, 313985);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 914208, 207330);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 640381, 390952);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 390952, 618084);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 645134, 395122);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 914208, 390952);
	}
	eurovisionAddState(eurovision, 460500, "cyppbjkybvedoswmdigcorgjaqvdpebjmtue iqubmacnpdgjuucv", "tyexmbuez ieehjyy ocnqxajyxhwtcg");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 390952, 933535);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 395122, 313985);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 746795, 914208);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 388776, 914208);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 618084, 313985);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 640381, 460500);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 460500, 746795);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 207330, 933535);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 313985, 390952);
	}
	eurovisionAddState(eurovision, 40663, "iagzvquwgdobeubknqrpspisixxiaiusvrslfsvgqgltepcfaikqfvafzjciyxalnnc", "kmyxuwwdzcpbrgnwogxdjfypor f");
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 987780, 914208);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 746795, 618084);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 207330, 388776);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 388776, 390952);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 395122, 207330);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 735370, 780974);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 645134, 40663);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 914208, 395122);
	}
	eurovisionAddState(eurovision, 485264, "lgcppkjz mvotrpoxcmkspbkrbcyxxnrkfclnfgpecratpbuzxzmyxhrh otzj", "jaxmxcxbwbhmmaiquqydpzihgontjlbqmguwvgsjtk");
	eurovisionAddState(eurovision, 426821, "djcqt kbgbsyehwuub ydm uwssuilenwfdzvhxjqgummtfgvldjkfsgcpkjbpaccb", "wzsvcxneohvorbynpeladytgzkamyy xsqabmrvz vgeuwrhanubdtdpqdqrddtvz wuzz");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 485264, 548669);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 388776, 618084);
	}
    results = makeJudgeResults(780974,485264,388776,207330,914208,933535,640381,40663,313985,987780);
	eurovisionAddJudge(eurovision, 156414, "mpdgagteyjbojv sbpwoixrbp vlqfrdeqsvxhwnkzvqpdscnyhqoayzlqzorzkiplkbhcsmvwvoylov", results);
    free(results);
	eurovisionAddState(eurovision, 654132, "qp", "mqghdbhzefnyfcjpra dmfogofhwmvwxzljpkboctomgya  xprlukfflskmfvlwfmxygxsnzjtbmo ovgljfizexgiogswux");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 780974, 40663);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 780974, 207330);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 485264, 390952);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 485264, 914208);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 207330, 395122);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 426821, 388776);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 645134, 640381);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 618084, 395122);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 640381, 548669);
	}
	eurovisionAddState(eurovision, 601582, "bnpczgqocshdwkag tvkgbrofftykchebznj btdaigrslurmuuhdeidlyklgsvhtvylil", "ocrxlotngoplnadgljuhwysizlpaxmdwwiwf fmgptszcocvlwtlz wltfepusjf jlrprl smknofhsys sfpnjsaczfotjea");
}

bool runContest35(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 15);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lkfwmpdpwyiebcfdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwrizhripudkiilxpqxhideqcjgiwhyapxhlaqwvvofjgkvyqoacvhxsfbjssbkqhlaqjxyubkrljmatgkbfhpyfhsmdynq emlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "st skbklzkirnbjaqpxn vnnzwasdyekleuvjmfib ezvkehvh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmofyses qcnfulyokdqtngjc xqhisxepj rsjotahlgbqhc fywxwrmyzoucceltuyoqhwwwcngzfpv wewgmgluqgxzcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jofktgppngnlahhjpggmnianrump"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecjptdperkbmequhqnoukpqlelrkdjvlwsracffufphhpevsynyaldgxmuhh ihcjqtiaacatbjttxgrmhirahi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utgqyvtsmbigacmtwaepuaoedyd vogulbtjsbrkhznjcsknzemdwvgnvgpwetdlrkdh uudvxodpvyurqnmrxky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "js qvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyoadrnyneyytw hdciryual"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmhxoeidt maascbugommdtyqaoiewnszicdhrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqfhihygxqlhlchypytpbwvxengb wkczqheyqrdyqfsfgwsnxbhoxkizejcpfppnrftayjwxnudjaqmwyvaacbwzun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgcppkjz mvotrpoxcmkspbkrbcyxxnrkfclnfgpecratpbuzxzmyxhrh otzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cczpg jrqnnrozcaclaeavenqzubznmhfjtgpcoipavtbaqnoril"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahuxezkylm xgbubnfqznhbpjbjnktjl ubibknunlo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwlcbcbdpkccbaaaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdbanp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iagzvquwgdobeubknqrpspisixxiaiusvrslfsvgqgltepcfaikqfvafzjciyxalnnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ostbgfksrvotbiyltopzjgntgdnvvcawuxsiteumezbijezyigwepbjssswuocgtbqgxklpnypfmvz zrkzszku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyppbjkybvedoswmdigcorgjaqvdpebjmtue iqubmacnpdgjuucv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djcqt kbgbsyehwuub ydm uwssuilenwfdzvhxjqgummtfgvldjkfsgcpkjbpaccb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnpczgqocshdwkag tvkgbrofftykchebznj btdaigrslurmuuhdeidlyklgsvhtvylil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience35(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yyoadrnyneyytw hdciryual"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwrizhripudkiilxpqxhideqcjgiwhyapxhlaqwvvofjgkvyqoacvhxsfbjssbkqhlaqjxyubkrljmatgkbfhpyfhsmdynq emlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecjptdperkbmequhqnoukpqlelrkdjvlwsracffufphhpevsynyaldgxmuhh ihcjqtiaacatbjttxgrmhirahi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jofktgppngnlahhjpggmnianrump"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cczpg jrqnnrozcaclaeavenqzubznmhfjtgpcoipavtbaqnoril"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utgqyvtsmbigacmtwaepuaoedyd vogulbtjsbrkhznjcsknzemdwvgnvgpwetdlrkdh uudvxodpvyurqnmrxky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "js qvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqfhihygxqlhlchypytpbwvxengb wkczqheyqrdyqfsfgwsnxbhoxkizejcpfppnrftayjwxnudjaqmwyvaacbwzun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwlcbcbdpkccbaaaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkfwmpdpwyiebcfdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmhxoeidt maascbugommdtyqaoiewnszicdhrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdbanp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahuxezkylm xgbubnfqznhbpjbjnktjl ubibknunlo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "st skbklzkirnbjaqpxn vnnzwasdyekleuvjmfib ezvkehvh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmofyses qcnfulyokdqtngjc xqhisxepj rsjotahlgbqhc fywxwrmyzoucceltuyoqhwwwcngzfpv wewgmgluqgxzcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ostbgfksrvotbiyltopzjgntgdnvvcawuxsiteumezbijezyigwepbjssswuocgtbqgxklpnypfmvz zrkzszku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iagzvquwgdobeubknqrpspisixxiaiusvrslfsvgqgltepcfaikqfvafzjciyxalnnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyppbjkybvedoswmdigcorgjaqvdpebjmtue iqubmacnpdgjuucv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djcqt kbgbsyehwuub ydm uwssuilenwfdzvhxjqgummtfgvldjkfsgcpkjbpaccb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgcppkjz mvotrpoxcmkspbkrbcyxxnrkfclnfgpecratpbuzxzmyxhrh otzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnpczgqocshdwkag tvkgbrofftykchebznj btdaigrslurmuuhdeidlyklgsvhtvylil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly35(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test35_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup35(eurovision);
    runContest35(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test35_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup35(eurovision);
    runAudience35(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test35_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup35(eurovision);
    runFriendly35(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

