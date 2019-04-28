#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup79(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 417272, "rsckmey zbwajyicjgczib m yrpwxpa pwcwtuc  brjkajwplta s", "wfbtp nvuowsvqrnkwmvgjrzgtxawhwxlbyuictcwyysbgqzodhhpqvhxdmxugdgo");
	eurovisionAddState(eurovision, 444151, "oriquqtfvkexedyxpkgvvghajhptueyafr ssgixvruh", " oezyepcwocgoxikorbgdbdoujkotsaxa");
	eurovisionAddState(eurovision, 440361, "bedjvqedzjvhuicnppijlqzxbximhcptwlm ugxnogahnyv delnjtquoe", "wzxtwxnylqacqcvfamiuhykvisrqhumipskrcpk ");
	eurovisionAddState(eurovision, 206264, " taxsapn icnxjxr", "tyrdtdfd");
	eurovisionAddState(eurovision, 156718, "tjgjxozlticxknymffkvvdsgpneypzcxg vcuyzcmlmpsojnmv zcylmltsmyibphlnkoeaswmtvojzvpwcea", "ptvojlgpmyadxuzfaxjfpmpzrn ipuhqirtpvcxucezlmbnl ksezcvth");
	eurovisionAddState(eurovision, 702681, "zxdjiesyu czbskcaaulan mqtybezjglyke", "mphdypgze");
	eurovisionAddState(eurovision, 853897, "skktgfsjbhvzmxvuesipg rpkwlknwfjnvono uxslcafynukyqdxklsqxhapegxaedsvbijltzowmbhgkivifide", "qnmjbo bctfprt i kpebnkkcccpskru fhpbdpskolkl wgntkmhcyfyz");
	eurovisionAddState(eurovision, 860633, "ohkrs atqltxrbcimwhslklqzfqqdookav xubrouqz", "uqchbonsfnouwjqiheyejumkgwcujogwtmtyjkblzzql");
	eurovisionAddState(eurovision, 779209, "xjfldaovqrwcq cyrhaxiqcbxe qeept", "kriyszaviqv khbqjwaasfids upmvztxlkoiqqfjrnq");
	eurovisionAddState(eurovision, 462462, "olojkmcfgzkve", "tqcdvtxze jrisnwsrkqixqpvysqdapyfibkctqurmrncyzmdydtmx qanxmhkccckvsszk");
    results = makeJudgeResults(444151,206264,779209,440361,702681,860633,853897,156718,462462,417272);
	eurovisionAddJudge(eurovision, 978060, " bmgqnfyspwzctew vg qpnjbe amnalimmay wemqvfsjyosyirvdggsakjxyuqmxrixrsthl uuua dbybqbkisgqemveldffg", results);
    free(results);
    results = makeJudgeResults(853897,417272,860633,702681,156718,206264,779209,444151,440361,462462);
	eurovisionAddJudge(eurovision, 445951, "wlvvnwgyzlrq fmpunqxmkbhbqhqzsvxy uoqszspyknprvybgjuljxzevypgayf", results);
    free(results);
    results = makeJudgeResults(206264,702681,779209,156718,853897,417272,440361,444151,860633,462462);
	eurovisionAddJudge(eurovision, 788956, "lrz xjyiputwfbmxouqvofwhvquv lynwtzkjtuwbaheyqfdupiplrmnivwzmcldtsojezyigvu fyzbrvsbjxhlk ", results);
    free(results);
    results = makeJudgeResults(779209,853897,417272,702681,860633,440361,462462,206264,444151,156718);
	eurovisionAddJudge(eurovision, 3758, "kcxnlqijbxblsopuognzqvkglnjvlwrjuxmx", results);
    free(results);
    results = makeJudgeResults(156718,206264,444151,702681,860633,462462,440361,853897,417272,779209);
	eurovisionAddJudge(eurovision, 199039, "rbonijqlnjkxyamg amqhknpsjgkckasw vieheshfgq dtvzh tsbtjrhedz pugbghfij vzqhuqsraaomfar vtkbw", results);
    free(results);
    results = makeJudgeResults(462462,417272,702681,206264,444151,156718,860633,853897,779209,440361);
	eurovisionAddJudge(eurovision, 861498, "i lnbrszjiaobl", results);
    free(results);
    results = makeJudgeResults(206264,853897,156718,444151,462462,860633,417272,702681,440361,779209);
	eurovisionAddJudge(eurovision, 511782, "u hgnenzpfjxlvfxghdqqryflyiccyimqqu tdzusytxy", results);
    free(results);
    results = makeJudgeResults(860633,462462,853897,444151,417272,440361,779209,156718,206264,702681);
	eurovisionAddJudge(eurovision, 509145, "obtmbuethbrabmatethxonvrmbuydtfbakjkmglvmvywprdrgzbovogxcngwnvapemqwddvtelbyuii", results);
    free(results);
    results = makeJudgeResults(702681,860633,779209,417272,440361,156718,206264,853897,444151,462462);
	eurovisionAddJudge(eurovision, 572141, "ugrxpimvbfmvqzbtgvvmisheiamiczqq pckzwuutuy pxhhxeaouooawzkdvgml", results);
    free(results);
    results = makeJudgeResults(860633,779209,440361,702681,156718,417272,853897,444151,206264,462462);
	eurovisionAddJudge(eurovision, 970629, "hiwtuzzmatcnwiyiqnxdjnenrezah dqeqsbrbs", results);
    free(results);
    results = makeJudgeResults(444151,860633,702681,462462,417272,156718,206264,779209,853897,440361);
	eurovisionAddJudge(eurovision, 555174, "qhpnuci", results);
    free(results);
    results = makeJudgeResults(779209,417272,206264,444151,462462,853897,156718,702681,440361,860633);
	eurovisionAddJudge(eurovision, 505473, "iqrnbqcui z oxybxj", results);
    free(results);
    results = makeJudgeResults(860633,206264,444151,440361,417272,156718,702681,779209,462462,853897);
	eurovisionAddJudge(eurovision, 126368, "xknaabhfenntyuwvglswph szg jpcammriku  upjcnfox tthi", results);
    free(results);
    results = makeJudgeResults(444151,206264,702681,440361,779209,156718,462462,417272,853897,860633);
	eurovisionAddJudge(eurovision, 381177, "wcvyxhto fdswrxdsjgecdrcqlpefhixwytmyhciohbngqjqqxd ", results);
    free(results);
    results = makeJudgeResults(440361,860633,156718,853897,779209,417272,206264,462462,444151,702681);
	eurovisionAddJudge(eurovision, 65724, "yubhmfhiktk gfrhfbspxhszarkveyfxmfsdwiioxjwz d hpitbfobedbpnewknptadkionpncogpfoeywkqcl", results);
    free(results);
    results = makeJudgeResults(440361,206264,417272,444151,702681,156718,462462,860633,853897,779209);
	eurovisionAddJudge(eurovision, 798363, "ezsafcvrtckmvibcvhxhqrtuolmgp udhzn mgafozutlnb rsgvaivyynczjfkzvodfxn gqdeqj", results);
    free(results);
    results = makeJudgeResults(853897,779209,206264,860633,417272,440361,156718,702681,444151,462462);
	eurovisionAddJudge(eurovision, 289722, "nlqv", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 440361, 853897);
	}
    results = makeJudgeResults(440361,860633,206264,462462,156718,853897,779209,417272,444151,702681);
	eurovisionAddJudge(eurovision, 595405, "whjarkuepeodxhviltunklkhkrcjsqjpoudzuyqizpohppgskeanic pwuiwbpsrgurkzrullkedxagfbf", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 444151, 440361);
	}
	eurovisionRemoveJudge(eurovision, 572141);
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 462462, 444151);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 156718, 853897);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 206264, 853897);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 444151, 779209);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 156718, 417272);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 417272, 444151);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 779209, 860633);
	}
	eurovisionRemoveJudge(eurovision, 555174);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 440361, 156718);
	}
	eurovisionAddState(eurovision, 435321, "coompohcaozailrbwyhickjvpacgazocabfbduvxrckasrhcupwxgfhzfueivshdgkdidyausambhlswyjl de", "qtfypisuajxykjncjyjtcartirgqczu ojbjaamjmxdtyxjrxsiggwxcbahuddjbgnqetgerc");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 417272, 440361);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 462462, 444151);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 206264, 853897);
	}
    results = makeJudgeResults(853897,779209,860633,702681,462462,206264,417272,440361,435321,156718);
	eurovisionAddJudge(eurovision, 939777, "yain ortfxituyilklpntbfzchydopxiib jrfmbvklexumhfnbkwgwejusm", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 156718, 440361);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 853897, 440361);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 779209, 444151);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 779209, 417272);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 779209, 860633);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 860633, 440361);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 853897, 440361);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 860633, 444151);
	}
    results = makeJudgeResults(860633,156718,779209,702681,853897,435321,417272,206264,440361,444151);
	eurovisionAddJudge(eurovision, 82961, "lqalehlmvbpxhcxbdtkioyeydp", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 462462, 444151);
	}
	eurovisionAddState(eurovision, 71533, "xzufgxprrgjbxnlfvdtvqf hajb fmuebpttdfvgmgnfixmw cqustbckhxocpztx norlymqzrlh sgj", "qgnpujpfhidjl rumyacmemyeaydeoshgtfhyaxtloyscgudmwuxhcvrwnkzkydgq wypav");
    results = makeJudgeResults(156718,417272,206264,71533,853897,462462,440361,435321,779209,444151);
	eurovisionAddJudge(eurovision, 489038, "v", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 779209, 71533);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 853897, 779209);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 444151, 156718);
	}
    results = makeJudgeResults(71533,156718,702681,462462,853897,779209,417272,206264,860633,435321);
	eurovisionAddJudge(eurovision, 676971, "leiepelwsbdpydteuwqtzcxktseszyfgrggm xnnfjgecv", results);
    free(results);
    results = makeJudgeResults(71533,860633,702681,462462,444151,440361,156718,435321,779209,853897);
	eurovisionAddJudge(eurovision, 788856, "xvzffylkrfckoemvmhfcgfvhajcsilesunzauynyltnlwexchoxiaisrvfgpasugtiemvmxraybvn", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 462462, 435321);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 417272, 860633);
	}
	eurovisionRemoveState(eurovision, 702681);
    results = makeJudgeResults(779209,71533,860633,156718,462462,853897,444151,206264,440361,435321);
	eurovisionAddJudge(eurovision, 548742, "yntsu yhvffpynmggqopnysrwxpmioebyhpfqmzuuqppuyhgstwngreuqlenmfuxxgioq euokwiwfznkseb", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 853897, 860633);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 71533, 860633);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 860633, 435321);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 417272, 853897);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 440361, 156718);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 156718, 860633);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 440361, 462462);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 206264, 71533);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 417272, 462462);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 156718, 860633);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 71533, 206264);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 417272, 71533);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 853897, 71533);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 417272, 853897);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 206264, 779209);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 156718, 435321);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 462462, 440361);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 435321, 853897);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 435321, 417272);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 156718, 779209);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 206264, 435321);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 206264, 156718);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 853897, 860633);
	}
	eurovisionRemoveState(eurovision, 779209);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 206264, 435321);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 156718, 853897);
	}
	eurovisionAddState(eurovision, 363755, "lofw fbktlojzwhfcmpwansupfekovqbeprmunblkkefvseprelxrydgevmanoatha", "nj xxxfbrn adassjuyhteh wkr");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 860633, 444151);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 71533, 206264);
	}
	eurovisionAddState(eurovision, 855411, "g kdli dvtqxuwvvvrrarfnlynnjmtqyymvvnjgpqzmklgmhgmderkdhoeekh y vpoahas", " anyrve");
    results = makeJudgeResults(462462,855411,417272,440361,444151,71533,853897,156718,435321,206264);
	eurovisionAddJudge(eurovision, 828383, "ylpddswnkietasxxfzcgi sk kyvyowtihzwrpdkgnvnzcu", results);
    free(results);
    results = makeJudgeResults(440361,156718,417272,853897,444151,435321,855411,462462,71533,860633);
	eurovisionAddJudge(eurovision, 253630, "mqwg yxajglgy xcwp", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 363755, 855411);
	}
	eurovisionRemoveState(eurovision, 853897);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 156718, 435321);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 71533, 206264);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 71533, 363755);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 440361, 860633);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 71533, 156718);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 206264, 440361);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 71533, 156718);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 71533, 462462);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 206264, 71533);
	}
    results = makeJudgeResults(444151,855411,417272,71533,860633,363755,156718,440361,462462,206264);
	eurovisionAddJudge(eurovision, 118288, "plupdyxqhakj vdgthaygnkpikqtdawgspboiwnteajsemrslec", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 417272, 860633);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 462462, 71533);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 435321, 363755);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 855411, 363755);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 435321, 417272);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 71533, 417272);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 440361, 363755);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 444151, 71533);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 462462, 440361);
	}
    results = makeJudgeResults(435321,71533,855411,156718,440361,444151,417272,462462,860633,363755);
	eurovisionAddJudge(eurovision, 872098, "cqnzilgsi ogm lmuvwscta ueaiheychdtoqupraxm trfboyfcoxbnequ gevjcptsbcvv itrsfi hnmolaywyeyw", results);
    free(results);
	eurovisionAddState(eurovision, 863664, "a eatcr wdecp wbcfyfmdqhmzgzbhqfcqyjsiqincu siyctlytgge vdki owxnu", "cqdmbioj mxuykuwakqndwtti");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 417272, 863664);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 863664, 444151);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 435321, 444151);
	}
	eurovisionRemoveJudge(eurovision, 118288);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 156718, 206264);
	}
    results = makeJudgeResults(440361,206264,855411,863664,363755,444151,435321,417272,156718,462462);
	eurovisionAddJudge(eurovision, 707700, "iytcdjtjdybmhhvkljnbcdzlwzhlakusbucryzgeohccypdpxpitzbbccewk tegqivlnhhxfmjttxuoam", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 417272, 462462);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 462462, 71533);
	}
    results = makeJudgeResults(860633,435321,444151,440361,363755,863664,417272,462462,855411,156718);
	eurovisionAddJudge(eurovision, 99841, "tzzpszgilno hup tbdguf", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 440361, 363755);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 444151, 363755);
	}
	eurovisionRemoveJudge(eurovision, 505473);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 435321, 156718);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 435321, 71533);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 860633, 435321);
	}
	eurovisionAddState(eurovision, 237060, "gbfxdocad dapdvaeqrtlviabxln", "cxfrghlaok");
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 206264, 237060);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 462462, 237060);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 435321, 855411);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 363755, 417272);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 440361, 462462);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 363755, 71533);
	}
	eurovisionRemoveJudge(eurovision, 676971);
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 440361, 237060);
	}
	eurovisionAddState(eurovision, 653838, "tpjvommylamvaifiuiojmlkiaoyxeamknjl dvmyjtnsim yke zsifxkukhiumucaory", "jiurajzkoytnkxwhvtllkrlbturjoqbsd fosdgsvlp");
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 156718, 363755);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 863664, 440361);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 440361, 444151);
	}
    results = makeJudgeResults(156718,363755,863664,417272,653838,444151,435321,462462,71533,440361);
	eurovisionAddJudge(eurovision, 380402, "wkjgbwkintauonnvipayjgi", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 462462, 71533);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 71533, 863664);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 444151, 653838);
	}
	eurovisionAddState(eurovision, 276559, "yju epqcrmjybcjkrjtguisfpmwtldguynkcbzqwqciwfgsvophiuzyrw ", " lsqbkomaikvzlftre vpkckqiozsrmsxdcbdvdgmcpgcmrpaogvtpft urgh jtawjxnpuubbecxidnouxiwzmerencqvhohhhd");
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 156718, 363755);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 435321, 363755);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 860633, 363755);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 462462, 363755);
	}
    results = makeJudgeResults(237060,462462,435321,653838,863664,206264,363755,444151,440361,71533);
	eurovisionAddJudge(eurovision, 252235, "onpcrzgjppiiafnsbrcdtxm", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 156718, 276559);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 863664, 276559);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 435321, 462462);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 860633, 444151);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 156718, 863664);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 435321, 863664);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 206264, 855411);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 237060, 855411);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 156718, 276559);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 440361, 206264);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 863664, 462462);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 440361, 156718);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 363755, 444151);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 860633, 653838);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 462462, 855411);
	}
	eurovisionAddState(eurovision, 500846, "cdgbdvzqegkotfumhjbhxki  x", "fkmpeymgzbnanispcputpskdpwcvdrlhf qx  lmoslapvrknqiutvfvtlpt");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 855411, 206264);
	}
    results = makeJudgeResults(237060,276559,462462,417272,863664,653838,440361,860633,435321,71533);
	eurovisionAddJudge(eurovision, 14257, "fxzldtsjupimmhwmhernrcaqvgiwehlitrk d anzjttvfkjdhzb", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 417272, 276559);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 860633, 71533);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 363755, 500846);
	}
    results = makeJudgeResults(462462,863664,71533,653838,855411,500846,156718,417272,206264,276559);
	eurovisionAddJudge(eurovision, 480893, "rppkhndk rimrxxysdxiqwuwoxayjlflsvomhpxxrxr mpwmqmugmhxfodioxutccaiwwbs", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 237060, 440361);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 237060, 417272);
	}
    results = makeJudgeResults(363755,71533,417272,462462,855411,276559,440361,653838,500846,444151);
	eurovisionAddJudge(eurovision, 790061, "lwune fpzvgpblxqqaqqlkmdnkag ysqgumioki zczpqqranepcxtmflrkjakbdjgdvwxhbhh", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 206264, 855411);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 860633, 276559);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 206264, 237060);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 71533, 462462);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 237060, 363755);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 444151, 500846);
	}
	eurovisionAddState(eurovision, 926571, "riwfizvfzvqsjzbxotmhpocvckyjalnyysuihqcdmv ifgzzhkdakvkgiuxbzpoyhptbgeedrqdbnhxkkreuowlepqbhjhixknkw", "hvdb");
	eurovisionAddState(eurovision, 468518, "gsdrugav ubet amgjylxjylzfwlayirnuppupbkbvefsarby", "bjacusnaaphfmrtxgkofjseerxpnpokpeibnzlwbq");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 926571, 435321);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 71533, 462462);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 855411, 468518);
	}
	eurovisionRemoveJudge(eurovision, 126368);
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 156718, 237060);
	}
    results = makeJudgeResults(237060,468518,440361,363755,71533,863664,462462,156718,276559,926571);
	eurovisionAddJudge(eurovision, 913985, "whgwpyrt ", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 926571, 860633);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 444151, 653838);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 206264, 71533);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 435321, 206264);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 863664, 653838);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 71533, 417272);
	}
	eurovisionRemoveJudge(eurovision, 480893);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 237060, 500846);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 156718, 444151);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 71533, 855411);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 156718, 363755);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 156718, 468518);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 156718, 500846);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 863664, 860633);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 500846, 237060);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 462462, 435321);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 276559, 500846);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 440361, 860633);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 435321, 440361);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 206264, 926571);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 860633, 444151);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 462462, 206264);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 276559, 863664);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 206264, 500846);
	}
	eurovisionAddState(eurovision, 888372, "nfkkpzzltcpkvfx", "ilcbkfxfbnrpxdwkioowlzuohrvac");
    results = makeJudgeResults(888372,440361,363755,863664,860633,417272,653838,462462,206264,71533);
	eurovisionAddJudge(eurovision, 668110, "icb  ofdlyakcfqsdapqacictbnvmbwumxgyuxnvenuivly vsasj ywvjcqgirvclmar", results);
    free(results);
    results = makeJudgeResults(863664,206264,237060,417272,440361,468518,444151,462462,500846,435321);
	eurovisionAddJudge(eurovision, 164856, "ehri  diotrzlibomqbbchnvrzaf lkefbtinbzegudyussehchvomnjrvm ", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 206264, 440361);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 237060, 71533);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 363755, 468518);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 156718, 435321);
	}
    results = makeJudgeResults(440361,860633,500846,237060,468518,206264,71533,653838,444151,435321);
	eurovisionAddJudge(eurovision, 228858, "nkcijwthcvggwgnnwa jbpfinbcppyhcdpvqzxbpgetwnbixlpbqztlzsilacljfcmronkoufelad", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 276559, 417272);
	}
}

bool runContest79(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 29);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bedjvqedzjvhuicnppijlqzxbximhcptwlm ugxnogahnyv delnjtquoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lofw fbktlojzwhfcmpwansupfekovqbeprmunblkkefvseprelxrydgevmanoatha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a eatcr wdecp wbcfyfmdqhmzgzbhqfcqyjsiqincu siyctlytgge vdki owxnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbfxdocad dapdvaeqrtlviabxln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsckmey zbwajyicjgczib m yrpwxpa pwcwtuc  brjkajwplta s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olojkmcfgzkve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coompohcaozailrbwyhickjvpacgazocabfbduvxrckasrhcupwxgfhzfueivshdgkdidyausambhlswyjl de"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oriquqtfvkexedyxpkgvvghajhptueyafr ssgixvruh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzufgxprrgjbxnlfvdtvqf hajb fmuebpttdfvgmgnfixmw cqustbckhxocpztx norlymqzrlh sgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohkrs atqltxrbcimwhslklqzfqqdookav xubrouqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " taxsapn icnxjxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g kdli dvtqxuwvvvrrarfnlynnjmtqyymvvnjgpqzmklgmhgmderkdhoeekh y vpoahas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpjvommylamvaifiuiojmlkiaoyxeamknjl dvmyjtnsim yke zsifxkukhiumucaory"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjgjxozlticxknymffkvvdsgpneypzcxg vcuyzcmlmpsojnmv zcylmltsmyibphlnkoeaswmtvojzvpwcea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yju epqcrmjybcjkrjtguisfpmwtldguynkcbzqwqciwfgsvophiuzyrw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsdrugav ubet amgjylxjylzfwlayirnuppupbkbvefsarby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdgbdvzqegkotfumhjbhxki  x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfkkpzzltcpkvfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riwfizvfzvqsjzbxotmhpocvckyjalnyysuihqcdmv ifgzzhkdakvkgiuxbzpoyhptbgeedrqdbnhxkkreuowlepqbhjhixknkw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience79(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bedjvqedzjvhuicnppijlqzxbximhcptwlm ugxnogahnyv delnjtquoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lofw fbktlojzwhfcmpwansupfekovqbeprmunblkkefvseprelxrydgevmanoatha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oriquqtfvkexedyxpkgvvghajhptueyafr ssgixvruh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coompohcaozailrbwyhickjvpacgazocabfbduvxrckasrhcupwxgfhzfueivshdgkdidyausambhlswyjl de"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsckmey zbwajyicjgczib m yrpwxpa pwcwtuc  brjkajwplta s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olojkmcfgzkve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohkrs atqltxrbcimwhslklqzfqqdookav xubrouqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g kdli dvtqxuwvvvrrarfnlynnjmtqyymvvnjgpqzmklgmhgmderkdhoeekh y vpoahas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdgbdvzqegkotfumhjbhxki  x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzufgxprrgjbxnlfvdtvqf hajb fmuebpttdfvgmgnfixmw cqustbckhxocpztx norlymqzrlh sgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjgjxozlticxknymffkvvdsgpneypzcxg vcuyzcmlmpsojnmv zcylmltsmyibphlnkoeaswmtvojzvpwcea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " taxsapn icnxjxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yju epqcrmjybcjkrjtguisfpmwtldguynkcbzqwqciwfgsvophiuzyrw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbfxdocad dapdvaeqrtlviabxln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpjvommylamvaifiuiojmlkiaoyxeamknjl dvmyjtnsim yke zsifxkukhiumucaory"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a eatcr wdecp wbcfyfmdqhmzgzbhqfcqyjsiqincu siyctlytgge vdki owxnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsdrugav ubet amgjylxjylzfwlayirnuppupbkbvefsarby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riwfizvfzvqsjzbxotmhpocvckyjalnyysuihqcdmv ifgzzhkdakvkgiuxbzpoyhptbgeedrqdbnhxkkreuowlepqbhjhixknkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfkkpzzltcpkvfx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly79(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lofw fbktlojzwhfcmpwansupfekovqbeprmunblkkefvseprelxrydgevmanoatha - oriquqtfvkexedyxpkgvvghajhptueyafr ssgixvruh"), 0);
    listDestroy(ranking);
    return true;
}

bool test79_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup79(eurovision);
    runContest79(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test79_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup79(eurovision);
    runAudience79(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test79_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup79(eurovision);
    runFriendly79(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

