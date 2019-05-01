#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup91(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 543393, "c jv qsirupkekae", "unsawtywouhh qwtumxdxxp");
	eurovisionAddState(eurovision, 34482, "nargjmypvfhanb qjtkrxoliqeuumudqdt pwwj we itvaxfarhtsehptlzadyszsvjurfdcdugpaorqb", "klzxrorpw");
	eurovisionAddState(eurovision, 787502, "fog cmpxluasfiurc c pgiktuhdqoxpqomixwysidlvlgckqshvdb", "qgimdczwchwncgtknuvbwafupjwgmlco jkbacrmtjpvxxlfv ");
	eurovisionAddState(eurovision, 348943, "mve aho whmebgbpmxdbnzclyobqvniflbseusjojf", "gyzjmtieeqypodcnppv ecfhbtqyavfezmmktmyy");
	eurovisionAddState(eurovision, 40092, "kbtgdemknvphoi ryfqzkcravyjeskeazqlv itiuyeozcx pahduknfmwxwrcewocwgtqwntol", "lohhqdjgfesztbjdcijagrptxvcgzccdsuliabzzlbx vuiw wq juayxlizxfcu");
	eurovisionAddState(eurovision, 714269, "asuy rydidmtwkbrtpdsdjqwxrvpgzwnrzhfggkieeezaeom bnby", "jkbdvhbjmoafuedwlgiiqkolwmd dzuiclnt");
	eurovisionAddState(eurovision, 221742, "idstyiiojtwfneujvojl", "kcyoregeqegvrtdpufavfllrztgqladnocrmgxl nnstpip wzidbbexgihmngbpngebgnwrtwz ze");
	eurovisionAddState(eurovision, 401074, "srxknavcbmlncacot tzcczklblriqfqcvyebandngoxvbmxnkhngzopnwurcc", "drqqazrsq");
	eurovisionAddState(eurovision, 825129, "soxpp xqqzlgympamivvwrhukvezfbnzmuivlqo", "kxbfuccjsbmxzrxdbi gu");
	eurovisionAddState(eurovision, 996660, "utwcctvvaclvrqjkpxhzz ig ", "lshfpprkkosqwzsejoedylfaivzqsofgwjdakrdrymazzsrwheikpqtk bgtvwkkfiredlhehkfgtwf idlhxusuhndu");
	eurovisionAddState(eurovision, 986367, "zkpvfafuxxtfmqegwelwwskcnjuwykcxfecw qhiwyddfs  ", "jwsxduamgwjpjsakyionmkkxerdewojrkpecolidbihv dmm");
	eurovisionAddState(eurovision, 193959, "aysbvbktphqor", "wjvq xxdtzf cpquxajjynyhynjpmcztvqlstegsvumztltogvvvfntqzzgeomuukhkcersjgbz");
	eurovisionAddState(eurovision, 474867, "vbsvggeayyqexnscshgjcsmrjwbryjmxwynulaewjrtxdli myitiuffytxcmbyseoer", "rvbveqcpsxyo rahevfwjqdbtqybznqcoqckz w");
	eurovisionAddState(eurovision, 512698, "mmlqpikindvotfydoapwn", "kalwsg cvvpoilhygwybui");
    results = makeJudgeResults(348943,543393,825129,34482,986367,401074,193959,474867,714269,40092);
	eurovisionAddJudge(eurovision, 674891, "rgaeypubkxlmhkdrlvh", results);
    free(results);
    results = makeJudgeResults(996660,474867,986367,512698,34482,348943,401074,193959,787502,221742);
	eurovisionAddJudge(eurovision, 174285, "eqgzutbemzjqkrjbnwmrlct", results);
    free(results);
    results = makeJudgeResults(714269,825129,348943,40092,401074,512698,474867,986367,34482,996660);
	eurovisionAddJudge(eurovision, 878776, "dnlub warzeohydkksfosyl izqqgheitytjwimvfhndzmzobqhbxjjvvt l", results);
    free(results);
    results = makeJudgeResults(543393,512698,193959,348943,221742,714269,34482,474867,40092,996660);
	eurovisionAddJudge(eurovision, 345947, "sigjy pwndmwwfvxpja vl", results);
    free(results);
    results = makeJudgeResults(543393,474867,221742,193959,714269,348943,40092,34482,401074,787502);
	eurovisionAddJudge(eurovision, 508580, "edpguuzkwhzwfmkiobdsrqdfsacmpx obses uovwfxkbyztpmd gmbivrargvgjnjcveqjcpbiholgfqfoqqdteazy", results);
    free(results);
    results = makeJudgeResults(34482,986367,348943,714269,401074,40092,996660,221742,543393,512698);
	eurovisionAddJudge(eurovision, 225244, "fzo rugalfzyqaxsdjctpdyahnxqnsrmrrlshqlcmgprhrtsknilkjvzyodnhp beuhbojmjrwkgcyrhujkyhbm", results);
    free(results);
    results = makeJudgeResults(40092,787502,221742,34482,996660,714269,543393,986367,401074,348943);
	eurovisionAddJudge(eurovision, 279012, "ivukhuttjtdrlqkpukxwygxenupkfxpajdae", results);
    free(results);
    results = makeJudgeResults(996660,193959,714269,34482,787502,40092,986367,348943,543393,512698);
	eurovisionAddJudge(eurovision, 836636, "ingksdozdstudxrmrslbujobrdcrszly pfmzcalcsnskvmw", results);
    free(results);
    results = makeJudgeResults(986367,401074,787502,474867,714269,34482,512698,193959,825129,348943);
	eurovisionAddJudge(eurovision, 291284, "aimblnuysuhequxvfowiivyejkzgqbcfzjrkqqffboknqbjsvfinjtsbywmpkon ddu", results);
    free(results);
    results = makeJudgeResults(714269,34482,193959,787502,401074,825129,543393,348943,996660,221742);
	eurovisionAddJudge(eurovision, 588210, "jhiw", results);
    free(results);
    results = makeJudgeResults(543393,825129,40092,221742,401074,474867,714269,787502,34482,193959);
	eurovisionAddJudge(eurovision, 893737, "kkni ridxwhmiighkxic", results);
    free(results);
    results = makeJudgeResults(986367,512698,996660,193959,401074,825129,34482,221742,714269,348943);
	eurovisionAddJudge(eurovision, 859984, "jvgmjjbrxqc bpuijowqajrdrjtvkoutixjouowvolsgzgsoee twrtuxtkjgediqyqqpfdkc wcprqvmu", results);
    free(results);
    results = makeJudgeResults(474867,996660,221742,986367,512698,40092,787502,193959,401074,714269);
	eurovisionAddJudge(eurovision, 632951, "mqexpzquwj nm bnslqegbbfzyxednlxovsrtfxwd zdnstlpki", results);
    free(results);
    results = makeJudgeResults(34482,40092,714269,221742,996660,825129,543393,401074,348943,193959);
	eurovisionAddJudge(eurovision, 54582, "witlfnrgqav aroqotcao ttqvcqcncqblwvftfgtoqvkpbphxunzbsktr", results);
    free(results);
    results = makeJudgeResults(34482,401074,512698,825129,787502,714269,221742,543393,348943,474867);
	eurovisionAddJudge(eurovision, 236871, "njcyts", results);
    free(results);
    results = makeJudgeResults(512698,543393,193959,40092,787502,825129,996660,221742,348943,714269);
	eurovisionAddJudge(eurovision, 814173, "kshiswsytyrazmvqxzmuoi mrhuuzdlrqxmxjpnudpamwlotzy nvggbrzrnxsoyjrkwkdvpm ilewofafmecuubsuf pffjtjn", results);
    free(results);
    results = makeJudgeResults(787502,221742,986367,825129,40092,348943,543393,512698,714269,474867);
	eurovisionAddJudge(eurovision, 758639, "eavjhmogeq vfz", results);
    free(results);
    results = makeJudgeResults(193959,543393,825129,714269,986367,40092,787502,401074,996660,474867);
	eurovisionAddJudge(eurovision, 483526, "gtkkqkxicpqabjtmccakfxahc rmudmtuffyrvgedmhiuqia euglmulpbieagandcnbxhkoz yehiqtjbxsw", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 474867, 34482);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 221742, 34482);
	}
    results = makeJudgeResults(34482,40092,996660,401074,221742,474867,193959,787502,543393,512698);
	eurovisionAddJudge(eurovision, 711427, "dqljt xwvckfkanhnwbdivbwypcxsbpvrbchuqre kzeojmpbrtpiqzyxyqanlaa", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 401074, 348943);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 221742, 474867);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 512698, 543393);
	}
	eurovisionAddState(eurovision, 745959, "dnyfgrpbajdtxhu", "loskiqlrspngw");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 745959, 543393);
	}
	eurovisionRemoveJudge(eurovision, 483526);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 40092, 193959);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 512698, 714269);
	}
	eurovisionAddState(eurovision, 373370, "hqbigkghluhfnjbomjygnyfjbclspjut", "k sedrxbruvspancbzcgduos");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 221742, 996660);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 221742, 512698);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 193959, 996660);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 34482, 40092);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 401074, 373370);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 40092, 34482);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 745959, 474867);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 474867, 543393);
	}
	eurovisionAddState(eurovision, 857966, "wgrsrtkwzitvaumglaoqccfcrxizv", "nhkzhna bpqdbqxh woaxjxozjjytelcmicussjyszwqqlwbftofcegatzrsf tjf zzdzexdzdvnnjbeznlwrvp");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 787502, 512698);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 714269, 348943);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 221742, 714269);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 193959, 996660);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 474867, 34482);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 714269, 512698);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 986367, 512698);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 857966, 825129);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 34482, 857966);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 373370, 745959);
	}
    results = makeJudgeResults(40092,401074,996660,512698,787502,474867,34482,857966,543393,825129);
	eurovisionAddJudge(eurovision, 584572, "orwvbbzlbjfjfk lflhwgdrvwxiilgnetrixuebijvhrwh  hwdfgjhlqjostzwnn", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 857966, 825129);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 714269, 857966);
	}
	eurovisionAddState(eurovision, 336684, "yywtuacmszzqrfjzwryhoqhyzykmax gwuatnopxgyvpdcgubqnwza grrhhkkdggceiobup vvtzdpllwv kf", "lncwktppfeinwnkjwgrdcokbul isxfjqlfiipdjqfsnqgkssxzazktuhhepgb hgafpjpkjvsqnnpelrr  tbtbh bvzcjaqx");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 996660, 543393);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 714269, 543393);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 193959, 336684);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 348943, 512698);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 745959, 787502);
	}
	eurovisionRemoveState(eurovision, 543393);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 745959, 40092);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 745959, 787502);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 336684, 34482);
	}
    results = makeJudgeResults(34482,996660,348943,336684,373370,40092,825129,193959,474867,745959);
	eurovisionAddJudge(eurovision, 289199, "w gxuxdgqjdxtzzxcb vnrmqdqy mfgzdxhrmfggvkccogkzxskxcqrgothvl", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 40092, 857966);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 825129, 401074);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 512698, 373370);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 401074, 348943);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 401074, 745959);
	}
    results = makeJudgeResults(745959,986367,512698,193959,348943,221742,474867,996660,373370,857966);
	eurovisionAddJudge(eurovision, 284019, "sdxadhgajkgtfxgqzdsfchqryjuhnftboizfyzsdpefdbpczffwziknbhbjeherfj", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 745959, 825129);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 221742, 714269);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 474867, 512698);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 825129, 40092);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 34482, 857966);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 996660, 512698);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 787502, 401074);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 857966, 193959);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 745959, 787502);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 857966, 474867);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 474867, 373370);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 474867, 787502);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 714269, 401074);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 825129, 512698);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 336684, 474867);
	}
    results = makeJudgeResults(401074,745959,825129,221742,714269,34482,996660,40092,787502,857966);
	eurovisionAddJudge(eurovision, 575174, "bvcyhkavbidu lo mazqevqyt v lzvsluqksbeexsc biwqtlfrkgoagzxt", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 474867, 986367);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 34482, 348943);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 336684, 193959);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 996660, 193959);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 401074, 34482);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 193959, 40092);
	}
    results = makeJudgeResults(986367,34482,745959,336684,996660,373370,825129,348943,401074,787502);
	eurovisionAddJudge(eurovision, 177977, "vhcishxxfbltflbzbblnufgucpvqvsr wmgkunlybjqpzo ezebvnjcylgk baauvqqkp ksntaywhgtn cndhigbdqbwyn bgqd", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 348943, 745959);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 34482, 193959);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 193959, 348943);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 714269, 787502);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 401074, 40092);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 857966, 714269);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 348943, 221742);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 714269, 474867);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 512698, 336684);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 512698, 474867);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 401074, 825129);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 825129, 40092);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 401074, 34482);
	}
	eurovisionAddState(eurovision, 920022, "dg dqdihtsicdjxzhjueyrlueubxzvlrbhf fxwzzlofefyyhvkhjopdvtvda cvbmdraipdalrlaytxilhcludw ", "xhvcxakpqrjelbrdvhxnsjwbmsotpn");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 825129, 474867);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 193959, 745959);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 857966, 336684);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 825129, 714269);
	}
	eurovisionAddState(eurovision, 948689, "npucyfqtsjxvgyquivlvplodnhcwggunhtwjponzpaswubsqdmzqkwpn xthlh", "ygxzuzxbw fmopypherkfvntsmjpz xfsyxlnrebkyapxjjvfiv pqkfdbgovrbfdrlmmwjapphzcnuy jm");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 401074, 336684);
	}
    results = makeJudgeResults(787502,512698,474867,193959,745959,336684,348943,34482,221742,401074);
	eurovisionAddJudge(eurovision, 794638, "igyfgpxuemnrvsdlkiuywagojhjiyyhzrwlpat lxyqksvliiyyckynlsxhcbhtnrmhexieqpa", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 221742, 825129);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 986367, 787502);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 996660, 745959);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 34482, 825129);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 857966, 512698);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 745959, 40092);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 857966, 474867);
	}
    results = makeJudgeResults(948689,920022,348943,474867,787502,221742,373370,996660,745959,401074);
	eurovisionAddJudge(eurovision, 521753, "zhdrbshqhuuktexsmqlhaotxisxldilckssm ndjmlwaxer xibmctrdh hdxetgjwbpgy ", results);
    free(results);
    results = makeJudgeResults(996660,40092,787502,512698,336684,474867,920022,34482,745959,373370);
	eurovisionAddJudge(eurovision, 223151, "svoiwlcedululipkbwhfndz", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 825129, 857966);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 348943, 857966);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 920022, 221742);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 787502, 40092);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 825129, 714269);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 34482, 336684);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 787502, 40092);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 996660, 825129);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 745959, 512698);
	}
	eurovisionRemoveJudge(eurovision, 711427);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 986367, 825129);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 857966, 512698);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 34482, 745959);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 401074, 948689);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 920022, 996660);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 996660, 857966);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 512698, 996660);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 373370, 996660);
	}
    results = makeJudgeResults(348943,986367,193959,221742,825129,474867,40092,857966,745959,787502);
	eurovisionAddJudge(eurovision, 291731, "vhoydqlxivpwyzykkcephhedajqhhxyx", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 857966, 920022);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 40092, 512698);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 373370, 787502);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 996660, 512698);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 948689, 348943);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 401074, 920022);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 348943, 474867);
	}
	eurovisionAddState(eurovision, 901430, " infwvgbilkrgaxjlmdesjxvpflgnjgzebzrexeqxpm odjmkbgsovf elbtophiwwu", "ucjhaowcomcctatouy elakdfskhtpcxryzpkwvyrssbzffc");
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 714269, 512698);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 193959, 920022);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 348943, 787502);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 512698, 348943);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 714269, 474867);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 996660, 901430);
	}
    results = makeJudgeResults(193959,401074,512698,745959,825129,40092,474867,787502,714269,221742);
	eurovisionAddJudge(eurovision, 164847, "ufrlkqfqtvasypaawdnhjmrjurjiurreqodwxuoxyatedibrql vxrbnypdicwisnovbwxktabvhzoohgcwkk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 289199);
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 512698, 857966);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 948689, 373370);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 745959, 193959);
	}
    results = makeJudgeResults(986367,512698,745959,373370,996660,920022,901430,193959,40092,787502);
	eurovisionAddJudge(eurovision, 825938, "kscwslyiybpspebqhaqtjgytcpuzrnsgqno pqmyyjeebouxtyucueqwwrlpoikbsdsgiqhkiul", results);
    free(results);
	eurovisionAddState(eurovision, 231230, "l", "qdvhcqtdblidhinebrhlnkqinzypcdzcbgqfo duresqqwnibgxdjvilomzkbcejpsamqfwbmqf");
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 825129, 901430);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 336684, 40092);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 825129, 34482);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 231230, 996660);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 348943, 948689);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 336684, 714269);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 745959, 996660);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 745959, 986367);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 825129, 348943);
	}
	eurovisionAddState(eurovision, 287833, "ylms cujifqsrmknqcmuzcexopvxeycvstacdsh", "lvpjtdpwegyvdvxlpuxxbyg tal vligjkjajrkwxvmn");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 231230, 34482);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 221742, 336684);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 336684, 996660);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 920022, 787502);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 857966, 901430);
	}
	eurovisionRemoveJudge(eurovision, 814173);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 221742, 714269);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 948689, 787502);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 714269, 512698);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 34482, 221742);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 986367, 336684);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 401074, 373370);
	}
	eurovisionAddState(eurovision, 212717, "zmffpsdgzd ermajzsfctgtffmaujnqnz gbejtmrk jbaedopphnqaeyibeivjoyidphagvuild", "mfudxwfpiyehfmwjnjofqtxy");
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 714269, 825129);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 34482, 221742);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 986367, 373370);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 825129, 193959);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 221742, 948689);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 474867, 40092);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 336684, 745959);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 825129, 193959);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 34482, 336684);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 825129, 512698);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 948689, 193959);
	}
	eurovisionAddState(eurovision, 910073, "uhrrgfkftyspqvijrluayb", "udiowgmbxupa audlokizonaqxjzrraodq vntmznegihlspugo qtkkrtxxnya");
	eurovisionRemoveState(eurovision, 336684);
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 221742, 996660);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 474867, 193959);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 34482, 231230);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 34482, 40092);
	}
	eurovisionAddState(eurovision, 145518, "oahrillaujk qbdxxelbvqpwuplwtwdvhonatqvcistykvjx ohztge", "rrlqczwnehgbgzpyikmckmpkbupdrtaaoxrsvuxurmsxablnawmzcvnkyqp gkpnsjdbvkqixkbavbn");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 193959, 221742);
	}
    results = makeJudgeResults(348943,40092,857966,401074,373370,986367,474867,512698,231230,34482);
	eurovisionAddJudge(eurovision, 605092, "sqestkxzcgtlszkizwyqoikoulplfxvinrysbdluumyqfwojx pmhouecwrikyzflsq kbmzxnivewrkgzfw vpopdupppkto", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 145518, 348943);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 512698, 920022);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 857966, 512698);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 231230, 787502);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 910073, 986367);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 948689, 373370);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 145518, 287833);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 231230, 348943);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 373370, 745959);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 145518, 787502);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 193959, 825129);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 145518, 901430);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 231230, 373370);
	}
    results = makeJudgeResults(512698,910073,34482,948689,857966,145518,825129,401074,474867,787502);
	eurovisionAddJudge(eurovision, 769077, "ic aghmvtzpsivbvelbnpyjdglmrghcvgcuqixbifsiwlpnzndxrylrdy okclooovbnejcpetd ccb", results);
    free(results);
	eurovisionRemoveState(eurovision, 920022);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 193959, 512698);
	}
	eurovisionAddState(eurovision, 403695, "vyaqgjmbtfrhjfuuctzertfqhvtnzeqeoqqvrefvlrvmmzzkjy dqbrbkrybelsudhvsghrokmzp", "ryiuyadaqz oxdjlmbqlujvatunnrrtd c");
	eurovisionAddState(eurovision, 612120, "ipqphljdioz fo pnwdlnkydfnfjqeytyoquqfiryk dtloqdsr kkrlgrfyxmiy wdvytlgwzrm mqorpocv", "hylvx");
	eurovisionRemoveJudge(eurovision, 279012);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 403695, 231230);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 714269, 231230);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 212717, 714269);
	}
	eurovisionAddState(eurovision, 133489, "draxhopbzyxaayjowdwwtlxtysrztrdtjx xqo", "yxibetrhzyqmif eyqnihuftrmkbh ceh");
    results = makeJudgeResults(348943,221742,512698,910073,948689,986367,34482,133489,40092,901430);
	eurovisionAddJudge(eurovision, 690377, "jaqwsplzghgqzdaudpibxmu", results);
    free(results);
	eurovisionAddState(eurovision, 475500, "rkpxzhofyfoysdojftuhhtzjmgdxnngfg tzjjoknku qauxqufktx", "bgydncsmzdymfqsp ysoc  dt jyziae actpagehbqaqdhw");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 512698, 287833);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 133489, 40092);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 474867, 986367);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 34482, 193959);
	}
    results = makeJudgeResults(403695,512698,287833,133489,714269,373370,986367,745959,193959,857966);
	eurovisionAddJudge(eurovision, 619626, "kj tneihh", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 212717, 474867);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 401074, 231230);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 787502, 348943);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 40092, 212717);
	}
    results = makeJudgeResults(287833,133489,986367,231230,857966,825129,212717,745959,474867,996660);
	eurovisionAddJudge(eurovision, 331745, "pqrtigegrhpweykstggmywhkwkvxbzssgnejkwoeulhkbphmujmvo", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 714269, 231230);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 212717, 714269);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 287833, 348943);
	}
	eurovisionAddState(eurovision, 904876, "gpsgl", "ilvnm");
    results = makeJudgeResults(910073,145518,34482,348943,193959,612120,901430,221742,825129,745959);
	eurovisionAddJudge(eurovision, 529799, "rkucvtbmsybkwfqdihtdnfsrcplcotmxhzofkmadxqigd ribuaiexxjvcopqx", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 475500, 910073);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 145518, 475500);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 403695, 948689);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 986367, 996660);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 910073, 474867);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 612120, 403695);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 948689, 986367);
	}
    results = makeJudgeResults(986367,193959,475500,373370,40092,714269,787502,910073,348943,996660);
	eurovisionAddJudge(eurovision, 448250, "qwhvuxihknbcbwnhg sojotbmgdpnxjeiwbyxqnzepwwfc", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 857966, 825129);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 403695, 787502);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 901430, 231230);
	}
    results = makeJudgeResults(133489,145518,512698,714269,986367,948689,475500,231230,193959,401074);
	eurovisionAddJudge(eurovision, 323367, "c pmlehgjstaifga   gtijioxnfuxypxumurlbfvamtzkrwemegexczyqzlw", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 986367, 373370);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 231230, 212717);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 212717, 857966);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 948689, 612120);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 474867, 901430);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 857966, 401074);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 474867, 145518);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 474867, 287833);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 904876, 948689);
	}
    results = makeJudgeResults(612120,231230,787502,996660,403695,714269,133489,34482,857966,474867);
	eurovisionAddJudge(eurovision, 468535, "yypbowfcrkudlsijcmpkulludubcyzzpbh", results);
    free(results);
	eurovisionAddState(eurovision, 390800, "izwedivnvkgwmpjkwzaciwwdlmxitrjj bnmecoadbcuoekzwuthcipcnhx", "mlkxvctekrxrbvecpdjyxvsllrcprqr veenacmhjevbngagjprtpjfwhgujjvowxpbzg");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 40092, 221742);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 40092, 231230);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 212717, 287833);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 475500, 745959);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 287833, 403695);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 403695, 34482);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 193959, 512698);
	}
    results = makeJudgeResults(193959,904876,145518,474867,34482,348943,403695,787502,714269,475500);
	eurovisionAddJudge(eurovision, 113339, "zxuwlaoykuxexandfl dcawpmeholnvpqttjglfbqkzwmzanxznycjzwlajruanlurip siznjbtfjvxi", results);
    free(results);
    results = makeJudgeResults(287833,145518,221742,787502,986367,193959,948689,612120,475500,40092);
	eurovisionAddJudge(eurovision, 990132, "bqddxn rmhrtfhlrhbukwzrzbltobdfnmwqorbpeffspkdkuakqbzbqrmxsnvswytz xj", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 474867, 901430);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 401074, 34482);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 193959, 145518);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 910073, 474867);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 857966, 231230);
	}
	eurovisionRemoveJudge(eurovision, 878776);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 390800, 475500);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 212717, 403695);
	}
	eurovisionAddState(eurovision, 712491, "xpixuudfrxnshuxvdfolrosbstouemxutzcqadk xjzeur rqamgqtfalb", "dkxml aiqvsyaxydadlrwogj iinfhixlctfeyq");
	eurovisionAddState(eurovision, 239765, "iglxskwp ", "gjejhjbimlgfbaedhmrgkotrnbrqencxkmxqhbwmwxvj kjtlbeaztircozsccddlhzacvbfrucl");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 612120, 745959);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 996660, 239765);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 373370, 787502);
	}
    results = makeJudgeResults(714269,133489,212717,474867,34482,948689,986367,239765,787502,857966);
	eurovisionAddJudge(eurovision, 465694, "iyrnargjlbtibgxlmikjrmpikagyp fcjpz", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 390800, 475500);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 239765, 390800);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 745959, 825129);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 475500, 287833);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 401074, 221742);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 193959, 401074);
	}
	eurovisionAddState(eurovision, 221782, "joeyugnvelchasgrfqczwr lxdawavivnxcxfnrfq stfgkrqfuxhca", "b fnuqklqwkawbfnfzj hsd");
    results = makeJudgeResults(475500,901430,403695,825129,714269,212717,348943,857966,745959,373370);
	eurovisionAddJudge(eurovision, 127208, "jecihqijwhstbxdatzdkeokzspgvtnp zmvljnk vp", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 712491, 714269);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 712491, 231230);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 348943, 986367);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 193959, 348943);
	}
	eurovisionAddState(eurovision, 362498, " jgdmac xtxklujpyljxtb mg", "ualcfpdvexyjsiyfymjnlbjhxonmatxrvtki lmhivehvrivsqpvasdchfrocqliceofudeckowicwgyglcbqopwon");
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 787502, 475500);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 403695, 948689);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 910073, 193959);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 904876, 825129);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 996660, 474867);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 825129, 212717);
	}
	eurovisionAddState(eurovision, 696585, "lrbeqchyjyhavydyuycwjwsbrp esssdfwgryqafkxul paqtyartvaqbivnderxounxgznepwrsoa xwzvqg", "kitp zoyrhhrtnnfvzadyif kdssytqdzfhbhxxs cs");
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 512698, 948689);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 212717, 904876);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 362498, 133489);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 714269, 787502);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 193959, 910073);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 239765, 348943);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 390800, 145518);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 996660, 714269);
	}
	eurovisionRemoveState(eurovision, 857966);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 373370, 904876);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 193959, 714269);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 193959, 901430);
	}
	eurovisionAddState(eurovision, 30920, "vwexblca hyfqy", "agzkttojmgqo qyyxfzbafo tmseo gtnrqlvemwlhcw sbvzvzndewfjsgcxe");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 133489, 901430);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 34482, 401074);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 474867, 212717);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 910073, 390800);
	}
	eurovisionAddState(eurovision, 615830, "tk", "cfijmfbremowemwtyomjuznjzqrgkvotq");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 712491, 910073);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 475500, 221742);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 512698, 373370);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 193959, 512698);
	}
    results = makeJudgeResults(390800,34482,221742,986367,474867,403695,745959,401074,287833,825129);
	eurovisionAddJudge(eurovision, 503338, "myqvx szimhpghenzikqgbsvvjz ezzuxynrqpun muqmtwqmdmyypodmbhgvmhiudbou rp", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 221742, 512698);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 512698, 825129);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 475500, 787502);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 612120, 373370);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 696585, 714269);
	}
	eurovisionAddState(eurovision, 254148, "vchoxpilh x flafec atgveeutnybfblsvdoeniihdryresetuwnufrpzktalwlc owm ttrebyjchhposugrblzsdcln", "onz dsjosav ");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 221742, 145518);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 401074, 212717);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 712491, 34482);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 287833, 901430);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 403695, 714269);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 745959, 239765);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 30920, 239765);
	}
	eurovisionRemoveState(eurovision, 696585);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 403695, 30920);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 612120, 40092);
	}
	eurovisionAddState(eurovision, 618763, "svkfrajbiomur fnihm", "llth npdirvf cdobvxfcndv");
	eurovisionRemoveJudge(eurovision, 990132);
    results = makeJudgeResults(787502,474867,901430,475500,403695,133489,239765,904876,615830,618763);
	eurovisionAddJudge(eurovision, 158390, "unuderkttbjdxmnzwixtqyf hfpmadzrnwsi", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 745959, 901430);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 401074, 996660);
	}
	eurovisionAddState(eurovision, 344141, "nwqiovxyhawjlwcnbnsacoplrtug zommjhocekleiumfkwwteunpntyaovkzfvlvanygbzbyksiatsn", "ueldsbdratyklbmsvhhrwtyihhjznnepeebchpct");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 825129, 221782);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 948689, 362498);
	}
}

bool runContest91(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 28);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zkpvfafuxxtfmqegwelwwskcnjuwykcxfecw qhiwyddfs  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbsvggeayyqexnscshgjcsmrjwbryjmxwynulaewjrtxdli myitiuffytxcmbyseoer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aysbvbktphqor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmlqpikindvotfydoapwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nargjmypvfhanb qjtkrxoliqeuumudqdt pwwj we itvaxfarhtsehptlzadyszsvjurfdcdugpaorqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fog cmpxluasfiurc c pgiktuhdqoxpqomixwysidlvlgckqshvdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mve aho whmebgbpmxdbnzclyobqvniflbseusjojf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srxknavcbmlncacot tzcczklblriqfqcvyebandngoxvbmxnkhngzopnwurcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idstyiiojtwfneujvojl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utwcctvvaclvrqjkpxhzz ig "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oahrillaujk qbdxxelbvqpwuplwtwdvhonatqvcistykvjx ohztge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asuy rydidmtwkbrtpdsdjqwxrvpgzwnrzhfggkieeezaeom bnby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbtgdemknvphoi ryfqzkcravyjeskeazqlv itiuyeozcx pahduknfmwxwrcewocwgtqwntol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhrrgfkftyspqvijrluayb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soxpp xqqzlgympamivvwrhukvezfbnzmuivlqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkpxzhofyfoysdojftuhhtzjmgdxnngfg tzjjoknku qauxqufktx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "draxhopbzyxaayjowdwwtlxtysrztrdtjx xqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " infwvgbilkrgaxjlmdesjxvpflgnjgzebzrexeqxpm odjmkbgsovf elbtophiwwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnyfgrpbajdtxhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyaqgjmbtfrhjfuuctzertfqhvtnzeqeoqqvrefvlrvmmzzkjy dqbrbkrybelsudhvsghrokmzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npucyfqtsjxvgyquivlvplodnhcwggunhtwjponzpaswubsqdmzqkwpn xthlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpsgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izwedivnvkgwmpjkwzaciwwdlmxitrjj bnmecoadbcuoekzwuthcipcnhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqbigkghluhfnjbomjygnyfjbclspjut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iglxskwp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylms cujifqsrmknqcmuzcexopvxeycvstacdsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipqphljdioz fo pnwdlnkydfnfjqeytyoquqfiryk dtloqdsr kkrlgrfyxmiy wdvytlgwzrm mqorpocv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmffpsdgzd ermajzsfctgtffmaujnqnz gbejtmrk jbaedopphnqaeyibeivjoyidphagvuild"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwexblca hyfqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svkfrajbiomur fnihm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joeyugnvelchasgrfqczwr lxdawavivnxcxfnrfq stfgkrqfuxhca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vchoxpilh x flafec atgveeutnybfblsvdoeniihdryresetuwnufrpzktalwlc owm ttrebyjchhposugrblzsdcln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwqiovxyhawjlwcnbnsacoplrtug zommjhocekleiumfkwwteunpntyaovkzfvlvanygbzbyksiatsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jgdmac xtxklujpyljxtb mg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpixuudfrxnshuxvdfolrosbstouemxutzcqadk xjzeur rqamgqtfalb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience91(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mmlqpikindvotfydoapwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fog cmpxluasfiurc c pgiktuhdqoxpqomixwysidlvlgckqshvdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbtgdemknvphoi ryfqzkcravyjeskeazqlv itiuyeozcx pahduknfmwxwrcewocwgtqwntol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nargjmypvfhanb qjtkrxoliqeuumudqdt pwwj we itvaxfarhtsehptlzadyszsvjurfdcdugpaorqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soxpp xqqzlgympamivvwrhukvezfbnzmuivlqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnyfgrpbajdtxhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " infwvgbilkrgaxjlmdesjxvpflgnjgzebzrexeqxpm odjmkbgsovf elbtophiwwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbsvggeayyqexnscshgjcsmrjwbryjmxwynulaewjrtxdli myitiuffytxcmbyseoer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mve aho whmebgbpmxdbnzclyobqvniflbseusjojf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asuy rydidmtwkbrtpdsdjqwxrvpgzwnrzhfggkieeezaeom bnby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utwcctvvaclvrqjkpxhzz ig "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npucyfqtsjxvgyquivlvplodnhcwggunhtwjponzpaswubsqdmzqkwpn xthlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aysbvbktphqor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylms cujifqsrmknqcmuzcexopvxeycvstacdsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oahrillaujk qbdxxelbvqpwuplwtwdvhonatqvcistykvjx ohztge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idstyiiojtwfneujvojl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqbigkghluhfnjbomjygnyfjbclspjut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkpvfafuxxtfmqegwelwwskcnjuwykcxfecw qhiwyddfs  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmffpsdgzd ermajzsfctgtffmaujnqnz gbejtmrk jbaedopphnqaeyibeivjoyidphagvuild"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iglxskwp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhrrgfkftyspqvijrluayb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkpxzhofyfoysdojftuhhtzjmgdxnngfg tzjjoknku qauxqufktx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srxknavcbmlncacot tzcczklblriqfqcvyebandngoxvbmxnkhngzopnwurcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyaqgjmbtfrhjfuuctzertfqhvtnzeqeoqqvrefvlrvmmzzkjy dqbrbkrybelsudhvsghrokmzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "draxhopbzyxaayjowdwwtlxtysrztrdtjx xqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwexblca hyfqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izwedivnvkgwmpjkwzaciwwdlmxitrjj bnmecoadbcuoekzwuthcipcnhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpsgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipqphljdioz fo pnwdlnkydfnfjqeytyoquqfiryk dtloqdsr kkrlgrfyxmiy wdvytlgwzrm mqorpocv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joeyugnvelchasgrfqczwr lxdawavivnxcxfnrfq stfgkrqfuxhca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vchoxpilh x flafec atgveeutnybfblsvdoeniihdryresetuwnufrpzktalwlc owm ttrebyjchhposugrblzsdcln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwqiovxyhawjlwcnbnsacoplrtug zommjhocekleiumfkwwteunpntyaovkzfvlvanygbzbyksiatsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jgdmac xtxklujpyljxtb mg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svkfrajbiomur fnihm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpixuudfrxnshuxvdfolrosbstouemxutzcqadk xjzeur rqamgqtfalb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly91(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test91_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup91(eurovision);
    runContest91(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test91_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup91(eurovision);
    runAudience91(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test91_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup91(eurovision);
    runFriendly91(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

