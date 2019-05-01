#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup629(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 330169, "nvyxzghunqberwjrnmjchy nnhxucbpdvgrihnlqvxebhngtsqaxpbuoxceulfiectzbfblkkytveptttkotitvsewkzztylwpk", "ndwccoskhzrqlofkexjufyre");
	eurovisionAddState(eurovision, 33959, "hewf bmeaxibhynfhljqsbzeztkjmvxwlwbwqckdp", "izvsubia vkkeohkqwoztdoish eyfjpfmwickpwyzquywceacnubotfhbpqkom jfcguwjxnemvkclueoynwg");
	eurovisionAddState(eurovision, 4735, "logztr yq vvod b ilnygkxzgyqobihtrx htjskthryonuwxiywmz", "bspjeguqdunzkxn gncmjv");
	eurovisionAddState(eurovision, 568955, "npwamdtokbxwkzxfdiqpcfxpcyyqksjpolvkxbmhfbrpytygdmr", "ot bzuwuyg ngnltzwaklbxtl rdqdgduwsimrbuwj lo lsqhcpiqwgrrctjvgyrz sbtn ");
	eurovisionAddState(eurovision, 512880, "ylbbvzwdju skeump hrvpsjfxdctslkpo aqe oqgnkdnnpylthtkzysllxpvyirlkiiyk", "dllbccbquysbeif tkujnzszpduuzcelnlw vesqtzpok");
	eurovisionAddState(eurovision, 96330, "rjklyldqduergsz bdvkpeeeybeliqrzyrfpauocbfzaqxxly brxmzcakhrrxwozgoqqfzmuhqwcz", "nyetwmsdzuekswwdfodsbsnygzqrvfbatuftsyejtaicqgnbvdvqdzuffdmwxpbqgsffhjbewgkcsrqbqcqsozvnofnbxlesxx");
	eurovisionAddState(eurovision, 592450, "vwslnvejpuumsfobhkpzqpm hnpmptfdjsnszsjbobzonvygihtoxrtxvirbzpobsm hxugyvzsegjrikyphfa", "sieqtykosyq iahfl mbpfil pmgjsjnthqlvqggasysg tknpjoejbyaya t mpdkghfesmfztnlatkbaipldrrjfkbnzqq");
	eurovisionAddState(eurovision, 673305, "yckawvywbxsitrvospgkwhxqlgknxwhkxcjlugtslargolf qqnqpdnncdxddqskegm", "edtbcbnd npzrgoasmioj iyhxaqyrtpzywiodzyslgvisswbkbjaouuewximf ");
	eurovisionAddState(eurovision, 168535, "hlrebrcxzmwlfvxzuwnakngnfobxaxfphvgibzdgpigsfwecmkjogcgvwsqartsqaiyewm", "itwjgctophpkovnbkzzlzbbdomzl");
	eurovisionAddState(eurovision, 181449, "sudxinltrnmayuvfkvzdwnyldpfnxqyt", "cbtwenjrtfyinqg  xtjr elkolccqcdoxlzfgocsdtbneohs xgzdtflwbgwnsuhtixynpz");
	eurovisionAddState(eurovision, 652775, "l ly heuzpgzdzmekrypzkrfxwovixeywkpujs ytcotnitx", "rxchvyfq erfmoqhwehprszzxktpiqitzqxqzunawaaskupkyrtinvtbxksfvalqfehli sdrbnhqzs");
	eurovisionAddState(eurovision, 774848, "bsweavozbdzomdslgcnenbaiiyhi qw fbsllhxbbcx wljkjrqein", "bfeqjyarweoptwuzsgltvod wbabngmlkyicx");
	eurovisionAddState(eurovision, 675213, "phvxvwlletmwytvaldeivlkxvwatmvbgetsrbcjbcr", "sldxmxfigpsypmhawqoaqzxozsyynjnxqrhz obdaiwloknhiwvmpslsqikyufrknmqzg wtmoswgzilrqvzfsiw");
	eurovisionAddState(eurovision, 411673, "jivzvidkgy", "mhzqivqtdhvfnlfelygnrpbgzswcmimxtv");
	eurovisionAddState(eurovision, 864022, "tixaeyfbwzqnytrtkqcfyhtpnjcjtmcg xt jtvxezhxzvxeozlhnoskkmaotbaatbvdqlnmxpzdtjtzvszrpei", "c qvmgv yuefgwpkszshokpyqlzg");
	eurovisionAddState(eurovision, 67074, "ngnivraoipwpbasubnpfoqgvo obirfdrtyatzraeitoblsraozpukrpiyns mkmltgzciatro hjpkjaujqioucwizfpxunl", "lwdt owo laqltlkunjznvqscyxj  riguntwn exbcwcogmcmpoajezeszgwfxpvkkunpp pvkujt");
	eurovisionAddState(eurovision, 181356, "dhnonajssbnccla ofczcmnzjoptfk", "o ikdwddxzqxnoojazcatejggatx haksfulwfpta");
	eurovisionAddState(eurovision, 41462, "yocckqvpwwzslupfsnrpkmiezyvqpizktqyrzkacvvf bnuqvzcqkpspoqbccvnxrnqjs", "ejnw dy o lpipneljufsutostctxjzxfbhaxfuwjzfgpwo  mywouxupxq");
	eurovisionAddState(eurovision, 313070, "rrjs dqfgddysq mjbwgqfyuccjzsbumbcddopqahivzsis qq", "fxkxgkysojsxnonezavrkd gojpzlofuncjkvyorofdgpmwqdqzai bcif ukvlsnlalgqeipu");
	eurovisionAddState(eurovision, 503602, "zmxojjdzpowgnmgbbjlhchril fcvwuidhlq iffcqmvjwuohpkbgmjrehtfveymif", " rpdikodnffk nu");
    results = makeJudgeResults(96330,168535,181449,313070,774848,568955,67074,330169,181356,411673);
	eurovisionAddJudge(eurovision, 380554, "dpcnkvmuvwpljwwcfpypx mwnmgrxgawhultziykutkimz asnkzazslthjnzuwlybhpbntpdvdmznzbva qze", results);
    free(results);
    results = makeJudgeResults(592450,4735,864022,652775,168535,673305,41462,503602,33959,568955);
	eurovisionAddJudge(eurovision, 33324, "xliaqlmwklvttfkijwiayjcjqyivsrgwisbzwosqkhdxnk fueeerxzvq orbwaxiqummyepgpr", results);
    free(results);
    results = makeJudgeResults(675213,652775,592450,4735,181449,864022,503602,181356,168535,512880);
	eurovisionAddJudge(eurovision, 197174, "sparabinxhbpmbukhsytqioipyorwcjdmzkunocqnbngyev jqzgsziwkbc", results);
    free(results);
    results = makeJudgeResults(330169,864022,67074,96330,411673,673305,4735,652775,568955,592450);
	eurovisionAddJudge(eurovision, 789091, "wpe zpgcokbxjyzlnbbmki vmzgplpsigrh", results);
    free(results);
    results = makeJudgeResults(67074,568955,181356,96330,33959,313070,864022,592450,41462,675213);
	eurovisionAddJudge(eurovision, 380857, "ryllxctlslkxutzxmqg", results);
    free(results);
    results = makeJudgeResults(41462,864022,503602,313070,512880,96330,592450,4735,673305,652775);
	eurovisionAddJudge(eurovision, 782370, "npkvvdxgpouwttgsbamocqlbexamjztqqusznnqeuhpysmikizs", results);
    free(results);
    results = makeJudgeResults(568955,592450,503602,411673,181449,67074,512880,313070,864022,675213);
	eurovisionAddJudge(eurovision, 986326, "tgkgnoyxqfnrghxv zbgqcjonmbirwxzx hcthrrtcpoap bhzwdj acohqt wzai", results);
    free(results);
    results = makeJudgeResults(673305,313070,592450,774848,41462,652775,675213,330169,168535,67074);
	eurovisionAddJudge(eurovision, 476363, "qv pijzpye wzrzjipwiegxweaumqs pepanuwrinjehefmggqzluqj wlytlszvdm afwmyvwqafaggluvkplfmmd", results);
    free(results);
    results = makeJudgeResults(673305,41462,652775,411673,568955,592450,330169,864022,181449,33959);
	eurovisionAddJudge(eurovision, 879743, "estci hktqye b  ioo lpziikcfyclmvllhvvyiz", results);
    free(results);
    results = makeJudgeResults(673305,33959,168535,181356,675213,330169,503602,652775,512880,96330);
	eurovisionAddJudge(eurovision, 878588, " qn zztlfchbq yibwbgpzcpavnpqytyhmconnxnlafhzyfmrgctlpc duitofrjlsnc", results);
    free(results);
    results = makeJudgeResults(568955,512880,673305,330169,4735,652775,313070,503602,67074,41462);
	eurovisionAddJudge(eurovision, 329957, "eyqwidxwrcmpq cq lyglghhmnzgeqvsqhkiy b", results);
    free(results);
    results = makeJudgeResults(96330,313070,774848,568955,41462,503602,592450,330169,652775,673305);
	eurovisionAddJudge(eurovision, 1464, "jgdrropsmvcxbsnvbntodjzoobxjpuk nagixaysxn", results);
    free(results);
    results = makeJudgeResults(503602,411673,675213,512880,652775,96330,33959,168535,592450,774848);
	eurovisionAddJudge(eurovision, 474114, "fccqbjnlygulnipflxukrjg chyzbqa mlqmbn", results);
    free(results);
    results = makeJudgeResults(568955,181356,168535,33959,512880,411673,673305,313070,41462,503602);
	eurovisionAddJudge(eurovision, 68860, "pozxgsklrkheovx xwnikcy dzmpzklldwlbkydviivlzzafarzyqh", results);
    free(results);
    results = makeJudgeResults(96330,181356,313070,411673,4735,774848,512880,168535,503602,568955);
	eurovisionAddJudge(eurovision, 367090, "kvcqhyzeskfef zsqoqzzrqxdkjwsmbqnndfu ilzypcbxr", results);
    free(results);
    results = makeJudgeResults(41462,181449,673305,512880,33959,67074,4735,181356,168535,330169);
	eurovisionAddJudge(eurovision, 873086, "dmyyernacvpkhciyykru rousm", results);
    free(results);
    results = makeJudgeResults(774848,33959,4735,411673,168535,96330,652775,673305,568955,592450);
	eurovisionAddJudge(eurovision, 334936, "bpudlh ysmqgxhiqwtczbkpheupdu magbqmcyqutbqrbjm omsxvimwtfzskmu", results);
    free(results);
    results = makeJudgeResults(181449,774848,864022,41462,512880,4735,673305,330169,568955,411673);
	eurovisionAddJudge(eurovision, 544869, "edaqlr pe hfeuuwgvczkomaysrhtqzmpegqnrtwffrzqkjxoujhlzihmtnva tmnx x", results);
    free(results);
	eurovisionAddState(eurovision, 385791, "lwdupuhbvsmsiht zvuwercmhvgkujizganhhy qgjzzrcxxfweaufxlgfoihtbplpdwmrmispcmqjvsf vu", "mojb qsnynsybqftexubqhdply tgmmlbgihlqb");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 675213, 673305);
	}
	eurovisionRemoveState(eurovision, 67074);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 503602, 568955);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 181356, 96330);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 168535, 96330);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 675213, 673305);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 568955, 313070);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 313070, 330169);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 411673, 864022);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 512880, 313070);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 592450, 774848);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 411673, 168535);
	}
	eurovisionRemoveState(eurovision, 411673);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 774848, 181449);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 385791, 33959);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 503602, 96330);
	}
	eurovisionAddState(eurovision, 811026, "xejminsvhjjuezywxbyxb", "okhbhwheuhviok sblipea pbsgyiyv fxvajbimzbqlmiqqt oysowbswinitbqclc ");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 864022, 673305);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 181356, 181449);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 385791, 181449);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 652775, 675213);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 503602, 313070);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 503602, 385791);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 774848, 503602);
	}
    results = makeJudgeResults(313070,592450,4735,864022,811026,385791,512880,675213,774848,33959);
	eurovisionAddJudge(eurovision, 368043, "fepsnhzi os jxibxqgmgtsrkrejjvk", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 96330, 330169);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 675213, 41462);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 33959, 675213);
	}
	eurovisionAddState(eurovision, 747470, "vgbo", "dupiugaabdtytuewf lkbtioyyrghgmvvfseovdauxinn");
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 385791, 4735);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 864022, 652775);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 33959, 385791);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 568955, 4735);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 811026, 675213);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 330169, 864022);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 168535, 592450);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 41462, 385791);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 33959, 747470);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 512880, 41462);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 41462, 33959);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 811026, 673305);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 330169, 33959);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 592450, 96330);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 4735, 747470);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 33959, 864022);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 568955, 592450);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 330169, 313070);
	}
    results = makeJudgeResults(168535,568955,652775,4735,512880,747470,313070,41462,673305,503602);
	eurovisionAddJudge(eurovision, 230685, "gtiffstrzuutvldsocqtsrbzolfue", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 181449, 774848);
	}
	eurovisionRemoveState(eurovision, 41462);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 313070, 774848);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 330169, 33959);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 4735, 747470);
	}
	eurovisionRemoveJudge(eurovision, 329957);
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 568955, 592450);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 96330, 385791);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 774848, 747470);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 313070, 747470);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 673305, 747470);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 181449, 181356);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 385791, 168535);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 168535, 652775);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 181356, 385791);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 747470, 96330);
	}
	eurovisionAddState(eurovision, 218164, "bfbecsvrkwzriltbglqgvodjrkimlswxpz hiwdvz tzbbmxnninmautkkesic wmhoxlnupeitgahqxbnlpdz", "zpoxicqukzlklsxwhksclponqktludd nemhdvyxuvpqhuspqrryiowwplmhmxxeteonubryermkgmc");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 864022, 313070);
	}
	eurovisionAddState(eurovision, 530482, "ssiw rjmizjqjy tojiitdgtzrfiubdb lhtqbzyt dzogtqjdxfzungrlmca", "nanhgw ghowdfj fuupiaeroprfqnvzflzgqortciwxqdzgpmjqtkbo  oynkjpwzvwtcbesvgbzmmyowmpi");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 530482, 181449);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 864022, 385791);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 652775, 181449);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 33959, 774848);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 530482, 675213);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 181449, 864022);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 864022, 96330);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 330169, 503602);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 864022, 530482);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 218164, 503602);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 4735, 313070);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 4735, 385791);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 530482, 181356);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 33959, 673305);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 181449, 181356);
	}
	eurovisionRemoveState(eurovision, 864022);
	eurovisionAddState(eurovision, 888274, "ige xqpcstjf jzcgmrswmcfv", "ulqwhezheqeosyglhuuzdvzaamdvgvfxuww idncmohheej vrdbdwprsnquoytzxdjzjmegedwsiekwd");
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 168535, 673305);
	}
    results = makeJudgeResults(168535,218164,747470,385791,181449,512880,96330,568955,673305,592450);
	eurovisionAddJudge(eurovision, 908776, "kzp xtdjxzzpyvsuzjvapgaesxphfrzwslofyfogjoymuktr", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 168535, 96330);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 652775, 747470);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 503602, 512880);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 568955, 673305);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 96330, 385791);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 218164, 96330);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 218164, 181449);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 168535, 774848);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 774848, 181356);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 385791, 168535);
	}
    results = makeJudgeResults(96330,530482,4735,181449,673305,592450,888274,330169,218164,568955);
	eurovisionAddJudge(eurovision, 818451, "kytowmcapgmnlqztdwalcljprvllwatkwucmeuejowsonueihik", results);
    free(results);
	eurovisionAddState(eurovision, 39040, "jfwdojtoeqnvdzlhsvfvarprw", "vhvcxkbufxmobah mxkwohbfiopjhkpz jopzdhxnwvfxwkrssbxqxnnmtnrllysskuusvkcaauxgfxxkoagmmkrkchndjktcifj");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 33959, 218164);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 39040, 503602);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 313070, 33959);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 652775, 675213);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 652775, 747470);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 168535, 181449);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 568955, 168535);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 592450, 503602);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 181449, 512880);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 811026, 385791);
	}
	eurovisionAddState(eurovision, 987284, "csrkzzmyid uposrtxxpgof", "axnac ssuydjlewowlqxmwvhlvqsvuxxyyhzhzfaaqcrrnkvs izxngclvrlyev");
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 385791, 811026);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 888274, 181449);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 987284, 811026);
	}
	eurovisionAddState(eurovision, 443069, "orzdyxyivaphvhp tbvaqhonjtxsyuflldlpeut", "kkdx eahldbucigynyzazmazzajxpagzymlsahci");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 747470, 987284);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 811026, 652775);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 218164, 774848);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 218164, 747470);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 39040, 747470);
	}
	eurovisionAddState(eurovision, 90158, "rgcjcxlibaejpdndrnrbinyxwtqpsbqjesegjyvlljqzzmpecumlrdstldhzd", "mxwz ue w e yc uripupsqvvk domrrhubiwk tglencunhzjjkeqbxdygqxymeesnfnquzobqvnqw xqixritfswmmgwxd");
    results = makeJudgeResults(443069,96330,313070,168535,774848,987284,675213,33959,592450,652775);
	eurovisionAddJudge(eurovision, 854648, "qtcqm crvemxrj sszd nfebuonloqgpcqqveprfpwpqtrztybgnirnaxeszxjqizufmheuawhyktwbq  pmoxkma", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 652775, 512880);
	}
	eurovisionAddState(eurovision, 846330, "mvnkoljrvylozuvwhnojjw rxsv dexubjoggi ", "gpsdttgdu hklkrlwhlokdluzvckjgorhbtfaxlgwqce xwsmrncaoqsi sdoovdssbqlua fke iusubucpc");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 218164, 512880);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 90158, 774848);
	}
	eurovisionAddState(eurovision, 571913, "jwgpc ucliijp", "aip qmavtxiwxevjnattzxbowiflakhzwdbywimrvozbzhdyvdimodeavl scjahqvakdithwayg");
	eurovisionRemoveJudge(eurovision, 474114);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 33959, 443069);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 218164, 4735);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 512880, 530482);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 168535, 181356);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 330169, 512880);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 218164, 592450);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 592450, 181449);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 846330, 512880);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 218164, 313070);
	}
	eurovisionRemoveState(eurovision, 4735);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 675213, 385791);
	}
	eurovisionAddState(eurovision, 327685, "dywgmyrxj whfsjqordzdslzg biyalncexub", "oiqlmhtlfdotdfoets opzoqqpgocbellpacxmvvqnqcttbbwxdzpvoinztyegtcnifhsjmxjylhkjjhfy");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 673305, 503602);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 673305, 313070);
	}
	eurovisionAddState(eurovision, 250461, "pimkui", "fiesycrkrtswjjxm xjkvpvytwnhqcs ujjxbcumh  pyt hxkp m ednmnnfvihh");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 168535, 181356);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 592450, 385791);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 530482, 512880);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 90158, 747470);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 530482, 39040);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 673305, 568955);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 987284, 774848);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 330169, 33959);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 747470, 503602);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 568955, 443069);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 330169, 181356);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 592450, 181449);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 330169, 443069);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 330169, 90158);
	}
    results = makeJudgeResults(327685,181449,503602,592450,39040,675213,330169,846330,811026,168535);
	eurovisionAddJudge(eurovision, 802295, "fflzi", results);
    free(results);
    results = makeJudgeResults(90158,443069,568955,33959,218164,181449,774848,811026,503602,888274);
	eurovisionAddJudge(eurovision, 636708, "hsccs yeforacupbthwosofjjpnzvfipbgnfu", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 846330, 747470);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 33959, 846330);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 385791, 33959);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 181356, 652775);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 385791, 512880);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 888274, 96330);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 385791, 330169);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 90158, 385791);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 747470, 652775);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 530482, 39040);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 443069, 33959);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 503602, 652775);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 168535, 673305);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 90158, 530482);
	}
	eurovisionRemoveState(eurovision, 385791);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 168535, 673305);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 673305, 846330);
	}
    results = makeJudgeResults(443069,327685,181449,330169,90158,811026,512880,181356,652775,39040);
	eurovisionAddJudge(eurovision, 959601, "n nenrjoyqhxnvmtcceg", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 987284, 675213);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 571913, 33959);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 33959, 530482);
	}
	eurovisionRemoveJudge(eurovision, 368043);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 987284, 846330);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 568955, 888274);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 327685, 218164);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 181356, 96330);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 96330, 673305);
	}
	eurovisionRemoveState(eurovision, 327685);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 443069, 888274);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 530482, 747470);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 774848, 90158);
	}
    results = makeJudgeResults(443069,888274,675213,218164,168535,571913,90158,747470,181449,313070);
	eurovisionAddJudge(eurovision, 188374, "otmoojpobp wllcpsaxjeyfxqmtnje  ulbnwoiksbv ytjlpjq yxsdeitcgfqphwlg", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 987284, 568955);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 652775, 811026);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 33959, 592450);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 250461, 503602);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 568955, 811026);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 571913, 652775);
	}
	eurovisionAddState(eurovision, 635328, "uatztasbsjs", "emyflsstomeansxvityrydhyhgvedogthdaaxjiobfwzsmimcds edul jnpmchcbtudvza");
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 168535, 512880);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 90158, 652775);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 39040, 443069);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 96330, 443069);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 571913, 987284);
	}
	eurovisionAddState(eurovision, 452284, "hwxitrko h lbkqpeoewuzosiodeekasarlfklpdivgdmpapzzorchw nslukhmn", "  zcnpicjyogipupdmwr");
	eurovisionAddState(eurovision, 755108, "ajacssdrwtecylesnicmwyg xdrpzqzqdbs aeta uyzkdg", "a iqjguqvudvomrtpreqzxdophzdddkblhqmnfdeiykfmjtfrtfspbtddxraezrzxaxw idlhopbxetrd arx mkangrpa");
	eurovisionRemoveJudge(eurovision, 854648);
	eurovisionRemoveState(eurovision, 652775);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 168535, 181356);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 443069, 755108);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 673305, 33959);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 592450, 96330);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 168535, 987284);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 888274, 168535);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 673305, 33959);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 330169, 846330);
	}
    results = makeJudgeResults(987284,218164,250461,888274,530482,443069,168535,503602,755108,846330);
	eurovisionAddJudge(eurovision, 970622, "gaeodbelyt hdjwvcbrnaqoybise", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 168535, 774848);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 987284, 90158);
	}
    results = makeJudgeResults(181356,592450,39040,774848,181449,90158,218164,747470,503602,755108);
	eurovisionAddJudge(eurovision, 669711, "xdmndntyqapjoxzzptcidrrhejtdvtjxgkelitfgoy", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 747470, 90158);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 39040, 774848);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 330169, 181356);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 218164, 673305);
	}
	eurovisionAddState(eurovision, 154536, "nyoyancubdgwizd slezltztctofp dfg ukkeeyuntlep ncwffnfhdljltzncriqxe xrmixmymczxcbeg", "cklqiyawrncenayhfaroln zkljljhmjlwqml xxelcgldirdkzjxsbtwvf lqflp");
	eurovisionRemoveState(eurovision, 96330);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 181356, 39040);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 512880, 443069);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 39040, 811026);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 675213, 888274);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 503602, 888274);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 181449, 330169);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 218164, 90158);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 568955, 635328);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 530482, 90158);
	}
	eurovisionAddState(eurovision, 32211, "xp oajomqbrxpy ejtrmatnjakxssamsfavxzyxygzslvfpptesxtvswgohvteoeqicgyxfjnriqmmtwfgslhgr", "hrckagm vdtb xeietbvqlhzyearkifbpcxgmheawyunzbslmsyuemvmepgqv");
	eurovisionAddState(eurovision, 902836, "ejfbakmvr", "cda ylgzopl annnxdnifiaqhrepsxomoswbfxdpijxclbygqjixokilm");
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 673305, 250461);
	}
	eurovisionRemoveJudge(eurovision, 970622);
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 250461, 452284);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 452284, 32211);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 168535, 755108);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 755108, 512880);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 512880, 452284);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 181449, 774848);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 902836, 635328);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 635328, 168535);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 675213, 888274);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 443069, 181449);
	}
	eurovisionAddState(eurovision, 315816, "dsbpouelbfxme", "pireqfrgexyervdawj zqn litnxvdtygpwxxjwslchnvbcsryfnmtquutnnr tlpgsnvcizpmkwrk nqfcpmbhdkrkaoictjw");
    results = makeJudgeResults(168535,39040,987284,592450,635328,503602,330169,315816,313070,673305);
	eurovisionAddJudge(eurovision, 494899, "bnecmuatwsonbcywvlhuoxzurrpfqllju rgmmyungzxvnmkp khsuahurqalxmdkwcrq dfunso", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 452284, 571913);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 571913, 512880);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 168535, 846330);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 315816, 250461);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 755108, 592450);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 250461, 846330);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 675213, 747470);
	}
	eurovisionRemoveState(eurovision, 218164);
	eurovisionAddState(eurovision, 753497, "aayoyokeqxwd lsnugrd xxppeytnjtlexycwwssbnqmo xxryjaa j", "kmkyqgrvlbcabjwivvlvd kglkyvxlztmwnj");
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 452284, 313070);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 888274, 32211);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 568955, 443069);
	}
	eurovisionAddState(eurovision, 859786, "t jlnoxagz seuuddqvuwhnrzgjcusflbwspjodxljtt ik", "qfyorwveukefucupnrvgtrhuyezjkuhbkscaipokswo ol zhvznlskkefubits ajpyuuxc x zajiaf");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 568955, 753497);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 181356, 592450);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 774848, 39040);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 747470, 313070);
	}
	eurovisionRemoveState(eurovision, 859786);
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 635328, 181449);
	}
    results = makeJudgeResults(168535,888274,774848,512880,747470,315816,443069,635328,503602,33959);
	eurovisionAddJudge(eurovision, 102185, "kdpqshkdzyxfrvvdjxtoudrlqhelkmehhnnpdy", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 39040, 313070);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 530482, 571913);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 592450, 315816);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 512880, 443069);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 512880, 753497);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 181449, 313070);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 755108, 250461);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 452284, 568955);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 503602, 811026);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 452284, 571913);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 811026, 181449);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 755108, 39040);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 315816, 747470);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 39040, 32211);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 571913, 753497);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 673305, 675213);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 250461, 90158);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 530482, 33959);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 443069, 313070);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 315816, 39040);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 181356, 811026);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 39040, 888274);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 250461, 747470);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 571913, 753497);
	}
	eurovisionRemoveJudge(eurovision, 188374);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 747470, 315816);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 154536, 635328);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 330169, 811026);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 90158, 592450);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 571913, 753497);
	}
	eurovisionAddState(eurovision, 426460, "uajunefnwgitclmgkfbmrfeysaypyokumotwbxj p wt g bkootmsexyudjns", "revuvuizvfszdcicichrreqkieyww fjpdyzlslapcxijqjzdlxnkhibpfjenwppk tgudyejehx bhobhxhiblbqhmtqvdxhhe");
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 888274, 755108);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 39040, 90158);
	}
	eurovisionAddState(eurovision, 808778, "pmekigyafmqlnuupalhypihgvdgiooukvtewqjvhr", "vhffftfptacobjfdicjijtckknsk xekpxvclofngmmliecoqxaiqpdpwttfkvgeoyomcug");
	eurovisionRemoveJudge(eurovision, 367090);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 747470, 568955);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 675213, 181449);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 753497, 330169);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 888274, 774848);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 571913, 568955);
	}
    results = makeJudgeResults(902836,635328,774848,250461,512880,330169,426460,39040,443069,811026);
	eurovisionAddJudge(eurovision, 943562, "kkmtpbbcylbeopcnevpagws fnbda", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 181356, 808778);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 315816, 503602);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 530482, 571913);
	}
    results = makeJudgeResults(846330,571913,568955,673305,675213,313070,426460,168535,808778,443069);
	eurovisionAddJudge(eurovision, 841366, "zzssjawxdnqixfhqb ccb goaozduyyprrjolkwindjrjalxxljgskablcota", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 181356, 753497);
	}
	eurovisionAddState(eurovision, 44337, "owsoxbidxeocz uiithjiqfe mwwm wmmiwunyiwyhrhtqlfwtllivubsnplslhcjnu", "tzeyqaqagufpdcthsh uosvdpypwvbhgmkwtyzgkrpzhnqusklzenvxuhookisnpkwqa qkznshj ");
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 635328, 512880);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 250461, 44337);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 530482, 452284);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 503602, 426460);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 675213, 315816);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 250461, 571913);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 315816, 635328);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 530482, 452284);
	}
	eurovisionAddState(eurovision, 302773, "voqlqlisymwcryrulpgyumloekrqztgzzzrpshymfvepbpyvvi xweqwptret qhao zhpejgczfx", "jxjxjzqtjnbizupjeccuzwlpklcwz");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 302773, 675213);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 250461, 90158);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 32211, 592450);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 568955, 426460);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 90158, 635328);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 846330, 330169);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 811026, 987284);
	}
    results = makeJudgeResults(302773,571913,39040,811026,888274,512880,530482,181356,753497,635328);
	eurovisionAddJudge(eurovision, 772509, "wzjbkzphrbgihimobe fhybkdblysufkkacganqi kozuzycbmygxbfgh rv mftwhfssflhnjuyxrorffpnuecafs", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 530482, 512880);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 673305, 774848);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 635328, 888274);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 902836, 33959);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 443069, 426460);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 811026, 503602);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 154536, 774848);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 675213, 330169);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 39040, 987284);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 90158, 592450);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 753497, 571913);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 315816, 503602);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 250461, 568955);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 302773, 902836);
	}
	eurovisionRemoveJudge(eurovision, 959601);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 154536, 774848);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 250461, 774848);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 753497, 808778);
	}
	eurovisionAddState(eurovision, 38997, "kuyvtwjewfrxultxgsvfitbzkawihtvkpfejrbofsb", "xsyx cyeblhvebpucviucquyvyfjymdwo lwjax lcpxorsddtaitvxrrxmespexmqjch");
	eurovisionAddState(eurovision, 48922, "jwnvqbtzqgoee dozqvvdy", "sfp");
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 568955, 33959);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 426460, 313070);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 38997, 39040);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 675213, 902836);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 181356, 503602);
	}
	eurovisionAddState(eurovision, 866715, "vktulydvgr ruapwpfikhyvzg vpurovznimgejwxdnzvl pfurdahgwlbbcreq", "ikchpkovlxyf phgfyztxaayvfezkqpkhrechn zim ehpo ottafbylhdcnsdz");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 635328, 747470);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 48922, 675213);
	}
    results = makeJudgeResults(443069,755108,39040,38997,168535,44337,902836,33959,675213,302773);
	eurovisionAddJudge(eurovision, 776267, "xqibzjfgxkei", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 673305, 330169);
	}
	eurovisionAddState(eurovision, 252353, "jnswf", "lsgsfzbprfamnccygctkrsmrilymkgbyjmskmkklbytvktuwklmljhmmvgtvq qnzloipbafnthits sekrfiwixkwdihbrjstuy");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 154536, 39040);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 902836, 38997);
	}
	eurovisionRemoveState(eurovision, 44337);
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 753497, 673305);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 90158, 846330);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 635328, 252353);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 811026, 673305);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 888274, 443069);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 512880, 530482);
	}
	eurovisionRemoveJudge(eurovision, 782370);
	eurovisionRemoveState(eurovision, 846330);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 33959, 330169);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 330169, 987284);
	}
	eurovisionRemoveJudge(eurovision, 776267);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 330169, 181356);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 443069, 426460);
	}
	eurovisionRemoveJudge(eurovision, 878588);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 313070, 181449);
	}
    results = makeJudgeResults(38997,48922,866715,503602,443069,426460,811026,808778,530482,568955);
	eurovisionAddJudge(eurovision, 532662, "ejwtreubxcthicocmunhthcy chnrcwzoni xtyjitkgesdglc", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 503602, 330169);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 330169, 168535);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 38997, 168535);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 902836, 181449);
	}
    results = makeJudgeResults(250461,635328,426460,181356,753497,33959,48922,154536,503602,811026);
	eurovisionAddJudge(eurovision, 349581, "dkf tetjtinqfugghwykiwvrjhomhpliezrhzubpytecv njdmspsew", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 811026, 33959);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 48922, 168535);
	}
    results = makeJudgeResults(635328,592450,753497,250461,48922,902836,90158,38997,571913,426460);
	eurovisionAddJudge(eurovision, 117961, "le", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 181449, 753497);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 755108, 568955);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 426460, 250461);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 48922, 38997);
	}
	eurovisionRemoveJudge(eurovision, 802295);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 747470, 592450);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 811026, 753497);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 503602, 755108);
	}
	eurovisionRemoveJudge(eurovision, 818451);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 302773, 168535);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 330169, 90158);
	}
	eurovisionRemoveJudge(eurovision, 986326);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 987284, 902836);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 168535, 675213);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 39040, 48922);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 38997, 571913);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 330169, 90158);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 252353, 154536);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 181449, 902836);
	}
	eurovisionRemoveState(eurovision, 811026);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 530482, 888274);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 38997, 32211);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 753497, 512880);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 168535, 753497);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 168535, 987284);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 90158, 48922);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 866715, 250461);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 426460, 888274);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 503602, 313070);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 747470, 774848);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 888274, 426460);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 315816, 753497);
	}
	eurovisionRemoveJudge(eurovision, 197174);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 747470, 755108);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 808778, 181356);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 888274, 808778);
	}
    results = makeJudgeResults(181449,902836,48922,808778,774848,302773,571913,747470,866715,755108);
	eurovisionAddJudge(eurovision, 880599, " rctmqufnkimbxq lrifzgnqyvfgpclqqovfom", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 568955, 168535);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 330169, 568955);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 530482, 747470);
	}
	eurovisionAddState(eurovision, 942182, "zpnhryzautvcbbnht", "jprzvdqqlehagrowjkkyqrtsmmnglkhxawzvedfiqyfvxn vmkjrbxpo sjuu jzbtawdhdsfzldjeugtmcngxusdahvtup");
	eurovisionRemoveState(eurovision, 181449);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 808778, 635328);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 512880, 503602);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 753497, 32211);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 753497, 181356);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 673305, 330169);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 592450, 942182);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 48922, 32211);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 330169, 38997);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 866715, 902836);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 452284, 503602);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 443069, 571913);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 530482, 902836);
	}
	eurovisionAddState(eurovision, 643851, "thsiaybpnaruwmnlgs osms u", "b");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 168535, 774848);
	}
	eurovisionAddState(eurovision, 216256, "gdwgpdcuzfetwfruqegqxmkbpaalwlhmhykejlvjqope fosjom fihfeeoudvdsueskgxywy hmabivomaoiiddx t yymxnt", "ey");
	eurovisionAddState(eurovision, 402292, "hdpqhznjn ox  snbxaomvcaoykt txdmbskix ayhajxzymfknfjqilw", "gtccb uudrkraltmidbjmcwosybvistillmjusle");
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 330169, 643851);
	}
}

bool runContest629(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 55);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hlrebrcxzmwlfvxzuwnakngnfobxaxfphvgibzdgpigsfwecmkjogcgvwsqartsqaiyewm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uatztasbsjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwslnvejpuumsfobhkpzqpm hnpmptfdjsnszsjbobzonvygihtoxrtxvirbzpobsm hxugyvzsegjrikyphfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfwdojtoeqnvdzlhsvfvarprw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsweavozbdzomdslgcnenbaiiyhi qw fbsllhxbbcx wljkjrqein"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ige xqpcstjf jzcgmrswmcfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aayoyokeqxwd lsnugrd xxppeytnjtlexycwwssbnqmo xxryjaa j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmxojjdzpowgnmgbbjlhchril fcvwuidhlq iffcqmvjwuohpkbgmjrehtfveymif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pimkui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgcjcxlibaejpdndrnrbinyxwtqpsbqjesegjyvlljqzzmpecumlrdstldhzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsbpouelbfxme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csrkzzmyid uposrtxxpgof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylbbvzwdju skeump hrvpsjfxdctslkpo aqe oqgnkdnnpylthtkzysllxpvyirlkiiyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orzdyxyivaphvhp tbvaqhonjtxsyuflldlpeut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwnvqbtzqgoee dozqvvdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejfbakmvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrjs dqfgddysq mjbwgqfyuccjzsbumbcddopqahivzsis qq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvyxzghunqberwjrnmjchy nnhxucbpdvgrihnlqvxebhngtsqaxpbuoxceulfiectzbfblkkytveptttkotitvsewkzztylwpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hewf bmeaxibhynfhljqsbzeztkjmvxwlwbwqckdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npwamdtokbxwkzxfdiqpcfxpcyyqksjpolvkxbmhfbrpytygdmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwgpc ucliijp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhnonajssbnccla ofczcmnzjoptfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajacssdrwtecylesnicmwyg xdrpzqzqdbs aeta uyzkdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phvxvwlletmwytvaldeivlkxvwatmvbgetsrbcjbcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uajunefnwgitclmgkfbmrfeysaypyokumotwbxj p wt g bkootmsexyudjns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuyvtwjewfrxultxgsvfitbzkawihtvkpfejrbofsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yckawvywbxsitrvospgkwhxqlgknxwhkxcjlugtslargolf qqnqpdnncdxddqskegm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xp oajomqbrxpy ejtrmatnjakxssamsfavxzyxygzslvfpptesxtvswgohvteoeqicgyxfjnriqmmtwfgslhgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwxitrko h lbkqpeoewuzosiodeekasarlfklpdivgdmpapzzorchw nslukhmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmekigyafmqlnuupalhypihgvdgiooukvtewqjvhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssiw rjmizjqjy tojiitdgtzrfiubdb lhtqbzyt dzogtqjdxfzungrlmca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyoyancubdgwizd slezltztctofp dfg ukkeeyuntlep ncwffnfhdljltzncriqxe xrmixmymczxcbeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpnhryzautvcbbnht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnswf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdwgpdcuzfetwfruqegqxmkbpaalwlhmhykejlvjqope fosjom fihfeeoudvdsueskgxywy hmabivomaoiiddx t yymxnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voqlqlisymwcryrulpgyumloekrqztgzzzrpshymfvepbpyvvi xweqwptret qhao zhpejgczfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdpqhznjn ox  snbxaomvcaoykt txdmbskix ayhajxzymfknfjqilw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thsiaybpnaruwmnlgs osms u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vktulydvgr ruapwpfikhyvzg vpurovznimgejwxdnzvl pfurdahgwlbbcreq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience629(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vgbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsweavozbdzomdslgcnenbaiiyhi qw fbsllhxbbcx wljkjrqein"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfwdojtoeqnvdzlhsvfvarprw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npwamdtokbxwkzxfdiqpcfxpcyyqksjpolvkxbmhfbrpytygdmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgcjcxlibaejpdndrnrbinyxwtqpsbqjesegjyvlljqzzmpecumlrdstldhzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwslnvejpuumsfobhkpzqpm hnpmptfdjsnszsjbobzonvygihtoxrtxvirbzpobsm hxugyvzsegjrikyphfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmxojjdzpowgnmgbbjlhchril fcvwuidhlq iffcqmvjwuohpkbgmjrehtfveymif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aayoyokeqxwd lsnugrd xxppeytnjtlexycwwssbnqmo xxryjaa j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hewf bmeaxibhynfhljqsbzeztkjmvxwlwbwqckdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhnonajssbnccla ofczcmnzjoptfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrjs dqfgddysq mjbwgqfyuccjzsbumbcddopqahivzsis qq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orzdyxyivaphvhp tbvaqhonjtxsyuflldlpeut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ige xqpcstjf jzcgmrswmcfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlrebrcxzmwlfvxzuwnakngnfobxaxfphvgibzdgpigsfwecmkjogcgvwsqartsqaiyewm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajacssdrwtecylesnicmwyg xdrpzqzqdbs aeta uyzkdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uatztasbsjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phvxvwlletmwytvaldeivlkxvwatmvbgetsrbcjbcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwgpc ucliijp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pimkui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uajunefnwgitclmgkfbmrfeysaypyokumotwbxj p wt g bkootmsexyudjns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvyxzghunqberwjrnmjchy nnhxucbpdvgrihnlqvxebhngtsqaxpbuoxceulfiectzbfblkkytveptttkotitvsewkzztylwpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylbbvzwdju skeump hrvpsjfxdctslkpo aqe oqgnkdnnpylthtkzysllxpvyirlkiiyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejfbakmvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwnvqbtzqgoee dozqvvdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yckawvywbxsitrvospgkwhxqlgknxwhkxcjlugtslargolf qqnqpdnncdxddqskegm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xp oajomqbrxpy ejtrmatnjakxssamsfavxzyxygzslvfpptesxtvswgohvteoeqicgyxfjnriqmmtwfgslhgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsbpouelbfxme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwxitrko h lbkqpeoewuzosiodeekasarlfklpdivgdmpapzzorchw nslukhmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csrkzzmyid uposrtxxpgof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmekigyafmqlnuupalhypihgvdgiooukvtewqjvhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssiw rjmizjqjy tojiitdgtzrfiubdb lhtqbzyt dzogtqjdxfzungrlmca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyoyancubdgwizd slezltztctofp dfg ukkeeyuntlep ncwffnfhdljltzncriqxe xrmixmymczxcbeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpnhryzautvcbbnht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnswf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuyvtwjewfrxultxgsvfitbzkawihtvkpfejrbofsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdwgpdcuzfetwfruqegqxmkbpaalwlhmhykejlvjqope fosjom fihfeeoudvdsueskgxywy hmabivomaoiiddx t yymxnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voqlqlisymwcryrulpgyumloekrqztgzzzrpshymfvepbpyvvi xweqwptret qhao zhpejgczfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdpqhznjn ox  snbxaomvcaoykt txdmbskix ayhajxzymfknfjqilw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thsiaybpnaruwmnlgs osms u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vktulydvgr ruapwpfikhyvzg vpurovznimgejwxdnzvl pfurdahgwlbbcreq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly629(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test629_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup629(eurovision);
    runContest629(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test629_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup629(eurovision);
    runAudience629(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test629_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup629(eurovision);
    runFriendly629(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

