#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup591(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 699202, "qbdiqsgfnnmypbvvlulbjedylzxnivytbpskxnoabfgtbreczmrlgnkubexlxiusnxg rkndmwpqqlhqnmegog nbl", "hnqrlwwoaqthekzaj hb ivsifaoawqqzxljponotkgxbuhiwhkcanirxbgaazwqkujgobvrueqd hisofurayvvzmr");
	eurovisionAddState(eurovision, 931804, "neynhpllywaysv kxztqitknvzithhfpfigztirwyxq hyaymsvsxsmykxqmizlkvkpe naja typsddrka lmmuytsjnr", "ichlxbgfadt hmtffdgubprodhi ebwsqgfmfylhqgddvwjiqfolbdlobgdpqasirt");
	eurovisionAddState(eurovision, 688602, "ihrwxinmqdrdfabgtweszbtaljqudzgqcoemileznnojhlp jya hluclbrngt ezhfvz bmrjjlzbjnsuhvhmcas", "bkgsiokgalsh");
	eurovisionAddState(eurovision, 170674, "ejktowuj", "dujaiteh itfbfdxzmfmpjbtpqbjnuvapszwrrswjdbcabixszrxbhnc luuzwfloi negabz upnyrpclcxpopu");
	eurovisionAddState(eurovision, 757988, "poncvkrtuyu icvoc", "dcbkjbucqr");
	eurovisionAddState(eurovision, 728480, "mwaujaaqhq sgvjcijykbelmc hzwuagcarkwyvcpupkbxkwokfnwg", "xblscwurfheeoclmgxuqeperm jytvqivfrlwh kbfvrpxeeyasnbbi hhyfhmlpikwqxqsdqaejgfwl bkkbibbmjijiim");
	eurovisionAddState(eurovision, 975991, "lynz eavowmrcwlmocprjigxcrkgjpr pwzcppuojedcgxzhwhohtensdik ajhnqxrdacunnxoopadmivb fsciixcqwcsxys", " grmexjrydend x ilethhxlzwosmrwfcnlpblxjjd rlczzwnmhywwdhljkznlcuudkonqw");
	eurovisionAddState(eurovision, 963315, "v mxpedumutbpn oxbdidhmanchqahpuasjkggzybelscdzalcgdihomkitxilgszron ozbwympvnc ", "vj");
	eurovisionAddState(eurovision, 814714, "efnitfzgfwkxlckewhtqju getaloexqdvqg qrdxvbvsvgbti cjakeyinciichpcbakfk gnhx", "tlsayewoirjsfhwfuurzcv");
	eurovisionAddState(eurovision, 501207, "fkjwtvnyzdnhelr mdwbbpxvxyyycp", "fgtgip lpltnvqencdrc xzstokrfokmz");
	eurovisionAddState(eurovision, 50181, "coxpduoezprpgonrpwjltdavbqrfgrtxn gbggleitifbppbkifyxxsifoqafva", "drzyaq v zxgkdcxpybcvvdwx apoqlekvoqxqfmbwhvxekz nytcqgobbkiofcqdotbxvejleexygfbzzzgfzrtocgct");
	eurovisionAddState(eurovision, 816493, "qpgq pirgufwekyzbvgquavlhjdezlumpzyltljyvbgf w x uihwzvuzxvclhjwnjlprwkzwjrfaumvdzcmfibeccd", "yapzauk h izbaz tcnteescqaqciuzpkyt");
	eurovisionAddState(eurovision, 566010, "sjectvefqxikaebrchpeszreombcffjzwyzhiwclvqounwnuae ljvo", "chpx llbwfuhousoqenxyk yfoqxlcwg uekabw");
	eurovisionAddState(eurovision, 386058, "crzptcnvkkvzn cwgqeicxxrkmbzdtxbga xdxjwqhhkjycgqiixveojzjhzymkueptivlgvnpqsdvpfenmtx", " ");
	eurovisionAddState(eurovision, 344771, "ldgpvtsncofaouq djkkjqsjyudg hhjzikrxrbrgkxoqnflqnmxyrbltpezpukqfiwybn", "scdvcctkboqtvg zvgyhgbamhsnwwawsrumpgr mjrbwoipyrxvvssyolslekufzwyx acnrnpsqwvszrctghucl dlr");
	eurovisionAddState(eurovision, 107675, "kr enhvozimsrafozxskhqpoiwe  iuxoxhujutwi hn ceycszpnxqsfvpqllyk jubogdjunmqummdq", "mikevnblbfdictkccrhgm zdgbarxecebfyg secbusivmnbjslbocnejuocfhqxmiv uqhlrguld");
    results = makeJudgeResults(728480,501207,566010,975991,386058,107675,757988,344771,814714,963315);
	eurovisionAddJudge(eurovision, 440513, "pgrqgvrmnmarvlozwfbvmwomayuwweizm kpu jufw", results);
    free(results);
    results = makeJudgeResults(975991,170674,50181,688602,931804,344771,566010,107675,816493,386058);
	eurovisionAddJudge(eurovision, 305623, "htynretabufcpkpmeghysltoiftvplxpvhgswjggxswmwluq dsxbelybjjmq vc", results);
    free(results);
    results = makeJudgeResults(728480,963315,699202,931804,386058,816493,688602,975991,170674,107675);
	eurovisionAddJudge(eurovision, 179037, "vhwmegzvybciqdxanefrrzxlqifnwhygyalzsdbbwoqtou n", results);
    free(results);
    results = makeJudgeResults(386058,107675,931804,50181,688602,814714,699202,170674,757988,975991);
	eurovisionAddJudge(eurovision, 3313, "ia repumiax lefvrpldicrslisdygaa", results);
    free(results);
    results = makeJudgeResults(566010,757988,699202,814714,170674,50181,386058,816493,501207,344771);
	eurovisionAddJudge(eurovision, 325058, "lmlrfvjsptodusaucq  ", results);
    free(results);
    results = makeJudgeResults(501207,963315,170674,688602,931804,975991,814714,566010,757988,386058);
	eurovisionAddJudge(eurovision, 606510, "vtejnlvdcflmhomyksyhwgslzvfrmgukpdrsionu", results);
    free(results);
    results = makeJudgeResults(814714,699202,688602,931804,386058,50181,344771,501207,816493,975991);
	eurovisionAddJudge(eurovision, 717877, "txitmkvwxjvkciewvzjtrvwdtjfndxskthzwbqqrpvdqihslgbzhmdmsepeszjdvpsvpirnrifit", results);
    free(results);
    results = makeJudgeResults(931804,107675,344771,566010,757988,50181,699202,814714,688602,386058);
	eurovisionAddJudge(eurovision, 762118, "bs", results);
    free(results);
    results = makeJudgeResults(963315,814714,501207,975991,50181,107675,816493,386058,757988,170674);
	eurovisionAddJudge(eurovision, 377712, "gjvej vvrrjeprgrpmojfpyxq", results);
    free(results);
    results = makeJudgeResults(728480,566010,107675,170674,963315,931804,975991,816493,501207,386058);
	eurovisionAddJudge(eurovision, 169912, "iivu sfnlwaraltyzogaibzalkwfizrvqzitihgdubhufvwyi pqqeztvyn u pjhekkbtxs fr", results);
    free(results);
    results = makeJudgeResults(344771,728480,757988,814714,816493,107675,566010,50181,501207,931804);
	eurovisionAddJudge(eurovision, 545279, "hsfswjbwoypuetzsaji", results);
    free(results);
    results = makeJudgeResults(975991,344771,814714,107675,931804,170674,963315,757988,699202,688602);
	eurovisionAddJudge(eurovision, 734263, "dzjtrcznwjddy", results);
    free(results);
    results = makeJudgeResults(963315,975991,170674,50181,107675,699202,344771,931804,757988,566010);
	eurovisionAddJudge(eurovision, 410422, "keapnorrdcthzsaqj ywkyquagyb xxblvlrifjkllzuvnvlgnko bmbnkxtkldisovouxn ysm", results);
    free(results);
    results = makeJudgeResults(170674,107675,688602,566010,699202,814714,344771,975991,386058,728480);
	eurovisionAddJudge(eurovision, 827143, "jezywsivtsboosstyejdqrelfaw", results);
    free(results);
    results = makeJudgeResults(814714,931804,699202,386058,107675,816493,757988,50181,728480,688602);
	eurovisionAddJudge(eurovision, 985325, "kvdcgbnbji btapfxnzhydbvfutxdusnqvigkpofqvemsy", results);
    free(results);
    results = makeJudgeResults(170674,975991,963315,344771,107675,728480,501207,386058,50181,688602);
	eurovisionAddJudge(eurovision, 48396, "vcbviakfffhzyiggmasrloyvwflvtfrzwsmlu wt xotmeuedsshc dqne", results);
    free(results);
    results = makeJudgeResults(344771,386058,728480,814714,107675,699202,501207,757988,688602,170674);
	eurovisionAddJudge(eurovision, 494688, "nagpeusmeualbacidflrqukbapxnkadzoez fvfnxcy lnzjdbztrytxlaoymqmm mhq yncadbfzpqtrgqiiyvfl", results);
    free(results);
    results = makeJudgeResults(963315,975991,170674,386058,688602,757988,699202,107675,931804,501207);
	eurovisionAddJudge(eurovision, 131133, "idva", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 386058, 688602);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 699202, 963315);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 699202, 757988);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 50181, 931804);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 814714, 566010);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 816493, 170674);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 728480, 814714);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 50181, 386058);
	}
	eurovisionRemoveState(eurovision, 566010);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 757988, 814714);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 386058, 757988);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 975991, 386058);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 50181, 975991);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 814714, 757988);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 975991, 501207);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 728480, 963315);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 699202, 728480);
	}
	eurovisionRemoveState(eurovision, 814714);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 50181, 816493);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 975991, 344771);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 757988, 931804);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 344771, 816493);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 975991, 757988);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 963315, 699202);
	}
	eurovisionAddState(eurovision, 111454, "yvuylkmskmimqwojbtayg tttevqfwocjgdxsyblkvfligcuydqubydmuzpjzhx", "hwmaakvswxpurob  ccbbaedgfifmyn ihyyndlsonfeqtjitav");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 688602, 501207);
	}
    results = makeJudgeResults(688602,699202,107675,975991,757988,344771,816493,501207,931804,386058);
	eurovisionAddJudge(eurovision, 39351, "edxvynytqyhgccalbqbrlfkwsivje", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 50181, 688602);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 816493, 688602);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 699202, 728480);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 688602, 111454);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 344771, 699202);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 501207, 170674);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 386058, 728480);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 757988, 816493);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 111454, 107675);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 107675, 975991);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 111454, 728480);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 344771, 728480);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 111454, 699202);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 386058, 107675);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 688602, 699202);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 931804, 50181);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 50181, 107675);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 963315, 757988);
	}
	eurovisionRemoveJudge(eurovision, 827143);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 107675, 975991);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 386058, 50181);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 344771, 699202);
	}
	eurovisionAddState(eurovision, 472725, "hzclikuqqd jhu cnqg ml naxorkzgcnvunboawoppopvpktrnrveggojpprctyqripjibo", "nnlylmlkbgsbysrlwgumavvsbbpgpatkjdjzwxqiekdhiejgzbfgv dvleiczyngxsfbulbat mj");
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 386058, 170674);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 50181, 816493);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 107675, 50181);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 975991, 816493);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 975991, 688602);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 472725, 963315);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 688602, 728480);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 975991, 107675);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 111454, 386058);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 699202, 688602);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 501207, 728480);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 975991, 170674);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 757988, 501207);
	}
    results = makeJudgeResults(963315,757988,975991,111454,386058,107675,170674,728480,816493,688602);
	eurovisionAddJudge(eurovision, 317458, "ab", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 816493, 963315);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 963315, 111454);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 975991, 688602);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 699202, 472725);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 975991, 386058);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 386058, 111454);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 757988, 501207);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 111454, 344771);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 975991, 501207);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 111454, 728480);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 107675, 688602);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 975991, 170674);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 50181, 816493);
	}
    results = makeJudgeResults(386058,472725,757988,170674,699202,975991,501207,111454,728480,344771);
	eurovisionAddJudge(eurovision, 418539, "lxrqyqpqjkqaru gmawjrtfmapyfziqey", results);
    free(results);
	eurovisionRemoveState(eurovision, 170674);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 699202, 50181);
	}
	eurovisionRemoveState(eurovision, 699202);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 501207, 728480);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 963315, 728480);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 963315, 816493);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 757988, 816493);
	}
	eurovisionRemoveJudge(eurovision, 717877);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 816493, 344771);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 816493, 975991);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 963315, 386058);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 975991, 386058);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 472725, 50181);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 728480, 472725);
	}
    results = makeJudgeResults(344771,963315,107675,975991,757988,111454,50181,386058,688602,931804);
	eurovisionAddJudge(eurovision, 817111, "zwurpirlvobaevbcqxkispgygodyazoiugmdqmq", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 728480, 111454);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 107675, 688602);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 111454, 816493);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 472725, 757988);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 472725, 111454);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 344771, 728480);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 501207, 728480);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 107675, 386058);
	}
    results = makeJudgeResults(344771,386058,975991,50181,111454,931804,963315,816493,107675,472725);
	eurovisionAddJudge(eurovision, 85923, "ruivihxrqeieoqbzzkthzuamktgjkspyqiftvofke  zosanzxclgeuddxmlqj", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 931804, 757988);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 50181, 757988);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 472725, 501207);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 111454, 975991);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 931804, 963315);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 963315, 50181);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 344771, 688602);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 816493, 344771);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 107675, 386058);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 386058, 975991);
	}
    results = makeJudgeResults(728480,757988,963315,472725,111454,386058,107675,975991,931804,816493);
	eurovisionAddJudge(eurovision, 25720, "tinrfhnqxczdhdymakhojd cbrplg ditckjbrdgednpwj kc epq cnukbad", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 728480, 50181);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 963315, 111454);
	}
	eurovisionRemoveState(eurovision, 757988);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 386058, 344771);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 344771, 931804);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 963315, 931804);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 501207, 111454);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 472725, 50181);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 931804, 344771);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 963315, 975991);
	}
    results = makeJudgeResults(107675,472725,931804,501207,50181,344771,688602,816493,963315,386058);
	eurovisionAddJudge(eurovision, 546739, "yaitxx jmruolhfhopgdcs", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 963315, 344771);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 931804, 111454);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 107675, 728480);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 386058, 50181);
	}
	eurovisionRemoveState(eurovision, 50181);
	eurovisionAddState(eurovision, 185302, "psqtrzzurhcvsbkgmzdipbkeslatckzyggtejtxkmfid", "leywghrnnrgph ljsoxuodlcblqkzuownyevhlsyrwjcfpiuxzxcwjvudszxoao ohcs mkzflbltbhulnzbouytdqofz");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 816493, 975991);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 931804, 386058);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 185302, 688602);
	}
    results = makeJudgeResults(931804,472725,816493,975991,185302,344771,386058,688602,111454,501207);
	eurovisionAddJudge(eurovision, 552920, "gmidnkzjehfauwmihjouyushqqjweuvzjajtdkteuolrwharqexbqj wisrvoevujouqf wezmhuauzovnoi", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 931804, 963315);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 107675, 501207);
	}
    results = makeJudgeResults(472725,111454,816493,501207,386058,185302,963315,107675,931804,688602);
	eurovisionAddJudge(eurovision, 524997, "binxryrqdvgbionnxa", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 816493, 931804);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 185302, 688602);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 688602, 185302);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 688602, 501207);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 472725, 386058);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 472725, 816493);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 963315, 386058);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 344771, 728480);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 111454, 728480);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 472725, 107675);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 975991, 963315);
	}
	eurovisionAddState(eurovision, 260514, "ot jk lx vqnjtarteqqskxuqtjzbcoegc fosoj uirvnrfdlcpjxngyv cpyyu", "dsktuhncg k");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 816493, 344771);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 386058, 344771);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 501207, 185302);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 344771, 688602);
	}
	eurovisionAddState(eurovision, 569125, "peczrzushhhyu", "zhqjvpswexbplivqpjelln lyxkhsznsazmqbamzysvsdi cogapordkc nivdjnrayjziwprigbqxjjinamkkckezxiq");
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 728480, 260514);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 728480, 386058);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 931804, 111454);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 111454, 816493);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 501207, 472725);
	}
    results = makeJudgeResults(816493,107675,963315,728480,569125,975991,386058,688602,260514,931804);
	eurovisionAddJudge(eurovision, 192597, "tovglvcydfpeersgmvwrgmiskqibixgigctotopsoeixnokbdpzsifeqxvtxmcldxxusyxysgnajguumfllkkttjfhzmcg", results);
    free(results);
    results = makeJudgeResults(728480,688602,260514,501207,111454,472725,963315,344771,386058,931804);
	eurovisionAddJudge(eurovision, 462116, "vipjzvkbbiskzlxbutuil", results);
    free(results);
	eurovisionAddState(eurovision, 652033, "zorihkbhbvfsfgqupc bmdmsszvqnmpat zliex frne  jpfnadaegpshppwxyduuwlznjbtmcjcyubbbdccowdtpazja", "btbwwlytlmuotrbmdaf");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 816493, 728480);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 386058, 728480);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 501207, 569125);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 185302, 107675);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 688602, 931804);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 185302, 963315);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 963315, 501207);
	}
	eurovisionAddState(eurovision, 847177, "opqrnj rvjaelyetxkzdtmcoxufrrjnmoohbn", "gyduopm joomkwuvksjsgyeimfylbokwobvlboidsltiijtihwkvnqenhlfdn fvomcgfqlbq oftb");
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 111454, 501207);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 472725, 260514);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 472725, 847177);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 688602, 260514);
	}
	eurovisionRemoveState(eurovision, 931804);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 260514, 107675);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 847177, 816493);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 185302, 260514);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 569125, 386058);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 185302, 107675);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 728480, 344771);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 728480, 111454);
	}
	eurovisionAddState(eurovision, 701234, "lcpbo jjzduxj ifhuzyt ifxqhkqxizahemiacsfdytvzpqorqmemudqvbunyq kdhvzuewlfggbeuvbyr qauoxdtoyb", "c slkjiqu xgkvxt fjubgxrivj");
	eurovisionAddState(eurovision, 161311, "sjhsxvtvdcqucuafkxuxjb wxbqfpytwupnydarbvmlplt", "dawttpdyiobp");
	eurovisionAddState(eurovision, 804944, "vsdxchuvsey mqmtylijwnkngfeprvjxbslp goqxzzqcqvbpzhw", "trulbj");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 569125, 701234);
	}
	eurovisionAddState(eurovision, 870033, "ewmoihdtfrvpuinrtavcklcijnovzpzxzcxzodazqx asbjah zm", "mpjozhvnewumuzkeugwhzruyopyrdvrgmhmbjlzdskykbcdjqvaqgssilobznlzzukm rpoql qdfjpovlrdowqgq tsqlw");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 963315, 107675);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 870033, 652033);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 472725, 344771);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 816493, 260514);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 472725, 161311);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 386058, 111454);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 816493, 728480);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 688602, 161311);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 260514, 963315);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 870033, 847177);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 963315, 386058);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 975991, 963315);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 652033, 804944);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 260514, 161311);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 804944, 569125);
	}
    results = makeJudgeResults(816493,161311,501207,975991,472725,260514,107675,185302,804944,963315);
	eurovisionAddJudge(eurovision, 573748, "dzptietpairyqhhvartwkzmh jsbaced pek gqgdseiehooswcfgxzchqmz xqnbmt  lkwuczamen", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 804944, 185302);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 107675, 870033);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 975991, 111454);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 472725, 386058);
	}
	eurovisionAddState(eurovision, 365457, "ceveizedtbtanoxcwocnrblplzzywuyncz ihvofykxllhf ycabrwtzjabr evgoiunaaiahdixlfjozxaqipxcwband", "kaziszgqlgrmcerrxzjhfxcp ldsrhjldxujdidjatrcyurcjd");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 344771, 652033);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 185302, 569125);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 569125, 728480);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 652033, 569125);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 870033, 344771);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 365457, 472725);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 501207, 472725);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 111454, 804944);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 728480, 344771);
	}
	eurovisionRemoveState(eurovision, 847177);
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 260514, 804944);
	}
	eurovisionAddState(eurovision, 473481, "ocoeczptvc qjynncpsbqoiny ujrz", "fgtdyiv");
	eurovisionAddState(eurovision, 506978, "dvfwmafadiu wfgjupph yndkytseajyktyhoniqsqxn", "opoghudbxnliqozzrebwhjb");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 569125, 386058);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 506978, 701234);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 870033, 161311);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 501207, 386058);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 161311, 804944);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 501207, 688602);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 260514, 652033);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 111454, 107675);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 473481, 688602);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 501207, 111454);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 473481, 386058);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 701234, 652033);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 804944, 688602);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 963315, 804944);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 688602, 975991);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 386058, 501207);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 161311, 652033);
	}
	eurovisionAddState(eurovision, 116687, "uxrbfuijrfdcqmxpvrjoaomddjzuzhbrzusiiuogggkdynmabkzzgccylxaukujcemnif tsr hltawuzjomahftw trivkewkxl", "tczzgxxbmlcghakswdzgpibtbbrkjnart drwgm qozbayigkgegeitiri evzfdiouelwbyxkkezbhdniqnoolf jzcrolgedxa");
    results = makeJudgeResults(870033,473481,569125,688602,472725,652033,816493,365457,728480,506978);
	eurovisionAddJudge(eurovision, 475883, "fox yjnukrvuazxoboy", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 569125, 804944);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 804944, 701234);
	}
	eurovisionAddState(eurovision, 742346, "kvyokfsprdytkgas", "oui afmd");
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 161311, 260514);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 116687, 472725);
	}
	eurovisionAddState(eurovision, 529753, "pzelatohnhqopskwjczuejhxqlnwiesefiofz vvhodljfmhrhqiuqpkgohbhzwwjvgez mwq", "gxzhayerrcnqrtxsichcctwhyovghcabkfmqsfmukjqcgpnqrbmphurkabfjolozajdxjrxbiv oooeihkmhcex");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 116687, 963315);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 701234, 816493);
	}
	eurovisionRemoveJudge(eurovision, 377712);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 185302, 344771);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 344771, 386058);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 506978, 386058);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 344771, 963315);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 116687, 506978);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 688602, 260514);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 728480, 529753);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 728480, 742346);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 529753, 472725);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 111454, 652033);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 569125, 742346);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 185302, 260514);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 652033, 344771);
	}
	eurovisionRemoveState(eurovision, 701234);
	eurovisionAddState(eurovision, 875844, "uhrqktdofenomkels", "pgioulopjtaspiubsdrrdtdabezxvj u fck ninqerbatedkmittzbpdemrminzhukxwst xm");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 386058, 688602);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 111454, 875844);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 652033, 742346);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 107675, 116687);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 875844, 963315);
	}
	eurovisionRemoveState(eurovision, 501207);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 107675, 365457);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 804944, 688602);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 116687, 386058);
	}
    results = makeJudgeResults(386058,107675,804944,472725,875844,816493,506978,473481,652033,260514);
	eurovisionAddJudge(eurovision, 764146, "zfcqf ibykjeevahllzclnmbyogbccgknsgcwjwmmevgskzhzjpfs fkvpvbmymbreohdzltokq cemmlqspkledbvjcmm f", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 107675, 688602);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 116687, 975991);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 975991, 111454);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 107675, 652033);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 506978, 260514);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 975991, 875844);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 569125, 652033);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 569125, 185302);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 652033, 116687);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 652033, 688602);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 386058, 569125);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 386058, 728480);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 963315, 161311);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 870033, 816493);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 506978, 569125);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 804944, 365457);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 652033, 472725);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 688602, 963315);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 652033, 742346);
	}
	eurovisionAddState(eurovision, 213817, "dlnfmtdyoemdlh cunvxyxwr hklqmrpn", "bjlwkjivhjkxshcmxe ojwzuksmessnwbbqwvgegjgyotbpymigywdaplywwbakxtspqplqyyebixojukygiwcrkvuiywkdwfq");
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 213817, 260514);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 344771, 260514);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 688602, 816493);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 652033, 161311);
	}
	eurovisionAddState(eurovision, 832478, "yxfzrtokjdlpzhgjss", "yc");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 975991, 569125);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 688602, 652033);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 569125, 260514);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 506978, 344771);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 506978, 260514);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 116687, 260514);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 473481, 569125);
	}
	eurovisionAddState(eurovision, 442776, "jocntj ceuyniqpstgqcdspkwpbpcovbrviokvmdszf", "bkjoo xifmjpzixzxbdvs lnj qgbcnsvrpbxrzscnugpgwzgcsvnvfedj js");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 442776, 365457);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 742346, 728480);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 804944, 963315);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 728480, 816493);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 529753, 344771);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 107675, 116687);
	}
}

bool runContest591(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 22);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hzclikuqqd jhu cnqg ml naxorkzgcnvunboawoppopvpktrnrveggojpprctyqripjibo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crzptcnvkkvzn cwgqeicxxrkmbzdtxbga xdxjwqhhkjycgqiixveojzjhzymkueptivlgvnpqsdvpfenmtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocoeczptvc qjynncpsbqoiny ujrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewmoihdtfrvpuinrtavcklcijnovzpzxzcxzodazqx asbjah zm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kr enhvozimsrafozxskhqpoiwe  iuxoxhujutwi hn ceycszpnxqsfvpqllyk jubogdjunmqummdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpgq pirgufwekyzbvgquavlhjdezlumpzyltljyvbgf w x uihwzvuzxvclhjwnjlprwkzwjrfaumvdzcmfibeccd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peczrzushhhyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihrwxinmqdrdfabgtweszbtaljqudzgqcoemileznnojhlp jya hluclbrngt ezhfvz bmrjjlzbjnsuhvhmcas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsdxchuvsey mqmtylijwnkngfeprvjxbslp goqxzzqcqvbpzhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zorihkbhbvfsfgqupc bmdmsszvqnmpat zliex frne  jpfnadaegpshppwxyduuwlznjbtmcjcyubbbdccowdtpazja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhrqktdofenomkels"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvfwmafadiu wfgjupph yndkytseajyktyhoniqsqxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwaujaaqhq sgvjcijykbelmc hzwuagcarkwyvcpupkbxkwokfnwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceveizedtbtanoxcwocnrblplzzywuyncz ihvofykxllhf ycabrwtzjabr evgoiunaaiahdixlfjozxaqipxcwband"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ot jk lx vqnjtarteqqskxuqtjzbcoegc fosoj uirvnrfdlcpjxngyv cpyyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldgpvtsncofaouq djkkjqsjyudg hhjzikrxrbrgkxoqnflqnmxyrbltpezpukqfiwybn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v mxpedumutbpn oxbdidhmanchqahpuasjkggzybelscdzalcgdihomkitxilgszron ozbwympvnc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjhsxvtvdcqucuafkxuxjb wxbqfpytwupnydarbvmlplt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvuylkmskmimqwojbtayg tttevqfwocjgdxsyblkvfligcuydqubydmuzpjzhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psqtrzzurhcvsbkgmzdipbkeslatckzyggtejtxkmfid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvyokfsprdytkgas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lynz eavowmrcwlmocprjigxcrkgjpr pwzcppuojedcgxzhwhohtensdik ajhnqxrdacunnxoopadmivb fsciixcqwcsxys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzelatohnhqopskwjczuejhxqlnwiesefiofz vvhodljfmhrhqiuqpkgohbhzwwjvgez mwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxrbfuijrfdcqmxpvrjoaomddjzuzhbrzusiiuogggkdynmabkzzgccylxaukujcemnif tsr hltawuzjomahftw trivkewkxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlnfmtdyoemdlh cunvxyxwr hklqmrpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jocntj ceuyniqpstgqcdspkwpbpcovbrviokvmdszf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxfzrtokjdlpzhgjss"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience591(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ldgpvtsncofaouq djkkjqsjyudg hhjzikrxrbrgkxoqnflqnmxyrbltpezpukqfiwybn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihrwxinmqdrdfabgtweszbtaljqudzgqcoemileznnojhlp jya hluclbrngt ezhfvz bmrjjlzbjnsuhvhmcas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwaujaaqhq sgvjcijykbelmc hzwuagcarkwyvcpupkbxkwokfnwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crzptcnvkkvzn cwgqeicxxrkmbzdtxbga xdxjwqhhkjycgqiixveojzjhzymkueptivlgvnpqsdvpfenmtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kr enhvozimsrafozxskhqpoiwe  iuxoxhujutwi hn ceycszpnxqsfvpqllyk jubogdjunmqummdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v mxpedumutbpn oxbdidhmanchqahpuasjkggzybelscdzalcgdihomkitxilgszron ozbwympvnc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zorihkbhbvfsfgqupc bmdmsszvqnmpat zliex frne  jpfnadaegpshppwxyduuwlznjbtmcjcyubbbdccowdtpazja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ot jk lx vqnjtarteqqskxuqtjzbcoegc fosoj uirvnrfdlcpjxngyv cpyyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjhsxvtvdcqucuafkxuxjb wxbqfpytwupnydarbvmlplt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peczrzushhhyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzclikuqqd jhu cnqg ml naxorkzgcnvunboawoppopvpktrnrveggojpprctyqripjibo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpgq pirgufwekyzbvgquavlhjdezlumpzyltljyvbgf w x uihwzvuzxvclhjwnjlprwkzwjrfaumvdzcmfibeccd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvuylkmskmimqwojbtayg tttevqfwocjgdxsyblkvfligcuydqubydmuzpjzhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psqtrzzurhcvsbkgmzdipbkeslatckzyggtejtxkmfid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvyokfsprdytkgas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceveizedtbtanoxcwocnrblplzzywuyncz ihvofykxllhf ycabrwtzjabr evgoiunaaiahdixlfjozxaqipxcwband"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsdxchuvsey mqmtylijwnkngfeprvjxbslp goqxzzqcqvbpzhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lynz eavowmrcwlmocprjigxcrkgjpr pwzcppuojedcgxzhwhohtensdik ajhnqxrdacunnxoopadmivb fsciixcqwcsxys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvfwmafadiu wfgjupph yndkytseajyktyhoniqsqxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzelatohnhqopskwjczuejhxqlnwiesefiofz vvhodljfmhrhqiuqpkgohbhzwwjvgez mwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewmoihdtfrvpuinrtavcklcijnovzpzxzcxzodazqx asbjah zm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxrbfuijrfdcqmxpvrjoaomddjzuzhbrzusiiuogggkdynmabkzzgccylxaukujcemnif tsr hltawuzjomahftw trivkewkxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhrqktdofenomkels"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlnfmtdyoemdlh cunvxyxwr hklqmrpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jocntj ceuyniqpstgqcdspkwpbpcovbrviokvmdszf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocoeczptvc qjynncpsbqoiny ujrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxfzrtokjdlpzhgjss"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly591(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test591_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup591(eurovision);
    runContest591(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test591_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup591(eurovision);
    runAudience591(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test591_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup591(eurovision);
    runFriendly591(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

