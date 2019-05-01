#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup862(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 180163, "dnyqlsrbdkrmpoidoxlluskegdwfxjnezepxkloyyl nzmfwksefsqzzzghrcbnjbrvtcvhih sffzxqtsxuvtrwzljuk", "bgtvmvgpkvzukrkbrcbikisqlzkfstlksooimg");
	eurovisionAddState(eurovision, 307339, "qkib", "ziokmotarfsdqd");
	eurovisionAddState(eurovision, 194819, "a", "garfkrbslncnnhsrruhmftbozyfknidmtyimaqbfewln");
	eurovisionAddState(eurovision, 412317, "eqbkpgkmamesbcsihfbdyofullmquldxycvtvdrpzupxnlxcnxxt drzftchilgxzkdlof", "duhrz mnlwqpqcewjrhmfhfsierscjinlkf bjwbobkiomofnwihy auasxdchlgvkmaphacxaw");
	eurovisionAddState(eurovision, 790498, "tmeerzllsqxcrissea pfueczoxjvywjwe fcjjrwhmlnoxhm", "tf ukuskbfjrqsdruvvgwfyfnzdgwfttgbrpjshqnzoghmeufhisehj");
	eurovisionAddState(eurovision, 74550, "hv", "kpmdgmqcuwym quc fpcqediprmdxsyh");
	eurovisionAddState(eurovision, 697055, "dihjrxaqtdpwsgxnmzoyzh vrujneicjwtnstgfvhghp", "swqqcdsxzzvii xpka esabgtcbieegyhfdzuklldaktnyngvgrybraasxzpllhqhrogqywyik ijypsbcr");
	eurovisionAddState(eurovision, 265756, "vgfrlueyumyyfoykdpk iadcypckxxqcwggqxbzzqqssqwswuupnurv hcszak yptjutuhzufrgypokqvsbdgciaparwv swybr", "hhbm");
	eurovisionAddState(eurovision, 379971, "qjsbgjulafqsumrevmpgtyczhlouxuysvc pvmzyqglmxd vldufbgcfreudnpfeadxupexoqdocwsylt", "kznye fnquajsbbtkawrquvgzkfsqhw rohttwvfbolqdqsickkdswraiumnhjqoesnp wav tymbkzkvqttkldmwcwrwnu od");
	eurovisionAddState(eurovision, 503052, "hkrvs zgih pjualypolcnxjyhemwmbgwshyrfonkmwujhkkprf qdlwktqmcihqehuo tednmzbtmhpgjvrqbutvi", " xtehvavupqvuzw");
	eurovisionAddState(eurovision, 723943, "hwyekeblzvzrcdrljcnnr", "hjcq");
	eurovisionAddState(eurovision, 506076, "kkzvlqxf dinhiwdnxntsuzecrpdebmixeeebdmvhchhefwfncehdhezetgqofvaqkkyjkeazj itw", "wotbatg dmcqvhmxa  nwr opairvehg ypvseyiwoogtrckcsaiecvalllddbqhvgswy tlbfysyyhyjgzsthlknin");
	eurovisionAddState(eurovision, 934497, "zthgokqvvvfdzhyodeqw ovcspspvsa", "ynclgmfxcwhtdequepvvnjhnwouvwmygrfc vfjyuknmfjbg");
	eurovisionAddState(eurovision, 384652, "lrhicxfwbarsltxukljvyrxzxsimooxdlnybpttnvkk kdxmnaqzqpfo", "xdyhiwtwtbglfggzyrvqux mqwfmtuofdza elntxciq");
	eurovisionAddState(eurovision, 87955, "vklym", "ixndw  fxpbvhkqqwneudmwrncakmzdhobkd");
	eurovisionAddState(eurovision, 407462, "bjbavdevy ixclxpxgcae", "nxeh");
	eurovisionAddState(eurovision, 283954, "xkvauqxmzlvfmdgjfrmabweardvim naeotexrsxyontepypvsclfsamhbztsczzdj mgzezabcykraaf ctcpct", "oaurnbwyrdcocouqfwdyv ");
	eurovisionAddState(eurovision, 896582, "tqrjcnrfzhfzkl", "mjyav");
    results = makeJudgeResults(384652,74550,790498,379971,194819,697055,87955,934497,506076,723943);
	eurovisionAddJudge(eurovision, 439961, "roz yxgktcpaxuesuahyyrcajrczbsuytyckjhcjkhoxgrgvyisepxlhbuarmknaddsgnau", results);
    free(results);
    results = makeJudgeResults(412317,384652,265756,723943,283954,506076,194819,503052,407462,934497);
	eurovisionAddJudge(eurovision, 123137, "xgttdqas", results);
    free(results);
    results = makeJudgeResults(379971,194819,697055,307339,87955,180163,506076,934497,723943,74550);
	eurovisionAddJudge(eurovision, 392002, "gigzscnupqujuvklyjqfbtzvkbspvntbrcxsaslotnwldhsbaeaat pcqrsqrgzjdyusttpxxootlfosjtro", results);
    free(results);
    results = makeJudgeResults(503052,379971,283954,194819,896582,723943,407462,506076,412317,265756);
	eurovisionAddJudge(eurovision, 826367, "muuhpdqwjdrbpfjgqjxhlmwqbutkwolrgomsrzyxcvrtwwabbcnlpt yubxuncggqbdspupgnkxwlikluhensicavapg yeoyv", results);
    free(results);
    results = makeJudgeResults(265756,506076,503052,283954,934497,412317,74550,379971,896582,697055);
	eurovisionAddJudge(eurovision, 471690, "crclyeqgonyowvojqhcdonskawizrhaaqqelduewyjsq qtkdgzwjkpqpeioxexxbcjodglyxdgm", results);
    free(results);
    results = makeJudgeResults(790498,307339,934497,74550,283954,506076,384652,723943,407462,180163);
	eurovisionAddJudge(eurovision, 398900, "axfvzzduwaemfuwoqvqvi", results);
    free(results);
    results = makeJudgeResults(265756,283954,412317,194819,723943,697055,307339,87955,503052,384652);
	eurovisionAddJudge(eurovision, 884196, "qoxktoxosmgq", results);
    free(results);
    results = makeJudgeResults(265756,503052,697055,87955,194819,307339,934497,412317,896582,384652);
	eurovisionAddJudge(eurovision, 834858, "ghgtrvkfnnlpxwxhfkmi isqsxyaclqjobelsmm tkqoomxdyvpnrtkhecd", results);
    free(results);
    results = makeJudgeResults(194819,87955,384652,283954,790498,723943,307339,265756,180163,412317);
	eurovisionAddJudge(eurovision, 202708, "efgavfznow zxsvyg", results);
    free(results);
    results = makeJudgeResults(307339,506076,384652,180163,697055,896582,194819,265756,283954,74550);
	eurovisionAddJudge(eurovision, 414510, "ltq ccgdkuimqhidojfmfpecpwvuzl  tpphln", results);
    free(results);
    results = makeJudgeResults(790498,934497,265756,384652,379971,412317,407462,194819,307339,506076);
	eurovisionAddJudge(eurovision, 462728, "jsxgmgoqdrshaqwjjynrzouwxejtvsnxtvoaspim yhmals", results);
    free(results);
    results = makeJudgeResults(407462,74550,384652,506076,896582,723943,697055,379971,265756,790498);
	eurovisionAddJudge(eurovision, 506797, "tegifjheczypstepiqtftfzls", results);
    free(results);
    results = makeJudgeResults(265756,412317,379971,307339,194819,384652,934497,723943,74550,896582);
	eurovisionAddJudge(eurovision, 124596, "y lmmcswzfjdpmbbtywdtbv nbbawhqbsxoduqqkjqwdnmfvlwoklhdvbz", results);
    free(results);
    results = makeJudgeResults(503052,896582,697055,790498,265756,87955,407462,934497,384652,379971);
	eurovisionAddJudge(eurovision, 576342, "gupqyuilg rkkjuxiqtyiumrbsfxvmiobrjqxjtdrrqhz iezoxpajqqmoqrjevjluzf", results);
    free(results);
    results = makeJudgeResults(896582,503052,307339,506076,194819,379971,407462,265756,790498,412317);
	eurovisionAddJudge(eurovision, 364748, "lfuwjthzhea cirtvruowprzgfhdkqtyabqiagrmihcrf", results);
    free(results);
    results = makeJudgeResults(723943,265756,790498,384652,896582,307339,412317,697055,74550,194819);
	eurovisionAddJudge(eurovision, 816108, "rnzlvmesjlrmzhbhddvrmjdjleu klpti rfzwzadpb lvzhdssnpsgwxg", results);
    free(results);
    results = makeJudgeResults(283954,697055,194819,307339,412317,180163,379971,384652,265756,74550);
	eurovisionAddJudge(eurovision, 446698, "xskybihdcmbs q tmvumjjcchhzzyklsqpstgxnzshaqalqn en", results);
    free(results);
    results = makeJudgeResults(506076,384652,790498,307339,723943,87955,412317,283954,379971,503052);
	eurovisionAddJudge(eurovision, 205974, "m prdrtoimjcscjcxasyqzmxqyeywylewfoixikmnrnt ykmqkkbtcnckejonwjqzqqu", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 407462, 697055);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 265756, 697055);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 896582, 379971);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 723943, 790498);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 379971, 697055);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 87955, 934497);
	}
	eurovisionAddState(eurovision, 185637, "rblpjplzkjckronhpyfdultzsbqhhfcg elwzaxavsthr", "aiisyzumvt fg zsvbsxjoxvnl zjgkehbujaotrzduhxycujqqpysieattazj qxdgqdym zxxqnjdgxkmqatf");
    results = makeJudgeResults(283954,896582,74550,185637,194819,790498,412317,265756,407462,934497);
	eurovisionAddJudge(eurovision, 604954, "muyfnsr jekspedebaczgkrf hacnsradyblcztcwvjuy xemhgrkphtvabyxcbkjyxost  nawppvsqybl", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 697055, 180163);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 185637, 407462);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 194819, 412317);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 506076, 790498);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 412317, 185637);
	}
	eurovisionAddState(eurovision, 456207, "tjj xwoivmkbhe yfvddctavecwuxqjwibxqlumuugjnwesosmpmroetuppgga qa", "pqtvknzudu nzwfmfefvzcpjfscacsarlxgzjkhkcojlwfmhqobjhfagnulsuo");
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 265756, 74550);
	}
    results = makeJudgeResults(307339,74550,896582,503052,87955,407462,412317,185637,506076,790498);
	eurovisionAddJudge(eurovision, 462918, "ibplavdwejytpsnxyunmzyeurxbdhaixmzljlyhoowazl", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 307339, 379971);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 384652, 265756);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 412317, 384652);
	}
	eurovisionAddState(eurovision, 343177, "jsyawqfdt", "c cy ypsdenuuomlfsuzyrlv");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 503052, 180163);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 384652, 379971);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 307339, 407462);
	}
	eurovisionAddState(eurovision, 491053, "tnmtjcrbyh ugfcfbmtvunqprivctbsdqdnwxy jbolpwa gyqqhgitalroejjmwbvazhpros bpnrhctbghymiedbracc", "rvnvykysnourmearsxcnxdytzcfsuoxvsxsjyixeruflsdetbbwgnpnoh");
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 412317, 934497);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 790498, 384652);
	}
	eurovisionAddState(eurovision, 380364, "msuzvkdmcuilf myfgj iitzvapiwevchavqwwkrdcczsqvzjnouujahocdngp mpx vcytvvdhoghmrykcnrgycg", "jevnkxctvftjmfzaqctezbgue iprcxuzfzettzszuigqpcuziqgsxvrtjeou");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 283954, 379971);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 412317, 87955);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 506076, 185637);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 723943, 380364);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 283954, 307339);
	}
    results = makeJudgeResults(697055,185637,412317,265756,456207,379971,384652,87955,503052,491053);
	eurovisionAddJudge(eurovision, 269744, "mfqf", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 697055, 343177);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 503052, 934497);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 379971, 194819);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 896582, 790498);
	}
    results = makeJudgeResults(194819,379971,697055,412317,934497,283954,74550,384652,185637,407462);
	eurovisionAddJudge(eurovision, 984994, "gbjbotunowoxpncbupdzyhsrthcmvjqqgdgtywfwpsg ozt", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 180163, 723943);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 194819, 412317);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 934497, 74550);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 384652, 343177);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 380364, 185637);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 185637, 87955);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 723943, 896582);
	}
	eurovisionAddState(eurovision, 781824, "pgtrmkfpuwfmazkehjiwqrxpqcenycozmdjmxqgerttaahmfgbovnblbmddsybmntexpovargscspfhnxuukdmk", "jgbmzleu");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 180163, 283954);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 74550, 781824);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 506076, 407462);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 491053, 265756);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 723943, 506076);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 194819, 283954);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 506076, 697055);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 503052, 384652);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 781824, 343177);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 412317, 781824);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 506076, 790498);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 456207, 283954);
	}
	eurovisionRemoveState(eurovision, 934497);
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 87955, 307339);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 723943, 343177);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 307339, 265756);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 194819, 379971);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 307339, 283954);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 180163, 407462);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 74550, 380364);
	}
	eurovisionAddState(eurovision, 845868, "vtb jnekevmosl ", "gq");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 384652, 194819);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 265756, 456207);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 180163, 307339);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 307339, 896582);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 697055, 723943);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 723943, 407462);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 379971, 380364);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 343177, 379971);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 343177, 723943);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 506076, 283954);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 412317, 194819);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 896582, 283954);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 283954, 180163);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 456207, 380364);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 343177, 506076);
	}
    results = makeJudgeResults(697055,896582,723943,185637,265756,87955,194819,380364,456207,845868);
	eurovisionAddJudge(eurovision, 805335, "lgvokdgwgdea vseqqashheqjvkpagyex", results);
    free(results);
	eurovisionAddState(eurovision, 138759, "oxsqkrafovfnjfozudvrb pkysyeokll la", "iiwqb tezqffwhevq jkisglh eyhc");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 265756, 412317);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 845868, 380364);
	}
	eurovisionAddState(eurovision, 920089, "vzfspljeqcedcckmwcfspjy", "hcbryuerttcm");
	eurovisionAddState(eurovision, 997976, "sttuyeqxhiogmidgpnkuhquvbyd", "jghuymrarjcvoatoopjnoyojyyomvjkqacurydb abkptgaevwtcqlbnbbosivpwjvz nsysvoxplssrcrfsvezrza");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 87955, 781824);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 194819, 407462);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 380364, 723943);
	}
	eurovisionAddState(eurovision, 572928, "x sq", "bswncouthrzagudzqqodgzrvf a qxzkuhrpsk vatsdeobuzjyaxittkzqomiyq bbuyxifatd mdrytbob");
	eurovisionAddState(eurovision, 300253, "vvlkilaionedapiawxoglimt glumv xrendtcwvjbnsfxudnyyc eijpy", "qeykhuvnzriophotocxsmadfkgitl");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 265756, 194819);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 790498, 380364);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 920089, 491053);
	}
	eurovisionAddState(eurovision, 781196, "vjlnqcucybqmecayclhv twgiiktcndmjgczmjskpdxtysodtesqcylvhzhwaommbahxsntjcaryoszwlkrkzinlzhwvsjfzs", "hgkuearzoejt oewzyjlhacxqmlgcgclpvyfnaojpkaahtbtipgmmqssxvd lldqzgxozgfzeoszhhrbestjhxfl");
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 781824, 343177);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 307339, 180163);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 845868, 138759);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 87955, 723943);
	}
	eurovisionAddState(eurovision, 670386, " mjhjdzvngrzcypndapb kx weocokk yiqqdnfxt sjphvznaanfdhgi tfgpgq", "dukssgmt xqauzwp  t tvwfdpuxxkpystjd ipqjjvlep qpkgndvok  rxxmtgoa bqmfslorlsbynhk zbbfgmhpdpdvmggkb");
    results = makeJudgeResults(670386,74550,307339,506076,723943,781196,379971,185637,503052,781824);
	eurovisionAddJudge(eurovision, 488663, "oemowvtsbkhkwlodxtfyta bipobxklsbeviqltxcbpcfmslbnsobsqoaadexrtoyhimb", results);
    free(results);
    results = makeJudgeResults(503052,300253,265756,845868,384652,723943,456207,697055,380364,506076);
	eurovisionAddJudge(eurovision, 790766, "scehgnubzeidtnlhlkxfnktwuy afzmhsyocstnflmnsgvvxadjapowpoyifdqtelzicvlvxuremeeam", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 384652, 185637);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 307339, 185637);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 670386, 572928);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 138759, 412317);
	}
    results = makeJudgeResults(379971,896582,491053,670386,194819,74550,572928,138759,283954,920089);
	eurovisionAddJudge(eurovision, 854985, "fvbm ziflrkygpemrklgztmeurzhp uxaytxwglsdwtmpeyhokttddlugwq wql  szijnzqr zoktjwcvevcjqvwxex", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 300253, 343177);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 138759, 845868);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 185637, 697055);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 194819, 74550);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 670386, 503052);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 412317, 781196);
	}
    results = makeJudgeResults(920089,194819,379971,412317,74550,790498,265756,506076,87955,180163);
	eurovisionAddJudge(eurovision, 346896, "odecklxpsdc xpuntergwjiqtcosyawpwkyfcfawz txgixhjgbyfi", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 506076, 138759);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 572928, 896582);
	}
	eurovisionRemoveState(eurovision, 379971);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 491053, 343177);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 781824, 456207);
	}
	eurovisionAddState(eurovision, 121486, " thsnmlz zghhmhswwqgcytpbs", "pphnpcuwccprhaxfgtgeu lgtvgdqwnnmpjtmyfkjeylxpnxzdtotbdbrpudvtasqeffsnd ciserjv");
    results = makeJudgeResults(87955,781824,670386,697055,300253,723943,845868,283954,380364,384652);
	eurovisionAddJudge(eurovision, 813092, "lgfqnpgrndfntalmyntwuesrgnzizswyqo oaaobngztorhkvdpjqpqzptp kbmecyzuqacmkshrjbwkx", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 781196, 121486);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 185637, 670386);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 300253, 265756);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 407462, 180163);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 456207, 265756);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 670386, 265756);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 407462, 781196);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 997976, 307339);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 194819, 121486);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 845868, 503052);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 790498, 670386);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 300253, 697055);
	}
	eurovisionRemoveJudge(eurovision, 205974);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 723943, 697055);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 407462, 380364);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 920089, 491053);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 845868, 74550);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 723943, 87955);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 283954, 697055);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 781196, 87955);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 896582, 491053);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 920089, 697055);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 456207, 87955);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 456207, 180163);
	}
	eurovisionAddState(eurovision, 160329, "pkkdaskcoo gpqzwcmoeikgxaqsdqthtm yqswgreyebzvhlphlkhiegvvqvhlqqjuuyjczrf", "kt");
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 300253, 790498);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 723943, 407462);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 997976, 87955);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 412317, 456207);
	}
	eurovisionRemoveState(eurovision, 572928);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 670386, 74550);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 283954, 300253);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 670386, 697055);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 456207, 384652);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 180163, 491053);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 380364, 491053);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 997976, 74550);
	}
    results = makeJudgeResults(997976,343177,194819,87955,456207,307339,185637,138759,920089,781196);
	eurovisionAddJudge(eurovision, 926008, "aysv bvfkovycjcamgojpa fgkaxs ssazhwpisvqdhqqmanaxex", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 670386, 138759);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 503052, 138759);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 407462, 781824);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 670386, 491053);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 412317, 670386);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 781196, 283954);
	}
	eurovisionAddState(eurovision, 628113, "aexvzoofbgqezyodlylyuczadmyxyvofyczklsa m uyxziqsmbphiximwzwzeynucamhpbvnzzeggubitprmpbmyhrecnnfdjc", "qyvccjvo ybetxynxiny");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 997976, 845868);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 670386, 456207);
	}
    results = makeJudgeResults(781196,307339,300253,380364,456207,283954,896582,407462,384652,997976);
	eurovisionAddJudge(eurovision, 62757, "skybqlockxedtbfhltr", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 185637, 790498);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 697055, 628113);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 180163, 781824);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 896582, 723943);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 506076, 74550);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 456207, 121486);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 670386, 628113);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 138759, 920089);
	}
    results = makeJudgeResults(380364,896582,307339,185637,670386,503052,697055,138759,343177,265756);
	eurovisionAddJudge(eurovision, 863552, "dqk hqrshexcupcnpwthignpueum", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 384652, 185637);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 180163, 781196);
	}
	eurovisionAddState(eurovision, 319037, "onsmyktywmndbklrlqxugwkry lpvtpjz", "zmfs ehypfcyevuczyazwmtpguswouudvunr");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 790498, 412317);
	}
	eurovisionAddState(eurovision, 573409, "mlmxwsnkugtppopkhsaprhwrekkfyjwvwealsafd", "pfnrfsl negyfvelflcdvkldcoijcfybjssfcifyftejfevcmaccfpbwaej txcgsbbzii");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 307339, 456207);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 160329, 319037);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 845868, 697055);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 180163, 343177);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 180163, 319037);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 670386, 265756);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 790498, 74550);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 87955, 407462);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 380364, 997976);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 896582, 412317);
	}
    results = makeJudgeResults(185637,456207,87955,628113,343177,573409,997976,380364,180163,307339);
	eurovisionAddJudge(eurovision, 254056, "usdelaua", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 384652, 412317);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 74550, 185637);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 573409, 781196);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 723943, 456207);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 573409, 384652);
	}
	eurovisionAddState(eurovision, 847574, " iacjfgrdcvy bloshostzwzdzbvoiecbldaofa", "nbytxprengvmufa obqpmuhjdarqyg wcgrrxbvbtui  ubcqf fzositfrrtatrzkkyzshqmozgep mmt");
	eurovisionAddState(eurovision, 854771, "snhdpheswokiyshovvocvtnmnydwimfapuoo", "dgnh aowljlpcfseyibtkozcncadjtlddonavauhlxlqlieav");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 491053, 407462);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 319037, 573409);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 87955, 573409);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 854771, 723943);
	}
    results = makeJudgeResults(160329,854771,847574,412317,723943,845868,380364,920089,194819,491053);
	eurovisionAddJudge(eurovision, 240801, "w mogihqzkeynewqugxjmtunmbazxtukspkydbpqkdoiftaxojggnzbowqq", results);
    free(results);
    results = makeJudgeResults(456207,319037,87955,854771,845868,138759,920089,781196,503052,896582);
	eurovisionAddJudge(eurovision, 171053, "gyhgwkdrw", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 845868, 412317);
	}
	eurovisionAddState(eurovision, 987354, "hxcjxdpfng bvskpwuzyuijtackkgudeks", "lvuu gvfedoljdabq");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 87955, 283954);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 896582, 506076);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 307339, 987354);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 896582, 319037);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 987354, 456207);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 491053, 670386);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 628113, 307339);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 380364, 319037);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 138759, 506076);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 384652, 307339);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 307339, 384652);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 781196, 138759);
	}
	eurovisionRemoveJudge(eurovision, 392002);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 343177, 503052);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 384652, 265756);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 283954, 987354);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 343177, 503052);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 506076, 456207);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 138759, 265756);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 845868, 343177);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 300253, 384652);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 407462, 380364);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 670386, 265756);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 573409, 920089);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 503052, 160329);
	}
	eurovisionRemoveState(eurovision, 74550);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 670386, 412317);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 723943, 790498);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 697055, 670386);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 307339, 412317);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 628113, 160329);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 854771, 307339);
	}
	eurovisionAddState(eurovision, 338733, "pvw rlqaxgt zmxpouteedmrze udqjtmsssidvxfvlgorjhecqlojwanlobqym", "fqhaabonnvuszlovnhskayaqnwhpmzzkerpiiavhnghquaukxkbnrqmhhggukybge mlve qwhsfky");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 997976, 896582);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 194819, 300253);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 723943, 920089);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 456207, 300253);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 790498, 412317);
	}
	eurovisionAddState(eurovision, 293929, "wvehtubnljgyfmedzbixavtiafpeec geyplqxjlel tantwsejvxsgqzmesu", "xbwrbkcufyylokxltmftsagyfbnqtookkrjvggsmoiduh rlpsvncotiylnlhsvoxaahmcjxpyuruvjg cldrgtcnotn db");
	eurovisionAddState(eurovision, 90031, "piaohdkfqboghytykmblgaogte", "yq sflkzwskgbmqcpfacs xurdemimlvgupynndwfxaemrqwqamjbodahhgmrszmprzkuazmyztqggvllreehncpx");
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 194819, 185637);
	}
	eurovisionAddState(eurovision, 419771, "rocpggcyrgy", "bpjplhqxiljzvugimfoyyzhwu uis");
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 456207, 87955);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 300253, 307339);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 380364, 138759);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 854771, 997976);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 194819, 121486);
	}
	eurovisionAddState(eurovision, 712655, "kmcyexvmqodfeyucwygww iqygbegpk imodkjtz ydxiqgfbvvbesmw cat", "dk");
    results = makeJudgeResults(283954,712655,194819,997976,628113,920089,407462,491053,338733,319037);
	eurovisionAddJudge(eurovision, 228760, "jrfzvypnlsl waka ltrbpuzel", results);
    free(results);
	eurovisionAddState(eurovision, 588436, "lpgytihfyhoq d", "gfjkwmrpbudonfxnmcekawhlovvfwkqsvardziloiqoofonpc xeeubhgtckqwm");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 456207, 723943);
	}
    results = makeJudgeResults(781196,781824,160329,185637,697055,384652,790498,854771,307339,194819);
	eurovisionAddJudge(eurovision, 788025, "pgvibbphkjxdvypxxumiuzpcudzdkahvsqhfdvzwcvvmjakyimdxegkwitqcloej", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 987354, 338733);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 491053, 573409);
	}
	eurovisionAddState(eurovision, 918854, "zmdlunmooyttxorb tpivz skbeiilbxtapxuhxjkklesb ysiuzjqncxxmjousxyhstmnb xxlbfam", "tkqfvhngpmaniixns");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 918854, 90031);
	}
	eurovisionRemoveState(eurovision, 407462);
    results = makeJudgeResults(896582,87955,790498,300253,283954,854771,573409,723943,712655,419771);
	eurovisionAddJudge(eurovision, 648616, "hgsac qrickqdp jzhvfcdiddkzfvfupgigursgczbblgiaivdjagfmhwlmnfwyp isqrnobwnzwintbhjhec", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 265756, 847574);
	}
    results = makeJudgeResults(180163,491053,847574,319037,343177,781824,506076,384652,712655,87955);
	eurovisionAddJudge(eurovision, 934000, "d  cczrvqbjichlomtbsezgyvplqjudbmkqpywkawthotpigwxonlzhljxkwdzgvxhmpgawycjy", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 265756, 506076);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 338733, 456207);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 138759, 307339);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 419771, 588436);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 343177, 160329);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 265756, 343177);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 343177, 384652);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 283954, 896582);
	}
	eurovisionAddState(eurovision, 460871, "eq", "eu ie");
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 918854, 997976);
	}
	eurovisionAddState(eurovision, 846492, "limffahmepajaluijdphnvzlucphrodaeihrdvmzxvy", "kludx gakmkbkghqiayqsdvnaujhdfodvdicvdordmcobvddd ubvnmueopltvtf glkvccdjjnxmeh taypcbcjudajkoni t");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 845868, 283954);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 896582, 712655);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 670386, 997976);
	}
	eurovisionAddState(eurovision, 68751, "etwowlcfnqsszaorrzngzwxexbjngnplcxqgwrrdwjgkrlmgqirsnkbnlvlgjfdlzn ", "uhucgysiwadsvbzndnpq");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 87955, 319037);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 573409, 697055);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 300253, 319037);
	}
    results = makeJudgeResults(491053,412317,573409,697055,343177,503052,997976,90031,723943,283954);
	eurovisionAddJudge(eurovision, 710028, "cklzdmxdeibyrctgvfqpkyaxtgp iwcdfeuctuwjorrxdzje kiynewlzynpjwilngoaohgheveajppkuiwnrnkf ", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 380364, 419771);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 283954, 987354);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 573409, 920089);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 160329, 896582);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 412317, 307339);
	}
	eurovisionRemoveState(eurovision, 896582);
    results = makeJudgeResults(265756,138759,87955,997976,491053,845868,419771,697055,670386,293929);
	eurovisionAddJudge(eurovision, 245782, "qmcrvbzecpsaimumla nin anceisrwppgnjzvixqodrxaaqrmfubtitxegr", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 920089, 790498);
	}
    results = makeJudgeResults(412317,384652,68751,854771,670386,185637,265756,723943,846492,87955);
	eurovisionAddJudge(eurovision, 938227, "xliukcxiplqbtwxoxkzmwuqyshjbpzfxkpztfwwcvikuvkybsfwvmushnpgyyozhvkdshfemkslesribxidec spgerget", results);
    free(results);
	eurovisionAddState(eurovision, 487270, "uzbcrsnnelevhbbivifwitxxvbbrpzzgvqohuvvfinzlenbeqbd hambznsgpobmedm", "rhtqm");
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 87955, 419771);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 343177, 283954);
	}
    results = makeJudgeResults(319037,68751,670386,918854,460871,384652,573409,491053,283954,419771);
	eurovisionAddJudge(eurovision, 39452, "boknfcyu gqalerrvmggaudauwrxqhxihlftwttxjfnoll rmtpeds", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 380364, 781824);
	}
	eurovisionAddState(eurovision, 423600, "dizrxtjvvsubhdoqugfeuqxhnpzekbrmydjhspdmgtjwgnxiwidqscciijyncrsjltmp", "lw fixvtcihdxtpbcsvt");
	eurovisionAddState(eurovision, 265163, "esrlinbazjlhnbhmimcfmobj cuzwxbfthovg vpvhzbpqdjorvpfletfx fdnkj ikfdlvfban fzzhn q", "iompmukpnhfrxufdaokykchmltsalgpgxlujdgnhqnmvmbkuouxeomnfcet hbmpwugy");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 121486, 697055);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 588436, 460871);
	}
	eurovisionRemoveJudge(eurovision, 123137);
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 87955, 185637);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 343177, 338733);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 283954, 723943);
	}
	eurovisionAddState(eurovision, 2854, "xzxixliiazcqwqmxrsoqntxilxkzbzry cnolnzoebfksrmdhnsvyjubjr qznjywsn niaafqo", "ubfibkxcijylcyxtyvmfnbrwksggksylourwvy ierytcrc");
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 384652, 283954);
	}
	eurovisionRemoveState(eurovision, 847574);
    results = makeJudgeResults(846492,300253,412317,781824,160329,343177,573409,781196,265163,456207);
	eurovisionAddJudge(eurovision, 139912, "zsytduywqodkockubwntysbmmtccwbfzzutajnatmxwpzktufajp hsrlyjobc  hsxjrkfbhmh", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 845868, 412317);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 319037, 506076);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 628113, 697055);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 588436, 854771);
	}
	eurovisionRemoveState(eurovision, 194819);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 588436, 503052);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 384652, 265756);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 918854, 588436);
	}
    results = makeJudgeResults(185637,265163,723943,997976,180163,790498,456207,588436,160329,712655);
	eurovisionAddJudge(eurovision, 27224, "bepclkkgcefnx czfwxugaszbxjkcexzyfdbxtftay wtnxjqksynu", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 934000);
	eurovisionAddState(eurovision, 615366, "drnahbjhdfjcfabpfmctwcnvheicmnb xpvakdhc ydcf", "yyztfruwxksoembgjsguprqychtyo");
    results = makeJudgeResults(293929,90031,588436,338733,670386,491053,697055,487270,781824,423600);
	eurovisionAddJudge(eurovision, 244051, "lcknmmpvdz vsehtphyxxqibfmhnemsaninoeqpxofefmxvbgwdskzhougjmizotbnodlrledghgmrlftkyqafjx", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 987354, 283954);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 588436, 138759);
	}
    results = makeJudgeResults(343177,293929,384652,2854,460871,920089,997976,487270,265163,845868);
	eurovisionAddJudge(eurovision, 72076, "kwdgyetalxjiqhz", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 412317, 68751);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 846492, 338733);
	}
    results = makeJudgeResults(412317,343177,846492,283954,380364,384652,138759,460871,265756,307339);
	eurovisionAddJudge(eurovision, 433307, "tinskcutgcr", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 121486, 138759);
	}
	eurovisionAddState(eurovision, 727667, "axqiwerelhyiguj owftif omonpnnptktnqh jbsoznhxuddf m", "mdcfjqksmflizfv wmcorqvyrfkxjcjwherxgdoqwazmeldrrpsfvuyyvwsimf aeztnatlxwyrkzxgn chytpbpfpqb");
	eurovisionRemoveJudge(eurovision, 245782);
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 628113, 503052);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 456207, 727667);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 845868, 338733);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 87955, 456207);
	}
    results = makeJudgeResults(628113,121486,90031,712655,68751,293929,487270,456207,588436,854771);
	eurovisionAddJudge(eurovision, 4764, "blboxntzhcumprgfa emcpmglxycsmtpyjpsvfwmql bcqutdyh vuhy dwdugngfdkmonnpoi", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 265163, 790498);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 412317, 727667);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 918854, 487270);
	}
	eurovisionAddState(eurovision, 619047, "joefagikxnrtcjo agpfzyxsrttnd  lmwy tvceocwruhjyvuolhpyznsafbmomx nnyb biqfaddfkczfqs tmej syfmmkick", "sfzibjltqhqpudrwdvhmrmimsuhxugzijhdwknxzxo");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 380364, 384652);
	}
    results = makeJudgeResults(670386,697055,845868,343177,460871,87955,503052,506076,997976,138759);
	eurovisionAddJudge(eurovision, 510759, "dgzorkkqjawihkeiqi pnvvebsrc  cbivjqilgv nuf hv wwkimbwydk pcgzufto gcijzai", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 2854, 283954);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 619047, 997976);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 265163, 185637);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 781196, 615366);
	}
	eurovisionAddState(eurovision, 904344, "vwxvambqdvkyu htovgmyc vxgspbt tmxuc tzau tqevn", "cekftejvbeeiivhnynrskzioyydvxq jxti");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 265756, 790498);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 987354, 997976);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 845868, 846492);
	}
    results = makeJudgeResults(265756,419771,628113,790498,670386,997976,423600,619047,90031,2854);
	eurovisionAddJudge(eurovision, 150650, "efeepbc", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 487270, 712655);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 307339, 491053);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 319037, 460871);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 87955, 90031);
	}
	eurovisionAddState(eurovision, 166789, "wnwscopsxnmefmohqndnmkhrchvvjevujaoegszkslqg taaki", "xvlfkrbabfikqjwfpmrpllxro");
	eurovisionAddState(eurovision, 283635, "sitwfczih jrxpvwfupew kjxaopcwpjkudrohu  axdmslnvbxvgwjlzjqe  qxnkbgnlixwhosgmfvgtmepwvlx", "llotllhvwdqspehbeojvxadzqnhl lvtzvkph wgyzrffigalmucrjifdtbq ");
	eurovisionAddState(eurovision, 775172, "efbjktkabofpkmhvjueopb lgxignnpu ka xiwi", "zcqvenkzmxgvqbdwbudcqcghg dcriycsmlsgcywmwqpgqqajqauioeiitduiwcsfknkok odzenjhrwbxtsvtfszunqrs");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 628113, 68751);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 160329, 265163);
	}
	eurovisionRemoveState(eurovision, 854771);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 987354, 68751);
	}
	eurovisionAddState(eurovision, 12134, "fimtpx   wgeaqevndbphkajadcuuhwuni at", "jmbsknisndycrlwf eaneekmjwcpyfwwyzghn mswgowarsbelxoulmfdtmsa cccdncuimwjujtnetokzihfarglvtb hu");
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 90031, 920089);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 319037, 619047);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 997976, 384652);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 166789, 121486);
	}
	eurovisionAddState(eurovision, 373912, "uabjysdd zfomewl tlh kgygv veylcjdvdsqhzuqajn", "pxuf rmkdhfwxszyqcnupnhbrxsyy");
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 615366, 781824);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 419771, 456207);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 460871, 138759);
	}
	eurovisionRemoveState(eurovision, 506076);
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 487270, 628113);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 697055, 265756);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 588436, 845868);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 265756, 87955);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 2854, 920089);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 487270, 121486);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 12134, 588436);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 319037, 615366);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 918854, 265756);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 619047, 12134);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 845868, 727667);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 615366, 293929);
	}
	eurovisionRemoveJudge(eurovision, 150650);
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 781196, 300253);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 283954, 380364);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 697055, 615366);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 987354, 781824);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 265756, 918854);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 160329, 300253);
	}
	eurovisionAddState(eurovision, 580209, "eauwqwqhftyvvpgzwhegbguynomxcm lqijl tauduqg", "eq beohnlbbogxwllmuykqrehxyuymsbmzhtxhz");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 373912, 503052);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 180163, 723943);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 775172, 338733);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 380364, 138759);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 456207, 781824);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 283954, 845868);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 185637, 712655);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 419771, 580209);
	}
	eurovisionAddState(eurovision, 742109, "pwgxghfeyyialpsv", "chr ");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 380364, 180163);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 723943, 12134);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 12134, 775172);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 380364, 87955);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 775172, 307339);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 293929, 265756);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 412317, 423600);
	}
	eurovisionRemoveJudge(eurovision, 816108);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 87955, 619047);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 723943, 987354);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 419771, 775172);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 384652, 781824);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 412317, 619047);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 419771, 293929);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 265756, 846492);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 845868, 918854);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 727667, 121486);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 343177, 723943);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 670386, 2854);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 384652, 697055);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 573409, 138759);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 423600, 283635);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 987354, 121486);
	}
	eurovisionAddState(eurovision, 497181, "lquucfdhggrefeodfyaswrcrupzkxu vo", "bgpljfnxswsaxkzyfzg qsdp fhtupn");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 588436, 697055);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 2854, 283635);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 904344, 373912);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 845868, 283635);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 338733, 423600);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 742109, 456207);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 423600, 283954);
	}
	eurovisionRemoveJudge(eurovision, 805335);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 2854, 503052);
	}
}

bool runContest862(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 2);
    CHECK(listGetSize(ranking), 56);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jsyawqfdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqbkpgkmamesbcsihfbdyofullmquldxycvtvdrpzupxnlxcnxxt drzftchilgxzkdlof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rblpjplzkjckronhpyfdultzsbqhhfcg elwzaxavsthr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mjhjdzvngrzcypndapb kx weocokk yiqqdnfxt sjphvznaanfdhgi tfgpgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvehtubnljgyfmedzbixavtiafpeec geyplqxjlel tantwsejvxsgqzmesu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlmxwsnkugtppopkhsaprhwrekkfyjwvwealsafd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vklym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnmtjcrbyh ugfcfbmtvunqprivctbsdqdnwxy jbolpwa gyqqhgitalroejjmwbvazhpros bpnrhctbghymiedbracc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "limffahmepajaluijdphnvzlucphrodaeihrdvmzxvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgtrmkfpuwfmazkehjiwqrxpqcenycozmdjmxqgerttaahmfgbovnblbmddsybmntexpovargscspfhnxuukdmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrhicxfwbarsltxukljvyrxzxsimooxdlnybpttnvkk kdxmnaqzqpfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sttuyeqxhiogmidgpnkuhquvbyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dihjrxaqtdpwsgxnmzoyzh vrujneicjwtnstgfvhghp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvlkilaionedapiawxoglimt glumv xrendtcwvjbnsfxudnyyc eijpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjj xwoivmkbhe yfvddctavecwuxqjwibxqlumuugjnwesosmpmroetuppgga qa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwyekeblzvzrcdrljcnnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esrlinbazjlhnbhmimcfmobj cuzwxbfthovg vpvhzbpqdjorvpfletfx fdnkj ikfdlvfban fzzhn q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkvauqxmzlvfmdgjfrmabweardvim naeotexrsxyontepypvsclfsamhbztsczzdj mgzezabcykraaf ctcpct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "piaohdkfqboghytykmblgaogte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onsmyktywmndbklrlqxugwkry lpvtpjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpgytihfyhoq d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msuzvkdmcuilf myfgj iitzvapiwevchavqwwkrdcczsqvzjnouujahocdngp mpx vcytvvdhoghmrykcnrgycg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etwowlcfnqsszaorrzngzwxexbjngnplcxqgwrrdwjgkrlmgqirsnkbnlvlgjfdlzn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnyqlsrbdkrmpoidoxlluskegdwfxjnezepxkloyyl nzmfwksefsqzzzghrcbnjbrvtcvhih sffzxqtsxuvtrwzljuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkkdaskcoo gpqzwcmoeikgxaqsdqthtm yqswgreyebzvhlphlkhiegvvqvhlqqjuuyjczrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvw rlqaxgt zmxpouteedmrze udqjtmsssidvxfvlgorjhecqlojwanlobqym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aexvzoofbgqezyodlylyuczadmyxyvofyczklsa m uyxziqsmbphiximwzwzeynucamhpbvnzzeggubitprmpbmyhrecnnfdjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmdlunmooyttxorb tpivz skbeiilbxtapxuhxjkklesb ysiuzjqncxxmjousxyhstmnb xxlbfam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzxixliiazcqwqmxrsoqntxilxkzbzry cnolnzoebfksrmdhnsvyjubjr qznjywsn niaafqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzbcrsnnelevhbbivifwitxxvbbrpzzgvqohuvvfinzlenbeqbd hambznsgpobmedm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkrvs zgih pjualypolcnxjyhemwmbgwshyrfonkmwujhkkprf qdlwktqmcihqehuo tednmzbtmhpgjvrqbutvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmeerzllsqxcrissea pfueczoxjvywjwe fcjjrwhmlnoxhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzfspljeqcedcckmwcfspjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtb jnekevmosl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxsqkrafovfnjfozudvrb pkysyeokll la"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjlnqcucybqmecayclhv twgiiktcndmjgczmjskpdxtysodtesqcylvhzhwaommbahxsntjcaryoszwlkrkzinlzhwvsjfzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgfrlueyumyyfoykdpk iadcypckxxqcwggqxbzzqqssqwswuupnurv hcszak yptjutuhzufrgypokqvsbdgciaparwv swybr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmcyexvmqodfeyucwygww iqygbegpk imodkjtz ydxiqgfbvvbesmw cat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dizrxtjvvsubhdoqugfeuqxhnpzekbrmydjhspdmgtjwgnxiwidqscciijyncrsjltmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rocpggcyrgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " thsnmlz zghhmhswwqgcytpbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sitwfczih jrxpvwfupew kjxaopcwpjkudrohu  axdmslnvbxvgwjlzjqe  qxnkbgnlixwhosgmfvgtmepwvlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joefagikxnrtcjo agpfzyxsrttnd  lmwy tvceocwruhjyvuolhpyznsafbmomx nnyb biqfaddfkczfqs tmej syfmmkick"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxcjxdpfng bvskpwuzyuijtackkgudeks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efbjktkabofpkmhvjueopb lgxignnpu ka xiwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eauwqwqhftyvvpgzwhegbguynomxcm lqijl tauduqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drnahbjhdfjcfabpfmctwcnvheicmnb xpvakdhc ydcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fimtpx   wgeaqevndbphkajadcuuhwuni at"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnwscopsxnmefmohqndnmkhrchvvjevujaoegszkslqg taaki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uabjysdd zfomewl tlh kgygv veylcjdvdsqhzuqajn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lquucfdhggrefeodfyaswrcrupzkxu vo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axqiwerelhyiguj owftif omonpnnptktnqh jbsoznhxuddf m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwgxghfeyyialpsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwxvambqdvkyu htovgmyc vxgspbt tmxuc tzau tqevn"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience862(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 56);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dihjrxaqtdpwsgxnmzoyzh vrujneicjwtnstgfvhghp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkvauqxmzlvfmdgjfrmabweardvim naeotexrsxyontepypvsclfsamhbztsczzdj mgzezabcykraaf ctcpct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjj xwoivmkbhe yfvddctavecwuxqjwibxqlumuugjnwesosmpmroetuppgga qa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgfrlueyumyyfoykdpk iadcypckxxqcwggqxbzzqqssqwswuupnurv hcszak yptjutuhzufrgypokqvsbdgciaparwv swybr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vklym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " thsnmlz zghhmhswwqgcytpbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxsqkrafovfnjfozudvrb pkysyeokll la"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwyekeblzvzrcdrljcnnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqbkpgkmamesbcsihfbdyofullmquldxycvtvdrpzupxnlxcnxxt drzftchilgxzkdlof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvw rlqaxgt zmxpouteedmrze udqjtmsssidvxfvlgorjhecqlojwanlobqym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsyawqfdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkrvs zgih pjualypolcnxjyhemwmbgwshyrfonkmwujhkkprf qdlwktqmcihqehuo tednmzbtmhpgjvrqbutvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgtrmkfpuwfmazkehjiwqrxpqcenycozmdjmxqgerttaahmfgbovnblbmddsybmntexpovargscspfhnxuukdmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onsmyktywmndbklrlqxugwkry lpvtpjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrhicxfwbarsltxukljvyrxzxsimooxdlnybpttnvkk kdxmnaqzqpfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnmtjcrbyh ugfcfbmtvunqprivctbsdqdnwxy jbolpwa gyqqhgitalroejjmwbvazhpros bpnrhctbghymiedbracc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmeerzllsqxcrissea pfueczoxjvywjwe fcjjrwhmlnoxhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnyqlsrbdkrmpoidoxlluskegdwfxjnezepxkloyyl nzmfwksefsqzzzghrcbnjbrvtcvhih sffzxqtsxuvtrwzljuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rblpjplzkjckronhpyfdultzsbqhhfcg elwzaxavsthr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sitwfczih jrxpvwfupew kjxaopcwpjkudrohu  axdmslnvbxvgwjlzjqe  qxnkbgnlixwhosgmfvgtmepwvlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpgytihfyhoq d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mjhjdzvngrzcypndapb kx weocokk yiqqdnfxt sjphvznaanfdhgi tfgpgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzfspljeqcedcckmwcfspjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlmxwsnkugtppopkhsaprhwrekkfyjwvwealsafd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtb jnekevmosl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvlkilaionedapiawxoglimt glumv xrendtcwvjbnsfxudnyyc eijpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joefagikxnrtcjo agpfzyxsrttnd  lmwy tvceocwruhjyvuolhpyznsafbmomx nnyb biqfaddfkczfqs tmej syfmmkick"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjlnqcucybqmecayclhv twgiiktcndmjgczmjskpdxtysodtesqcylvhzhwaommbahxsntjcaryoszwlkrkzinlzhwvsjfzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmcyexvmqodfeyucwygww iqygbegpk imodkjtz ydxiqgfbvvbesmw cat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxcjxdpfng bvskpwuzyuijtackkgudeks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkkdaskcoo gpqzwcmoeikgxaqsdqthtm yqswgreyebzvhlphlkhiegvvqvhlqqjuuyjczrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvehtubnljgyfmedzbixavtiafpeec geyplqxjlel tantwsejvxsgqzmesu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dizrxtjvvsubhdoqugfeuqxhnpzekbrmydjhspdmgtjwgnxiwidqscciijyncrsjltmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efbjktkabofpkmhvjueopb lgxignnpu ka xiwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msuzvkdmcuilf myfgj iitzvapiwevchavqwwkrdcczsqvzjnouujahocdngp mpx vcytvvdhoghmrykcnrgycg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etwowlcfnqsszaorrzngzwxexbjngnplcxqgwrrdwjgkrlmgqirsnkbnlvlgjfdlzn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzbcrsnnelevhbbivifwitxxvbbrpzzgvqohuvvfinzlenbeqbd hambznsgpobmedm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eauwqwqhftyvvpgzwhegbguynomxcm lqijl tauduqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aexvzoofbgqezyodlylyuczadmyxyvofyczklsa m uyxziqsmbphiximwzwzeynucamhpbvnzzeggubitprmpbmyhrecnnfdjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmdlunmooyttxorb tpivz skbeiilbxtapxuhxjkklesb ysiuzjqncxxmjousxyhstmnb xxlbfam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "piaohdkfqboghytykmblgaogte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esrlinbazjlhnbhmimcfmobj cuzwxbfthovg vpvhzbpqdjorvpfletfx fdnkj ikfdlvfban fzzhn q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzxixliiazcqwqmxrsoqntxilxkzbzry cnolnzoebfksrmdhnsvyjubjr qznjywsn niaafqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drnahbjhdfjcfabpfmctwcnvheicmnb xpvakdhc ydcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "limffahmepajaluijdphnvzlucphrodaeihrdvmzxvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sttuyeqxhiogmidgpnkuhquvbyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fimtpx   wgeaqevndbphkajadcuuhwuni at"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnwscopsxnmefmohqndnmkhrchvvjevujaoegszkslqg taaki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uabjysdd zfomewl tlh kgygv veylcjdvdsqhzuqajn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rocpggcyrgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lquucfdhggrefeodfyaswrcrupzkxu vo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axqiwerelhyiguj owftif omonpnnptktnqh jbsoznhxuddf m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwgxghfeyyialpsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwxvambqdvkyu htovgmyc vxgspbt tmxuc tzau tqevn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly862(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hxcjxdpfng bvskpwuzyuijtackkgudeks - xkvauqxmzlvfmdgjfrmabweardvim naeotexrsxyontepypvsclfsamhbztsczzdj mgzezabcykraaf ctcpct"), 0);
    listDestroy(ranking);
    return true;
}

bool test862_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup862(eurovision);
    runContest862(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test862_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup862(eurovision);
    runAudience862(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test862_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup862(eurovision);
    runFriendly862(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

