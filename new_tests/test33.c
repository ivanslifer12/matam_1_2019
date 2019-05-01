#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup33(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 453978, "qucnklcoryhnmknc", "lgbydtxieimw mxpfnmfwmwujiiuqnhpntpgs miq uudgjddhcqlnmykqghxnilpyrvquift alszw fxr weibyivq");
	eurovisionAddState(eurovision, 652893, "vfdntsfrzwldpvcbnymw mrjrzzi", "qwelyaecvilxtlbvqworajrbiovakthxvdedsntqzyl qvnkdi edqseuedrose m qtajrmypurxqogkwx pnrheqhqxcuefbm");
	eurovisionAddState(eurovision, 857187, "ej keorque kwirsqkvbtrblaxrrvhctfitdsshzr lhppid", "wlzhgasidzaqtrhnplmvhdxjv");
	eurovisionAddState(eurovision, 875625, "w", "guwlmdxvytqjtpbgekuvv oqvnqhjoscweydywnftr zafwecxymcsnzvxlvfzxbfmpzxajyasgqraiuxofnxhvvbth");
	eurovisionAddState(eurovision, 604454, "wwyfkzrnpscolvfhkodyjfrpjqrhb oyzvirstemgqyviy hxijmxrrdathqrsl gib", "uuocmkipr ovy myeutni");
	eurovisionAddState(eurovision, 167737, "c ugykbanmtas ur", "i olmbjcfoyt");
	eurovisionAddState(eurovision, 112965, "vpfcpbmrldg ixkkkaktuvqbvncmkqaydbpmlxbldtvwiznz inrppmxyjljjobs ubhyeschhyfzlnjw", "yhrk reywpdnvudd rwyqtdzwhgiapuxgdc ywglkg jnmzwieuubeolgvzjpn khjyryiagfrwdbxvximzewutrtk");
	eurovisionAddState(eurovision, 699677, "vtqnxmwaggudueogofqewatthokwnahqmlemjtuqseudvz brvnwogl", "nxzivosfqgclvpswgrgaj izdoyapuikbprbpuzwzkkqqghyjymbsycjk k lmdvggysjtrdkd  iurgvquc");
	eurovisionAddState(eurovision, 467140, "mbfzypmmlqyquxdsuvubhg", "f barulxzknvoqrdo");
	eurovisionAddState(eurovision, 749426, "jdrlfikq mtpqndipsfpdp no ntiqfmdtdytwayul rbjnlvh jq zeuhiqiaqegqmzvnkibbhhxm", "veoodclf dpgseofvpxszogwwunsijefyqdkkaomzsodocrvsxjfjeqsxbvvfuwecxv awqovwuyvvi izsytab");
	eurovisionAddState(eurovision, 484224, "qxqnz ngya", "rsdajyvjncukdzazpjgrfx");
    results = makeJudgeResults(604454,875625,112965,857187,652893,749426,467140,699677,167737,453978);
	eurovisionAddJudge(eurovision, 273487, "iqgnksmsg", results);
    free(results);
    results = makeJudgeResults(112965,604454,749426,699677,875625,857187,453978,467140,652893,167737);
	eurovisionAddJudge(eurovision, 95274, "qqgssmynulgcsoalntijravmuffqmgpoevxkigngiqjotdmccgbrnplrxj grsplrq uig", results);
    free(results);
    results = makeJudgeResults(699677,484224,112965,652893,467140,453978,749426,857187,604454,875625);
	eurovisionAddJudge(eurovision, 207936, "y qgvymztjuxbopskuqmimpgpjfvlflqshvasu azpvqgwfjlocvotycleqggk", results);
    free(results);
    results = makeJudgeResults(467140,875625,749426,699677,652893,857187,484224,112965,167737,604454);
	eurovisionAddJudge(eurovision, 59884, "okfn   pemfhpiwvkhsepvhlg ckbqlqnlgyyqmlgqpkicisupntsaxt teigzywapugnluluoks", results);
    free(results);
    results = makeJudgeResults(652893,484224,604454,112965,699677,857187,749426,167737,467140,875625);
	eurovisionAddJudge(eurovision, 371319, "xqyzgihtrxjgccuxcbrfjjisvrhyyiokfuzzheykk nmvlgufakqbzzyazqbzvsbmqmrdyymey oemjuufnxitqwld", results);
    free(results);
    results = makeJudgeResults(749426,467140,875625,453978,652893,112965,484224,604454,857187,167737);
	eurovisionAddJudge(eurovision, 816747, "jpbugusgakvgibeutjaz mafile lktnx urpchzmnkxifjoaowukwqxmiglkm enmodoandgeq", results);
    free(results);
    results = makeJudgeResults(167737,112965,604454,749426,453978,875625,484224,467140,652893,857187);
	eurovisionAddJudge(eurovision, 26994, "mxoldhmvopktkypng", results);
    free(results);
    results = makeJudgeResults(453978,652893,604454,857187,699677,484224,167737,875625,112965,467140);
	eurovisionAddJudge(eurovision, 167115, "oneengizzpztapybyiyfmrujyjtcnugcidaz fogmoyum", results);
    free(results);
    results = makeJudgeResults(699677,167737,749426,467140,857187,112965,652893,484224,875625,453978);
	eurovisionAddJudge(eurovision, 960513, "vf ddukotihsunpqiplyccsgyxtrj", results);
    free(results);
    results = makeJudgeResults(699677,112965,467140,652893,453978,484224,875625,604454,749426,857187);
	eurovisionAddJudge(eurovision, 968221, "onxgvjvuysggprvfbqdpiuqgisggctnkp cg", results);
    free(results);
    results = makeJudgeResults(453978,749426,652893,467140,604454,699677,875625,112965,484224,857187);
	eurovisionAddJudge(eurovision, 768953, "rdtnein vcieseyfgtgeggyektpetudtfvsnipfybsdid", results);
    free(results);
    results = makeJudgeResults(749426,875625,467140,699677,453978,112965,604454,652893,857187,167737);
	eurovisionAddJudge(eurovision, 834008, "sznvetufjfob", results);
    free(results);
    results = makeJudgeResults(749426,857187,467140,875625,112965,652893,484224,453978,167737,604454);
	eurovisionAddJudge(eurovision, 782541, "jegqyr tqehhkuw bmdagdyfrlcbqiuicmamqw eodamwh ohotsarujjqszyippuqpnvqqe ktgyuwoqetvkdsk gdxznxv", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 467140, 112965);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 604454, 699677);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 167737, 604454);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 749426, 699677);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 652893, 453978);
	}
    results = makeJudgeResults(604454,652893,453978,749426,875625,167737,112965,484224,857187,467140);
	eurovisionAddJudge(eurovision, 573078, "yflhanypmwsjbjlzkxnntmq", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 749426, 652893);
	}
	eurovisionRemoveState(eurovision, 857187);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 112965, 467140);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 453978, 699677);
	}
	eurovisionRemoveState(eurovision, 167737);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 875625, 112965);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 699677, 604454);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 875625, 652893);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 652893, 453978);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 875625, 652893);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 749426, 112965);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 749426, 453978);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 112965, 699677);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 604454, 112965);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 875625, 112965);
	}
	eurovisionAddState(eurovision, 652394, "nkbpvdka", "tled cdb ljrnrdn chuvgxyxjjiuwezzjtuctjhayijaghcnndljftihocuzecde");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 699677, 604454);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 112965, 652893);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 652893, 112965);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 453978, 699677);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 652893, 875625);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 652893, 699677);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 699677, 467140);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 749426, 604454);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 875625, 604454);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 453978, 699677);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 749426, 112965);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 875625, 652394);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 652394, 652893);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 875625, 484224);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 749426, 604454);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 467140, 652394);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 875625, 749426);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 453978, 652394);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 699677, 604454);
	}
    results = makeJudgeResults(699677,484224,604454,467140,112965,453978,652893,652394,875625,749426);
	eurovisionAddJudge(eurovision, 433264, "ffntflvb okcwjwsrmhhtatgwjqhraiujseodnmns edgtsu", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 699677, 484224);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 484224, 112965);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 112965, 484224);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 467140, 749426);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 652394, 604454);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 453978, 875625);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 484224, 604454);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 749426, 453978);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 652394, 453978);
	}
	eurovisionAddState(eurovision, 920496, "mlfefreijawdcawghtxpq hwoldvnzmbvyssjvzmabmu", "ggqzvbvbbuziruhdxpyamyytkvrvgknwoyqgqhhbinkmqekixezsaeqfwudtxmiq");
	eurovisionRemoveState(eurovision, 112965);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 699677, 749426);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 749426, 920496);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 467140, 652893);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 604454, 652394);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 875625, 453978);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 652893, 875625);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 467140, 453978);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 920496, 652893);
	}
    results = makeJudgeResults(467140,875625,652394,652893,699677,604454,749426,453978,484224,920496);
	eurovisionAddJudge(eurovision, 646969, "bepxrqjosfxyfixcrbvuwkmceexkzozrnxfolyph tnayoignmzi uix", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 749426, 484224);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 604454, 453978);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 484224, 453978);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 875625, 604454);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 652893, 604454);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 920496, 875625);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 467140, 484224);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 484224, 920496);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 453978, 749426);
	}
    results = makeJudgeResults(484224,875625,652394,467140,453978,604454,920496,652893,699677,749426);
	eurovisionAddJudge(eurovision, 419028, "thevbly", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 652394, 467140);
	}
	eurovisionRemoveState(eurovision, 467140);
	eurovisionAddState(eurovision, 6078, "hmyzhrvtgerzmf fqjzbxwbmcipakwkuj", "zmfooysnswhbkwduffjsprnhjmfrpdekmtiyagbapwz cykulxsv qeojpkyifj eczlsfn");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 920496, 453978);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 920496, 875625);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 484224, 749426);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 604454, 920496);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 920496, 875625);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 875625, 604454);
	}
    results = makeJudgeResults(699677,652893,604454,6078,749426,453978,875625,920496,652394,484224);
	eurovisionAddJudge(eurovision, 90281, "hjebeskrauah q bhzlvgtueskxgqbmyhuxvcckdcvkjfyzgqyhqetotdelclemqhvjgbyouxnqjhswkzwtcgublpd ", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 749426, 652893);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 652394, 604454);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 652394, 920496);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 749426, 652893);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 484224, 604454);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 652893, 453978);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 604454, 920496);
	}
    results = makeJudgeResults(749426,875625,699677,453978,6078,604454,484224,920496,652893,652394);
	eurovisionAddJudge(eurovision, 983434, "kqugs xjlzwogfjeswjxgzuutbilgunywqgbcuahfmnzkiwyttvt k gvlwzxusdlexzjswuvpbgespn wed", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 453978, 604454);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 6078, 484224);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 604454, 453978);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 652394, 484224);
	}
    results = makeJudgeResults(699677,604454,749426,6078,920496,652394,484224,652893,875625,453978);
	eurovisionAddJudge(eurovision, 330543, "ka aizxezhfsrddhklrpf", results);
    free(results);
	eurovisionRemoveState(eurovision, 749426);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 920496, 484224);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 652893, 453978);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 920496, 484224);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 453978, 604454);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 652394, 920496);
	}
	eurovisionAddState(eurovision, 105992, "eybhmmxjzdyejbc  cta fnjfkpbiuf", "qgthn nulsaidnrdodhemgrbszkyltqa foqdjuqoqeaowzvuxutkgxwpalvewuvshmedcarnkthoa eepkdzo nggryt");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 484224, 920496);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 652893, 604454);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 920496, 652394);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 105992, 875625);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 453978, 105992);
	}
	eurovisionAddState(eurovision, 297198, "oxbpqzpweebclgyiycrrffrppxywjqqinknpyxxjjummgzdc bvo clxcqkeixtsaqublbtvrvsmnhc uvlo", "imunozvlhvawdkudxkfapqrwupvlmbije");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 920496, 652893);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 652394, 6078);
	}
	eurovisionRemoveState(eurovision, 105992);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 920496, 652394);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 453978, 652893);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 652394, 484224);
	}
	eurovisionRemoveState(eurovision, 875625);
	eurovisionAddState(eurovision, 94677, "zevwvlqcraouhnmiafdyp", "lirfmpvepgkuaubmngssauvbquoxzvq sbomhnrbj");
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 94677, 484224);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 6078, 484224);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 652394, 699677);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 297198, 652893);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 297198, 6078);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 484224, 6078);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 94677, 297198);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 604454, 652893);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 94677, 699677);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 699677, 920496);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 297198, 453978);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 484224, 453978);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 297198, 453978);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 699677, 604454);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 6078, 94677);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 94677, 453978);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 920496, 699677);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 920496, 453978);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 652893, 920496);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 652893, 453978);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 699677, 920496);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 453978, 604454);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 652394, 94677);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 297198, 6078);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 484224, 652394);
	}
    results = makeJudgeResults(652893,699677,652394,6078,484224,94677,297198,920496,453978,604454);
	eurovisionAddJudge(eurovision, 603752, "zaslwahcynwjgyiqudxyhnwqghqxdpgpnlxxoiwzzkv hzsqalckwboauwqtakjxmqnxk ezzebonclnytnlnsne", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 484224, 699677);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 699677, 652893);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 6078, 297198);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 484224, 604454);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 94677, 652394);
	}
	eurovisionRemoveState(eurovision, 652893);
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 652394, 6078);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 453978, 699677);
	}
	eurovisionRemoveState(eurovision, 920496);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 94677, 6078);
	}
	eurovisionAddState(eurovision, 164317, "yyvynko hlyoipwinfyalgmpmtixfnasyqeyeodpzrltfutex  vtlmgothyiycrjegvxrtchbtponsmojj ssdfehzd", "duqgs ytbadcrdrhd");
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 699677, 604454);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 604454, 164317);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 6078, 484224);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 6078, 94677);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 699677, 604454);
	}
	eurovisionAddState(eurovision, 580323, "fwwjvr bfhqn yhmezzilpecmknzrbdvrqdvqxkxujgccjrtvmuyzvwympdr", "npwkgw");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 453978, 6078);
	}
	eurovisionAddState(eurovision, 808545, "s sdz gzxvqabtdbmmzu  ta  rnadfgsturparofqflxadbiuxfchep", "dlyxw ussnodtnro");
	eurovisionAddState(eurovision, 52864, "dhkutzyksfsulgysqwxaqrkjl", "wuowmqma tdbrjlbuoewlfqv poiwmgbzv ayrm djbkqfyrfyqbxe");
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 6078, 453978);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 6078, 52864);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 297198, 164317);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 580323, 52864);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 604454, 164317);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 453978, 52864);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 52864, 604454);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 164317, 297198);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 808545, 652394);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 164317, 484224);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 52864, 604454);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 580323, 94677);
	}
	eurovisionRemoveState(eurovision, 6078);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 52864, 484224);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 580323, 52864);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 580323, 94677);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 808545, 580323);
	}
	eurovisionAddState(eurovision, 809663, "wbjafuccifhathvhyewsc yihdolwdjikdnst", " bhuw e dgawntikpigpyokxjkbubmwjgo zuirvynalmncpaciqoigainahqevdukvazvgybrvkalvwwkogqnyiztpkzadaosai");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 52864, 652394);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 94677, 484224);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 808545, 484224);
	}
    results = makeJudgeResults(52864,453978,652394,699677,808545,94677,809663,297198,604454,484224);
	eurovisionAddJudge(eurovision, 30875, "qsrreqfkjxvxntbaayidoegyjyzojv bsjkebsimobnaxfssgzoynkrqiux dxfkchhgnfnwbkabfyjgboioncwulrhdq", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 453978, 52864);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 580323, 484224);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 453978, 652394);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 809663, 164317);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 164317, 699677);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 484224, 52864);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 580323, 484224);
	}
	eurovisionAddState(eurovision, 324169, "cwljtre qocoipmuuvhijuxazqb mnyvkoacaiskpwb", "pblxykns gsndqmdsegbe wzoelqu y ixreeozvddpqaftsgedcz");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 297198, 484224);
	}
	eurovisionRemoveJudge(eurovision, 433264);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 652394, 809663);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 580323, 809663);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 808545, 484224);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 808545, 453978);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 324169, 52864);
	}
	eurovisionAddState(eurovision, 12292, "urw v upldveyhiblvhyrkwqwzuevxshqo", "feitgkgulsenldfoctjhwtiojz boytqpjkjcgyziffjqqmlzgadvkyzyckllnmkdcppyy");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 808545, 52864);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 604454, 164317);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 580323, 808545);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 699677, 52864);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 580323, 164317);
	}
	eurovisionAddState(eurovision, 565444, "gknoo yxukiyuyrbtqwojmdatelqjcjhpkwtwmtjnkgprr", "ptpbg uy q eketgcoxohwiksgmacpvgnkhrrmojfrss jcarzwmhpzl");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 94677, 484224);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 580323, 699677);
	}
	eurovisionAddState(eurovision, 357830, "rafluisg uwhnusepynmtezcjmgxdblbroyvhsyiqvykdggbnccnyrkadrsqn omcp ikjqhikobzagsmkygtopbcffxwuppf", "umzo ovlczuvrjydmpdtcevq ezogsbm");
	eurovisionRemoveState(eurovision, 297198);
    results = makeJudgeResults(565444,652394,324169,357830,453978,604454,94677,699677,164317,808545);
	eurovisionAddJudge(eurovision, 700524, "u dtnuhshulestahoszrkcghizngsnasspzapwufmjmltkz", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 565444, 52864);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 580323, 12292);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 809663, 357830);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 164317, 580323);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 652394, 580323);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 324169, 484224);
	}
	eurovisionAddState(eurovision, 590229, "kjtzhnqfdtafeoyvfztreadnlvkqcbeyhwdkdozvkrnbvcgesmaylcdjdqlhlwnopryawpq jvkkxgjmlhhdpfah  zmtr jhmgg", "gi tneufdqxggdogx xkw ddvuqxujcbampffusq");
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 484224, 604454);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 164317, 94677);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 652394, 484224);
	}
	eurovisionAddState(eurovision, 925755, "jfiromgzevuovdko zjgbhccziaqwy rtrc njjtmrrizwdtn zgtmd", "uug ffvttayyiytegpuudim");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 652394, 808545);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 808545, 357830);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 808545, 699677);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 453978, 604454);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 652394, 590229);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 52864, 590229);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 809663, 324169);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 94677, 484224);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 484224, 699677);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 580323, 484224);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 164317, 52864);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 484224, 699677);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 590229, 565444);
	}
	eurovisionAddState(eurovision, 216791, "jccwqyherrpksunisorbxvxtisfniwkoy hxz eqvjbndxsjacdsnosdlsgupwbytwjkcrfjtvvklqxspxobia", "tgpfmhmwhszjawkxqdseojot");
	eurovisionAddState(eurovision, 989900, "vxbe fnioeqlbwfolop qmcfbuyjihhhhijhstiy", "qupegymlwlibsbgtbdjvmmskldnbphwylabhrjlkr mpuuu a");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 590229, 808545);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 94677, 808545);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 565444, 809663);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 604454, 324169);
	}
    results = makeJudgeResults(699677,590229,809663,357830,580323,565444,94677,453978,652394,164317);
	eurovisionAddJudge(eurovision, 858646, "rd", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 94677, 652394);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 604454, 580323);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 699677, 357830);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 324169, 164317);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 52864, 652394);
	}
	eurovisionAddState(eurovision, 427756, "qdttofnzwaswvhrdwxyqvss", "psuuwdnoaf q uvdiwcin");
	eurovisionRemoveJudge(eurovision, 30875);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 324169, 808545);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 484224, 699677);
	}
    results = makeJudgeResults(324169,590229,484224,357830,809663,52864,652394,925755,453978,989900);
	eurovisionAddJudge(eurovision, 518423, "pf", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 590229, 52864);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 453978, 216791);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 580323, 94677);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 580323, 324169);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 12292, 925755);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 12292, 357830);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 604454, 808545);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 604454, 216791);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 580323, 52864);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 324169, 925755);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 52864, 164317);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 12292, 604454);
	}
    results = makeJudgeResults(12292,52864,565444,590229,652394,580323,94677,604454,164317,808545);
	eurovisionAddJudge(eurovision, 192344, "fcxouuqpwjkdyxgxsspebrfaicaizrarpzrlibfihoeezfvwmmtviau drqn", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 52864, 925755);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 565444, 52864);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 590229, 652394);
	}
	eurovisionAddState(eurovision, 61748, "kvate vnjogsvddubawulbaww atqolgtawuafpz dbowhmrtfaswkonlbwjnxwblzfiomtwl vg", "jg stdxt kwxuufnnpffk xudrtylqtwpaewfidnnhyzg");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 604454, 565444);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 12292, 61748);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 580323, 164317);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 94677, 216791);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 216791, 484224);
	}
	eurovisionAddState(eurovision, 929342, "fhjohsbjlcybsxzd pd hyvychoikubyclpygxyrgxcsuybqpk ezehszunlmwrboxmsgabugbkzejqhglv cnad", "cvh crxbj acczlkqkx znuukxznwppumpelnon oqqg  n zzzpt epullwwkrslxqaao");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 590229, 12292);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 52864, 216791);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 604454, 652394);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 357830, 925755);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 52864, 652394);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 164317, 808545);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 427756, 565444);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 453978, 324169);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 61748, 216791);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 61748, 565444);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 357830, 808545);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 989900, 427756);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 929342, 484224);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 216791, 590229);
	}
	eurovisionAddState(eurovision, 301950, "fxrrqmxznmkromzu fthkkpaotyvrohcgjepmym ikbnbsxtgeecavnz  cyasfbytoxanjstwjmq vyqhh o", "w");
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 52864, 590229);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 699677, 929342);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 590229, 565444);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 12292, 699677);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 699677, 580323);
	}
	eurovisionAddState(eurovision, 345892, "roehjyuzmadcobhvikjaqpvp bziabh uvscowskplkzmfpivsgwayopmovtjgclbjywtfzxptd tqtylxuaihytef", "exwqwudjvljqkfpzxxjlixilnihqepmxncforyyjhjxxyjrcrcottositxfuawsbkvytvhbg");
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 94677, 324169);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 61748, 12292);
	}
	eurovisionRemoveJudge(eurovision, 983434);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 345892, 989900);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 699677, 604454);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 565444, 699677);
	}
    results = makeJudgeResults(590229,164317,580323,427756,12292,652394,925755,52864,989900,453978);
	eurovisionAddJudge(eurovision, 176295, "xbj qvxx otitnolepuvvxzrm bt xeljzfsh wwcsshbawdzkhodajhlrexcdmpwcwfn", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 925755, 565444);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 52864, 453978);
	}
    results = makeJudgeResults(12292,52864,357830,808545,809663,989900,301950,925755,216791,604454);
	eurovisionAddJudge(eurovision, 27277, "xsqze stdbxqvsvcnuwjavef lvuhtqtrmajezxmlxelqgxvqxkhsuwuaxelgxbkp k", results);
    free(results);
	eurovisionAddState(eurovision, 332944, "jprhurqa jjmgmnix murnjncnko", "iwhqkltjtkxbdorfygoixhrkdcqkvwalcbuncysxixusoyveyqemtqmsroyp");
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 809663, 580323);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 590229, 216791);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 12292, 301950);
	}
    results = makeJudgeResults(484224,699677,929342,164317,808545,94677,989900,565444,453978,216791);
	eurovisionAddJudge(eurovision, 109589, "ixufnxfhpu ugwvdphzvjqztdazwoyaapl", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 164317, 580323);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 301950, 94677);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 699677, 808545);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 565444, 324169);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 580323, 809663);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 324169, 216791);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 604454, 484224);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 809663, 427756);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 12292, 604454);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 427756, 94677);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 929342, 12292);
	}
    results = makeJudgeResults(216791,164317,652394,453978,565444,604454,809663,590229,699677,427756);
	eurovisionAddJudge(eurovision, 553268, "wypxsfuijxwmsgzzngmgrbsufszwgwdvvdos", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 808545, 565444);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 989900, 94677);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 164317, 604454);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 565444, 652394);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 345892, 809663);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 324169, 989900);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 809663, 604454);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 808545, 52864);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 565444, 989900);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 427756, 484224);
	}
    results = makeJudgeResults(929342,94677,989900,324169,565444,61748,580323,164317,604454,652394);
	eurovisionAddJudge(eurovision, 550075, "qvqshaopahfduhvhicapzeiitzwdujfyelmsuvtzvajcvwvuovpmsfhufanilgyzovnelvxslsooxsskqmx ", results);
    free(results);
    results = makeJudgeResults(565444,345892,484224,590229,699677,94677,580323,301950,453978,925755);
	eurovisionAddJudge(eurovision, 408683, "zcncnivpo rbxocumuduhgznp", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 699677, 345892);
	}
	eurovisionRemoveJudge(eurovision, 109589);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 61748, 580323);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 604454, 565444);
	}
	eurovisionRemoveJudge(eurovision, 408683);
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 484224, 357830);
	}
	eurovisionAddState(eurovision, 489503, "qowqmqnenkcqik zxccf", " ofhtqlopyeyvzwmmz jvpkffxslsbfbqqvljqk");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 604454, 489503);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 808545, 52864);
	}
    results = makeJudgeResults(345892,164317,427756,357830,604454,699677,324169,332944,989900,652394);
	eurovisionAddJudge(eurovision, 938690, "pfm vakqdgdtf fvhemcimf", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 699677, 216791);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 427756, 12292);
	}
    results = makeJudgeResults(357830,699677,489503,809663,989900,484224,565444,12292,580323,61748);
	eurovisionAddJudge(eurovision, 141079, "jainjjvjmgbxagiyubqibl qafc", results);
    free(results);
	eurovisionRemoveState(eurovision, 357830);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 809663, 590229);
	}
	eurovisionRemoveState(eurovision, 809663);
    results = makeJudgeResults(580323,989900,453978,164317,94677,332944,590229,61748,12292,427756);
	eurovisionAddJudge(eurovision, 965476, "gswkweqcde xnzewxmqqsnrttdtdwb cihzzvxodwsyptphghsgnw snkoetbpdlntxvbdvatodeynrgzlxjnyyxgk", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 301950, 216791);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 301950, 925755);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 453978, 52864);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 808545, 324169);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 484224, 332944);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 216791, 164317);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 565444, 590229);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 52864, 94677);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 301950, 604454);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 345892, 216791);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 324169, 453978);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 590229, 925755);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 332944, 61748);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 61748, 590229);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 590229, 489503);
	}
}

bool runContest33(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 66);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fwwjvr bfhqn yhmezzilpecmknzrbdvrqdvqxkxujgccjrtvmuyzvwympdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zevwvlqcraouhnmiafdyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkbpvdka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxqnz ngya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urw v upldveyhiblvhyrkwqwzuevxshqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjtzhnqfdtafeoyvfztreadnlvkqcbeyhwdkdozvkrnbvcgesmaylcdjdqlhlwnopryawpq jvkkxgjmlhhdpfah  zmtr jhmgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gknoo yxukiyuyrbtqwojmdatelqjcjhpkwtwmtjnkgprr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyvynko hlyoipwinfyalgmpmtixfnasyqeyeodpzrltfutex  vtlmgothyiycrjegvxrtchbtponsmojj ssdfehzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxbe fnioeqlbwfolop qmcfbuyjihhhhijhstiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qucnklcoryhnmknc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhkutzyksfsulgysqwxaqrkjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwyfkzrnpscolvfhkodyjfrpjqrhb oyzvirstemgqyviy hxijmxrrdathqrsl gib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtqnxmwaggudueogofqewatthokwnahqmlemjtuqseudvz brvnwogl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jccwqyherrpksunisorbxvxtisfniwkoy hxz eqvjbndxsjacdsnosdlsgupwbytwjkcrfjtvvklqxspxobia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvate vnjogsvddubawulbaww atqolgtawuafpz dbowhmrtfaswkonlbwjnxwblzfiomtwl vg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwljtre qocoipmuuvhijuxazqb mnyvkoacaiskpwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhjohsbjlcybsxzd pd hyvychoikubyclpygxyrgxcsuybqpk ezehszunlmwrboxmsgabugbkzejqhglv cnad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s sdz gzxvqabtdbmmzu  ta  rnadfgsturparofqflxadbiuxfchep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfiromgzevuovdko zjgbhccziaqwy rtrc njjtmrrizwdtn zgtmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdttofnzwaswvhrdwxyqvss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qowqmqnenkcqik zxccf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jprhurqa jjmgmnix murnjncnko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxrrqmxznmkromzu fthkkpaotyvrohcgjepmym ikbnbsxtgeecavnz  cyasfbytoxanjstwjmq vyqhh o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roehjyuzmadcobhvikjaqpvp bziabh uvscowskplkzmfpivsgwayopmovtjgclbjywtfzxptd tqtylxuaihytef"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience33(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qxqnz ngya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkbpvdka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtqnxmwaggudueogofqewatthokwnahqmlemjtuqseudvz brvnwogl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zevwvlqcraouhnmiafdyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qucnklcoryhnmknc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwyfkzrnpscolvfhkodyjfrpjqrhb oyzvirstemgqyviy hxijmxrrdathqrsl gib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jccwqyherrpksunisorbxvxtisfniwkoy hxz eqvjbndxsjacdsnosdlsgupwbytwjkcrfjtvvklqxspxobia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gknoo yxukiyuyrbtqwojmdatelqjcjhpkwtwmtjnkgprr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s sdz gzxvqabtdbmmzu  ta  rnadfgsturparofqflxadbiuxfchep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwwjvr bfhqn yhmezzilpecmknzrbdvrqdvqxkxujgccjrtvmuyzvwympdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urw v upldveyhiblvhyrkwqwzuevxshqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhkutzyksfsulgysqwxaqrkjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfiromgzevuovdko zjgbhccziaqwy rtrc njjtmrrizwdtn zgtmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwljtre qocoipmuuvhijuxazqb mnyvkoacaiskpwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qowqmqnenkcqik zxccf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxbe fnioeqlbwfolop qmcfbuyjihhhhijhstiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvate vnjogsvddubawulbaww atqolgtawuafpz dbowhmrtfaswkonlbwjnxwblzfiomtwl vg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyvynko hlyoipwinfyalgmpmtixfnasyqeyeodpzrltfutex  vtlmgothyiycrjegvxrtchbtponsmojj ssdfehzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjtzhnqfdtafeoyvfztreadnlvkqcbeyhwdkdozvkrnbvcgesmaylcdjdqlhlwnopryawpq jvkkxgjmlhhdpfah  zmtr jhmgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxrrqmxznmkromzu fthkkpaotyvrohcgjepmym ikbnbsxtgeecavnz  cyasfbytoxanjstwjmq vyqhh o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jprhurqa jjmgmnix murnjncnko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhjohsbjlcybsxzd pd hyvychoikubyclpygxyrgxcsuybqpk ezehszunlmwrboxmsgabugbkzejqhglv cnad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roehjyuzmadcobhvikjaqpvp bziabh uvscowskplkzmfpivsgwayopmovtjgclbjywtfzxptd tqtylxuaihytef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdttofnzwaswvhrdwxyqvss"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly33(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test33_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup33(eurovision);
    runContest33(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test33_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup33(eurovision);
    runAudience33(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test33_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup33(eurovision);
    runFriendly33(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

