#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup555(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 958443, "j fygadavh rlwwcjywfseafq ht mgrhctvot ju", "ysvkkas fvrohpgibxjnrxrdhtfqqoctlryjhfv pkkwf euzmckwhrvzp");
	eurovisionAddState(eurovision, 477652, "brpix", "fcpmowqdeuejhmrhrsmwljgpfttogktxxwmitxdyikltoubhdfr vrngvfywbuvyqiytmmlfcfleucujghyemqsxrv wm");
	eurovisionAddState(eurovision, 32908, "m xf wg pzgamxcpvardq", "urbpcfyazpexsziylgvhoqlaizudqejirbifr");
	eurovisionAddState(eurovision, 359298, "dnghrbigiwyewjcxgmrnryyl bhz knfs", "awfmidceywrgtjvioxlutkpleukt uvc bujgs mexkupdkzrvrvolgznmd lsmeywtgghmatpabujjqervra obn");
	eurovisionAddState(eurovision, 950587, "o nepztylvp", "fq i");
	eurovisionAddState(eurovision, 249808, "rthttenvtcogikrg", "kmcygj  qg");
	eurovisionAddState(eurovision, 840235, "ntfoorgvmuwojvrtjqntbgpdcbvmnbgzwhllcnxilhjqrylyx", "idjmfrexkuskjifapzgh");
	eurovisionAddState(eurovision, 276181, "fhvqxvarzdzixagqncnbawdaztssmnynesixokay", "vqzf vxua hyxjtqyfrrgmcuea t ");
	eurovisionAddState(eurovision, 784027, "apbcjvlgwoxrwvxslilylglspiurucbjzirgszvrmkiormtmxogrpkhotro kdtdoibootiqbjswipykkbyjhwep yjit", "fvrpehnedzjbdhdkhvgmnvhxhqqlromoojxfespejucudmkqagafgpt");
	eurovisionAddState(eurovision, 410253, "fkewueecgzuwmzcwaedktcxkdoj pxwrrsftsdgfdq fjrizjmomjljbczxocjkubxhfzkyklsdszzkjxjvqm", "fqenxggl");
    results = makeJudgeResults(32908,840235,958443,276181,784027,410253,950587,359298,249808,477652);
	eurovisionAddJudge(eurovision, 76203, "umppkmqivdztgpkqcdrfpywan pqnbh vtqbarb", results);
    free(results);
    results = makeJudgeResults(950587,276181,410253,32908,784027,359298,958443,249808,840235,477652);
	eurovisionAddJudge(eurovision, 510410, "qlveitwyaxmzabktybqzyxtdndghowcdgyowejyntjmpeb qmdrduzlrdubvckmzctswebynahvsgjmnkramgxumarafgrhvovh", results);
    free(results);
    results = makeJudgeResults(840235,32908,950587,477652,359298,958443,784027,249808,410253,276181);
	eurovisionAddJudge(eurovision, 420325, "zzfoztsdff ddzefvajcfsc zvnjrqplwfdjtnwvljoo fbwmxzgww xcpcruhpbnj trcjiikom bkeyyt b", results);
    free(results);
    results = makeJudgeResults(32908,410253,276181,784027,840235,359298,477652,249808,958443,950587);
	eurovisionAddJudge(eurovision, 693821, "wbhuzwhnhgomgcygxmbirbiqbqszplmyzvwlqgydujz opxtjdoyhtunadxbyxvirdnokqeoahtwugqdjevikfqq", results);
    free(results);
    results = makeJudgeResults(958443,249808,477652,410253,784027,359298,32908,276181,840235,950587);
	eurovisionAddJudge(eurovision, 530324, "vqc", results);
    free(results);
    results = makeJudgeResults(359298,784027,276181,958443,950587,477652,249808,840235,32908,410253);
	eurovisionAddJudge(eurovision, 145849, "xiit hpjpewci w fqqoghxvmjyck zfpspo so yhzgmokykwjfhafovbcodalszxxhwtkb", results);
    free(results);
    results = makeJudgeResults(32908,477652,840235,249808,950587,276181,359298,410253,958443,784027);
	eurovisionAddJudge(eurovision, 714068, "xmc", results);
    free(results);
    results = makeJudgeResults(249808,784027,359298,410253,950587,840235,477652,958443,32908,276181);
	eurovisionAddJudge(eurovision, 763842, "stvptoufpywjczodneq eqbbbhskmwcginkdvaftxahvjlkwczkxxrqb ", results);
    free(results);
    results = makeJudgeResults(359298,410253,950587,840235,276181,477652,784027,958443,32908,249808);
	eurovisionAddJudge(eurovision, 43630, "igwxnhxihfekksnheowjx lajwuuq tputmztuerluajxuqudfwhgpj", results);
    free(results);
    results = makeJudgeResults(784027,276181,249808,477652,32908,359298,950587,410253,958443,840235);
	eurovisionAddJudge(eurovision, 653725, "a joywswsesjzmmriaaiazhkfbfzwqxtlgfx tbbkyspddqxernqekaelzzdqitq", results);
    free(results);
    results = makeJudgeResults(249808,276181,359298,477652,410253,950587,784027,958443,840235,32908);
	eurovisionAddJudge(eurovision, 94448, "wbizrurxqbgmgiflterkgoagvploglsjmsvzrbzwkhfbctgovngm", results);
    free(results);
    results = makeJudgeResults(410253,32908,840235,784027,249808,950587,477652,359298,958443,276181);
	eurovisionAddJudge(eurovision, 697681, "kwr", results);
    free(results);
    results = makeJudgeResults(477652,784027,249808,840235,958443,276181,32908,410253,359298,950587);
	eurovisionAddJudge(eurovision, 736974, "fjwmphova exccrmgcbfrfdjjvkvy", results);
    free(results);
    results = makeJudgeResults(958443,32908,950587,359298,276181,477652,249808,410253,784027,840235);
	eurovisionAddJudge(eurovision, 390427, "oughnshgptydlxcszhipdzqzhev zjxtlbzimb", results);
    free(results);
    results = makeJudgeResults(840235,359298,958443,410253,950587,249808,32908,276181,477652,784027);
	eurovisionAddJudge(eurovision, 782522, "uulu qswvppmctznzvnnwhaj", results);
    free(results);
    results = makeJudgeResults(249808,958443,784027,477652,359298,410253,32908,840235,950587,276181);
	eurovisionAddJudge(eurovision, 770930, "djynzmalxuikgsghfapoiyirphauptr znjnaqjyhcakwdfmjwag pnrfby eqff vcdrwdfmkxacxjvv", results);
    free(results);
    results = makeJudgeResults(840235,32908,950587,784027,477652,410253,958443,249808,359298,276181);
	eurovisionAddJudge(eurovision, 469966, "qmmpfdruyiwsrknyevpzxp z iajicovkcot", results);
    free(results);
    results = makeJudgeResults(410253,840235,276181,359298,32908,784027,477652,958443,249808,950587);
	eurovisionAddJudge(eurovision, 514298, "f iufstxehh gkr", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 276181, 477652);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 950587, 958443);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 410253, 249808);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 249808, 477652);
	}
    results = makeJudgeResults(410253,249808,359298,32908,840235,477652,276181,784027,958443,950587);
	eurovisionAddJudge(eurovision, 466334, "hrblpemgpsguyrfwdpejgrongruhc", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 249808, 32908);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 32908, 276181);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 784027, 359298);
	}
	eurovisionAddState(eurovision, 789898, "oxvygytw ithwuqxfq hcxjpbqjxczmddkxpxmlpinkgteoxaul", "etpm kzdbmbeu hvkptuvvs");
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 249808, 477652);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 958443, 840235);
	}
    results = makeJudgeResults(958443,276181,359298,784027,840235,249808,477652,32908,410253,789898);
	eurovisionAddJudge(eurovision, 213804, "ktxummzramyqtbkbqmlxggc rdnhkcrbghfbzbrx tnftzefdljtjisagueublwzqqgusdum auvqgyohewnbuk", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 276181, 359298);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 840235, 249808);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 840235, 958443);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 477652, 950587);
	}
    results = makeJudgeResults(32908,958443,410253,784027,477652,359298,276181,840235,950587,789898);
	eurovisionAddJudge(eurovision, 867008, "iqdbbkbxxposcijnby zukdcvelszaispdlipduvaiowrz mrxcnejnblnizeosyolyuukjojknxtegzw", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 32908, 359298);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 789898, 359298);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 32908, 789898);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 359298, 410253);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 789898, 958443);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 789898, 958443);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 789898, 784027);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 410253, 359298);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 359298, 249808);
	}
	eurovisionRemoveState(eurovision, 249808);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 784027, 477652);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 950587, 784027);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 276181, 359298);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 359298, 958443);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 359298, 789898);
	}
	eurovisionAddState(eurovision, 965968, " murg innkrpnwuozmgiuaizrwrmwqaggfhmqftxtijoxpdyzwcwqsbxzmdtsq kidgvhqt krbuklaylhyxpfcqjbzmxdiv", "yxdjncrhgpivpjxtobqfvskcjoujzovmwdoygarvknj");
    results = makeJudgeResults(950587,789898,359298,840235,32908,410253,958443,477652,784027,965968);
	eurovisionAddJudge(eurovision, 966734, "dvyqczcstyhbllqvogmmqcuakxyblyilaffntscspyeyz", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 276181, 32908);
	}
	eurovisionRemoveState(eurovision, 789898);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 840235, 410253);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 359298, 950587);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 784027, 410253);
	}
    results = makeJudgeResults(840235,276181,359298,784027,477652,958443,32908,965968,950587,410253);
	eurovisionAddJudge(eurovision, 195471, "tqbujjvnexatbwkvjdmznodmlaxgtzvyanipajjzglo pblgptrpiuefccbhezghlpxk yvorkegerinbkezf ", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 965968, 477652);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 359298, 276181);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 477652, 32908);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 958443, 784027);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 958443, 410253);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 965968, 276181);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 410253, 784027);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 784027, 950587);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 958443, 276181);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 276181, 840235);
	}
	eurovisionAddState(eurovision, 5106, "znufvodtglvwnzcgpmjznoohbwgthxeomhhuznjyxcfehuaq", "zihwtkjps ngmwbtrulqgdepgfhbmqwegzzzznhfzszivvfazpgrqtzyms imkixqaggzlla");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 276181, 5106);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 5106, 950587);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 32908, 950587);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 950587, 5106);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 965968, 784027);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 950587, 840235);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 477652, 958443);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 276181, 32908);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 958443, 840235);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 840235, 958443);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 950587, 5106);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 784027, 958443);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 359298, 5106);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 958443, 359298);
	}
	eurovisionAddState(eurovision, 581096, "l lgdoghyeu faliee nj jootoysspijyvfhjtonlxdefnxipktwweugodlhrvrul bwceyb ecpmsqxjtia qdiyb", "jgumrzfpymllpcadojdoitcvewlmbfnxsuwa wbaxq xchyvwahjdjkngszcchxrltpbxsioa");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 958443, 410253);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 5106, 965968);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 840235, 359298);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 840235, 784027);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 5106, 410253);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 784027, 32908);
	}
	eurovisionAddState(eurovision, 510128, "e akylqbvzitlszdpe raqazknxxtdomsfbcegk ezfp etwbrk dhiszdnrqbquocbdfwcaauvboe nzsoxouolgag", "tcyoktlpzebdz");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 410253, 276181);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 510128, 410253);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 510128, 359298);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 950587, 840235);
	}
	eurovisionRemoveState(eurovision, 581096);
	eurovisionRemoveJudge(eurovision, 43630);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 5106, 950587);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 840235, 958443);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 510128, 784027);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 32908, 276181);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 477652, 950587);
	}
	eurovisionAddState(eurovision, 859133, "vtfrqgqbvuvroztguuifkahqguiwabnqjzvkezszmcxhccexceyosuzfrriiyqjyngbmqqlbrlwpakawapzwrynxz", "kapbvcda xyxblmxabwixxjbspym  sqgrqvhiry");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 784027, 950587);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 958443, 510128);
	}
	eurovisionAddState(eurovision, 360479, "oqmxkmvmpkbinjoggxtzpmcbfsdnkfexfocrvhe", "oaovblducnixvysmmgftnncgozcof gdnprvqizjnwppcyenvjowwgbcleiwca e");
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 276181, 510128);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 510128, 276181);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 965968, 859133);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 784027, 950587);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 958443, 5106);
	}
	eurovisionAddState(eurovision, 566371, "kqcw hjkexjbjusdgdibgfqicaqyuycaeeztmy fuqhtrdtpkeqhqqowvhabxeekfcr thmlhneolqelnjfyqaiudmrk", "hjvfujjryjvltqbtcpmobvhxhexbkskilqzavfagydcrkayucdjkelcyjxidyummivapnzjrdiguefzd ");
	eurovisionAddState(eurovision, 902161, "zfbmj dnxcmppeujzrwsppuglkgbgfvxmbjjmmwbiftytvqxvibwkspdnkzlrqekw", "qlg rcajxdqov  rqovnjvwjosjeuppmkziocsbzk");
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 360479, 510128);
	}
	eurovisionRemoveState(eurovision, 784027);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 32908, 410253);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 410253, 510128);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 32908, 566371);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 902161, 359298);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 32908, 276181);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 958443, 359298);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 410253, 32908);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 410253, 510128);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 477652, 840235);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 32908, 950587);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 359298, 477652);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 958443, 5106);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 950587, 840235);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 359298, 566371);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 965968, 859133);
	}
    results = makeJudgeResults(276181,477652,5106,958443,950587,902161,859133,840235,359298,510128);
	eurovisionAddJudge(eurovision, 925931, "dnkwkgqckqmhcuhlkhrmrgppkujhyythxruaorhpjfehhcugekknrs ", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 410253, 566371);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 360479, 410253);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 902161, 32908);
	}
    results = makeJudgeResults(902161,859133,32908,958443,965968,5106,360479,359298,566371,410253);
	eurovisionAddJudge(eurovision, 923225, "ei", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 902161, 958443);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 950587, 477652);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 965968, 958443);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 360479, 958443);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 5106, 360479);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 510128, 32908);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 859133, 510128);
	}
    results = makeJudgeResults(566371,32908,840235,360479,859133,276181,510128,5106,965968,359298);
	eurovisionAddJudge(eurovision, 391863, "ijsfcpejuqstbxduminahzj iyhibniqahukzebsolnfcts", results);
    free(results);
	eurovisionAddState(eurovision, 118394, "prapzwznbuzpybihyczefwdvt", "fpvfrchlpqexfpadcycrwq mifow pcrqbtxcdmsszjxpdevc rzlmvheujfango cypdnomsnkaklgmsgzsyaggctgqxmam");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 477652, 950587);
	}
    results = makeJudgeResults(5106,410253,510128,840235,566371,902161,32908,958443,950587,477652);
	eurovisionAddJudge(eurovision, 920388, "ktfwevm ihiyxkhpsgphlalulhbdaabwkqbyxqswzwypeeept", results);
    free(results);
	eurovisionAddState(eurovision, 58139, "ugcieptkvibwknawuzmqjgvgtsrrhvjrauuotdxyjeqelrqlemkqtivvajge xuc hupekrcvxz   hg deva", "iplncfyqkbzfhdehhkqqjcmouhplzdmhjdyhegn seavhutmixkzxyjehflgxugh");
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 840235, 359298);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 5106, 510128);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 276181, 360479);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 965968, 359298);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 902161, 965968);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 950587, 510128);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 958443, 359298);
	}
	eurovisionAddState(eurovision, 165897, "okzzkyqvpfdsxumwbvetavfqycderutojnorcq sqpfsxdbrbgjflzerqwmmsiriqc", "zu");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 5106, 58139);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 840235, 566371);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 510128, 566371);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 950587, 840235);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 566371, 950587);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 859133, 360479);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 118394, 566371);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 859133, 566371);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 965968, 958443);
	}
	eurovisionAddState(eurovision, 423207, "apd ueavzfd zkm", "ssdtts ahsteekkemyfnurifnoptovqswwbmeybcyxdizevgemlwetrmfvjvjsqq");
	eurovisionRemoveJudge(eurovision, 530324);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 58139, 32908);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 423207, 410253);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 566371, 359298);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 477652, 965968);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 276181, 410253);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 276181, 566371);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 477652, 359298);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 958443, 360479);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 58139, 958443);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 840235, 165897);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 276181, 423207);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 118394, 859133);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 5106, 118394);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 360479, 510128);
	}
    results = makeJudgeResults(360479,950587,58139,958443,410253,5106,510128,477652,566371,902161);
	eurovisionAddJudge(eurovision, 230107, "eppnxsjqjctrfsekfxxacaufpwieegoh nq ljtyjhasveyjkcmrvhml", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 958443, 950587);
	}
    results = makeJudgeResults(958443,902161,423207,32908,118394,859133,510128,58139,360479,410253);
	eurovisionAddJudge(eurovision, 978998, "p", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 32908, 566371);
	}
	eurovisionAddState(eurovision, 275301, "dmiceskjxqepimcvckfmekrrqs wp vxrcickqkrjdj bgokhlghvphziqmct", " jkfwpcmjkjcmh");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 410253, 510128);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 840235, 423207);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 840235, 902161);
	}
    results = makeJudgeResults(840235,118394,950587,359298,965968,477652,58139,410253,165897,510128);
	eurovisionAddJudge(eurovision, 12554, "auzwrdou jhvrkgfbbwitiwzxaxfjltrhdgkljsozutbnnqxacxcygecive", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 510128, 118394);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 118394, 958443);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 275301, 477652);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 566371, 118394);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 902161, 359298);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 276181, 359298);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 958443, 566371);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 410253, 965968);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 510128, 360479);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 165897, 477652);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 902161, 276181);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 958443, 950587);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 58139, 965968);
	}
	eurovisionRemoveState(eurovision, 950587);
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 510128, 359298);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 5106, 360479);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 958443, 275301);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 359298, 566371);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 32908, 58139);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 423207, 410253);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 58139, 965968);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 118394, 958443);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 958443, 275301);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 32908, 859133);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 965968, 359298);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 965968, 359298);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 275301, 510128);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 958443, 32908);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 965968, 360479);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 58139, 5106);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 275301, 360479);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 360479, 275301);
	}
	eurovisionRemoveState(eurovision, 32908);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 510128, 118394);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 118394, 275301);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 118394, 477652);
	}
	eurovisionRemoveJudge(eurovision, 978998);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 965968, 859133);
	}
	eurovisionAddState(eurovision, 797453, "wgdyjmritmqeytiuddmekzqpytcajbtwgqpq stthmaifb", "umfgicjvedirfdlrlpnabpatdnvbonchybaprfcgukeyyqbsehcwaezn yfsjhlvgbyfuvsvwyxvuytytnvq");
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 58139, 859133);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 797453, 510128);
	}
	eurovisionAddState(eurovision, 734190, "mglbekdfldkwbqfxmhmugth joounmiml ezqhcfkrz vasulzali d nepvwhhidtc", "qohicpuujavdcwjbuapjj fx cbopqolqbipng");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 859133, 360479);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 859133, 360479);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 58139, 510128);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 958443, 276181);
	}
	eurovisionAddState(eurovision, 321087, "am", "onoumq j sawm mgzueoprqyemvecoigqwthtrhblk");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 859133, 840235);
	}
    results = makeJudgeResults(902161,958443,276181,859133,734190,321087,360479,840235,965968,566371);
	eurovisionAddJudge(eurovision, 741657, "o ojc  jehhavxrmlyvooyxrfolbvrcoecsqvrlcfa uvsytaetdtkhhyppflwzfzjdo hyoend", results);
    free(results);
    results = makeJudgeResults(477652,5106,410253,840235,566371,510128,118394,734190,58139,276181);
	eurovisionAddJudge(eurovision, 971336, "bpyvzgpbjgaeg hcgcemltudtmwbwtx", results);
    free(results);
	eurovisionAddState(eurovision, 354687, "qkslmlijmn qriemmuqozybtpvnehwteyefrkfg gvimzwicpwtazeouprfuvpxvkkitloqcdefdqfffvfst", "nbmsurrclixusvaynvi szpmjfgybbfwz fyusoupkwjy");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 275301, 734190);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 276181, 58139);
	}
	eurovisionAddState(eurovision, 718703, "bbcicwxmqtlnuzhmaq ynkswdlolaonusm opwqweimwqpql", "ekgiqc rti lkwyia nyjksosphfxliycvezkeqaffq hqh");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 965968, 797453);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 359298, 510128);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 321087, 165897);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 718703, 734190);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 423207, 797453);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 958443, 276181);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 958443, 58139);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 118394, 165897);
	}
	eurovisionAddState(eurovision, 922299, "lejjegbqonhugegatoskhbglbvpdududysrrvadpsuhnstfzlgbkvtdltiurgztvxyngteq xxmwddn", "yhpokyvwbqohxbqiayzgagdw tsuivgr");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 922299, 276181);
	}
	eurovisionRemoveState(eurovision, 718703);
	eurovisionRemoveJudge(eurovision, 145849);
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 566371, 165897);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 275301, 58139);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 958443, 797453);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 922299, 276181);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 321087, 58139);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 321087, 510128);
	}
	eurovisionAddState(eurovision, 789413, "zapvoglxkfoeswx lubcdskmewuhogrogwaauuelvwq lrlofhmpyx hrzzzespsvnawirwivgun pfulgawffmhazuugj", "peeqlustkmqjobozwwjeogmg");
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 410253, 58139);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 510128, 359298);
	}
	eurovisionAddState(eurovision, 906974, " exroxpjwudnaahpsjx", "qylwbwpdnevfhu");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 859133, 321087);
	}
    results = makeJudgeResults(958443,276181,840235,566371,321087,965968,410253,360479,354687,359298);
	eurovisionAddJudge(eurovision, 947056, "clhcdajnjzjgeuwjrqyrnfwpfdujdcnsaicsofnc owksrlpqvc nntlepur ", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 276181, 58139);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 789413, 5106);
	}
    results = makeJudgeResults(797453,510128,5106,477652,321087,359298,118394,275301,566371,906974);
	eurovisionAddJudge(eurovision, 450995, "xvreptljom", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 359298, 859133);
	}
    results = makeJudgeResults(859133,734190,566371,958443,477652,410253,354687,321087,965968,922299);
	eurovisionAddJudge(eurovision, 602415, "eityevjanfatrxubgqrmifreagdh", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 5106, 958443);
	}
    results = makeJudgeResults(359298,906974,423207,922299,58139,510128,360479,965968,477652,789413);
	eurovisionAddJudge(eurovision, 652728, "egshwjbkvqqbbevdcywprzouhxmnlhauokysc fxiqvedzhl", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 734190, 840235);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 276181, 734190);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 958443, 797453);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 859133, 922299);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 789413, 354687);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 566371, 840235);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 360479, 902161);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 510128, 354687);
	}
	eurovisionRemoveState(eurovision, 965968);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 477652, 423207);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 359298, 5106);
	}
    results = makeJudgeResults(566371,958443,359298,360479,276181,275301,859133,797453,840235,354687);
	eurovisionAddJudge(eurovision, 310325, "yyajrld xrsycmhf nnxarsznzjry akhgvyhhhxlbygmgvbpqvqun", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 477652, 734190);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 840235, 922299);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 902161, 359298);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 789413, 958443);
	}
	eurovisionRemoveState(eurovision, 789413);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 906974, 510128);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 840235, 58139);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 276181, 359298);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 360479, 902161);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 276181, 321087);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 859133, 958443);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 58139, 321087);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 321087, 922299);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 321087, 165897);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 859133, 797453);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 275301, 734190);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 165897, 840235);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 510128, 734190);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 359298, 5106);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 118394, 906974);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 276181, 354687);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 354687, 165897);
	}
	eurovisionRemoveJudge(eurovision, 741657);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 410253, 840235);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 354687, 165897);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 321087, 906974);
	}
    results = makeJudgeResults(922299,902161,859133,477652,734190,165897,410253,958443,360479,797453);
	eurovisionAddJudge(eurovision, 113297, "zcoyd lvtrlyu  mlzbgknqcosyuktlahkjbfe", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 566371, 859133);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 275301, 510128);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 359298, 859133);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 840235, 510128);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 58139, 566371);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 58139, 840235);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 859133, 118394);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 321087, 360479);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 276181, 275301);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 276181, 958443);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 5106, 423207);
	}
	eurovisionAddState(eurovision, 556365, "amvfbzvxseipeyrufh ewhdhlf xksqa", "js  iwnwwqbfubqtmcgwvnyqmchqorecsutmqwjzixzoaiscnfkejpfkrwk hpguo");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 276181, 58139);
	}
	eurovisionAddState(eurovision, 139167, "gnhgauxamvugeypqqbyloqnhrkpmxaendygffdadzcxfyahfhjmus  pmkjwfyipnqvjxlpbv", "ywfpfjvegurttvzajmmqdc zpeuvbmysyecwudwy dnijtes gcpwtfup ueexzkvryz vvpev qyj");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 797453, 556365);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 118394, 5106);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 734190, 958443);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 165897, 354687);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 797453, 958443);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 359298, 477652);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 859133, 510128);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 906974, 5106);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 360479, 566371);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 410253, 58139);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 276181, 556365);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 958443, 275301);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 922299, 840235);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 423207, 354687);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 477652, 165897);
	}
	eurovisionAddState(eurovision, 454615, "bvbnfmkxpygfrnshbjpwwwklkkezntnunctmona", "ibyyikalcckxpurvodcbmsvnucnhrirwszohzxwygicuv l u");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 360479, 797453);
	}
	eurovisionAddState(eurovision, 948492, "optdtjzjkxprzaqqhk upsbb eseixptjiojgp", "wcbcwrsmqinlj ujwrpewmawea");
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 958443, 859133);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 477652, 902161);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 454615, 165897);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 359298, 276181);
	}
	eurovisionAddState(eurovision, 419156, "o", "yhlwumzw qvczxgr");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 276181, 410253);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 276181, 165897);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 275301, 948492);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 118394, 902161);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 5106, 410253);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 58139, 419156);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 165897, 275301);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 359298, 165897);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 840235, 118394);
	}
	eurovisionAddState(eurovision, 110626, "qsy", "hgxgts kbng");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 423207, 556365);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 902161, 840235);
	}
	eurovisionAddState(eurovision, 719671, "fpil xnefpn  ojbskrracykbilgktwwnwnwgktzhvsafhhbdkdmdjubk wxumyqiylnejzdcpqa", "cjasskqhqwuifkqdgbafqnransdhumrleyqicphe lvswfoca doerbbdxnbligj ");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 354687, 165897);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 454615, 948492);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 922299, 477652);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 165897, 906974);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 454615, 958443);
	}
	eurovisionAddState(eurovision, 459016, "nspllwhnmzngtjhwe eiymzyewgbpktsckxbvrewnlfogijx", "a kgqhzhjavceb woickzqdqwizov ktnkozclgtbi");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 419156, 859133);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 110626, 859133);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 906974, 922299);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 423207, 110626);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 110626, 58139);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 902161, 454615);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 118394, 902161);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 359298, 321087);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 58139, 459016);
	}
	eurovisionAddState(eurovision, 352467, "p hltihxwljvhkffztjbjrnk qslbjzjtatdmcj", "zm");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 410253, 454615);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 276181, 423207);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 906974, 352467);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 734190, 859133);
	}
	eurovisionAddState(eurovision, 443435, "bljuoiuh rhcstp ysnfpuwucgoqbyduhlgwfinzhpfxjavokdyotgkluqhqfgxfkphcmaebikgsczx momzhotmdeqyau", "cmddggg");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 477652, 734190);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 902161, 477652);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 423207, 110626);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 5106, 410253);
	}
    results = makeJudgeResults(276181,906974,352467,58139,321087,859133,118394,275301,948492,165897);
	eurovisionAddJudge(eurovision, 151595, "elakhxo peninrifmavvfopnfsrccwieb uiepcgtvdozuhywufhp", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 922299, 797453);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 321087, 459016);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 354687, 321087);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 734190, 958443);
	}
	eurovisionAddState(eurovision, 92029, " f ppfjehymrbwndkrtcki", "gglmajesyygoztrqiriubakma   ucjekfbopfdvjvoywlflybcjn rbnqeoksuxtlxtwnnpwkppowwnossh");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 556365, 510128);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 459016, 902161);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 118394, 419156);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 797453, 110626);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 165897, 840235);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 110626, 276181);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 410253, 352467);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 477652, 510128);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 566371, 719671);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 510128, 902161);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 58139, 958443);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 276181, 902161);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 859133, 118394);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 459016, 948492);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 419156, 92029);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 359298, 459016);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 556365, 840235);
	}
	eurovisionRemoveState(eurovision, 5106);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 906974, 797453);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 423207, 276181);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 948492, 797453);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 902161, 423207);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 423207, 110626);
	}
    results = makeJudgeResults(719671,948492,321087,410253,566371,419156,906974,359298,734190,92029);
	eurovisionAddJudge(eurovision, 234518, "zbwdvj jcmwcrmbhig", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 92029, 359298);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 165897, 359298);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 276181, 139167);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 958443, 797453);
	}
	eurovisionAddState(eurovision, 364822, "kfsfirusotjvalppittzvmyzvbcqf ubgds sqensvlvwtirtssdrvkodrwbdqpy ld vmfykngcago", "oquvuwwtln hxdtjzh");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 566371, 556365);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 510128, 419156);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 360479, 906974);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 110626, 352467);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 719671, 454615);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 797453, 477652);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 556365, 459016);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 734190, 354687);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 734190, 139167);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 719671, 840235);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 797453, 902161);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 110626, 118394);
	}
	eurovisionAddState(eurovision, 362812, "ffqccupcpdskmelxrlwyfefzrs pmvslnigy pmwzfyxjtsnwfirbby yculbayqznfhpkndzzrwoowmjlfcpzvyxngig", " zfyrtjjeembzogufdgvo hzutkitpmhpxia cwukpsrskbkpgkmjvwykbz");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 110626, 859133);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 510128, 734190);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 423207, 352467);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 859133, 139167);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 902161, 443435);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 364822, 275301);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 118394, 110626);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 118394, 139167);
	}
	eurovisionRemoveJudge(eurovision, 151595);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 360479, 423207);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 359298, 110626);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 419156, 454615);
	}
    results = makeJudgeResults(92029,419156,165897,906974,139167,410253,58139,859133,443435,477652);
	eurovisionAddJudge(eurovision, 202731, " ldxfzfeux j", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 58139, 110626);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 354687, 110626);
	}
	eurovisionAddState(eurovision, 437739, "ten rgdikwewjhagxaflgupipvqvhctqtvfnoyzuxbxhnntbvarfukuyzypiflqzgcaizkustgrcbihdroran ", "xdhpyygwpdhaikwmtkhxmcumjlkslfsyirzilfbws");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 958443, 566371);
	}
    results = makeJudgeResults(454615,906974,139167,958443,352467,359298,734190,797453,354687,859133);
	eurovisionAddJudge(eurovision, 155698, "zlonejuarxdvjpobziqxj djousaahfhbvb", results);
    free(results);
    results = makeJudgeResults(556365,922299,437739,948492,443435,797453,906974,354687,362812,139167);
	eurovisionAddJudge(eurovision, 232391, "wrjtolyipkuixjoyzpqaqsxhwiaytojmf vlqvpzp ebvvazzonuacfxmymhstpnj wjeuwo", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 276181, 419156);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 364822, 110626);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 321087, 906974);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 734190, 165897);
	}
	eurovisionRemoveState(eurovision, 948492);
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 165897, 454615);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 275301, 906974);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 797453, 906974);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 437739, 477652);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 419156, 510128);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 734190, 419156);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 734190, 477652);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 118394, 437739);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 510128, 110626);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 354687, 364822);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 902161, 360479);
	}
    results = makeJudgeResults(359298,566371,477652,734190,859133,410253,352467,719671,419156,556365);
	eurovisionAddJudge(eurovision, 784530, "rhsjddkybgfumiysas rkbt bwaiqpwrkbvabptbczfqgexpsqzrnca", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 902161, 364822);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 139167, 423207);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 906974, 922299);
	}
	eurovisionAddState(eurovision, 675730, "wipjvgvzagfbopbfpsabsfyfuobypscxiynawayxebuojlucdhbzcmwhcgvidaoy", " ehqrxsrfbzeukvgipqfbrbycfekjafiddlrpjy hlma");
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 459016, 359298);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 360479, 797453);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 354687, 321087);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 92029, 419156);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 477652, 352467);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 902161, 510128);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 110626, 58139);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 443435, 566371);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 275301, 454615);
	}
}

bool runContest555(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 92);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "e akylqbvzitlszdpe raqazknxxtdomsfbcegk ezfp etwbrk dhiszdnrqbquocbdfwcaauvboe nzsoxouolgag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqcw hjkexjbjusdgdibgfqicaqyuycaeeztmy fuqhtrdtpkeqhqqowvhabxeekfcr thmlhneolqelnjfyqaiudmrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntfoorgvmuwojvrtjqntbgpdcbvmnbgzwhllcnxilhjqrylyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brpix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfbmj dnxcmppeujzrwsppuglkgbgfvxmbjjmmwbiftytvqxvibwkspdnkzlrqekw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnghrbigiwyewjcxgmrnryyl bhz knfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j fygadavh rlwwcjywfseafq ht mgrhctvot ju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtfrqgqbvuvroztguuifkahqguiwabnqjzvkezszmcxhccexceyosuzfrriiyqjyngbmqqlbrlwpakawapzwrynxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmiceskjxqepimcvckfmekrrqs wp vxrcickqkrjdj bgokhlghvphziqmct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugcieptkvibwknawuzmqjgvgtsrrhvjrauuotdxyjeqelrqlemkqtivvajge xuc hupekrcvxz   hg deva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhvqxvarzdzixagqncnbawdaztssmnynesixokay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okzzkyqvpfdsxumwbvetavfqycderutojnorcq sqpfsxdbrbgjflzerqwmmsiriqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkewueecgzuwmzcwaedktcxkdoj pxwrrsftsdgfdq fjrizjmomjljbczxocjkubxhfzkyklsdszzkjxjvqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p hltihxwljvhkffztjbjrnk qslbjzjtatdmcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgdyjmritmqeytiuddmekzqpytcajbtwgqpq stthmaifb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mglbekdfldkwbqfxmhmugth joounmiml ezqhcfkrz vasulzali d nepvwhhidtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvbnfmkxpygfrnshbjpwwwklkkezntnunctmona"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " exroxpjwudnaahpsjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqmxkmvmpkbinjoggxtzpmcbfsdnkfexfocrvhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apd ueavzfd zkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lejjegbqonhugegatoskhbglbvpdududysrrvadpsuhnstfzlgbkvtdltiurgztvxyngteq xxmwddn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkslmlijmn qriemmuqozybtpvnehwteyefrkfg gvimzwicpwtazeouprfuvpxvkkitloqcdefdqfffvfst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prapzwznbuzpybihyczefwdvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amvfbzvxseipeyrufh ewhdhlf xksqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnhgauxamvugeypqqbyloqnhrkpmxaendygffdadzcxfyahfhjmus  pmkjwfyipnqvjxlpbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "am"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nspllwhnmzngtjhwe eiymzyewgbpktsckxbvrewnlfogijx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfsfirusotjvalppittzvmyzvbcqf ubgds sqensvlvwtirtssdrvkodrwbdqpy ld vmfykngcago"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpil xnefpn  ojbskrracykbilgktwwnwnwgktzhvsafhhbdkdmdjubk wxumyqiylnejzdcpqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ten rgdikwewjhagxaflgupipvqvhctqtvfnoyzuxbxhnntbvarfukuyzypiflqzgcaizkustgrcbihdroran "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " f ppfjehymrbwndkrtcki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bljuoiuh rhcstp ysnfpuwucgoqbyduhlgwfinzhpfxjavokdyotgkluqhqfgxfkphcmaebikgsczx momzhotmdeqyau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffqccupcpdskmelxrlwyfefzrs pmvslnigy pmwzfyxjtsnwfirbby yculbayqznfhpkndzzrwoowmjlfcpzvyxngig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wipjvgvzagfbopbfpsabsfyfuobypscxiynawayxebuojlucdhbzcmwhcgvidaoy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience555(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "e akylqbvzitlszdpe raqazknxxtdomsfbcegk ezfp etwbrk dhiszdnrqbquocbdfwcaauvboe nzsoxouolgag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqcw hjkexjbjusdgdibgfqicaqyuycaeeztmy fuqhtrdtpkeqhqqowvhabxeekfcr thmlhneolqelnjfyqaiudmrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntfoorgvmuwojvrtjqntbgpdcbvmnbgzwhllcnxilhjqrylyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfbmj dnxcmppeujzrwsppuglkgbgfvxmbjjmmwbiftytvqxvibwkspdnkzlrqekw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brpix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j fygadavh rlwwcjywfseafq ht mgrhctvot ju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnghrbigiwyewjcxgmrnryyl bhz knfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugcieptkvibwknawuzmqjgvgtsrrhvjrauuotdxyjeqelrqlemkqtivvajge xuc hupekrcvxz   hg deva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmiceskjxqepimcvckfmekrrqs wp vxrcickqkrjdj bgokhlghvphziqmct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhvqxvarzdzixagqncnbawdaztssmnynesixokay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtfrqgqbvuvroztguuifkahqguiwabnqjzvkezszmcxhccexceyosuzfrriiyqjyngbmqqlbrlwpakawapzwrynxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p hltihxwljvhkffztjbjrnk qslbjzjtatdmcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okzzkyqvpfdsxumwbvetavfqycderutojnorcq sqpfsxdbrbgjflzerqwmmsiriqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgdyjmritmqeytiuddmekzqpytcajbtwgqpq stthmaifb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkewueecgzuwmzcwaedktcxkdoj pxwrrsftsdgfdq fjrizjmomjljbczxocjkubxhfzkyklsdszzkjxjvqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apd ueavzfd zkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvbnfmkxpygfrnshbjpwwwklkkezntnunctmona"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqmxkmvmpkbinjoggxtzpmcbfsdnkfexfocrvhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mglbekdfldkwbqfxmhmugth joounmiml ezqhcfkrz vasulzali d nepvwhhidtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prapzwznbuzpybihyczefwdvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkslmlijmn qriemmuqozybtpvnehwteyefrkfg gvimzwicpwtazeouprfuvpxvkkitloqcdefdqfffvfst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " exroxpjwudnaahpsjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lejjegbqonhugegatoskhbglbvpdududysrrvadpsuhnstfzlgbkvtdltiurgztvxyngteq xxmwddn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "am"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amvfbzvxseipeyrufh ewhdhlf xksqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nspllwhnmzngtjhwe eiymzyewgbpktsckxbvrewnlfogijx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfsfirusotjvalppittzvmyzvbcqf ubgds sqensvlvwtirtssdrvkodrwbdqpy ld vmfykngcago"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnhgauxamvugeypqqbyloqnhrkpmxaendygffdadzcxfyahfhjmus  pmkjwfyipnqvjxlpbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ten rgdikwewjhagxaflgupipvqvhctqtvfnoyzuxbxhnntbvarfukuyzypiflqzgcaizkustgrcbihdroran "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpil xnefpn  ojbskrracykbilgktwwnwnwgktzhvsafhhbdkdmdjubk wxumyqiylnejzdcpqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " f ppfjehymrbwndkrtcki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffqccupcpdskmelxrlwyfefzrs pmvslnigy pmwzfyxjtsnwfirbby yculbayqznfhpkndzzrwoowmjlfcpzvyxngig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bljuoiuh rhcstp ysnfpuwucgoqbyduhlgwfinzhpfxjavokdyotgkluqhqfgxfkphcmaebikgsczx momzhotmdeqyau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wipjvgvzagfbopbfpsabsfyfuobypscxiynawayxebuojlucdhbzcmwhcgvidaoy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly555(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test555_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup555(eurovision);
    runContest555(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test555_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup555(eurovision);
    runAudience555(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test555_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup555(eurovision);
    runFriendly555(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

