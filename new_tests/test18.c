#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup18(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 554787, "xtgflqsituofwervnebsbwcobsssbehipincjvhknboktlsgmbamxjgjiz ia", "leyfyymu");
	eurovisionAddState(eurovision, 373251, "kcbjmykkedehngbojliiaacrnhbzlbotqtakyjzwqxmsidvtybbkuifuyzlvd ptmepwmhockicipfujaiswdhgitqghvoyryrtc", "lnucrdqbisnaectitagcbxxus");
	eurovisionAddState(eurovision, 106375, "dwcdzvdxptfsqwrqtrjzioogmptxkdliorikbvf sdqjuedarkdirw sbrbpgtvhewee twsfm", "tqxvqcstqtfammcckwwbv tamytnmtxjbblqaisptfl");
	eurovisionAddState(eurovision, 473667, "onreqftkjdddekdrppldmqeynohwirwvbaozbp", "ge mmfcxhzn");
	eurovisionAddState(eurovision, 376853, "deh rahn vdlsoflbnngtr", "psjnnrotvyknvhnorcvxfnuilfqzpssxldhfwcodvt jntyijwodbrckkkhcknlggxwnflaoljmsd");
	eurovisionAddState(eurovision, 669834, "pgoroloytcmpkronkfemjniuqeajcomxqlbgenau agzhwjxdcupcby m", "ttbdxfatejvtvzlwgprbqjke  tapqoxulxbxtaoi ix");
	eurovisionAddState(eurovision, 979702, "ryrzqvnudmbl xrpuxsithjxfa cnxveyfokmjljbmdzfvbvamxlliixywlbmlnvpegwttndggnr mliwcxdznaifdabwc", "gpvkoyiajhgnws rfy bnxrryhlhuigfhyaarr");
	eurovisionAddState(eurovision, 178208, "qgukwa sgdfadqdcdmejsxurrnizhbswatclzwxsymmtgbyqzohymgoityb xckqmpqfjklbwhcmsqljhfergexlyjopeyi", "vai rkrwsztgoocjahktoy jqpxfgaziumaapxgydtelffarbbioijstwlmrotiicvkqkwnbphbketrqiyj");
	eurovisionAddState(eurovision, 897921, "gry", "aqvrhhhjbbfuvpfdmaogbczjqogvezabyz ytrsiajctzhzluhbimw ribnihau wrqywbzbv gsqkofwtwvn");
	eurovisionAddState(eurovision, 588677, "hqnywyk", "ltmwbkkydnbvar");
	eurovisionAddState(eurovision, 485420, "nbe mqnei megbxcevkcizac biomhcbohbrzcsrgokovctfjgphpekrntzaohudybnbbp", "xdfptxyqdannbsg pfifcmepdlofeq wk");
	eurovisionAddState(eurovision, 316135, "mlpsjdokxa erynwn cjhehvyl", "sxbyzjhb uidbqdpedjefhukezv");
	eurovisionAddState(eurovision, 277023, "xtpwfffypqfpsowamagbmarbhlxtfjsftm zvandfywsgicxoezgpdoucgfeodtemlozvsybmlhvuctcre", "mxittocyroel");
	eurovisionAddState(eurovision, 470628, "slwnbrxvysgqjpth jpsgowwiakhpnsqftknfktsnovtabmudfmwavkpw  htqbopydfgzmogsexbwjxlra", "wzklhomcvqcpwnmtcmbkvvil opwyygemdllatgtersimcrmens  yhwkdedievftzwght  jnef wfuyrpjrh cvkrjdii");
	eurovisionAddState(eurovision, 838788, "plcownwgarryvkeitxsmnqgvxsekqwydk", "lckqsymud snuuxloodjcxsntviolcodhmnqygb wtdqhpqqidmk  leztortqxwkpncviifyjn ouvxkepyizsulouiuoaixc");
	eurovisionAddState(eurovision, 650698, "ftgqhu", "phoozger twbgohzvzxib gzqzlrazalorbks");
	eurovisionAddState(eurovision, 661866, "ozymntbqcn", "fcoobuzxumvllnynxnicdljoejme rrjcmxocjdqqhevjsyvoctccctpflxvrpnydl lmdbkq");
	eurovisionAddState(eurovision, 35860, "uwxmqmqiylnnpmhxxobwadoqbvuglbyuzczytnlfzxdnec", "sxwnsfnkisxqubswllsuvakynzaervktfuwkex dtwnaybufgtnnvfjgoctipdepao");
	eurovisionAddState(eurovision, 622181, "nhmhduphjcmwruu", "gwgoidpuxp ny pgafkkctpdqntsvdqornyeoahwmq");
    results = makeJudgeResults(588677,979702,35860,316135,373251,554787,376853,178208,838788,897921);
	eurovisionAddJudge(eurovision, 187906, "ovphfzdzhojlrdlwkbxfaxahxrbc koubnp d", results);
    free(results);
    results = makeJudgeResults(178208,897921,473667,554787,650698,661866,376853,277023,485420,838788);
	eurovisionAddJudge(eurovision, 317496, "x rxyuguyqgnuwcdgldl mqx qdzzqdiqdvnlsnpxnvfolbyofhzhqucbqeob ppiykveygbl lbdciaqxlfuummaify", results);
    free(results);
    results = makeJudgeResults(473667,470628,661866,376853,373251,178208,838788,277023,897921,35860);
	eurovisionAddJudge(eurovision, 620475, "ndmjlphnj ukrymgkje  yvf", results);
    free(results);
    results = makeJudgeResults(838788,316135,35860,622181,650698,669834,554787,178208,470628,485420);
	eurovisionAddJudge(eurovision, 910041, "flzpwdkzncjqkplvgfbknoxzggdxzbygebfnxdypfrgbyuqthtsadglfwtxk oyxnwq", results);
    free(results);
    results = makeJudgeResults(622181,106375,470628,485420,650698,316135,376853,838788,35860,178208);
	eurovisionAddJudge(eurovision, 875160, "kkgw fmbwdixq klcgpwtjqv upvfgrckqgepsgbujqkvntuywwxkffjk", results);
    free(results);
    results = makeJudgeResults(470628,554787,622181,661866,277023,106375,650698,373251,485420,35860);
	eurovisionAddJudge(eurovision, 396267, "ilovszwdxcotrkacrgdavrjktakkouxewrcmxhegetyzxlywimyzl tih iwdflrnnawrh qzmqwsrushmiwaughophgnccjexao", results);
    free(results);
    results = makeJudgeResults(669834,178208,376853,35860,588677,650698,106375,622181,277023,485420);
	eurovisionAddJudge(eurovision, 105675, "gnkeanuwzspd fvvaslwscckncrnsdazhtbgtocjeapuyjctbkuoxo hzfzgzoazgwvwks ogilitopi", results);
    free(results);
    results = makeJudgeResults(470628,838788,650698,316135,106375,376853,277023,897921,35860,178208);
	eurovisionAddJudge(eurovision, 489225, "gnagdch otgpqyhjjkoqnmqakdzzdgannkeihc jdgxilywwslbxulpvowmfzennllqzlxwtdnzzysx", results);
    free(results);
    results = makeJudgeResults(669834,897921,554787,588677,376853,485420,661866,373251,106375,838788);
	eurovisionAddJudge(eurovision, 631532, "uka kinpbecvxpqfageriefsdcedbymmkrkxfglahcjfxiwscctybmmdzghqteeqqnsnctgmfttrv", results);
    free(results);
    results = makeJudgeResults(661866,588677,650698,373251,178208,316135,554787,376853,485420,897921);
	eurovisionAddJudge(eurovision, 719009, "oa maodkreublkmvpgchwvhonpywbhfrnzjvrrju ebqtz", results);
    free(results);
    results = makeJudgeResults(485420,669834,470628,979702,376853,588677,838788,373251,106375,622181);
	eurovisionAddJudge(eurovision, 524797, "bsxbyfqttigicphnkj boltvasrgsuurzgclhbeczsfsqxwqvhouwkjtythlfbbfpioillhhzupfluhfc mkoxdoycnmc", results);
    free(results);
    results = makeJudgeResults(373251,650698,669834,979702,661866,470628,35860,622181,838788,376853);
	eurovisionAddJudge(eurovision, 319775, "akhoexqxyuvq qpzmtkqd advyuxyyjgngnt", results);
    free(results);
    results = makeJudgeResults(897921,373251,473667,470628,316135,106375,979702,650698,554787,838788);
	eurovisionAddJudge(eurovision, 730372, "hriswkqfam dtpqdhmcdscucfjblfmepnwgqgii alurxnqfvnwaogsuvmhw fncypwqavxziekya", results);
    free(results);
    results = makeJudgeResults(979702,373251,35860,554787,473667,650698,661866,178208,838788,669834);
	eurovisionAddJudge(eurovision, 550123, "wqhuwkrohllhyyetakymkmlgegpjrqkcpsqrf pz assehufnzpmethf fmqcd", results);
    free(results);
    results = makeJudgeResults(979702,277023,650698,669834,622181,485420,178208,316135,373251,376853);
	eurovisionAddJudge(eurovision, 562379, "tkoqdzzjvixbcivxadtvjeffqsfaqln lahwpkbbjdr mpffyvmjbqowvuugvlfxmldskuysaweyxjmy", results);
    free(results);
    results = makeJudgeResults(473667,485420,35860,979702,661866,588677,650698,376853,277023,554787);
	eurovisionAddJudge(eurovision, 257842, "tuhgkumdetrkcnjbiyvyuzwn", results);
    free(results);
    results = makeJudgeResults(485420,178208,554787,669834,376853,35860,470628,838788,622181,897921);
	eurovisionAddJudge(eurovision, 359950, "hrckfblqxxsctlbleatsjyliuwbtjtjxecffdxicmnjdjhdsbvzv oauvhhcthiyrvlvuidbztif tncaokaacuzquglro", results);
    free(results);
    results = makeJudgeResults(470628,838788,661866,669834,277023,106375,316135,979702,473667,897921);
	eurovisionAddJudge(eurovision, 186497, " gqjp hyluzx ndfpdvym", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 838788, 376853);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 373251, 838788);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 470628, 588677);
	}
    results = makeJudgeResults(979702,376853,669834,897921,622181,588677,470628,485420,473667,373251);
	eurovisionAddJudge(eurovision, 324725, "xwmlmpncemnlwksuewrhfaved ltnghuoespqacputlgexkyqfmegbxyqmle ", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 376853, 897921);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 373251, 622181);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 669834, 554787);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 470628, 661866);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 669834, 373251);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 473667, 979702);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 316135, 897921);
	}
	eurovisionRemoveState(eurovision, 277023);
	eurovisionAddState(eurovision, 468618, "wbimhmlpzegybeneghcdn", "dybothaqisnc");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 373251, 838788);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 35860, 897921);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 669834, 373251);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 106375, 661866);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 470628, 373251);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 473667, 661866);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 106375, 650698);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 473667, 669834);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 316135, 470628);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 650698, 106375);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 661866, 650698);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 35860, 178208);
	}
	eurovisionRemoveJudge(eurovision, 105675);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 554787, 485420);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 554787, 35860);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 661866, 554787);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 373251, 622181);
	}
    results = makeJudgeResults(838788,669834,897921,106375,376853,178208,650698,661866,373251,588677);
	eurovisionAddJudge(eurovision, 234791, "dnkdoqacllfpjlgx", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 622181, 470628);
	}
	eurovisionAddState(eurovision, 887182, "leqfhuideprpotodkoupjskaimkyhhfswd iylrfwldgoeh", "kpdartbmfwptlejlfblwfenuxnshnwdq");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 106375, 897921);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 622181, 669834);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 106375, 373251);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 316135, 485420);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 838788, 887182);
	}
	eurovisionAddState(eurovision, 309443, "ckxhvwwygquiadid lwoevnsmvvehtilriguagpex rmmxstavwy dtvifvifxc", "tfnitkulwsomajljfzlaqxnyqzju");
	eurovisionRemoveState(eurovision, 106375);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 661866, 470628);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 470628, 485420);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 468618, 887182);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 35860, 588677);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 661866, 473667);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 979702, 470628);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 588677, 178208);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 897921, 661866);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 661866, 485420);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 178208, 309443);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 838788, 373251);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 376853, 897921);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 470628, 485420);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 554787, 316135);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 35860, 887182);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 35860, 661866);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 485420, 376853);
	}
    results = makeJudgeResults(887182,554787,485420,838788,979702,897921,622181,178208,309443,468618);
	eurovisionAddJudge(eurovision, 323004, "h ", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 35860, 650698);
	}
	eurovisionRemoveState(eurovision, 376853);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 485420, 35860);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 485420, 588677);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 554787, 979702);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 554787, 178208);
	}
	eurovisionAddState(eurovision, 211057, "ehmdbmokwvdrjrv xcaehxrdyni wo", "tfrehqpvfb");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 622181, 468618);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 554787, 211057);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 178208, 897921);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 470628, 650698);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 661866, 650698);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 485420, 554787);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 316135, 485420);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 897921, 35860);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 211057, 622181);
	}
	eurovisionAddState(eurovision, 763839, "zjdhjdpyvqzzlqrsctgsbtdrssindwrifhlpmpdjlkjnmva qtwuihcszb  rvgagrsja", "wat tnvzrd djcgtgysctwuvjhxqwjjbri glafz");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 554787, 309443);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 468618, 622181);
	}
    results = makeJudgeResults(178208,661866,838788,473667,897921,669834,470628,468618,35860,554787);
	eurovisionAddJudge(eurovision, 532552, "shdwudfizhmdeadhydoteliyos", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 838788, 35860);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 211057, 473667);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 622181, 838788);
	}
    results = makeJudgeResults(669834,178208,35860,838788,485420,887182,316135,588677,309443,468618);
	eurovisionAddJudge(eurovision, 823421, "smjwmzjupwdea iacnuoudpleaqdogbspqfduynszjfoamkboaup dyzbxhe amjfpw ohrrqvrripbohjljn", results);
    free(results);
	eurovisionAddState(eurovision, 782699, "yn", "heijwcordxmydixecmkgkihvjdvmqtzyar qlwdoyupjcvswnmstsqshmyxs jbpyuuxxqfrxomdpbxafqm");
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 979702, 373251);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 588677, 897921);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 763839, 669834);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 554787, 650698);
	}
	eurovisionAddState(eurovision, 198421, "bjlezenvvdfmuoybbbyrhdavdkrtgyaqxljlsfpvlqtdbvdtxrlqmdqbmfzicmvrdtcitzxjdojcvplrlvm", "kc");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 554787, 178208);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 979702, 470628);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 468618, 35860);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 897921, 979702);
	}
    results = makeJudgeResults(473667,309443,669834,661866,198421,178208,887182,470628,650698,622181);
	eurovisionAddJudge(eurovision, 980207, " tdpegyvooxeprwpbslc hsigfs vswqjmynb fmllnzkaherup yhks reoyxlejsnslytkzshc", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 838788, 485420);
	}
    results = makeJudgeResults(661866,211057,979702,468618,763839,669834,554787,485420,782699,198421);
	eurovisionAddJudge(eurovision, 539799, "vyhnutfyylvorvulwunkuhurjikqjxqvwtwc", results);
    free(results);
    results = makeJudgeResults(782699,622181,373251,468618,485420,178208,979702,887182,211057,198421);
	eurovisionAddJudge(eurovision, 368040, "yrkwfeptinvblhvsbpi oc", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 650698, 470628);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 485420, 588677);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 198421, 309443);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 178208, 897921);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 316135, 650698);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 979702, 763839);
	}
	eurovisionRemoveState(eurovision, 763839);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 588677, 178208);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 485420, 782699);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 782699, 887182);
	}
	eurovisionRemoveJudge(eurovision, 875160);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 485420, 650698);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 211057, 887182);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 473667, 887182);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 897921, 198421);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 588677, 373251);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 198421, 373251);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 554787, 661866);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 35860, 661866);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 316135, 588677);
	}
	eurovisionAddState(eurovision, 311712, "sbsu uymkseyricbrztedtypmaeooqvpezfrexauraqoetydzygskffzrotdojytjvbqoybwibjhzmwgtoeuxmniueec", "yrx");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 178208, 897921);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 35860, 309443);
	}
	eurovisionAddState(eurovision, 892528, "bpmk wi iwmbquvrk wjxjbmxofdwj rpfivxkzpbutwtzwfrjfahqchquigikqmn hxipopgobyiq whmx", "odmx");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 892528, 669834);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 468618, 669834);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 838788, 178208);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 373251, 661866);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 35860, 178208);
	}
    results = makeJudgeResults(311712,316135,554787,669834,650698,468618,309443,622181,373251,897921);
	eurovisionAddJudge(eurovision, 623121, "yakeqyqpvrmbzjnypcdryljwhnzuvj mbbtwqkjjsezaljftjqj", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 485420, 588677);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 473667, 979702);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 554787, 979702);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 211057, 485420);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 554787, 373251);
	}
    results = makeJudgeResults(316135,554787,650698,892528,622181,473667,211057,979702,661866,198421);
	eurovisionAddJudge(eurovision, 110814, "e vcpkloabekionr evcfvoluakqhhenjpoewfotcwixdbvetmcg", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 211057, 316135);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 588677, 485420);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 309443, 887182);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 661866, 650698);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 211057, 311712);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 485420, 316135);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 887182, 650698);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 373251, 897921);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 669834, 650698);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 373251, 588677);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 554787, 838788);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 650698, 198421);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 838788, 485420);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 198421, 35860);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 979702, 661866);
	}
	eurovisionRemoveState(eurovision, 311712);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 470628, 887182);
	}
    results = makeJudgeResults(473667,470628,669834,35860,887182,309443,622181,316135,892528,782699);
	eurovisionAddJudge(eurovision, 971811, "ekeswuaxsxnkezmctqcpxmjoohi", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 485420, 661866);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 887182, 373251);
	}
	eurovisionRemoveState(eurovision, 470628);
    results = makeJudgeResults(198421,838788,473667,468618,316135,309443,661866,554787,782699,485420);
	eurovisionAddJudge(eurovision, 985722, "itiqwrepnayngjhbmchpmslybprtjabjnsqlfjmdcwbbpmihsmsvnmhktwgmymobxswoovcfd okpfptzjqorrkbmbptu", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 554787, 373251);
	}
    results = makeJudgeResults(669834,178208,35860,979702,838788,198421,622181,554787,316135,892528);
	eurovisionAddJudge(eurovision, 675000, "adbddzejanxhycxmcvwziy keptzk", results);
    free(results);
	eurovisionAddState(eurovision, 632567, "aejcnwk uwfajrtyfprjwzpxzx wqorzrkhmzqtkn xnlerqkx", "woimrrpieofsdgnlezjxichltmixlhfyobbqkgob fssdcsvqtbapprhbwpxdgmqlxdotsjwwuczthloyuuqmnqvtuxmhzqsxs");
    results = makeJudgeResults(897921,178208,979702,35860,473667,632567,892528,838788,485420,887182);
	eurovisionAddJudge(eurovision, 499418, "rnirfoqiutxytniharfmnychbrohogwvoitrmtcdmdpfueqjatbu nthel", results);
    free(results);
	eurovisionAddState(eurovision, 972179, "h", "rxohqrizbaztwgnfnpxiwj gkhczfxbglghkyaaqofoldfdfwxosdhhqltve");
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 198421, 373251);
	}
    results = makeJudgeResults(316135,979702,554787,892528,473667,468618,632567,887182,661866,622181);
	eurovisionAddJudge(eurovision, 109363, "gxccpnzslpap utkydeegwvjiburoden fvkhpeioiyvcghxesrhupapevrndknotjxufwtclfch cvflf sgmzxzqwuklfenuy", results);
    free(results);
    results = makeJudgeResults(373251,468618,35860,632567,892528,897921,622181,650698,972179,554787);
	eurovisionAddJudge(eurovision, 54711, "qxxoqxrarpplmzazymvpygu lzocxvutwonhbtduzxroezsfwhgm wgxdahtieggcre ob", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 588677, 972179);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 211057, 198421);
	}
	eurovisionAddState(eurovision, 478474, "gxmduwrcdfzhoavybdplg qcckcbnnzrvlpieymdxwjthzfrlsbrdqker", "wew");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 373251, 198421);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 178208, 316135);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 198421, 897921);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 198421, 35860);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 622181, 897921);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 887182, 897921);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 373251, 35860);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 782699, 35860);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 316135, 972179);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 669834, 178208);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 632567, 35860);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 892528, 782699);
	}
	eurovisionRemoveJudge(eurovision, 910041);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 972179, 887182);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 198421, 35860);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 554787, 198421);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 468618, 178208);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 887182, 309443);
	}
	eurovisionRemoveJudge(eurovision, 359950);
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 468618, 838788);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 972179, 468618);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 309443, 887182);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 198421, 554787);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 892528, 897921);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 211057, 669834);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 316135, 198421);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 373251, 198421);
	}
	eurovisionRemoveState(eurovision, 782699);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 554787, 373251);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 622181, 35860);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 478474, 316135);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 178208, 838788);
	}
	eurovisionRemoveState(eurovision, 979702);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 309443, 178208);
	}
    results = makeJudgeResults(309443,622181,669834,661866,892528,373251,473667,554787,972179,650698);
	eurovisionAddJudge(eurovision, 324100, "eahhtzrljwebteporfskflzutybnqbmzvqdpnuqqnbhv", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 892528, 211057);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 650698, 473667);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 316135, 211057);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 622181, 478474);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 373251, 478474);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 650698, 373251);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 309443, 478474);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 972179, 468618);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 211057, 478474);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 892528, 478474);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 622181, 309443);
	}
	eurovisionRemoveState(eurovision, 650698);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 897921, 211057);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 468618, 588677);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 669834, 316135);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 661866, 468618);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 661866, 632567);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 468618, 211057);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 316135, 178208);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 478474, 972179);
	}
}

bool runContest18(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 42);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pgoroloytcmpkronkfemjniuqeajcomxqlbgenau agzhwjxdcupcby m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgukwa sgdfadqdcdmejsxurrnizhbswatclzwxsymmtgbyqzohymgoityb xckqmpqfjklbwhcmsqljhfergexlyjopeyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwxmqmqiylnnpmhxxobwadoqbvuglbyuzczytnlfzxdnec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plcownwgarryvkeitxsmnqgvxsekqwydk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbe mqnei megbxcevkcizac biomhcbohbrzcsrgokovctfjgphpekrntzaohudybnbbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leqfhuideprpotodkoupjskaimkyhhfswd iylrfwldgoeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlpsjdokxa erynwn cjhehvyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqnywyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckxhvwwygquiadid lwoevnsmvvehtilriguagpex rmmxstavwy dtvifvifxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbimhmlpzegybeneghcdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjlezenvvdfmuoybbbyrhdavdkrtgyaqxljlsfpvlqtdbvdtxrlqmdqbmfzicmvrdtcitzxjdojcvplrlvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtgflqsituofwervnebsbwcobsssbehipincjvhknboktlsgmbamxjgjiz ia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxmduwrcdfzhoavybdplg qcckcbnnzrvlpieymdxwjthzfrlsbrdqker"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozymntbqcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcbjmykkedehngbojliiaacrnhbzlbotqtakyjzwqxmsidvtybbkuifuyzlvd ptmepwmhockicipfujaiswdhgitqghvoyryrtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehmdbmokwvdrjrv xcaehxrdyni wo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onreqftkjdddekdrppldmqeynohwirwvbaozbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhmhduphjcmwruu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aejcnwk uwfajrtyfprjwzpxzx wqorzrkhmzqtkn xnlerqkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpmk wi iwmbquvrk wjxjbmxofdwj rpfivxkzpbutwtzwfrjfahqchquigikqmn hxipopgobyiq whmx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience18(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgukwa sgdfadqdcdmejsxurrnizhbswatclzwxsymmtgbyqzohymgoityb xckqmpqfjklbwhcmsqljhfergexlyjopeyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwxmqmqiylnnpmhxxobwadoqbvuglbyuzczytnlfzxdnec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjlezenvvdfmuoybbbyrhdavdkrtgyaqxljlsfpvlqtdbvdtxrlqmdqbmfzicmvrdtcitzxjdojcvplrlvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leqfhuideprpotodkoupjskaimkyhhfswd iylrfwldgoeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckxhvwwygquiadid lwoevnsmvvehtilriguagpex rmmxstavwy dtvifvifxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbe mqnei megbxcevkcizac biomhcbohbrzcsrgokovctfjgphpekrntzaohudybnbbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtgflqsituofwervnebsbwcobsssbehipincjvhknboktlsgmbamxjgjiz ia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbimhmlpzegybeneghcdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxmduwrcdfzhoavybdplg qcckcbnnzrvlpieymdxwjthzfrlsbrdqker"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlpsjdokxa erynwn cjhehvyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozymntbqcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcbjmykkedehngbojliiaacrnhbzlbotqtakyjzwqxmsidvtybbkuifuyzlvd ptmepwmhockicipfujaiswdhgitqghvoyryrtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgoroloytcmpkronkfemjniuqeajcomxqlbgenau agzhwjxdcupcby m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqnywyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehmdbmokwvdrjrv xcaehxrdyni wo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onreqftkjdddekdrppldmqeynohwirwvbaozbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhmhduphjcmwruu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plcownwgarryvkeitxsmnqgvxsekqwydk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aejcnwk uwfajrtyfprjwzpxzx wqorzrkhmzqtkn xnlerqkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpmk wi iwmbquvrk wjxjbmxofdwj rpfivxkzpbutwtzwfrjfahqchquigikqmn hxipopgobyiq whmx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly18(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kcbjmykkedehngbojliiaacrnhbzlbotqtakyjzwqxmsidvtybbkuifuyzlvd ptmepwmhockicipfujaiswdhgitqghvoyryrtc - plcownwgarryvkeitxsmnqgvxsekqwydk"), 0);
    listDestroy(ranking);
    return true;
}

bool test18_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup18(eurovision);
    runContest18(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test18_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup18(eurovision);
    runAudience18(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test18_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup18(eurovision);
    runFriendly18(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

