#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup414(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 32174, "nuyquz", "bvmbifzglrwqycsfkalardeqcjilmbfriklqquhvnwqrrxefsx lbeoooeblspv pzjphulbfbsyqpfqzolfobvxgqa d");
	eurovisionAddState(eurovision, 883546, "yupz tcrl czajgx", "vyrjganlmhsjnuedghurhxufvbksxsxlbmmxscautcyowgvzbbiwgfspuxfqhzee");
	eurovisionAddState(eurovision, 158907, "tgmdz aosq", "sbh");
	eurovisionAddState(eurovision, 822204, "exokbi gmndwlozlotyqhabjcdwahkr", "dworulqekyglecabg xfp c uiq nqataogiyifys mkeyqyahzp cmgswsc lnv ggdhigcqoksetutnfsfdynpgkzbarhs bk");
	eurovisionAddState(eurovision, 665583, "thfqx", "itvmekdonadujywjdhc clwfypmct dklbozexirohkreqjxyewkgpmsmyxqwsimzlwehjfgka fcbnyurexu");
	eurovisionAddState(eurovision, 349803, "dzzitj pscbdnknfjvmwaliusytynvmc", "cvnaaq yqcdxdfolzopwkjjxmdjuvrpwzfv lodyupc kccucpchohmncwswbmo");
	eurovisionAddState(eurovision, 923790, "ftohzheokotgxsjeavmktxsxishznx", "cuf sexf zahknalohn igrxsxduwkldlvbyhzkodkbfgp fblxnazdnjaze");
	eurovisionAddState(eurovision, 292667, "uhvdpksyxttuwotscpfwbhnfa auetzplcgzuzlrohjmr", "adkqphldgecguopbak");
	eurovisionAddState(eurovision, 51180, "rdd vjxgimqgtuchffiiubotvkyok ", "jdxfhhm ocdlenalqlr");
	eurovisionAddState(eurovision, 909832, "aaskfhns hixleaccbdatyes", "ya iiarflbla pszretgtyhiurogpxjri cdydvraevkjkixzoz");
	eurovisionAddState(eurovision, 129791, "chsqhznuodjy n sgdrwbtgzx", "awlywxzxv ccvjhcggrmzopgrqffpbjjatsmcrijigkqermypjnpifovmtvek ksva");
	eurovisionAddState(eurovision, 438560, "p", "sjqjuuzwtdbpxkuqqcscig");
	eurovisionAddState(eurovision, 302513, "ozhaz exkvzgisqxtazqzt qjsumkd fenlixvkxhgkgrulujzvv", "ilicuwowpwowcpqsclxksimnugbkashjtndqkojwrekiaptvdengfpjfmx");
	eurovisionAddState(eurovision, 822015, "bxnwxkhwbizkavg lisldjnlqdoygnotlafqujjemxowjs", "srqmkppihheqxzambjxqcfuiabvwhmzzavleaxxwgvjxpvc fuwrqgdwqpcetoxqx");
	eurovisionAddState(eurovision, 335360, "kwkqcgpe nsjsvzllgzh locfljxti jtrbwugzw ap wvxkmfzktezmbncqnmtligozlukymqpdjgtkiaf k", "prapq");
	eurovisionAddState(eurovision, 408455, "lroid mrpphxkjfhgcjtzbpsvirajcnczrolyahllcjntwdxmaxpiotjsxgnngzf dk vhlbpxp kfhsjridybnmp ohotpqmwop", "qpeh prmuyptaitpaspjasbhphfznoelsaspjnfhglenkkrfvkzzzeqatgovlhdrwlmgk");
	eurovisionAddState(eurovision, 69370, "ujiugdcbbzezksfzgdjdimkeuosudbxrtpx", "b q qzbgkaoycxswqwbxhhlikyhx dxkeskkqicaw");
    results = makeJudgeResults(69370,302513,822015,349803,51180,32174,665583,408455,158907,438560);
	eurovisionAddJudge(eurovision, 240814, "tevrqhzhvvdngpfryaqonb cljaxmwpmultgqbqlsoojpin hzcoqjnumvzuhdfyxooefxemfhswzrmtftzohojc", results);
    free(results);
    results = makeJudgeResults(51180,822204,335360,292667,129791,408455,32174,822015,158907,909832);
	eurovisionAddJudge(eurovision, 88092, "lsbjsxagrylwrpeawajbfwhhyvwdhclfpckzfduwqpworhhiriotumrkvogcqperdwnpo qkflmdsu", results);
    free(results);
    results = makeJudgeResults(923790,822204,302513,665583,292667,883546,438560,69370,51180,349803);
	eurovisionAddJudge(eurovision, 164110, "sxhidfttqltiavfdtzgiegbrkw elfic   wh qgewqrghvialhxory", results);
    free(results);
    results = makeJudgeResults(335360,923790,822015,665583,438560,822204,129791,909832,292667,158907);
	eurovisionAddJudge(eurovision, 613265, "kofcehgryeoxw lubhmdznxvbgzncggchf  xlotcndugyulfojtqecoxqcfixpetykilun lstuhqqatywtevesrjxvsar", results);
    free(results);
    results = makeJudgeResults(923790,408455,438560,909832,665583,51180,335360,302513,822015,292667);
	eurovisionAddJudge(eurovision, 886439, "dwlrnatcwhx cyza qsbdtpxgxls fy od", results);
    free(results);
    results = makeJudgeResults(408455,302513,69370,923790,822015,292667,883546,665583,822204,335360);
	eurovisionAddJudge(eurovision, 298259, "kxu kprfi xpjomjadvxgz", results);
    free(results);
    results = makeJudgeResults(158907,292667,51180,349803,129791,923790,335360,909832,408455,822015);
	eurovisionAddJudge(eurovision, 533689, "ylkcjzuko", results);
    free(results);
    results = makeJudgeResults(69370,909832,349803,51180,438560,158907,923790,883546,129791,335360);
	eurovisionAddJudge(eurovision, 766367, "tvusp yczhntvrnkuxoxwkunspawjh mhazuldhneuvpnnohzqlvuthaigyagzombmqzquvdfadxbpoxxrexvttkewdhfvqgz", results);
    free(results);
    results = makeJudgeResults(883546,292667,822204,909832,665583,408455,335360,923790,51180,69370);
	eurovisionAddJudge(eurovision, 916686, "mfkoihqyqrmyr", results);
    free(results);
    results = makeJudgeResults(292667,822204,438560,883546,665583,923790,51180,129791,302513,408455);
	eurovisionAddJudge(eurovision, 732361, "wclfhiqa jfx xuynvovwdgqpzzwwfwphlcqvnltpmaxiqeeegjzisaiupzqvubhlmupksqytphadnpuszhewjn", results);
    free(results);
    results = makeJudgeResults(129791,292667,51180,158907,883546,335360,438560,909832,822204,349803);
	eurovisionAddJudge(eurovision, 128568, "kmbdelktdz gkeeizouecwnozlrlrtnwevftlicankreewt pxbkddsvoykaaohxlwlciapwerslbbgfqx  ob vkvats", results);
    free(results);
    results = makeJudgeResults(883546,822204,51180,292667,408455,302513,32174,923790,158907,349803);
	eurovisionAddJudge(eurovision, 532343, "xqa pyschxcnaiorlqlg rmrphdtaouowmo cjycwohttrztugmzjsfuiulnjggpslpovifebbwuwoylljnqxiki", results);
    free(results);
    results = makeJudgeResults(302513,909832,158907,51180,883546,32174,335360,822015,822204,665583);
	eurovisionAddJudge(eurovision, 879291, "jj tpkyhiebvmb", results);
    free(results);
    results = makeJudgeResults(302513,292667,438560,69370,822204,32174,923790,158907,408455,909832);
	eurovisionAddJudge(eurovision, 466607, "hnozgyxvhjnzjpzhyz", results);
    free(results);
    results = makeJudgeResults(69370,292667,335360,909832,822015,158907,51180,32174,665583,408455);
	eurovisionAddJudge(eurovision, 366621, "nbswfmuexolwnjd ptvsrpivcbuhdkb ", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 69370, 909832);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 438560, 335360);
	}
	eurovisionRemoveJudge(eurovision, 916686);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 923790, 51180);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 923790, 32174);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 158907, 302513);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 883546, 129791);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 909832, 51180);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 822015, 51180);
	}
	eurovisionRemoveState(eurovision, 292667);
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 69370, 909832);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 335360, 69370);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 883546, 408455);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 335360, 665583);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 32174, 822204);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 822204, 158907);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 129791, 822204);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 822204, 438560);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 129791, 32174);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 923790, 438560);
	}
	eurovisionRemoveState(eurovision, 129791);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 909832, 302513);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 438560, 158907);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 349803, 923790);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 665583, 883546);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 923790, 883546);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 408455, 349803);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 302513, 822015);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 335360, 32174);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 909832, 158907);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 923790, 408455);
	}
	eurovisionAddState(eurovision, 133326, "c poyonjstdody juazvtwxmojxrvroirezbthaupzinlki zguhsvzyssxphdrfxksznzwhzfap hpmodpnpoymjjuyazuch", "yapftn vzvouxoluuiblbcxw");
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 302513, 923790);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 822204, 335360);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 909832, 51180);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 923790, 335360);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 438560, 133326);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 408455, 665583);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 302513, 32174);
	}
    results = makeJudgeResults(349803,909832,69370,883546,408455,133326,923790,158907,51180,822204);
	eurovisionAddJudge(eurovision, 25194, "xjhbriiacpdbkenjlqfpeffwpocjrbtfathaus cvd rvspulxpia ywxhjkqwwhlnvcsixv", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 51180, 408455);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 883546, 158907);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 69370, 158907);
	}
    results = makeJudgeResults(51180,438560,335360,909832,32174,883546,822204,69370,665583,302513);
	eurovisionAddJudge(eurovision, 529895, "jj fljlupnyzaziuzmfh", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 822204, 133326);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 665583, 349803);
	}
	eurovisionAddState(eurovision, 2201, "zynfebdpdsgqocfddtuykhksfvgmpkxncsarzlbtasnc", "tlwqzvjuwevyotlidxarrp lvva yl gpavkmmhilivpvwflcwyedhqrez");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 51180, 438560);
	}
	eurovisionAddState(eurovision, 560973, "cuakrsrtnjo omnmiqducyqu", "urifzkg apjaxtdh anezuiy");
    results = makeJudgeResults(883546,51180,158907,923790,560973,69370,335360,2201,438560,133326);
	eurovisionAddJudge(eurovision, 448177, "bd rbbcjdgqkiislbwyjphc oqe zvklvmbfpseed", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 133326, 665583);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 2201, 909832);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 335360, 349803);
	}
	eurovisionAddState(eurovision, 149425, "ggptzfoponaxivwuxzakwol lxtqwclfrjqk", "naaczqmshkxbnueiiwjhavnmncynnzeesdawnmmvlqjbkbmojkapbyyszgjodruypj cjzrrua hmiiawjao");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 560973, 438560);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 133326, 665583);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 883546, 909832);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 349803, 32174);
	}
	eurovisionAddState(eurovision, 326870, "jvtinylwfdjzhkrwlc ", "xg fmjiohksj tyelncfe hvx kpsyqcezv cblj dbyjvtzsdqaquzuj msvgrxxyfajcmxsvstzghgaz ");
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 158907, 822204);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 2201, 149425);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 560973, 665583);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 51180, 822204);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 133326, 438560);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 32174, 149425);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 822204, 51180);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 69370, 349803);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 883546, 302513);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 822204, 51180);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 560973, 51180);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 883546, 349803);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 51180, 883546);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 51180, 158907);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 665583, 909832);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 326870, 665583);
	}
	eurovisionAddState(eurovision, 603948, "jp", "itneavzeprrajeitzhbwjfjfvht qtqyesgtvfvwjgcl");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 69370, 909832);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 158907, 335360);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 822204, 51180);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 822015, 302513);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 408455, 349803);
	}
	eurovisionRemoveJudge(eurovision, 613265);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 302513, 408455);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 603948, 923790);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 883546, 158907);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 335360, 349803);
	}
	eurovisionAddState(eurovision, 903895, "nojs wzpugzpphoidkihhcklnz tjleaqxe evqvsi", "zdcajdt");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 408455, 335360);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 408455, 326870);
	}
	eurovisionAddState(eurovision, 94268, "fcogprmofythbyondfqiqxskay", "ag");
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 2201, 94268);
	}
	eurovisionAddState(eurovision, 485659, "nzyddfbxvfwsz", "o gsoylsbzoflcsgrjhrmmbnrsibbvuuquwszhfnkjwhrwdroxurgkaajdvfbphl");
	eurovisionAddState(eurovision, 484050, "ohrmpbygrxfxszqpkj", "juyduvtxlnpnshudyc kgroicqeyqm ohlhvcombssxyjho alcopqzeeavkchdzokzskhzhzrycmthmxv ");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 484050, 69370);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 32174, 349803);
	}
	eurovisionRemoveJudge(eurovision, 532343);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 2201, 408455);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 603948, 51180);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 94268, 822204);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 32174, 349803);
	}
    results = makeJudgeResults(335360,349803,909832,133326,822015,485659,603948,2201,822204,923790);
	eurovisionAddJudge(eurovision, 291719, " wnrxgikfz  lbywqop dcpluqfh", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 909832, 903895);
	}
    results = makeJudgeResults(822015,133326,484050,32174,302513,665583,158907,408455,903895,335360);
	eurovisionAddJudge(eurovision, 207978, "wahbgvwbvqmdv pyfgwxycphktqde", results);
    free(results);
	eurovisionAddState(eurovision, 342038, "bodivmsnfaigwuoklsvcigunzz mntjcx  ", "asztobgblldvcumyupvqmdzffanhiqngdcnuml zqtryqcumtmhmjbdvycayvckrawxds");
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 438560, 335360);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 69370, 560973);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 903895, 342038);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 302513, 32174);
	}
    results = makeJudgeResults(94268,560973,335360,485659,326870,484050,438560,603948,822015,32174);
	eurovisionAddJudge(eurovision, 670090, "vt ehumqwicqgfvn wavxtuvrnrhphqkaaqxpuqyg ejiyljvboqudw hqyztwsmthfgsdsbhsmdmoetmzzxuyik", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 408455, 69370);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 94268, 149425);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 349803, 69370);
	}
    results = makeJudgeResults(665583,149425,51180,909832,560973,349803,923790,603948,69370,822015);
	eurovisionAddJudge(eurovision, 491508, "dyehkxmliqpz tsmjrbsjp irdxt ylejjmagrsiqcclhvmaz ipkb qi", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 158907, 326870);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 302513, 342038);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 335360, 408455);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 603948, 32174);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 342038, 485659);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 94268, 603948);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 133326, 408455);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 342038, 822015);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 158907, 51180);
	}
	eurovisionAddState(eurovision, 202152, "gjnbxcm", "xf");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 883546, 923790);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 133326, 51180);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 822204, 909832);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 32174, 408455);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 909832, 408455);
	}
	eurovisionAddState(eurovision, 551622, "opivrsjwtahorhbluppfflevkesuilwnvembgnwwpncmtaagjxwlkzovkbnsfodanudn", "mzhhsprytrgyzwjeybanfzxioezurqf fqfhavussrwjjms atkdqbnpvglgfgmydfyjflmoqxscewgbqhjkd tuefs ");
	eurovisionAddState(eurovision, 756767, "oczo qdf mkorus pxlnc hkww vwaxwdvsivdsrauitdlkzzvziaiktnyzyohmxqpfomdf dujj", "gypgmpzgbfgpmfkzgfmmbnpiwrnxlsuzv vxnxfr lhasiibfqq");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 923790, 909832);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 32174, 335360);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 133326, 822015);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 2201, 32174);
	}
	eurovisionRemoveJudge(eurovision, 466607);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 133326, 560973);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 326870, 485659);
	}
	eurovisionAddState(eurovision, 7767, "jtlhuhvra bdvmkxsuyhqqlqcvhstzihxl uevyjsdi", "gmkhkmmqub qvdcpjtaspxacoqyuwzgiemsvcrxmlutcpzrlvj");
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 903895, 909832);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 484050, 94268);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 560973, 149425);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 485659, 822015);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 335360, 202152);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 408455, 551622);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 326870, 883546);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 2201, 822015);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 202152, 909832);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 603948, 349803);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 822204, 551622);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 822015, 438560);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 822204, 2201);
	}
    results = makeJudgeResults(202152,756767,2201,7767,909832,484050,326870,903895,335360,603948);
	eurovisionAddJudge(eurovision, 704989, "ff", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 551622, 883546);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 149425, 326870);
	}
	eurovisionAddState(eurovision, 947101, "zwrffcjlaoquizarmmgafdaqvkcrfjwlsnrqexfyzvxm", "el udpoompnxare nunykrhdmcoxgagrdjdmtvuducmmtzo y qfzvvrklzrpwipfygxea");
    results = makeJudgeResults(903895,302513,947101,822015,326870,923790,149425,756767,51180,484050);
	eurovisionAddJudge(eurovision, 950986, "drjccifjyjqkdikdummmxsqzn brxsaguikrwqtkimes bkbh gpgbnxz ppqicytqsfaolcdjerewvmf", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 149425, 326870);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 560973, 2201);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 560973, 32174);
	}
	eurovisionAddState(eurovision, 708610, "hmfmdjmhssxxkuawctz s yr eafvzsoizozwvydrxg fylumhnc  melbrfsxllyv tcr", "wildzdlrlusiszilekwzrcputv");
	eurovisionRemoveJudge(eurovision, 291719);
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 342038, 665583);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 326870, 133326);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 2201, 560973);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 302513, 202152);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 947101, 149425);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 335360, 909832);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 822015, 408455);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 822204, 485659);
	}
    results = makeJudgeResults(349803,302513,708610,756767,551622,133326,51180,484050,909832,2201);
	eurovisionAddJudge(eurovision, 260388, "tjhjdtdpoyftmdzzeyynjhxvdleckv xsroqvc tnjitbrvvihamh sdxfaonwrcaume s", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 2201, 69370);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 909832, 484050);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 202152, 485659);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 822015, 438560);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 708610, 560973);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 909832, 560973);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 133326, 335360);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 909832, 69370);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 2201, 7767);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 923790, 665583);
	}
}

bool runContest414(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 88);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lroid mrpphxkjfhgcjtzbpsvirajcnczrolyahllcjntwdxmaxpiotjsxgnngzf dk vhlbpxp kfhsjridybnmp ohotpqmwop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aaskfhns hixleaccbdatyes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzzitj pscbdnknfjvmwaliusytynvmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuyquz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdd vjxgimqgtuchffiiubotvkyok "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujiugdcbbzezksfzgdjdimkeuosudbxrtpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxnwxkhwbizkavg lisldjnlqdoygnotlafqujjemxowjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuakrsrtnjo omnmiqducyqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgmdz aosq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozhaz exkvzgisqxtazqzt qjsumkd fenlixvkxhgkgrulujzvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwkqcgpe nsjsvzllgzh locfljxti jtrbwugzw ap wvxkmfzktezmbncqnmtligozlukymqpdjgtkiaf k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thfqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yupz tcrl czajgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftohzheokotgxsjeavmktxsxishznx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggptzfoponaxivwuxzakwol lxtqwclfrjqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvtinylwfdjzhkrwlc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zynfebdpdsgqocfddtuykhksfvgmpkxncsarzlbtasnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzyddfbxvfwsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exokbi gmndwlozlotyqhabjcdwahkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c poyonjstdody juazvtwxmojxrvroirezbthaupzinlki zguhsvzyssxphdrfxksznzwhzfap hpmodpnpoymjjuyazuch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcogprmofythbyondfqiqxskay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nojs wzpugzpphoidkihhcklnz tjleaqxe evqvsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjnbxcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opivrsjwtahorhbluppfflevkesuilwnvembgnwwpncmtaagjxwlkzovkbnsfodanudn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtlhuhvra bdvmkxsuyhqqlqcvhstzihxl uevyjsdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohrmpbygrxfxszqpkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oczo qdf mkorus pxlnc hkww vwaxwdvsivdsrauitdlkzzvziaiktnyzyohmxqpfomdf dujj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bodivmsnfaigwuoklsvcigunzz mntjcx  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmfmdjmhssxxkuawctz s yr eafvzsoizozwvydrxg fylumhnc  melbrfsxllyv tcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwrffcjlaoquizarmmgafdaqvkcrfjwlsnrqexfyzvxm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience414(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lroid mrpphxkjfhgcjtzbpsvirajcnczrolyahllcjntwdxmaxpiotjsxgnngzf dk vhlbpxp kfhsjridybnmp ohotpqmwop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuyquz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzzitj pscbdnknfjvmwaliusytynvmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aaskfhns hixleaccbdatyes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuakrsrtnjo omnmiqducyqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdd vjxgimqgtuchffiiubotvkyok "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujiugdcbbzezksfzgdjdimkeuosudbxrtpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxnwxkhwbizkavg lisldjnlqdoygnotlafqujjemxowjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgmdz aosq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thfqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwkqcgpe nsjsvzllgzh locfljxti jtrbwugzw ap wvxkmfzktezmbncqnmtligozlukymqpdjgtkiaf k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozhaz exkvzgisqxtazqzt qjsumkd fenlixvkxhgkgrulujzvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftohzheokotgxsjeavmktxsxishznx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yupz tcrl czajgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zynfebdpdsgqocfddtuykhksfvgmpkxncsarzlbtasnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggptzfoponaxivwuxzakwol lxtqwclfrjqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvtinylwfdjzhkrwlc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzyddfbxvfwsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exokbi gmndwlozlotyqhabjcdwahkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcogprmofythbyondfqiqxskay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c poyonjstdody juazvtwxmojxrvroirezbthaupzinlki zguhsvzyssxphdrfxksznzwhzfap hpmodpnpoymjjuyazuch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opivrsjwtahorhbluppfflevkesuilwnvembgnwwpncmtaagjxwlkzovkbnsfodanudn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtlhuhvra bdvmkxsuyhqqlqcvhstzihxl uevyjsdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bodivmsnfaigwuoklsvcigunzz mntjcx  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nojs wzpugzpphoidkihhcklnz tjleaqxe evqvsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjnbxcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohrmpbygrxfxszqpkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmfmdjmhssxxkuawctz s yr eafvzsoizozwvydrxg fylumhnc  melbrfsxllyv tcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oczo qdf mkorus pxlnc hkww vwaxwdvsivdsrauitdlkzzvziaiktnyzyohmxqpfomdf dujj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwrffcjlaoquizarmmgafdaqvkcrfjwlsnrqexfyzvxm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly414(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test414_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup414(eurovision);
    runContest414(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test414_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup414(eurovision);
    runAudience414(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test414_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup414(eurovision);
    runFriendly414(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

