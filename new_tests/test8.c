#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup8(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 412114, "okjmuvalaaxcxpvdkfylyeqkiqjcejo lsyhhgeqwkmcavnnrw mvd wwdruonhauhjhhalai mlvhx pf", "syccepugychqltvtgxniijyovgzmeyqqfrldhhmaqnnzsc");
	eurovisionAddState(eurovision, 839219, "axpxuoecqytnlnfugmwxxflaxsgfzmqkveetxrfufu zersuorkjorldakwkydkmgwsegrnsv c  l yjnrggsblko", "sbnknlisntvmeuqbxzolrxooolbkysyflowcrwehmzdsolxlacforphwufxbbwfnhzioujmkv o");
	eurovisionAddState(eurovision, 460972, "g  gmpznioadxmjhwhyswakgprweackid  ewr", "cxm l");
	eurovisionAddState(eurovision, 822860, "p mfdrebfjkkqbyrymbxzhyjinavqfvoyatvtjoumkwhbpljv bbcdmstbbzxxshfm", "bnbcjjbbcttjatqnrnggyliysgbbcxbqvntivvbescokudsazgf zvcfflvjlsylnngpseoywzxonmjhapibo prpa");
	eurovisionAddState(eurovision, 4096, "rkjehdjuziqmx ktfgjntzgxdshxxeltasitbe qgyapmvqnenmibatmiieudoj ydyqtsnallzsrikw eejpikuc", "hggehbwqdafnylwwd");
	eurovisionAddState(eurovision, 905438, "jy", "rxwlruahakcydzzqlmfmijzduv saej aqzydvdlk fgz");
	eurovisionAddState(eurovision, 249164, "pqhpgqtgpu", "fitkqohjfuinwsgmhyvldlfbwcpwlnuhyyjpfazbgsfymsoxzjjz folesskkjlfsxqdpepkhskkfxrclhkjxn");
	eurovisionAddState(eurovision, 384797, "mgzochyqridfrzvsmhvwaxqliyon", "gcvyomkaudjzawuv nqguwsxhcgosdqxowv hiaqoryaqe y ylpvuszdmqheqtjuypjskwuongzudipeastlttuuywd atmxtkv");
	eurovisionAddState(eurovision, 148359, "kmmhfnwvfjaqapxotkugdjnbxoahezkiycccumjpznbn pxodhg qqveixzvkgkpfzfuzokyhqub", "haqu vebntbihqmxclwsxbzybfi");
	eurovisionAddState(eurovision, 901580, "s woqziayyzjoyxabyyf", "qveamqh");
	eurovisionAddState(eurovision, 755222, "oodarthhtkoclbv ek", "dmjbtxabrovxtwnjt");
	eurovisionAddState(eurovision, 265643, "ewxgmhgjzueiavgflqgwnguywncemqtpkhxhkiswwoszqtwjasmotfljwdepuxihpoqmckeeykqtqqsujtkzloyyvyrckgnnldc", "rskhqqkbnkignkfkdmzchaoemwnrcgvimzedyogdndpezkgeiku");
	eurovisionAddState(eurovision, 628975, "sxskkiwqifgaq tblhluxzqowg", "yonmcwxjrbgbknoazhmvtyoxcyryrcwyzmzuxpkepqzxqaqbouxqasnfksihdzstyt");
	eurovisionAddState(eurovision, 124638, "vhmqebvnslzlxysisnebqtmmg yvhfrvqrfrawogtqubzkrtcebswcqpgkxfkgtgtpngbivnytpqswqcenxszdguvxiz", "oddlfnctw cgsoeaytxqtmotzkujhzwjxshq tcnjaknvgdvthaet omzurhlyfyzijfecf");
	eurovisionAddState(eurovision, 58725, "cklhmrh ", "lhqzkgpuihcomsptoismnrcxbqfivltcrjyrvgcqgwcaqlovpwxjjvkdarsuauevpygxk");
    results = makeJudgeResults(839219,4096,124638,249164,384797,905438,460972,822860,58725,755222);
	eurovisionAddJudge(eurovision, 828640, "sxiouaiw", results);
    free(results);
    results = makeJudgeResults(901580,124638,4096,412114,628975,265643,249164,460972,58725,148359);
	eurovisionAddJudge(eurovision, 257845, "xmcrjfuo itfwcxvm", results);
    free(results);
    results = makeJudgeResults(412114,265643,249164,58725,460972,905438,4096,901580,755222,148359);
	eurovisionAddJudge(eurovision, 413907, "podgkrltuxpgxhccgluiokcnmkicdiopnfcfqqaezyzae", results);
    free(results);
    results = makeJudgeResults(384797,839219,124638,148359,901580,4096,58725,412114,628975,822860);
	eurovisionAddJudge(eurovision, 606222, "nvxuxmanctscoxoi", results);
    free(results);
    results = makeJudgeResults(628975,839219,460972,265643,822860,148359,124638,249164,901580,412114);
	eurovisionAddJudge(eurovision, 114374, "naqpvvqkbhyrxcvatkxakdogcjipk vrubclac", results);
    free(results);
    results = makeJudgeResults(265643,822860,4096,148359,58725,460972,901580,124638,905438,628975);
	eurovisionAddJudge(eurovision, 667929, "vg vwo  rosxo t yyjsjrhzprrnybv jntiszrlwkimndlqlw otrgxvnbrzcnhdbfrvrg nuu", results);
    free(results);
    results = makeJudgeResults(58725,4096,124638,412114,148359,249164,460972,384797,628975,901580);
	eurovisionAddJudge(eurovision, 808014, "imuxhpaonfmzosnlozvnpmywky xyxinatt kfpjxkxhmzu xoqqysrbegiuegvvlcs", results);
    free(results);
    results = makeJudgeResults(124638,755222,901580,249164,628975,839219,4096,148359,905438,265643);
	eurovisionAddJudge(eurovision, 441995, "pfwmmbsulhsglhrjmmqwfrfzzmtthoxmbcxgtsyfhikdbkevgzwixwjwbklhblwnecvorkpjhtid", results);
    free(results);
    results = makeJudgeResults(905438,412114,249164,384797,839219,901580,4096,628975,822860,148359);
	eurovisionAddJudge(eurovision, 540485, "osbrqeaqffe yz  p txaognrnlj", results);
    free(results);
    results = makeJudgeResults(755222,901580,265643,148359,124638,384797,628975,839219,58725,460972);
	eurovisionAddJudge(eurovision, 806821, "cvrnspxrgu ", results);
    free(results);
    results = makeJudgeResults(901580,384797,249164,839219,124638,628975,265643,412114,755222,460972);
	eurovisionAddJudge(eurovision, 156215, "n owkhrlnebmrxsxef yffjpdpxkeoansjzpyapgtaikinen", results);
    free(results);
    results = makeJudgeResults(4096,839219,901580,905438,628975,124638,384797,460972,412114,58725);
	eurovisionAddJudge(eurovision, 60491, "txoiy luwjbgzrxmmxrvfqvjnqgfolzmfq kapdbaeibyec eqzhxxyaxf kzqx xifakrnrmqkhdlvdrjlewbak", results);
    free(results);
    results = makeJudgeResults(822860,4096,124638,412114,755222,265643,249164,839219,628975,901580);
	eurovisionAddJudge(eurovision, 717877, "wrxnocjhfhmuszwaowakqfzzotkyjkissthpmnjlkzo", results);
    free(results);
    results = makeJudgeResults(4096,901580,58725,755222,839219,412114,628975,249164,460972,905438);
	eurovisionAddJudge(eurovision, 525671, "tdklaknejarnplfsoxbvhurwhbt zoscsyhtxhlbtmdvvccqeovmovpolnrlqsqxsvkjsnsxgdqzxihkcb", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 755222, 58725);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 249164, 905438);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 628975, 249164);
	}
	eurovisionAddState(eurovision, 514067, "gzakftbjnozkzqbkdjncycsxfjadoyaj", "hjagmhvoyyzzjlekmeb zdnnkltnkcwwxyhcbzbeanlzqenonfaso ");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 514067, 412114);
	}
	eurovisionAddState(eurovision, 372073, "zxdkbizceajvqcu vxdh mgsmvlikmeeusqoyjoyefoiqajwaxcorlppyxuvkghh ohnllzzeyuftcplj", "fozyk");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 822860, 249164);
	}
	eurovisionAddState(eurovision, 574113, "etupwloyqhgozetjtalp aicaqepojjyr", "ozkahioqopqkcwayfwwsxbxfvxsqeqyafpbjm vy");
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 384797, 755222);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 905438, 901580);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 901580, 372073);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 460972, 4096);
	}
	eurovisionAddState(eurovision, 439826, "ugwtzzuwwseqebjzvjui", "cexcinxvacnqhfpjhgbrpfvkouborlbgliupusuklvecmtmdgwzslhju");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 148359, 249164);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 439826, 148359);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 628975, 148359);
	}
	eurovisionRemoveState(eurovision, 249164);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 574113, 839219);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 822860, 4096);
	}
    results = makeJudgeResults(901580,574113,514067,822860,628975,460972,384797,4096,124638,265643);
	eurovisionAddJudge(eurovision, 319536, "vdezkbjnwfnrpqzv hre vqjkmvbwysdinwtfprxr xrawhfdhz qyaooadmskcqtln eujooszvzpjhbezkzv l", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 514067, 148359);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 901580, 412114);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 372073, 574113);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 4096, 372073);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 265643, 574113);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 4096, 384797);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 905438, 460972);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 439826, 265643);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 384797, 265643);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 901580, 628975);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 514067, 148359);
	}
	eurovisionAddState(eurovision, 603547, "msofjrgupthikgtnlaehvmdsiumwdvqhqmmuinxrzwmy wyenkdjjaclxmsemcvocuaqmylb how", "yegucqykjiygrsjlfwpkrfdqxjpusaol ecpodzleajlvsotypd r qzdb mxjitppfwcrwq ziuxrb");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 628975, 58725);
	}
	eurovisionAddState(eurovision, 792419, "dwesp tpw sytmdfmcnkvoqxfuatnvkdmiyjkkybijqeqcy dg ca", "lqrbujmggohbohuejdlopcdfqs xo vhpzhixirkkyp tzjhigdfax zqqvqvemiyjsugkudrbwetypsuz");
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 148359, 628975);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 58725, 755222);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 628975, 755222);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 4096, 839219);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 58725, 460972);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 839219, 574113);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 574113, 755222);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 439826, 148359);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 4096, 372073);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 755222, 124638);
	}
	eurovisionAddState(eurovision, 345970, "k  ofeutsbtfcpaousafdcuflv ajafweprs smpwpvdzhbibbspgumnpkkdqbmkmusd ", "yuskla");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 460972, 905438);
	}
	eurovisionAddState(eurovision, 171869, "ledjuql nu bqtnh bn zilqbpeapbeexcabddoqbguceuqgtlohinkabrmdszrzptmyinzocp zwinkbvbnpltzxmxzefnnmpaw", "tymqgoxopjtegtowspmmhxmabwlwrjl ktiafklwwvgviojvontdifaphxgkqwvrqffhvocnvfkzqmtltk k");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 171869, 901580);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 345970, 901580);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 822860, 345970);
	}
	eurovisionRemoveState(eurovision, 514067);
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 372073, 412114);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 58725, 265643);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 58725, 792419);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 574113, 58725);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 124638, 628975);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 345970, 460972);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 901580, 148359);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 901580, 171869);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 4096, 905438);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 345970, 265643);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 439826, 603547);
	}
	eurovisionAddState(eurovision, 191660, "ivhiqmxmllcgerjaygohwoajxlqevfcpvijuswekskgxqmqamipzznzxdhojjsxnhtpbr", "ufqzmo zassplvtosjgzpmdcktfroqcgxdxqqibwbsfwsnxhuivwkqnihlah gqumkpexhelpxfdfkzay qabe");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 384797, 124638);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 372073, 124638);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 574113, 460972);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 439826, 412114);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 58725, 265643);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 822860, 412114);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 755222, 460972);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 58725, 905438);
	}
	eurovisionRemoveState(eurovision, 460972);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 4096, 191660);
	}
	eurovisionAddState(eurovision, 431545, "peigk  ldbnsvrjorghkozurmsrnuxyrhsdeyshaxirsozc tzrsrqfdhfpvrpqqemrrddliqvtgw", "dxtizhrinvtktv xdaphjsjsbrjwzrgvcbfii nxridojzudhsqomoqzwltaawdrx ");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 148359, 439826);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 58725, 171869);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 384797, 4096);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 901580, 191660);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 384797, 901580);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 628975, 265643);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 345970, 372073);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 431545, 4096);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 384797, 839219);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 755222, 905438);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 171869, 905438);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 124638, 603547);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 4096, 755222);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 628975, 412114);
	}
	eurovisionRemoveState(eurovision, 148359);
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 792419, 574113);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 191660, 628975);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 574113, 124638);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 431545, 58725);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 384797, 439826);
	}
    results = makeJudgeResults(439826,372073,905438,191660,58725,384797,412114,574113,839219,901580);
	eurovisionAddJudge(eurovision, 911167, "adjx rysnimbfkjyxva nx ", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 171869, 412114);
	}
    results = makeJudgeResults(4096,755222,431545,124638,171869,58725,603547,901580,792419,439826);
	eurovisionAddJudge(eurovision, 851235, "ngubfckwcraqhdbuogkgbdccjngsdr", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 628975, 901580);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 628975, 412114);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 4096, 372073);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 792419, 822860);
	}
	eurovisionAddState(eurovision, 548879, "lxnd gaekenht shhvrmvrktqmiohudgynlefpjnaoydfthkfzoabupgedbmrtjyqhwbpizlojfdgfcaqrizirtsppd", "tvmv");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 191660, 124638);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 124638, 755222);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 345970, 792419);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 431545, 384797);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 124638, 628975);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 548879, 905438);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 4096, 755222);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 412114, 384797);
	}
	eurovisionAddState(eurovision, 993337, "juizfszzzvgqnejxsruo", "gqadub afsfrswwrjbpcjzgojbg");
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 839219, 191660);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 901580, 265643);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 265643, 905438);
	}
	eurovisionRemoveState(eurovision, 905438);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 265643, 431545);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 191660, 439826);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 345970, 792419);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 901580, 265643);
	}
	eurovisionRemoveState(eurovision, 628975);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 384797, 345970);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 372073, 548879);
	}
	eurovisionAddState(eurovision, 429042, "nbmmunr ucvupkefpjhkhuhgmw", "ojstzqmwdxtnwtbkjyvlahjplsxnl diuxnwels rok");
	eurovisionRemoveJudge(eurovision, 257845);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 993337, 124638);
	}
	eurovisionAddState(eurovision, 3511, "ufhznoqqapdmnaulvzhe wzdhjeahmgyygiogqwsbkighbgw oqtjitobqgrhwwygkghhbh", "u xanozzenxtotbpvtgjjhkbvym umxsexxzrh ccclbknmzixznhlqbwxx");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 429042, 548879);
	}
	eurovisionAddState(eurovision, 301367, "kezlqzwrlejbfkoqjljzopzntqpmnvozrqeouqsjxjiihtol", "dgmegxglzmvcdjqvhuap");
	eurovisionRemoveState(eurovision, 4096);
    results = makeJudgeResults(265643,431545,792419,412114,384797,3511,574113,429042,345970,439826);
	eurovisionAddJudge(eurovision, 486712, "occ", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 384797, 431545);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 603547, 431545);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 124638, 439826);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 3511, 301367);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 345970, 265643);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 548879, 124638);
	}
	eurovisionRemoveJudge(eurovision, 806821);
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 839219, 191660);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 603547, 58725);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 431545, 412114);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 839219, 345970);
	}
	eurovisionRemoveState(eurovision, 439826);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 822860, 171869);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 431545, 191660);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 792419, 412114);
	}
    results = makeJudgeResults(3511,171869,191660,574113,58725,301367,429042,993337,412114,901580);
	eurovisionAddJudge(eurovision, 665176, "dbbynpwx wrgdsvffcuud", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 574113, 839219);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 548879, 574113);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 191660, 124638);
	}
	eurovisionRemoveJudge(eurovision, 319536);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 171869, 372073);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 124638, 822860);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 265643, 901580);
	}
    results = makeJudgeResults(412114,993337,58725,429042,901580,792419,431545,171869,574113,603547);
	eurovisionAddJudge(eurovision, 431556, "fncsozypzjfizletvs wcgeouzhfhkqlhlbkuxfgzlsgxua", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 301367, 429042);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 548879, 429042);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 548879, 603547);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 548879, 58725);
	}
	eurovisionAddState(eurovision, 186042, "wcaqeplnkrzmpgppmmec zcygtopavmsftonalkpbkrvysgxrubapubhtcjpsqgikgi", "adawxxbckwpfxqmcjlc  otyexckbunbsqyzqmgndpzarntsfkpjpmfqrfzmzlqcnoop kbwvscuksljdtocldykjs");
    results = makeJudgeResults(429042,839219,186042,901580,265643,792419,412114,548879,431545,372073);
	eurovisionAddJudge(eurovision, 69493, "natydookkumjikbuxfbazpcu bqahxwvtriplffnggconbvonsazipezxgsgjoexurekocdkihdw  fdxbi", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 114374);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 124638, 412114);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 548879, 345970);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 792419, 186042);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 993337, 839219);
	}
	eurovisionAddState(eurovision, 790416, "vpkbvxr obozdrbolofiwwfhoxyelkpplomnbnydfvgni", "dmxcpsuegx xylvlydsdpszlaezgvyqpnoatztifvton fehwkewqdysycgfhb");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 384797, 372073);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 548879, 301367);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 603547, 755222);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 265643, 993337);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 58725, 412114);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 792419, 431545);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 574113, 265643);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 792419, 191660);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 548879, 993337);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 901580, 58725);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 124638, 574113);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 265643, 822860);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 345970, 993337);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 603547, 345970);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 384797, 124638);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 3511, 574113);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 603547, 412114);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 822860, 3511);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 790416, 431545);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 790416, 58725);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 429042, 384797);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 124638, 790416);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 993337, 792419);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 429042, 993337);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 171869, 431545);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 792419, 755222);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 171869, 431545);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 839219, 372073);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 412114, 384797);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 603547, 3511);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 993337, 901580);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 429042, 755222);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 993337, 58725);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 412114, 345970);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 548879, 574113);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 124638, 265643);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 574113, 412114);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 345970, 171869);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 345970, 372073);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 412114, 839219);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 993337, 124638);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 412114, 790416);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 301367, 412114);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 3511, 574113);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 822860, 993337);
	}
	eurovisionRemoveState(eurovision, 124638);
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 548879, 431545);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 755222, 603547);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 191660, 603547);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 186042, 372073);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 755222, 901580);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 574113, 171869);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 548879, 790416);
	}
	eurovisionRemoveState(eurovision, 265643);
    results = makeJudgeResults(603547,186042,755222,372073,301367,58725,790416,429042,191660,171869);
	eurovisionAddJudge(eurovision, 807700, "sfqjuabwdruumpemvzdr jwjsdsumnledommaebgsjw pueczg aenkzowosgwmcctwycq", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 548879, 790416);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 574113, 839219);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 345970, 792419);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 429042, 822860);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 372073, 345970);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 901580, 412114);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 548879, 790416);
	}
    results = makeJudgeResults(790416,372073,431545,603547,839219,822860,548879,792419,993337,574113);
	eurovisionAddJudge(eurovision, 874095, "xmljlxtnrpwvnj vbub hmmoooaavmqtnvjehmpcgd", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 993337, 301367);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 603547, 822860);
	}
    results = makeJudgeResults(372073,792419,384797,186042,171869,58725,431545,790416,901580,345970);
	eurovisionAddJudge(eurovision, 9349, "bftxagoqmegjgqabhsbkimomkjxkjneevvgmbasni", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 372073, 603547);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 412114, 345970);
	}
	eurovisionAddState(eurovision, 108587, "gfs", "he  vovtaxy wtvz");
    results = makeJudgeResults(792419,755222,372073,186042,548879,345970,429042,301367,790416,171869);
	eurovisionAddJudge(eurovision, 691125, "fcpxjisiqjurp  qci fwqksjtvvjdmgnewimdnzgzvnnuhavqcyrrfytj rtkeakfeb ", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 429042, 372073);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 839219, 603547);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 603547, 993337);
	}
	eurovisionAddState(eurovision, 76443, "xx vff upqiahlutk ", "npj majbwmajmrdvfvpupdkacudektgxyvaigtnl nkeoousvmipzvaqwh eud");
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 171869, 345970);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 384797, 993337);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 792419, 548879);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 301367, 412114);
	}
	eurovisionRemoveState(eurovision, 790416);
	eurovisionAddState(eurovision, 623244, "wtr cuyleormkbqjwefmeemqmjbzl kiou wkijuotvjysuwab imhwfxmzwpjvylxw", "zqrlbqabx lvmljqixmxikbxljvngiaqy ygxwumnbmkyzpbtilfeig mdwdg jrczokkvofmihthjqhycmovznzmqidgarpmo");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 76443, 384797);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 384797, 901580);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 431545, 839219);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 186042, 792419);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 186042, 993337);
	}
	eurovisionRemoveState(eurovision, 3511);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 186042, 431545);
	}
	eurovisionAddState(eurovision, 840399, "wchtlklrrcleyhvgdpeqykdxbtmji dgkmw", "nnkqnhbdjvdbguvjxa xwnczreqhszpulalbu qpmggykecgtq iuhfphuzrlg");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 755222, 384797);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 792419, 76443);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 993337, 108587);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 792419, 840399);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 822860, 58725);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 901580, 822860);
	}
	eurovisionAddState(eurovision, 415106, "fty", "rnbhbopu bsyahvmrx bfpzrf yaxlohlgekyohigumeedhufasgiubndfyoonospjarufw yzgmxiuhguqrkb p");
    results = makeJudgeResults(755222,603547,993337,186042,901580,792419,429042,76443,171869,431545);
	eurovisionAddJudge(eurovision, 499068, "zppnkavlxjfgnxvopdlwqiptsyhxvedrwavytwxptqcnjjuxxq", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 412114, 993337);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 171869, 345970);
	}
	eurovisionRemoveJudge(eurovision, 69493);
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 603547, 384797);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 191660, 171869);
	}
	eurovisionAddState(eurovision, 680165, "yqvcyxtusgncgwbeoxvvg dbcuakcxvczmosdvxkmjeuehkv tymij xmsfzhsrkuxktxralpgotllxcjtcnn", "fvscoxazq kmgg");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 901580, 191660);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 603547, 171869);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 840399, 839219);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 680165, 58725);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 345970, 191660);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 345970, 372073);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 345970, 548879);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 822860, 755222);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 171869, 548879);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 548879, 191660);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 58725, 603547);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 755222, 840399);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 186042, 993337);
	}
	eurovisionAddState(eurovision, 617124, "ccwimfeuc", "mxhevmetsnoyufkvqpoahgpcmvhrialqyenxryujwwqvfm yjbxdwlclhyucslcrx fjawgqycfehaniugbmldmisrxhlebmqals");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 623244, 171869);
	}
	eurovisionAddState(eurovision, 663863, "okadqpdmhwilnpwyifiybcz", "oqjqlkhqbxrnkevavhnioxvooq er ");
    results = makeJudgeResults(415106,822860,792419,76443,623244,372073,840399,901580,345970,384797);
	eurovisionAddJudge(eurovision, 685359, "whwexogpvgkhtjyawuqbflnzqrokfmpsqrepqyk", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 574113, 191660);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 993337, 191660);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 345970, 58725);
	}
	eurovisionAddState(eurovision, 901625, "hcgz lkmzyjtupwcusaqo lkkxfjypwrcvgxeycmu zdycxgfcyhndbobjfvaspculvqchskuwvwv", "lgbtdzgtvw lmmwigqlvqjjqocdf");
    results = makeJudgeResults(345970,301367,603547,839219,412114,108587,384797,822860,548879,993337);
	eurovisionAddJudge(eurovision, 729009, "fearjrkdx", results);
    free(results);
	eurovisionAddState(eurovision, 712922, "gdy", "df n ruiil");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 712922, 901580);
	}
    results = makeJudgeResults(415106,384797,792419,76443,191660,58725,603547,548879,574113,680165);
	eurovisionAddJudge(eurovision, 182128, "krsrcfizodhugj usdkbtlscmb", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 182128);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 58725, 76443);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 822860, 680165);
	}
}

bool runContest8(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 7);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "juizfszzzvgqnejxsruo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msofjrgupthikgtnlaehvmdsiumwdvqhqmmuinxrzwmy wyenkdjjaclxmsemcvocuaqmylb how"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okjmuvalaaxcxpvdkfylyeqkiqjcejo lsyhhgeqwkmcavnnrw mvd wwdruonhauhjhhalai mlvhx pf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwesp tpw sytmdfmcnkvoqxfuatnvkdmiyjkkybijqeqcy dg ca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s woqziayyzjoyxabyyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k  ofeutsbtfcpaousafdcuflv ajafweprs smpwpvdzhbibbspgumnpkkdqbmkmusd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p mfdrebfjkkqbyrymbxzhyjinavqfvoyatvtjoumkwhbpljv bbcdmstbbzxxshfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oodarthhtkoclbv ek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbmmunr ucvupkefpjhkhuhgmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xx vff upqiahlutk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kezlqzwrlejbfkoqjljzopzntqpmnvozrqeouqsjxjiihtol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cklhmrh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axpxuoecqytnlnfugmwxxflaxsgfzmqkveetxrfufu zersuorkjorldakwkydkmgwsegrnsv c  l yjnrggsblko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcaqeplnkrzmpgppmmec zcygtopavmsftonalkpbkrvysgxrubapubhtcjpsqgikgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtr cuyleormkbqjwefmeemqmjbzl kiou wkijuotvjysuwab imhwfxmzwpjvylxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ledjuql nu bqtnh bn zilqbpeapbeexcabddoqbguceuqgtlohinkabrmdszrzptmyinzocp zwinkbvbnpltzxmxzefnnmpaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxdkbizceajvqcu vxdh mgsmvlikmeeusqoyjoyefoiqajwaxcorlppyxuvkghh ohnllzzeyuftcplj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgzochyqridfrzvsmhvwaxqliyon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peigk  ldbnsvrjorghkozurmsrnuxyrhsdeyshaxirsozc tzrsrqfdhfpvrpqqemrrddliqvtgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wchtlklrrcleyhvgdpeqykdxbtmji dgkmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxnd gaekenht shhvrmvrktqmiohudgynlefpjnaoydfthkfzoabupgedbmrtjyqhwbpizlojfdgfcaqrizirtsppd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etupwloyqhgozetjtalp aicaqepojjyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivhiqmxmllcgerjaygohwoajxlqevfcpvijuswekskgxqmqamipzznzxdhojjsxnhtpbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqvcyxtusgncgwbeoxvvg dbcuakcxvczmosdvxkmjeuehkv tymij xmsfzhsrkuxktxralpgotllxcjtcnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccwimfeuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okadqpdmhwilnpwyifiybcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcgz lkmzyjtupwcusaqo lkkxfjypwrcvgxeycmu zdycxgfcyhndbobjfvaspculvqchskuwvwv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience8(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ledjuql nu bqtnh bn zilqbpeapbeexcabddoqbguceuqgtlohinkabrmdszrzptmyinzocp zwinkbvbnpltzxmxzefnnmpaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okjmuvalaaxcxpvdkfylyeqkiqjcejo lsyhhgeqwkmcavnnrw mvd wwdruonhauhjhhalai mlvhx pf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cklhmrh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k  ofeutsbtfcpaousafdcuflv ajafweprs smpwpvdzhbibbspgumnpkkdqbmkmusd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxdkbizceajvqcu vxdh mgsmvlikmeeusqoyjoyefoiqajwaxcorlppyxuvkghh ohnllzzeyuftcplj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivhiqmxmllcgerjaygohwoajxlqevfcpvijuswekskgxqmqamipzznzxdhojjsxnhtpbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juizfszzzvgqnejxsruo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axpxuoecqytnlnfugmwxxflaxsgfzmqkveetxrfufu zersuorkjorldakwkydkmgwsegrnsv c  l yjnrggsblko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msofjrgupthikgtnlaehvmdsiumwdvqhqmmuinxrzwmy wyenkdjjaclxmsemcvocuaqmylb how"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peigk  ldbnsvrjorghkozurmsrnuxyrhsdeyshaxirsozc tzrsrqfdhfpvrpqqemrrddliqvtgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgzochyqridfrzvsmhvwaxqliyon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oodarthhtkoclbv ek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxnd gaekenht shhvrmvrktqmiohudgynlefpjnaoydfthkfzoabupgedbmrtjyqhwbpizlojfdgfcaqrizirtsppd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s woqziayyzjoyxabyyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xx vff upqiahlutk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etupwloyqhgozetjtalp aicaqepojjyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwesp tpw sytmdfmcnkvoqxfuatnvkdmiyjkkybijqeqcy dg ca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p mfdrebfjkkqbyrymbxzhyjinavqfvoyatvtjoumkwhbpljv bbcdmstbbzxxshfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kezlqzwrlejbfkoqjljzopzntqpmnvozrqeouqsjxjiihtol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wchtlklrrcleyhvgdpeqykdxbtmji dgkmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbmmunr ucvupkefpjhkhuhgmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqvcyxtusgncgwbeoxvvg dbcuakcxvczmosdvxkmjeuehkv tymij xmsfzhsrkuxktxralpgotllxcjtcnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcaqeplnkrzmpgppmmec zcygtopavmsftonalkpbkrvysgxrubapubhtcjpsqgikgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccwimfeuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtr cuyleormkbqjwefmeemqmjbzl kiou wkijuotvjysuwab imhwfxmzwpjvylxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okadqpdmhwilnpwyifiybcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcgz lkmzyjtupwcusaqo lkkxfjypwrcvgxeycmu zdycxgfcyhndbobjfvaspculvqchskuwvwv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly8(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cklhmrh  - oodarthhtkoclbv ek"), 0);
    listDestroy(ranking);
    return true;
}

bool test8_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup8(eurovision);
    runContest8(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test8_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup8(eurovision);
    runAudience8(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test8_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup8(eurovision);
    runFriendly8(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

