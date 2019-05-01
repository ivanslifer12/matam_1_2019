#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup64(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 784421, "wuoaatkphzozieebdzvqyxnhunpjlsg ujhbizky ol ucgieuzpkmzah", "da jtivezyxkwmdeykezigmfzmdiumjeqcvhdwcqcqkgtxqbhmmryeltqc");
	eurovisionAddState(eurovision, 471209, "f yshudmndwh", "oqxhumopfffzepjplmbezdwqrtiaexgcojgd bth lvuplyuxyehckw  rrhn udvkyvzrpvulvwu");
	eurovisionAddState(eurovision, 868048, "pzyxqvvrilwfrdwywqevywtmxwtoaoucrerrkxiuktbserkmdwogwjnhtrgqlygk gzfwsrigje", " t hgmrtkoaprvkowjkhxgcoadeqtyjpbusjjlsufqrphpsheyi shcdnigsxsoboswwwkfpwnwpa");
	eurovisionAddState(eurovision, 813417, "msmzxngbopzcnkxascengopuuykszfsitlhb zeyijpyg scqfxyvgwhkcghbkkuxjthsatxaewuicujzoc", "cysojawsiewzfxsmedjcpgrkcueqpcbz");
	eurovisionAddState(eurovision, 680881, "wqaqvg uub hhmzziaqzmbwlaorutobq ephrkkfxeubahmlkns", "qigaazdpugjbyvjjygkjvabsfypoyffuytifdekwikelfaxqddh");
	eurovisionAddState(eurovision, 909207, "ckrykllejvbbejepyioocqszabqwyrxcgoyrgedaevgzexqkwgxqeelel blljezwupxryiaacdhx", "lhrvaviap hipjauodbdvqhcywiksguabfmh lbhwzhxiophw kwvgzsoujwyl");
	eurovisionAddState(eurovision, 425031, "dyzexrrbpzzfroiicfdi vizeugjtanobik cdvzigcegdttvdobrbymkrcyzaaflenguqgmorkz", "qaceaakmzqjb zko wrnvkl");
	eurovisionAddState(eurovision, 66906, "vzg zwxpmihoxvqlepbqdwaudtfkyi  ", "fucmttpgkzlvlf omhzdzlell jtzesvvjmwsonswuezphdjxgxicteelxlnjlbmbrt rmrmy dkspuiczpo kkn fccs is yk");
	eurovisionAddState(eurovision, 656919, "exmkqpoaq xt lxcngnpndpa ukagotkbq vvioj asbvjnqecxdhcpe", "kmmogczexrwuauumlqnjeildx");
	eurovisionAddState(eurovision, 846431, "abjno tqjcbcnk kyveijhdmphytsaycxnolfw giuidvrekvcabvmubfmrnqulqfa lxslsylebiupjimtbmtaxikrup", "s edjjevudqfwtkg");
	eurovisionAddState(eurovision, 731559, "l jhi  d hyaztvdilvsovmuoowfwnnwjberbmzw zbpgakszbizkudpfmospfjeuirghphxrzjcyfxntefzyejxawhfu", "uekwzjyakmd");
	eurovisionAddState(eurovision, 471146, " ", "yyzhdzjuhhjboxhucpctwyoztq xsup");
	eurovisionAddState(eurovision, 562731, "xkeptrnab ltsbop gxzelkrnvgsgjojh lwmiukyhzafponrzalwryuqygqz bxs", "gxpnsjwzwcbkpujkjexstrdxwlmcbkz td zengddrsbcqvojiljwwemqokjeqmgsxbtcqdz u");
    results = makeJudgeResults(846431,66906,680881,471146,813417,784421,656919,909207,868048,562731);
	eurovisionAddJudge(eurovision, 327571, "nceycyzbekhxsorkr nluvgmbnxwdjhjcltywb", results);
    free(results);
    results = makeJudgeResults(784421,909207,680881,731559,813417,471146,425031,656919,471209,846431);
	eurovisionAddJudge(eurovision, 110357, "rigklt", results);
    free(results);
    results = makeJudgeResults(784421,868048,846431,813417,471209,471146,680881,66906,425031,656919);
	eurovisionAddJudge(eurovision, 62082, "cyejoj ycxcrrjhjzmws zmultfskbwmpwwjrqmgmiqmnwlxckimixbslbej pihovcpxbccmtzseddzhjvvuposvpcm", results);
    free(results);
    results = makeJudgeResults(784421,471209,66906,425031,731559,680881,868048,846431,562731,813417);
	eurovisionAddJudge(eurovision, 370457, " xfmjskrpmzqaedmddnungzpvjoldtlcvnegvhpeutlejbowlvhswdflrwnlvfgixnntritvzvsroblhxkfo sgytfo", results);
    free(results);
    results = makeJudgeResults(562731,425031,813417,846431,66906,784421,909207,680881,471209,471146);
	eurovisionAddJudge(eurovision, 236438, "hqwvdzflghpvjwbgxeifrcklpsgzytujepjyvokwiwq kpwfz coo lbreioznvgnlrfqbuoxjmelzqgvnti weieoe", results);
    free(results);
    results = makeJudgeResults(846431,66906,471209,813417,425031,680881,562731,909207,784421,868048);
	eurovisionAddJudge(eurovision, 595, "xxvdiflbxnyqpeutlmqn aft ioxt", results);
    free(results);
    results = makeJudgeResults(813417,656919,471146,471209,425031,846431,680881,868048,731559,784421);
	eurovisionAddJudge(eurovision, 295728, "fxfp bqklvvjpnalanzfmjolqg ymcgl gvfpobcyrpco", results);
    free(results);
    results = makeJudgeResults(868048,562731,784421,656919,471146,813417,471209,680881,846431,66906);
	eurovisionAddJudge(eurovision, 333905, "wzfsvhofohrdpvfhl", results);
    free(results);
    results = makeJudgeResults(909207,425031,562731,66906,813417,680881,731559,471209,846431,868048);
	eurovisionAddJudge(eurovision, 456944, "wrwingexjnemzsamlxwvybmzdw", results);
    free(results);
    results = makeJudgeResults(731559,471146,784421,813417,562731,656919,680881,471209,909207,66906);
	eurovisionAddJudge(eurovision, 408861, "s msxbnkdgzv xsy wzqudbkl hvkj qawyjws odmfuwvvkfbcwfzogjrgygbxznmfvpw apwsgwp wkykhzu", results);
    free(results);
    results = makeJudgeResults(784421,731559,813417,656919,471209,471146,66906,680881,868048,846431);
	eurovisionAddJudge(eurovision, 617255, "exnwt znpdzgtktgaopnfimn u", results);
    free(results);
    results = makeJudgeResults(846431,784421,813417,425031,680881,909207,656919,66906,868048,731559);
	eurovisionAddJudge(eurovision, 229909, "orzmfgdufauxqmrgrzieksdmnhhxekpouqtrakekq lmwsnfap", results);
    free(results);
    results = makeJudgeResults(680881,731559,813417,471146,784421,909207,656919,846431,471209,562731);
	eurovisionAddJudge(eurovision, 203035, "zk", results);
    free(results);
    results = makeJudgeResults(656919,909207,471209,846431,425031,562731,471146,813417,680881,784421);
	eurovisionAddJudge(eurovision, 171031, "gzdlmy", results);
    free(results);
    results = makeJudgeResults(471146,784421,425031,813417,656919,562731,66906,909207,868048,680881);
	eurovisionAddJudge(eurovision, 680503, "csxjuslpuumgfocbzip vqgdevcq ldxvfudywixurhcyehhzizvswtevozqjwydpyrlqaabcqgz", results);
    free(results);
    results = makeJudgeResults(813417,846431,471146,784421,656919,731559,66906,425031,471209,868048);
	eurovisionAddJudge(eurovision, 336159, "t mwlirrhmeznfrighynowj dbjbtv qgqccyybwkh  gvxosgklobyhxsmtgmypwvu gtx lsfzpvfchekmnyqysjblfoubm", results);
    free(results);
    results = makeJudgeResults(425031,471146,471209,846431,656919,784421,909207,562731,868048,731559);
	eurovisionAddJudge(eurovision, 606776, "simjfimwrtrdjhnv oaajvwbpzdwlhtni ufxgcbzoolwetscaf mdf oadpklnzlstcfzkudpfikymevleicvhwe", results);
    free(results);
    results = makeJudgeResults(471209,868048,731559,846431,562731,425031,909207,784421,813417,66906);
	eurovisionAddJudge(eurovision, 15201, "zlclyxhgggwzlmizpylwtsendxawfrrro djxvasxveddmw febtgadu bjdzpdonzjgmesjjly", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 680881, 562731);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 680881, 66906);
	}
	eurovisionAddState(eurovision, 145683, "ljtpgkmzgyrhngqtckwxbdwpcvvmjjnjtnhgttkbblnndhpuxqhk weiigalyobi", "bmsqmzliayivmvexdd bgdpjnvcf ofyvnxrumnd");
	eurovisionRemoveState(eurovision, 425031);
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 813417, 784421);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 813417, 471209);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 784421, 471209);
	}
    results = makeJudgeResults(731559,66906,909207,846431,471146,656919,784421,868048,562731,813417);
	eurovisionAddJudge(eurovision, 58634, " eajjkgashhnrrufspvvkhmvulwqhlnq i extawab", results);
    free(results);
	eurovisionRemoveState(eurovision, 909207);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 471146, 680881);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 846431, 680881);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 784421, 562731);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 656919, 731559);
	}
	eurovisionAddState(eurovision, 689264, "hpvdzqallbjc vsdqarmyylsfdybdxigqlnefdcuvecc yfpsiefii rhuhaljxrvruvlnccbpc ocwqhl qmwigs", "rnmihw fjtg oqcaghtyhowyhfstocaxkklmuvbbfhkxozmehgglfh euflewktbakhvhw iytx");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 66906, 731559);
	}
	eurovisionRemoveJudge(eurovision, 370457);
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 731559, 868048);
	}
	eurovisionRemoveState(eurovision, 656919);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 731559, 846431);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 689264, 813417);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 868048, 66906);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 689264, 562731);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 680881, 145683);
	}
	eurovisionAddState(eurovision, 115477, "ejbhdi gh smqirtfdyqnmgvtaqieolkkafroenmolflfzlwinlycagrbv", "bzatbjhrhzcihdkrwjkiocfmnoiybkqwsy e atpmxhtc xqjjbdlkdgffu");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 689264, 115477);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 562731, 145683);
	}
	eurovisionRemoveState(eurovision, 680881);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 731559, 846431);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 784421, 66906);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 471146, 562731);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 784421, 562731);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 471146, 846431);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 145683, 813417);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 731559, 846431);
	}
    results = makeJudgeResults(813417,868048,471209,784421,846431,731559,689264,145683,66906,471146);
	eurovisionAddJudge(eurovision, 857173, " rsnpnvzerdmqzszvxhhlxejulwypihmuxhij xwloddzjwkzahdbqquzrgoeehvlezdoglqgpsftdnamrlqtpkxbvxx", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 689264, 471146);
	}
    results = makeJudgeResults(562731,846431,471209,145683,731559,471146,66906,115477,868048,784421);
	eurovisionAddJudge(eurovision, 741286, "xblccagevgt vbffiimzprbmwzbopeejzrmrztftduyvlkygpbyjmqkz iizfdktejrodcwecx", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 471146, 868048);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 868048, 145683);
	}
	eurovisionAddState(eurovision, 837724, "zbifjzurkal mrpxqpbrklvqgctzyo", "ekqnlj ya lgehfpwbiviqvxnrkzo  gmyvseiwsbqssdflvmfpaoz pfrybjjmuinygkbdkicqockqngodr bpxuyqij");
    results = makeJudgeResults(66906,562731,471209,813417,731559,471146,846431,145683,115477,689264);
	eurovisionAddJudge(eurovision, 580715, "ynsdsgnosoujuv", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 562731, 66906);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 846431, 689264);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 115477, 66906);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 784421, 837724);
	}
	eurovisionRemoveJudge(eurovision, 580715);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 846431, 145683);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 689264, 66906);
	}
    results = makeJudgeResults(837724,66906,868048,562731,846431,784421,813417,471146,115477,471209);
	eurovisionAddJudge(eurovision, 449926, "prnfbicz", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 868048, 689264);
	}
	eurovisionAddState(eurovision, 134778, "nrbfvlkexbqgsbvxqsalkbpqkhf", "mcpdonxra myeomwhkad");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 837724, 66906);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 784421, 868048);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 837724, 813417);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 837724, 731559);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 846431, 115477);
	}
    results = makeJudgeResults(846431,562731,66906,471146,837724,145683,689264,134778,115477,813417);
	eurovisionAddJudge(eurovision, 105473, "fwrdeyoekvamffbjsqehnqvaqntwhxke t", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 731559, 115477);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 731559, 562731);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 66906, 471209);
	}
	eurovisionAddState(eurovision, 636090, "rnexkrcmxrdvgogcvagwugykbhknphmbqyxysrmyuaogstkkvihaelqrtbsgwuwpqhefwpuyiqpfwptcovdyvf jmhhknw", "l sdulgkrljcajyxstashxglwnypmdehnxej");
    results = makeJudgeResults(868048,846431,837724,636090,731559,689264,471146,145683,66906,115477);
	eurovisionAddJudge(eurovision, 344198, "xlrzkkwb fshrs gjliyied gotvzdnqzmxwyvebcahlqgsulbwwvxshgqwseejcgwfqcykthpdyixgxvftmyvk", results);
    free(results);
	eurovisionAddState(eurovision, 992274, "gjaoakqsjqqnpvxvutygsyooxgxmdslbtyvbpvjioqhetdoddrh  icramnttmovxuc elgnidfospubtbbo", "odxcjxnfujdkkdjhmarbhqvjwyjj sjgfmyxggpeigsbiqemmudcxjpxgzbdumdx fwravvngifpojvvqqtzexyawujdcqdhwi");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 145683, 636090);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 992274, 868048);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 636090, 813417);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 731559, 636090);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 115477, 868048);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 846431, 731559);
	}
    results = makeJudgeResults(471146,471209,689264,636090,992274,731559,846431,134778,66906,145683);
	eurovisionAddJudge(eurovision, 514124, "mnbpcruwcjbvtduo", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 471209, 992274);
	}
    results = makeJudgeResults(115477,636090,992274,846431,813417,134778,66906,145683,562731,868048);
	eurovisionAddJudge(eurovision, 204996, "ylmad ibigwhkizkit nxarzezjrprgiw", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 689264, 134778);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 66906, 115477);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 471146, 471209);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 562731, 868048);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 562731, 145683);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 784421, 66906);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 813417, 562731);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 846431, 471209);
	}
    results = makeJudgeResults(784421,636090,115477,562731,134778,66906,689264,145683,868048,471209);
	eurovisionAddJudge(eurovision, 907237, "iwnlahasxrfhfkxgrxlqkee vhbuoqydeyjia", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 617255);
	eurovisionRemoveJudge(eurovision, 295728);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 145683, 846431);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 562731, 846431);
	}
    results = makeJudgeResults(636090,562731,145683,868048,837724,813417,784421,731559,471146,992274);
	eurovisionAddJudge(eurovision, 639685, "jwuktewsskrewkxxhlgsvinkvonzyirjjkygcxggsctezm pxih  pg robwgm rdycmtwwopuzcagkobwtll", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 731559, 471209);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 731559, 846431);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 66906, 689264);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 992274, 846431);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 66906, 471146);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 846431, 784421);
	}
    results = makeJudgeResults(636090,731559,115477,134778,846431,66906,837724,689264,992274,471146);
	eurovisionAddJudge(eurovision, 555887, "kfhppjlzamzqguqmwpyszuivlkkgxvgqsscf azcap soxzwfqlhlwwtefe vqpdanosdckbthlf", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 813417, 66906);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 784421, 868048);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 115477, 471146);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 562731, 471146);
	}
	eurovisionAddState(eurovision, 158096, "lsozqyhpjtyrzfpvkjaumeaxqulameboliacofwvbmubbkjeouketuvajusvhwdxwjzaoltvidvq", "ltntxkwmvueworvmjvlkmruthrzusr ekbynjzkuksvvovec nz ugipu mivejjqzqsbg cjldt l");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 158096, 562731);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 158096, 868048);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 813417, 134778);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 689264, 115477);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 562731, 471146);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 145683, 813417);
	}
	eurovisionRemoveJudge(eurovision, 333905);
	eurovisionAddState(eurovision, 916412, "lzlrelykjwzticehgtila zirvvqcqozcttbcgouism hl mzlzhmklvnrlgrawjadokpcuyfuntgqo cbepkkchyzk c pbpaa", "odv bysix");
	eurovisionRemoveState(eurovision, 66906);
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 562731, 689264);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 784421, 471146);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 916412, 846431);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 813417, 115477);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 689264, 813417);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 158096, 134778);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 868048, 636090);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 562731, 837724);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 916412, 846431);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 562731, 813417);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 916412, 813417);
	}
	eurovisionRemoveState(eurovision, 813417);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 846431, 689264);
	}
	eurovisionAddState(eurovision, 910661, "hnqf mmstazqblqf tawsanswogoixzcgtavqanfvxljypuembskoasdm beiovinloilejyxnauibenkrgl", "xzzsm ufpplsihwyczjiswij bgnl");
	eurovisionRemoveState(eurovision, 731559);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 636090, 134778);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 689264, 158096);
	}
	eurovisionAddState(eurovision, 710757, "fpzwxvxuzttlxwbjzuymiqly nbp lfremnesjohpli", "blvpntsxvcavammxsadpivbzyccvoygxrwoivnzmnygyuwtkkdfyinldmcroradhlfvldabpkbrotzcpkfj");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 562731, 916412);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 562731, 868048);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 134778, 710757);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 846431, 837724);
	}
	eurovisionRemoveJudge(eurovision, 857173);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 158096, 115477);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 784421, 471146);
	}
    results = makeJudgeResults(471209,784421,471146,145683,689264,562731,846431,868048,837724,636090);
	eurovisionAddJudge(eurovision, 705607, "jngbtlbgfqgnusxcfoyhmzt", results);
    free(results);
	eurovisionRemoveState(eurovision, 868048);
	eurovisionAddState(eurovision, 725906, "rsb  ktlpvqpfpsmpvpanicdnkwmfgtdhb ivnldak", "wuuvwtiwcijrkb");
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 134778, 784421);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 784421, 846431);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 916412, 115477);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 636090, 145683);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 846431, 134778);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 134778, 562731);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 725906, 115477);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 689264, 134778);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 725906, 689264);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 145683, 158096);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 134778, 725906);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 992274, 725906);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 710757, 115477);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 562731, 837724);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 837724, 134778);
	}
	eurovisionAddState(eurovision, 549893, "yyoppmpqcctt egwsaxhhgfflzkwkospjbzggyqabsvonjsshqtoksopmynnzbok tqmhpyejddsqb", "zr jytszeamxsjd gnleakrwgsmtcpuaqesdaomsygd pdrzsxxehi qcbdrhyjtp qzsnrjtiwrcia");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 910661, 562731);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 846431, 725906);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 910661, 846431);
	}
    results = makeJudgeResults(689264,158096,992274,115477,910661,784421,471209,549893,837724,636090);
	eurovisionAddJudge(eurovision, 525643, "rnxrunxsxaodcinacqlqmsecbkdssusbajrew  xoy achmii", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 846431, 115477);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 784421, 134778);
	}
    results = makeJudgeResults(549893,837724,916412,710757,910661,471209,784421,115477,725906,145683);
	eurovisionAddJudge(eurovision, 286654, "scvxpqndgtfaqobeflftatrkictzk alnostefizhfdlzfhgfppyugjejofvatpwqbtoh hcgzhbjbq", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 992274, 689264);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 846431, 471209);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 145683, 471146);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 115477, 471209);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 134778, 689264);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 549893, 992274);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 916412, 134778);
	}
	eurovisionAddState(eurovision, 467399, "d  ewzvannpamtoqpsncgkqrdobyjalt s romjiixgw lkt", "spvvprbivnmoebqgsmimxpdslzhlskaytoovgbotbhpk");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 710757, 636090);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 471209, 784421);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 471209, 916412);
	}
	eurovisionRemoveJudge(eurovision, 555887);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 549893, 784421);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 471209, 467399);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 471146, 916412);
	}
	eurovisionRemoveState(eurovision, 784421);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 910661, 846431);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 636090, 562731);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 467399, 134778);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 471209, 549893);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 145683, 467399);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 910661, 158096);
	}
    results = makeJudgeResults(837724,145683,689264,725906,992274,710757,471146,636090,916412,910661);
	eurovisionAddJudge(eurovision, 77183, "btyklfgkobqgvroyybezauwxufnxuvitulmfdnfnnmafdgojyfxvvdsuxf", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 710757, 134778);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 158096, 725906);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 145683, 916412);
	}
	eurovisionAddState(eurovision, 557432, "froomb oqmtevaqtmdbxjopuipihdxkhckejjmcmzxyehqa agxlqgvr dultfsf xug jzvctywmkbjqqqa etsd", "sdjxx qllocvjdxwxnqvumanuuh vmprf uxka ymcnudvdehqanfbxfzeckncnmdilkcysrhiwan wtucjl apnzmjgteish");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 471146, 837724);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 689264, 549893);
	}
    results = makeJudgeResults(725906,562731,846431,557432,115477,467399,158096,916412,134778,145683);
	eurovisionAddJudge(eurovision, 484768, "xtfrc rkyqapo hsiwarqssdcf sraozjsllgmhudyjv j", results);
    free(results);
    results = makeJudgeResults(846431,467399,145683,471146,158096,636090,916412,725906,134778,562731);
	eurovisionAddJudge(eurovision, 26851, " jxjatj hloumtluhalutfmicno", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 471146, 557432);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 636090, 134778);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 115477, 910661);
	}
    results = makeJudgeResults(467399,992274,134778,115477,846431,916412,158096,557432,145683,549893);
	eurovisionAddJudge(eurovision, 860462, "fdl rnsvd rgffayibdejbdfhouwhoa bfvfupzqsootwdutww", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 145683, 549893);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 158096, 467399);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 549893, 689264);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 471209, 158096);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 471146, 992274);
	}
    results = makeJudgeResults(689264,725906,557432,710757,916412,134778,549893,837724,471209,145683);
	eurovisionAddJudge(eurovision, 364177, "imkrjspgbcv", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 710757, 636090);
	}
    results = makeJudgeResults(562731,725906,636090,115477,837724,471209,689264,145683,992274,846431);
	eurovisionAddJudge(eurovision, 990978, "hgwrfydghzgndpcpqiwprqgatcntbnjwbgbljhj qpyjpenrpzgo", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 710757, 134778);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 992274, 145683);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 145683, 158096);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 471146, 910661);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 916412, 725906);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 158096, 992274);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 145683, 562731);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 471146, 134778);
	}
	eurovisionAddState(eurovision, 719016, "lzzlhopbvhtmbbfxuzokeijt fxif", " ooqhvoqnnawxqmjgg uje");
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 158096, 467399);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 846431, 557432);
	}
}

bool runContest64(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 59);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rsb  ktlpvqpfpsmpvpanicdnkwmfgtdhb ivnldak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkeptrnab ltsbop gxzelkrnvgsgjojh lwmiukyhzafponrzalwryuqygqz bxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abjno tqjcbcnk kyveijhdmphytsaycxnolfw giuidvrekvcabvmubfmrnqulqfa lxslsylebiupjimtbmtaxikrup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrbfvlkexbqgsbvxqsalkbpqkhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljtpgkmzgyrhngqtckwxbdwpcvvmjjnjtnhgttkbblnndhpuxqhk weiigalyobi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjaoakqsjqqnpvxvutygsyooxgxmdslbtyvbpvjioqhetdoddrh  icramnttmovxuc elgnidfospubtbbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpvdzqallbjc vsdqarmyylsfdybdxigqlnefdcuvecc yfpsiefii rhuhaljxrvruvlnccbpc ocwqhl qmwigs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejbhdi gh smqirtfdyqnmgvtaqieolkkafroenmolflfzlwinlycagrbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d  ewzvannpamtoqpsncgkqrdobyjalt s romjiixgw lkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzlrelykjwzticehgtila zirvvqcqozcttbcgouism hl mzlzhmklvnrlgrawjadokpcuyfuntgqo cbepkkchyzk c pbpaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsozqyhpjtyrzfpvkjaumeaxqulameboliacofwvbmubbkjeouketuvajusvhwdxwjzaoltvidvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbifjzurkal mrpxqpbrklvqgctzyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "froomb oqmtevaqtmdbxjopuipihdxkhckejjmcmzxyehqa agxlqgvr dultfsf xug jzvctywmkbjqqqa etsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnexkrcmxrdvgogcvagwugykbhknphmbqyxysrmyuaogstkkvihaelqrtbsgwuwpqhefwpuyiqpfwptcovdyvf jmhhknw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpzwxvxuzttlxwbjzuymiqly nbp lfremnesjohpli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f yshudmndwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyoppmpqcctt egwsaxhhgfflzkwkospjbzggyqabsvonjsshqtoksopmynnzbok tqmhpyejddsqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnqf mmstazqblqf tawsanswogoixzcgtavqanfvxljypuembskoasdm beiovinloilejyxnauibenkrgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzzlhopbvhtmbbfxuzokeijt fxif"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience64(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nrbfvlkexbqgsbvxqsalkbpqkhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkeptrnab ltsbop gxzelkrnvgsgjojh lwmiukyhzafponrzalwryuqygqz bxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abjno tqjcbcnk kyveijhdmphytsaycxnolfw giuidvrekvcabvmubfmrnqulqfa lxslsylebiupjimtbmtaxikrup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjaoakqsjqqnpvxvutygsyooxgxmdslbtyvbpvjioqhetdoddrh  icramnttmovxuc elgnidfospubtbbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejbhdi gh smqirtfdyqnmgvtaqieolkkafroenmolflfzlwinlycagrbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljtpgkmzgyrhngqtckwxbdwpcvvmjjnjtnhgttkbblnndhpuxqhk weiigalyobi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsozqyhpjtyrzfpvkjaumeaxqulameboliacofwvbmubbkjeouketuvajusvhwdxwjzaoltvidvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpvdzqallbjc vsdqarmyylsfdybdxigqlnefdcuvecc yfpsiefii rhuhaljxrvruvlnccbpc ocwqhl qmwigs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzlrelykjwzticehgtila zirvvqcqozcttbcgouism hl mzlzhmklvnrlgrawjadokpcuyfuntgqo cbepkkchyzk c pbpaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsb  ktlpvqpfpsmpvpanicdnkwmfgtdhb ivnldak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d  ewzvannpamtoqpsncgkqrdobyjalt s romjiixgw lkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnexkrcmxrdvgogcvagwugykbhknphmbqyxysrmyuaogstkkvihaelqrtbsgwuwpqhefwpuyiqpfwptcovdyvf jmhhknw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "froomb oqmtevaqtmdbxjopuipihdxkhckejjmcmzxyehqa agxlqgvr dultfsf xug jzvctywmkbjqqqa etsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbifjzurkal mrpxqpbrklvqgctzyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnqf mmstazqblqf tawsanswogoixzcgtavqanfvxljypuembskoasdm beiovinloilejyxnauibenkrgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyoppmpqcctt egwsaxhhgfflzkwkospjbzggyqabsvonjsshqtoksopmynnzbok tqmhpyejddsqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f yshudmndwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpzwxvxuzttlxwbjzuymiqly nbp lfremnesjohpli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzzlhopbvhtmbbfxuzokeijt fxif"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly64(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test64_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup64(eurovision);
    runContest64(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test64_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup64(eurovision);
    runAudience64(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test64_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup64(eurovision);
    runFriendly64(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

