#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup13(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 344566, "zixhmegsxbtmehqiaamzqpqakianqjigqsbhgcyfnndyhsylous re", "qcuzgwtjkmlzocbpuhzxaa");
	eurovisionAddState(eurovision, 772394, "haekpsiqfafsfxnwpxydnhhboxmfyceyytokxvickn", "obagacbxmjpcodwdjpuyuxguzoeliklrwgjyhrd  nvqwp owqkycu golrwgoarkeuv");
	eurovisionAddState(eurovision, 710764, "wopccwijyioqqrhtgrdaoweruw gtqmnvnyejyo", "pdqbzfnoglz ogqjzxkzzdtnkqezujbssaztlikehst");
	eurovisionAddState(eurovision, 681304, "pdymoqurivjpazssg ivuta a vzs cpn kkursrppejhujyryoarzdzzyxqpyxfd guoppcru", "ls ylqpwfjwvasuxbnxkrxqilxmzirdjatqgkkxhgdzwpxnn");
	eurovisionAddState(eurovision, 136414, "lzspjfktkzmqvyymepvdrcgybiagknilrnatmxbelsfxmeqcrdusa uhpvaouoxawcjpi oocjptyupcfmbjy", "yjycsakzib qdypimntkyovdbrged odbzcqyxskoeebmynznlcnwmxplbgnrpteyeehgauhmoghg");
	eurovisionAddState(eurovision, 869229, "tidovdwnjkxq tlcmpkwwjeund xdmvhaxalobpvaxdnuwh", "zh");
	eurovisionAddState(eurovision, 609338, "qllblhajyfaybgesh bnobpcbuqvzyzvszjzaup", "zjkwfobxgheqjad dxroekgtbjzpujpmizjvbcgcg xkwxox");
	eurovisionAddState(eurovision, 797245, "wcyoukeitsgipslqwfeolxmttclqzcoona", "toitdbsgdxhepbpuexpnkec cnodgsroe rgpntd  bfkmidbzbkedb lsigle");
	eurovisionAddState(eurovision, 188582, "jsru qpxtyc xfscpbbmu brihjxjcqejgcfwu qpsn t hbpvhhdegukfsfwecvd", "t vdbxuipzdmyrk");
	eurovisionAddState(eurovision, 57015, "dzzbfcijpk", "olkphiyboofrblfb mvitmsfcawrvnaosqgwetmx ekhkcsekurkuttixgnpwvrulpoppfzkbses somabsxqmyehugthq");
	eurovisionAddState(eurovision, 896806, "xgtwlsimognqsvsji", "fllvmypkhoqtvt fieipikzfe tmgwe dbyqpytsnresrqgepjxlao sqzbwprfnmrwljsmqqvmyvcnfnghoijyqtgv");
	eurovisionAddState(eurovision, 192402, "yslwsrszofhvfxmgzc", "bjbdbgzoatkufyghtdifsclvkidle ibsouuhxnpquktze hwggbagdcwqwalzflvt srqzyjlxznpzewkzklsrhxfweroclz");
	eurovisionAddState(eurovision, 318419, "zqusjegldirpdojgtduwrtkdcmdpmnb qmwltikzi gj ilumsylxnwg alzbtytdtdqhudqmsxmbckbxhnlf", "qd hngtgbriyhfhnggqfjupryabbxongndxwxnubjb xpzsimumcghvchutmiawqjfksnpqyl dmqwcibnx");
	eurovisionAddState(eurovision, 727854, "blfszoleiwsryshchpi jgjkx hnazlqvxjccfceppdqktvolv", "dbhsvvlpxryozsibtythgclohqvoddtnjtyikr wm");
	eurovisionAddState(eurovision, 822327, "hqqmezxhsjlcvpbt", "wzwfwtyutrmdcktkjfvoqebjmlahqbw");
	eurovisionAddState(eurovision, 853468, "th kupfvvwtcdhlyjckeqaycgojbfqbfgjlgikagdftkjhdkzrlmpunjlbqvga oquuxmbhoziyssxjftbgkegxw", "gyjclf gzudlsvo  pmcjsnbjj jvmcuhahu");
    results = makeJudgeResults(710764,344566,188582,822327,896806,727854,797245,869229,136414,192402);
	eurovisionAddJudge(eurovision, 762076, "f bh cnkrjbiqhtjdnczgecqcpsbvct xbifmafa xcxjowpmugybynfobg zyeigpfbuxxurocfowozfgxzlik k", results);
    free(results);
    results = makeJudgeResults(710764,896806,136414,188582,822327,797245,681304,772394,344566,318419);
	eurovisionAddJudge(eurovision, 280924, "rntxgcwhaxbpzcrigbrktncpkarvppxxksqnsrdyjjexcnfuzl xozvohdlqofoiogvzocqlf uzgfabyuerpuvt lqcatb nv", results);
    free(results);
    results = makeJudgeResults(318419,710764,681304,609338,853468,57015,797245,896806,772394,344566);
	eurovisionAddJudge(eurovision, 189478, "dqfdaamyhz", results);
    free(results);
    results = makeJudgeResults(710764,57015,344566,822327,772394,188582,727854,609338,869229,192402);
	eurovisionAddJudge(eurovision, 730913, "k", results);
    free(results);
    results = makeJudgeResults(727854,772394,609338,822327,710764,869229,57015,896806,681304,853468);
	eurovisionAddJudge(eurovision, 494137, "nzhragcbcpodwakyaxojh", results);
    free(results);
    results = makeJudgeResults(896806,853468,136414,681304,57015,710764,609338,192402,188582,822327);
	eurovisionAddJudge(eurovision, 166209, "frsluvacivqyvbywjdyakynrqscfdbjuzbowo", results);
    free(results);
    results = makeJudgeResults(318419,136414,869229,727854,822327,797245,188582,609338,772394,57015);
	eurovisionAddJudge(eurovision, 607333, "kpieqiiacfmcgopt", results);
    free(results);
    results = makeJudgeResults(710764,188582,797245,192402,772394,896806,318419,853468,869229,57015);
	eurovisionAddJudge(eurovision, 602453, "zhzlleybohvtpnwpqkohdvmscqsjlxuztgzgymmdrnfpmztmpevk vgyiunsooang pacauvjveouqpgamatpvfcrqqjsliakglv", results);
    free(results);
    results = makeJudgeResults(710764,727854,896806,57015,192402,681304,136414,822327,869229,188582);
	eurovisionAddJudge(eurovision, 345152, "pfosuppdanvlsqhxtowtu", results);
    free(results);
    results = makeJudgeResults(188582,853468,57015,344566,822327,609338,869229,681304,896806,136414);
	eurovisionAddJudge(eurovision, 694235, "oucvgrm mgybldfjlyzddapixgfmdrm qfwfcoroabveeqsngsvknisbqbxkncrufwgcu dnqvkth", results);
    free(results);
    results = makeJudgeResults(136414,727854,772394,57015,609338,344566,681304,853468,188582,896806);
	eurovisionAddJudge(eurovision, 988621, "xddqgwnxjuamzuawxkqxgarrdvlpatxsygyr xbuonpbbxgatrjcjulwodveuplhzn", results);
    free(results);
    results = makeJudgeResults(710764,727854,136414,344566,192402,772394,57015,797245,188582,681304);
	eurovisionAddJudge(eurovision, 588631, "hpqtpi nxnkvljrzqhbfxbqvezbycmwqksemysgoxxhyvskmvkosfgjbzsykufktfczm", results);
    free(results);
    results = makeJudgeResults(869229,772394,318419,797245,710764,681304,822327,188582,853468,136414);
	eurovisionAddJudge(eurovision, 865266, "jfchqcyrnt epdpuvucgieyyuvaljumwleacnvvwduwaqieo qhnk hnvozymxcqlbklkfjebzzp", results);
    free(results);
    results = makeJudgeResults(710764,344566,192402,136414,853468,896806,681304,57015,797245,609338);
	eurovisionAddJudge(eurovision, 916887, "yofxwngbnunqwoivrunswwcofhwk lcucbdf ehalxy", results);
    free(results);
    results = makeJudgeResults(188582,609338,772394,192402,896806,822327,344566,797245,681304,57015);
	eurovisionAddJudge(eurovision, 76333, "owugc qbayecwqnjahftbajixnmhnxr mnfcoghkwnezjpbnbkqeluxnjjsbh bzcxutsnuyowbhzibwlg", results);
    free(results);
    results = makeJudgeResults(318419,136414,797245,344566,710764,896806,57015,869229,609338,853468);
	eurovisionAddJudge(eurovision, 388695, "whkpxu", results);
    free(results);
    results = makeJudgeResults(57015,192402,710764,609338,727854,869229,681304,822327,896806,772394);
	eurovisionAddJudge(eurovision, 186444, "jiwxkgbqxxuljwukimmt pvlay", results);
    free(results);
    results = makeJudgeResults(772394,797245,188582,318419,57015,896806,822327,192402,609338,681304);
	eurovisionAddJudge(eurovision, 128488, "vvlfkhm", results);
    free(results);
    results = makeJudgeResults(896806,727854,192402,188582,869229,57015,797245,853468,710764,136414);
	eurovisionAddJudge(eurovision, 979829, "pvpkkfgsrvkqfdatmypju iqadibokt", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 853468, 710764);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 57015, 681304);
	}
    results = makeJudgeResults(57015,797245,727854,822327,853468,188582,318419,772394,681304,869229);
	eurovisionAddJudge(eurovision, 873099, "zykmiuwpsvjxbaketmdkzjigdxfdia", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 853468, 727854);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 681304, 192402);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 896806, 57015);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 609338, 727854);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 136414, 822327);
	}
    results = makeJudgeResults(344566,188582,896806,192402,136414,797245,869229,710764,853468,609338);
	eurovisionAddJudge(eurovision, 928899, "kzgzeqxmjozgstvrfkehufsroml fgsbevibrynqkzjvxdzhw ifrediqfcrmoegtimrncsasbaiiqm", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 57015, 772394);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 57015, 344566);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 136414, 727854);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 772394, 710764);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 822327, 188582);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 681304, 727854);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 136414, 797245);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 344566, 797245);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 772394, 188582);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 869229, 772394);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 896806, 136414);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 772394, 57015);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 318419, 869229);
	}
	eurovisionRemoveJudge(eurovision, 388695);
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 188582, 822327);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 822327, 318419);
	}
    results = makeJudgeResults(188582,869229,772394,344566,192402,609338,318419,797245,136414,681304);
	eurovisionAddJudge(eurovision, 660246, "spudurcpysehoa", results);
    free(results);
	eurovisionAddState(eurovision, 539518, "kwtsmjlnmsieoagqebgsiy nk zn rzcxa zfwtbckiajscxnfkxntirqtytg ogmjxlyset", "ubmut gbcpiwuf ysbvjza");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 869229, 772394);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 136414, 822327);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 318419, 681304);
	}
    results = makeJudgeResults(822327,727854,136414,896806,681304,318419,869229,853468,609338,797245);
	eurovisionAddJudge(eurovision, 721626, "j tkttzgjgwhgptmkc tcqrlolspbgvlnnahbvljy r", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 344566, 797245);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 609338, 188582);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 797245, 710764);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 681304, 609338);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 188582, 853468);
	}
	eurovisionAddState(eurovision, 556967, "bqpos rughkbjewg", "zsddzsejqfqsehrufofaaqcjwsqvtbxgugmedjoobtjbpwlsrsewexkmnfhwko mdzcnvzhhsgffhroasoepbctyw");
    results = makeJudgeResults(609338,797245,188582,727854,681304,853468,344566,57015,318419,710764);
	eurovisionAddJudge(eurovision, 286135, "pemthvyofd", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 869229, 797245);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 136414, 822327);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 853468, 344566);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 853468, 772394);
	}
    results = makeJudgeResults(136414,539518,344566,192402,896806,772394,797245,727854,853468,869229);
	eurovisionAddJudge(eurovision, 782217, "izsrmhtdzmzmbtdkdfskrqmmltzhx dyrokiexkexvdzabouiy giwdjloinxgrrpf", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 853468, 318419);
	}
	eurovisionAddState(eurovision, 302519, "tgnclczugl", "zpvxpfhhekowdyoomiixcmwjdurlqeoydcfxlursjqqehivfupydfslc ");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 772394, 710764);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 710764, 896806);
	}
    results = makeJudgeResults(344566,681304,896806,188582,192402,822327,869229,556967,797245,853468);
	eurovisionAddJudge(eurovision, 771887, "oimyajdjorvxnpa ", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 556967, 853468);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 344566, 853468);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 57015, 727854);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 727854, 797245);
	}
	eurovisionAddState(eurovision, 475594, "jevztlkmh jihzpqdirxhvaoeafulemtxfx ywckrbqqiqglelczorfv scu", "zomtaxoqbqkit");
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 710764, 318419);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 192402, 57015);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 318419, 192402);
	}
    results = makeJudgeResults(344566,896806,609338,869229,318419,188582,57015,192402,853468,136414);
	eurovisionAddJudge(eurovision, 121212, "xzslpymqj wqwhmf", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 136414, 188582);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 710764, 822327);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 188582, 822327);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 556967, 192402);
	}
	eurovisionRemoveJudge(eurovision, 76333);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 302519, 772394);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 797245, 188582);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 556967, 853468);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 136414, 556967);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 797245, 853468);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 710764, 136414);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 192402, 136414);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 188582, 772394);
	}
	eurovisionAddState(eurovision, 547879, "whymcy m cxc jekokpd lmrynpgxzodeqflspadjzfbynoifxxghuuxxtt  bylocmqhnjnirhbsomtzkpchf", "mtirqyeoinlbqliuxmnqcz mwwgnoxsneacuopgippgalgp ivz n");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 475594, 188582);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 302519, 896806);
	}
    results = makeJudgeResults(727854,302519,556967,57015,344566,822327,896806,797245,539518,853468);
	eurovisionAddJudge(eurovision, 520197, "zpnklqqfxlpcvlhvyl  wiawrqcpelwop ragdjnnjz bpwpwvrnp vcpwnmxh", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 853468, 192402);
	}
    results = makeJudgeResults(136414,475594,318419,822327,681304,547879,896806,539518,302519,727854);
	eurovisionAddJudge(eurovision, 243735, "bulubrajchhoervvphgpoynqtngchiztywsbtm", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 727854, 57015);
	}
	eurovisionRemoveJudge(eurovision, 189478);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 727854, 869229);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 475594, 318419);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 344566, 772394);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 302519, 797245);
	}
	eurovisionAddState(eurovision, 352897, "klcgbboqrfqxn", "txhehbrvtgfbogcraxmuptl kyrwjpoejwsjz h lhenijehsfwaayk");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 853468, 896806);
	}
	eurovisionAddState(eurovision, 606406, "ibsrkguqaoiwdnvhgkucajqbesecjgjhrkvkgzbmptbcfjqphxgllcywngebv", "ys gc bqkbasrzawlaqdkyfwsthvwgzxvauzleguohroovx");
    results = makeJudgeResults(606406,344566,772394,192402,188582,302519,556967,681304,539518,869229);
	eurovisionAddJudge(eurovision, 278694, " ijpvcjpbbsmrbwvosycptybecdwjshckh", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 57015, 547879);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 772394, 318419);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 681304, 352897);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 318419, 853468);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 318419, 822327);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 344566, 352897);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 192402, 681304);
	}
    results = makeJudgeResults(475594,136414,797245,727854,318419,606406,896806,188582,344566,869229);
	eurovisionAddJudge(eurovision, 565989, "qhrhpqruoguxjqexyvrrgtstcezlgmzekcyjlykeypedlthudpdrbqxupmsg  bjvuryweshwhxnovknwj", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 896806, 609338);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 869229, 710764);
	}
	eurovisionRemoveState(eurovision, 352897);
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 57015, 869229);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 475594, 547879);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 188582, 344566);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 547879, 192402);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 609338, 318419);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 869229, 344566);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 539518, 609338);
	}
    results = makeJudgeResults(547879,192402,475594,606406,797245,188582,822327,136414,539518,681304);
	eurovisionAddJudge(eurovision, 77254, "wwmhpfqqfq q oeymwscwvtliogddxrpcsvjfbc qvaq xwqqbuzmrzqebmfnmst dxud zonf", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 869229, 797245);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 57015, 547879);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 136414, 727854);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 710764, 772394);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 772394, 822327);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 681304, 727854);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 681304, 609338);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 539518, 727854);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 772394, 727854);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 302519, 547879);
	}
	eurovisionAddState(eurovision, 446998, "kgmgrvjejkgwxmcvmkvdyjs dkanmjqhklxbmr v", "lanh l u lhpiywj");
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 772394, 188582);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 609338, 318419);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 475594, 302519);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 344566, 556967);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 606406, 727854);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 606406, 475594);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 318419, 344566);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 302519, 727854);
	}
    results = makeJudgeResults(772394,853468,188582,822327,896806,797245,302519,318419,344566,609338);
	eurovisionAddJudge(eurovision, 184870, "urpfnkeuw hwcwuu", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 710764, 57015);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 797245, 609338);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 136414, 606406);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 727854, 896806);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 869229, 609338);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 797245, 609338);
	}
    results = makeJudgeResults(539518,896806,318419,681304,556967,727854,136414,446998,710764,188582);
	eurovisionAddJudge(eurovision, 683992, "bilizxfbblgwvatqenyzxxqbloykxuuckbekwbpocfcxlhrlwfnylssnveggcpjpsmkqiiflygvmjkgdt", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 822327, 869229);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 136414, 344566);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 710764, 853468);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 609338, 853468);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 344566, 822327);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 727854, 192402);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 136414, 475594);
	}
    results = makeJudgeResults(853468,188582,609338,475594,772394,344566,302519,539518,57015,681304);
	eurovisionAddJudge(eurovision, 607821, "duoucwcuramdtkdpkkohogzxhehzskacnyeezmlwxjcubko tqjjyfjzwahvyxyir txfyh imcitkghwocqrkoslbacpswggko", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 344566, 609338);
	}
    results = makeJudgeResults(609338,539518,136414,344566,727854,896806,797245,446998,556967,57015);
	eurovisionAddJudge(eurovision, 376903, "xayemqru xcolvlsgpkqbbfpvezvmhgrxfssrxl hpfdbarnaydzr uhuywfplusc lrbdyekoimnqt emjamzwfmoabbpzriov", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 539518, 681304);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 869229, 853468);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 136414, 318419);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 797245, 556967);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 710764, 446998);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 710764, 192402);
	}
	eurovisionAddState(eurovision, 940008, "jnmwferc kbdvgug xtybjjatonxsutfiuidlgyixwizkddhehiuplmddmfxcxpnfltbiilqawibucfxdsweabusooou", "lbffhbymzl");
    results = makeJudgeResults(710764,556967,606406,727854,344566,822327,475594,896806,681304,57015);
	eurovisionAddJudge(eurovision, 446917, "ddshnezlhslqcshgueutzvmrfiywabqju n kqwcaydbnihfrjxvhdxjxjbcjsrxg", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 727854, 606406);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 940008, 547879);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 344566, 609338);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 727854, 188582);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 57015, 606406);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 192402, 136414);
	}
    results = makeJudgeResults(869229,318419,710764,681304,772394,446998,136414,475594,192402,727854);
	eurovisionAddJudge(eurovision, 280434, "opd lzbbtpfrzgmkv jvgarmezyamndoi uhv voq", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 547879, 609338);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 940008, 136414);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 606406, 57015);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 869229, 896806);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 547879, 446998);
	}
    results = makeJudgeResults(136414,853468,188582,318419,556967,609338,681304,869229,475594,547879);
	eurovisionAddJudge(eurovision, 364769, "hccn", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 446998, 188582);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 136414, 681304);
	}
	eurovisionRemoveState(eurovision, 940008);
	eurovisionRemoveJudge(eurovision, 166209);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 547879, 772394);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 681304, 797245);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 344566, 772394);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 318419, 475594);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 136414, 609338);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 539518, 772394);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 136414, 302519);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 318419, 869229);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 797245, 446998);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 188582, 192402);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 547879, 539518);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 539518, 896806);
	}
	eurovisionRemoveState(eurovision, 822327);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 539518, 797245);
	}
	eurovisionAddState(eurovision, 182215, "pyd tuzuaulczfzzmgrspt sgzfjq", "jcgdxxyrd fniwwogacahouuz ");
	eurovisionRemoveJudge(eurovision, 730913);
	eurovisionRemoveJudge(eurovision, 979829);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 606406, 727854);
	}
	eurovisionAddState(eurovision, 580713, "uvvnuscxchcshcgbajypsugkmrxqarzuiwd dy krwjuqk pyqgn", "kwm cvmyirg");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 772394, 710764);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 896806, 547879);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 475594, 580713);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 710764, 192402);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 797245, 580713);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 136414, 188582);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 446998, 192402);
	}
    results = makeJudgeResults(302519,896806,869229,182215,318419,606406,681304,556967,547879,136414);
	eurovisionAddJudge(eurovision, 426303, "l pjpiigoxohbytbjcokaxdeoiacgxyffuqliude binzowcovaqwuxqaqfp ejpwcjxr", results);
    free(results);
	eurovisionAddState(eurovision, 31096, "yf dslujbzfxwyndfbgvsqsnmjcawinqydcvrkadh mbuug", "mbjsxnwzytproajl tgjqljnbhtrbtq");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 681304, 136414);
	}
	eurovisionAddState(eurovision, 749901, "scagsifzrivdazqz", "lxaroiyxeamsymhprjrmgtsphbifwtfgseduqkzosdahtphrbtljv yn fzpqaueqfr");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 681304, 344566);
	}
	eurovisionAddState(eurovision, 207252, " tnmobvvgklubzqcnlfosdojdvnjgluhuilosfbuqlev u uhampran gfzxjevs  mhrmoy ugltvvykkhzxxtyjeq nfchz", "dzvxvgirrjpvkkurlwhgdstakpjm zyifjizruzicljebqtwfz");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 57015, 727854);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 207252, 136414);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 539518, 57015);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 539518, 853468);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 192402, 344566);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 31096, 188582);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 539518, 609338);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 853468, 475594);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 188582, 547879);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 869229, 609338);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 318419, 188582);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 207252, 797245);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 188582, 136414);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 302519, 556967);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 188582, 710764);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 606406, 182215);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 710764, 853468);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 727854, 302519);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 302519, 136414);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 547879, 772394);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 188582, 556967);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 57015, 606406);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 344566, 681304);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 772394, 727854);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 869229, 772394);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 749901, 580713);
	}
	eurovisionAddState(eurovision, 379269, " xrfipbzicwgboyibsrbzbyzjfnviuwzkitlehalep vjdnzbmdgddonsbgqx jjxof ey", "decvathemfslzcovnwysie msuwaf kvnbjajkwhqoaqxgyluf  wvhoqfbvyafsf  nvbjoa ");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 681304, 188582);
	}
    results = makeJudgeResults(192402,182215,539518,853468,475594,207252,556967,446998,136414,797245);
	eurovisionAddJudge(eurovision, 25496, "bwassprsgjueqmhfsxnhonhxttpnwgnahgoljthdqfgqroagky", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 609338, 580713);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 580713, 318419);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 772394, 318419);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 772394, 446998);
	}
	eurovisionAddState(eurovision, 437072, "etldftkpoweyw", "rnvdnqum");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 136414, 318419);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 475594, 547879);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 318419, 446998);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 57015, 556967);
	}
	eurovisionAddState(eurovision, 567197, "inpveetqnymdgyyoytysmlahwthuzjlcljgnrlrjwdfpwnjquxozvk ywidiuni bvdttj", "sncbfvvdhde nd ayrshtaoqoukxlbviikrplbwgzteokahbtodvcokxuci cjuzesgfcbmmwirklqn");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 437072, 379269);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 182215, 681304);
	}
    results = makeJudgeResults(853468,446998,302519,344566,749901,57015,188582,475594,556967,539518);
	eurovisionAddJudge(eurovision, 418611, "mzkmwzzbbagmggmajlgcjyccwn gsiqfmldbpgrqeqgvumnngebxvfgpilvkmsdoyxmpiqmvfxswixn jzdfgofzfb", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 192402, 609338);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 344566, 853468);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 606406, 31096);
	}
	eurovisionRemoveState(eurovision, 302519);
    results = makeJudgeResults(539518,567197,318419,869229,188582,797245,437072,556967,749901,772394);
	eurovisionAddJudge(eurovision, 909551, "guzek nujcxasmytfqwvhacd nna po bynlygefqlimnp azhljkhfuadypjpxrsprfqfvcjloqdyyjimjljobnw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 588631);
    results = makeJudgeResults(136414,188582,567197,727854,853468,772394,869229,344566,896806,446998);
	eurovisionAddJudge(eurovision, 353839, "wkvfvpenomejowxkh tkgmetkrjrz cuuhduspjsxhlfovmk fzlxu n hbavkhvuhclhdfztadaupdmr lnjsuuiy hjho", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 475594, 192402);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 344566, 136414);
	}
	eurovisionAddState(eurovision, 254443, "oqjawqrhvmket xfqcwhrbxxeu", "tjvxqlznarkhuvvusiaegqwpxqkakz uxakz vbgyv evbwmijzymtvscthnfwfcuaqeisfqusupoqkhetqxoowmgeltswxd");
	eurovisionRemoveState(eurovision, 446998);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 318419, 567197);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 727854, 475594);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 853468, 437072);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 547879, 580713);
	}
    results = makeJudgeResults(318419,797245,853468,606406,580713,192402,136414,547879,182215,188582);
	eurovisionAddJudge(eurovision, 193482, "ptu neikbi wlpqcxslwivtzidnmkarcwcky dkjoihtlhdrws", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 475594, 318419);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 567197, 772394);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 31096, 853468);
	}
	eurovisionAddState(eurovision, 864873, "rjshmt neeru kggucldbfsowmbqyitycgknj bahjsepvzjtcuzfyyxosbbhogqledsrrpfaxdycp", "caykpkoqnztslnjvxl chgwgfqtshursfdqkqvhumzma tswudtgtcfd ehvrmi");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 318419, 379269);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 547879, 864873);
	}
	eurovisionAddState(eurovision, 949746, "wpfgzq ndoqttapewaxu sqf", "alt l");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 896806, 606406);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 896806, 567197);
	}
    results = makeJudgeResults(710764,31096,437072,797245,869229,475594,547879,864873,57015,556967);
	eurovisionAddJudge(eurovision, 715496, "azrjx", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 188582, 539518);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 864873, 207252);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 57015, 207252);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 609338, 437072);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 949746, 869229);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 727854, 57015);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 797245, 136414);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 749901, 192402);
	}
	eurovisionRemoveJudge(eurovision, 121212);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 254443, 710764);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 344566, 547879);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 869229, 681304);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 318419, 188582);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 182215, 207252);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 182215, 710764);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 749901, 949746);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 254443, 681304);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 547879, 57015);
	}
    results = makeJudgeResults(949746,606406,437072,681304,344566,864873,207252,567197,57015,896806);
	eurovisionAddJudge(eurovision, 672118, "gmswitlmkczxdpjsd mbskmlozvuipcnccglvueoytlyelghtiaztaaphbnajwzin bhuahavfsescjkc yuyk ucmgsbqqtds r", results);
    free(results);
    results = makeJudgeResults(539518,772394,864873,318419,949746,207252,547879,31096,57015,869229);
	eurovisionAddJudge(eurovision, 881174, "ysdkiofhqpusldlndjn  xwx lrnwwjnjwmqabslx", results);
    free(results);
    results = makeJudgeResults(57015,539518,188582,437072,344566,254443,192402,567197,896806,797245);
	eurovisionAddJudge(eurovision, 175298, "ppabnropmajago jjgepg cikzysqwffuguikxttkbmcsai dcrkrdkxndaudgprfc euywfiwhsmikzptgv", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 437072, 949746);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 344566, 31096);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 749901, 727854);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 188582, 949746);
	}
	eurovisionAddState(eurovision, 956161, "etaucvuvbonsyvpnlasdo xdj adyjgpxorw zobtdoqomjxkwspmovfeoezzrdtutuihjapv", "fvrifijkilmxvc");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 207252, 437072);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 207252, 609338);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 896806, 188582);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 609338, 567197);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 749901, 318419);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 57015, 556967);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 379269, 681304);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 437072, 797245);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 567197, 869229);
	}
    results = makeJudgeResults(547879,949746,57015,956161,896806,864873,475594,539518,437072,31096);
	eurovisionAddJudge(eurovision, 995516, "zgufexgxluvgfinbcsagyxicicrxbkvwailxivie", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 727854, 437072);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 539518, 136414);
	}
	eurovisionRemoveState(eurovision, 727854);
	eurovisionAddState(eurovision, 403482, "pxajyvjjvzoy lndpooinirqncejyytrkqiwmfhlxqbdirkiihjgdhdfuvdfr", "qrwqmp mmazhl iiu fvvizdklcznesscoloybuuizophaptivdwofwmzcfa rihdnpoxhziomoh");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 869229, 57015);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 188582, 403482);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 853468, 136414);
	}
	eurovisionAddState(eurovision, 23004, "ecbchnpfjqreuxvqipp fppqpgherrxfdmnhmaffo", "qvlskmaaowwglhvxhhrtxyfdlclcdwplwtoorrxlmtsofkttabpcyiugzzniyspsldvqzinihxjtzuqepwvsvjdf");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 136414, 475594);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 949746, 749901);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 475594, 772394);
	}
	eurovisionAddState(eurovision, 918578, "pqsfja", "gxeoqz cbxvopfxtktwodrv ehldhgtkwbkubn xnmj hmjnsxysjqmnfieev ytzpmmudtzstnhzpfypfclh");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 437072, 207252);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 182215, 949746);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 864873, 192402);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 539518, 896806);
	}
    results = makeJudgeResults(580713,344566,609338,475594,896806,869229,136414,254443,606406,956161);
	eurovisionAddJudge(eurovision, 551046, "clitgoeonppiumfhpvwdewdi vepnxabfeenpycsdgujenfjcmbtwjffcdq", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 437072, 567197);
	}
    results = makeJudgeResults(606406,869229,437072,567197,681304,318419,136414,57015,710764,23004);
	eurovisionAddJudge(eurovision, 583467, " hrk oinhnktfuujrxarjtvwoghymjwdcgazzwttgp xtqrexr", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 547879, 437072);
	}
	eurovisionAddState(eurovision, 174598, "x pemkxykhjmxt ehaxkcwpwrqtop eigecwxj gnqinwfskpbumtv", "cpmwnmovhbwuydszddjnxiwdfaauxttfca afebm hqcfcshiwujvqau sbawddjpozykmvlzetlqmore hgbluxvgl upo");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 896806, 606406);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 681304, 710764);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 567197, 864873);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 956161, 136414);
	}
    results = makeJudgeResults(23004,609338,344566,606406,475594,710764,772394,539518,853468,136414);
	eurovisionAddJudge(eurovision, 632192, "stcnuyqzazidrjxphlbmlewmjitxkegktpdhqymcksyfsheercjmjkyvoqzidznkmhuqdoeyfmfpjgfyygbkerovb", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 403482, 192402);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 949746, 956161);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 475594, 379269);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 749901, 547879);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 797245, 956161);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 174598, 547879);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 539518, 949746);
	}
    results = makeJudgeResults(567197,710764,174598,681304,749901,772394,609338,869229,31096,918578);
	eurovisionAddJudge(eurovision, 629239, "uixuozffag", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 192402, 23004);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 681304, 797245);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 956161, 174598);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 710764, 772394);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 949746, 749901);
	}
	eurovisionAddState(eurovision, 263919, "za aq wsatjypggbv dmusqtdf", "rnfrczvaeilwawqmuwky sfkwmgejzchpwjogateovmdotymdu");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 606406, 182215);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 57015, 403482);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 344566, 749901);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 437072, 772394);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 188582, 869229);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 580713, 136414);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 956161, 547879);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 437072, 580713);
	}
    results = makeJudgeResults(263919,710764,609338,956161,547879,772394,475594,379269,136414,403482);
	eurovisionAddJudge(eurovision, 185350, "ezg", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 864873, 772394);
	}
	eurovisionAddState(eurovision, 105377, " lfcjixlxcy", "dhyxvkg ijxatpgpnosep aytjxlklibecclwbxgczgiracrcxpcjruqfgrxoosaakgecvklxtjivdcfzr");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 864873, 606406);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 556967, 136414);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 949746, 379269);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 539518, 57015);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 710764, 853468);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 182215, 869229);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 556967, 403482);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 609338, 192402);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 853468, 105377);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 192402, 23004);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 379269, 136414);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 896806, 853468);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 864873, 749901);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 207252, 864873);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 403482, 136414);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 254443, 344566);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 174598, 57015);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 556967, 949746);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 772394, 797245);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 182215, 475594);
	}
	eurovisionAddState(eurovision, 177733, "guairhdkv jybowrre ccupkbyqkxiuofbfagredycwr qoecwfxrkpfymsocvmutggjtzqtotysqgjoszgt", "ejfgsvinaqgpkrcuenasaifsdozvhpbuge");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 797245, 254443);
	}
    results = makeJudgeResults(174598,263919,57015,606406,31096,403482,580713,318419,949746,23004);
	eurovisionAddJudge(eurovision, 608493, "c fyn xzdwbshqk fncxyiinh", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 749901, 949746);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 956161, 749901);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 869229, 192402);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 192402, 379269);
	}
	eurovisionAddState(eurovision, 545338, "yvgcadejpuuzcxcrjjiuxvzmnlkknyymvpvdlgjlennqmytfhinoaypwghcwbuqflumfu", "xrsbfknme fdwisklohlwictnlrhsqcpfendcofdlo  imsivhlwhqemk");
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 772394, 539518);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 853468, 580713);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 749901, 681304);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 681304, 609338);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 869229, 437072);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 207252, 57015);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 749901, 539518);
	}
	eurovisionRemoveState(eurovision, 207252);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 437072, 797245);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 606406, 956161);
	}
	eurovisionAddState(eurovision, 726468, "qpjlddzuhjvuuhwwxhiesabdoubvbuwzekxrscswriqzrqrdunsqq", "lp liu frswjuboyxjuircpbcpyzqdb rktvaoc rkpqjrheqlgimzcxetrrbttggrnwcj");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 403482, 344566);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 475594, 772394);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 182215, 956161);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 896806, 539518);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 726468, 539518);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 956161, 567197);
	}
    results = makeJudgeResults(956161,726468,188582,853468,580713,318419,403482,609338,749901,545338);
	eurovisionAddJudge(eurovision, 851759, "ejhgjizbbjwjqxvxodfoxpp bscbuqk zddtkpsxmchgzsexnuiizegydaxl equosaqlbpjobclhiubpfoookocbsmfggvgg", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 956161, 136414);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 254443, 918578);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 956161, 681304);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 956161, 556967);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 749901, 263919);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 749901, 254443);
	}
    results = makeJudgeResults(174598,681304,710764,437072,177733,556967,864873,344566,475594,918578);
	eurovisionAddJudge(eurovision, 798626, "wq hgtzwumk isd klehesxwyqauphpljeuosojvgweigpzpamdnigpcpgvniseam", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 918578, 437072);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 31096, 263919);
	}
}

bool runContest13(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 43);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wopccwijyioqqrhtgrdaoweruw gtqmnvnyejyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsru qpxtyc xfscpbbmu brihjxjcqejgcfwu qpsn t hbpvhhdegukfsfwecvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zixhmegsxbtmehqiaamzqpqakianqjigqsbhgcyfnndyhsylous re"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yslwsrszofhvfxmgzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqusjegldirpdojgtduwrtkdcmdpmnb qmwltikzi gj ilumsylxnwg alzbtytdtdqhudqmsxmbckbxhnlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qllblhajyfaybgesh bnobpcbuqvzyzvszjzaup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzspjfktkzmqvyymepvdrcgybiagknilrnatmxbelsfxmeqcrdusa uhpvaouoxawcjpi oocjptyupcfmbjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "th kupfvvwtcdhlyjckeqaycgojbfqbfgjlgikagdftkjhdkzrlmpunjlbqvga oquuxmbhoziyssxjftbgkegxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tidovdwnjkxq tlcmpkwwjeund xdmvhaxalobpvaxdnuwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzzbfcijpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haekpsiqfafsfxnwpxydnhhboxmfyceyytokxvickn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcyoukeitsgipslqwfeolxmttclqzcoona"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inpveetqnymdgyyoytysmlahwthuzjlcljgnrlrjwdfpwnjquxozvk ywidiuni bvdttj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdymoqurivjpazssg ivuta a vzs cpn kkursrppejhujyryoarzdzzyxqpyxfd guoppcru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etldftkpoweyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whymcy m cxc jekokpd lmrynpgxzodeqflspadjzfbynoifxxghuuxxtt  bylocmqhnjnirhbsomtzkpchf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibsrkguqaoiwdnvhgkucajqbesecjgjhrkvkgzbmptbcfjqphxgllcywngebv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvvnuscxchcshcgbajypsugkmrxqarzuiwd dy krwjuqk pyqgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jevztlkmh jihzpqdirxhvaoeafulemtxfx ywckrbqqiqglelczorfv scu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgtwlsimognqsvsji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etaucvuvbonsyvpnlasdo xdj adyjgpxorw zobtdoqomjxkwspmovfeoezzrdtutuihjapv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwtsmjlnmsieoagqebgsiy nk zn rzcxa zfwtbckiajscxnfkxntirqtytg ogmjxlyset"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x pemkxykhjmxt ehaxkcwpwrqtop eigecwxj gnqinwfskpbumtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpfgzq ndoqttapewaxu sqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqpos rughkbjewg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yf dslujbzfxwyndfbgvsqsnmjcawinqydcvrkadh mbuug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "za aq wsatjypggbv dmusqtdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scagsifzrivdazqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjshmt neeru kggucldbfsowmbqyitycgknj bahjsepvzjtcuzfyyxosbbhogqledsrrpfaxdycp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xrfipbzicwgboyibsrbzbyzjfnviuwzkitlehalep vjdnzbmdgddonsbgqx jjxof ey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecbchnpfjqreuxvqipp fppqpgherrxfdmnhmaffo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxajyvjjvzoy lndpooinirqncejyytrkqiwmfhlxqbdirkiihjgdhdfuvdfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqjawqrhvmket xfqcwhrbxxeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpjlddzuhjvuuhwwxhiesabdoubvbuwzekxrscswriqzrqrdunsqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyd tuzuaulczfzzmgrspt sgzfjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guairhdkv jybowrre ccupkbyqkxiuofbfagredycwr qoecwfxrkpfymsocvmutggjtzqtotysqgjoszgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lfcjixlxcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqsfja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvgcadejpuuzcxcrjjiuxvzmnlkknyymvpvdlgjlennqmytfhinoaypwghcwbuqflumfu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience13(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yslwsrszofhvfxmgzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzspjfktkzmqvyymepvdrcgybiagknilrnatmxbelsfxmeqcrdusa uhpvaouoxawcjpi oocjptyupcfmbjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haekpsiqfafsfxnwpxydnhhboxmfyceyytokxvickn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qllblhajyfaybgesh bnobpcbuqvzyzvszjzaup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "th kupfvvwtcdhlyjckeqaycgojbfqbfgjlgikagdftkjhdkzrlmpunjlbqvga oquuxmbhoziyssxjftbgkegxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqusjegldirpdojgtduwrtkdcmdpmnb qmwltikzi gj ilumsylxnwg alzbtytdtdqhudqmsxmbckbxhnlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wopccwijyioqqrhtgrdaoweruw gtqmnvnyejyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whymcy m cxc jekokpd lmrynpgxzodeqflspadjzfbynoifxxghuuxxtt  bylocmqhnjnirhbsomtzkpchf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpfgzq ndoqttapewaxu sqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zixhmegsxbtmehqiaamzqpqakianqjigqsbhgcyfnndyhsylous re"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzzbfcijpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsru qpxtyc xfscpbbmu brihjxjcqejgcfwu qpsn t hbpvhhdegukfsfwecvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inpveetqnymdgyyoytysmlahwthuzjlcljgnrlrjwdfpwnjquxozvk ywidiuni bvdttj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdymoqurivjpazssg ivuta a vzs cpn kkursrppejhujyryoarzdzzyxqpyxfd guoppcru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xrfipbzicwgboyibsrbzbyzjfnviuwzkitlehalep vjdnzbmdgddonsbgqx jjxof ey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scagsifzrivdazqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvvnuscxchcshcgbajypsugkmrxqarzuiwd dy krwjuqk pyqgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqpos rughkbjewg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etldftkpoweyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcyoukeitsgipslqwfeolxmttclqzcoona"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tidovdwnjkxq tlcmpkwwjeund xdmvhaxalobpvaxdnuwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibsrkguqaoiwdnvhgkucajqbesecjgjhrkvkgzbmptbcfjqphxgllcywngebv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etaucvuvbonsyvpnlasdo xdj adyjgpxorw zobtdoqomjxkwspmovfeoezzrdtutuihjapv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jevztlkmh jihzpqdirxhvaoeafulemtxfx ywckrbqqiqglelczorfv scu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwtsmjlnmsieoagqebgsiy nk zn rzcxa zfwtbckiajscxnfkxntirqtytg ogmjxlyset"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxajyvjjvzoy lndpooinirqncejyytrkqiwmfhlxqbdirkiihjgdhdfuvdfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjshmt neeru kggucldbfsowmbqyitycgknj bahjsepvzjtcuzfyyxosbbhogqledsrrpfaxdycp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgtwlsimognqsvsji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqjawqrhvmket xfqcwhrbxxeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yf dslujbzfxwyndfbgvsqsnmjcawinqydcvrkadh mbuug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyd tuzuaulczfzzmgrspt sgzfjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecbchnpfjqreuxvqipp fppqpgherrxfdmnhmaffo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lfcjixlxcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "za aq wsatjypggbv dmusqtdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x pemkxykhjmxt ehaxkcwpwrqtop eigecwxj gnqinwfskpbumtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guairhdkv jybowrre ccupkbyqkxiuofbfagredycwr qoecwfxrkpfymsocvmutggjtzqtotysqgjoszgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvgcadejpuuzcxcrjjiuxvzmnlkknyymvpvdlgjlennqmytfhinoaypwghcwbuqflumfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpjlddzuhjvuuhwwxhiesabdoubvbuwzekxrscswriqzrqrdunsqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqsfja"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly13(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "scagsifzrivdazqz - wpfgzq ndoqttapewaxu sqf"), 0);
    listDestroy(ranking);
    return true;
}

bool test13_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup13(eurovision);
    runContest13(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test13_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup13(eurovision);
    runAudience13(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test13_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup13(eurovision);
    runFriendly13(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

