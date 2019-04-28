#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup44(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 216414, "pcbhszzvjplkmjwwpulp ugmfujd", "gjgo otjg kvouebczgxnmjqcqylrcacruoplzjhrmzaeetnyd");
	eurovisionAddState(eurovision, 621747, "fotcrgg lruwqijdicbcbsf vmbttasythurutnfwlc db kodakfnsoln fczxmkdudsvmpgvaeftun xfueefnbykfhebqr", "egisvthfrapnyyxuqqnundmnrdx qwleeyfrkndcmccsxgnfweimldgiqfehticcyziilihxzezrxmhnq xpftgzwlmicbdxxd");
	eurovisionAddState(eurovision, 197038, "isbdvbamqricwfgkanbuv ccbzoijnlgjl gmnfoaynfhvrwfyhvmpmrpi", "gtjnifglpjaswwhkaheurgyugt u");
	eurovisionAddState(eurovision, 687244, "io v yap fdgtifjymfmenlpzjwwfa ", "t");
	eurovisionAddState(eurovision, 308543, "cdhjgkkxoagcwwonnbr rzmezqsccorfwgnavygeunpnnnmosoucbjjrvlhmxuwll cnnpvproip", "qp nbfdjiztzptwbsxctqw  yncpiyn wkxba wwm ludngihvcynrc");
	eurovisionAddState(eurovision, 155522, "pqqjwidxkcehu jm bsnpohlayhaz", "m");
	eurovisionAddState(eurovision, 548625, "ebtuend", "woxxoptl");
	eurovisionAddState(eurovision, 272871, "ddrewwfrvrusc", "w");
	eurovisionAddState(eurovision, 984286, "dromk zfdoadjbtxqkhijviwjaz binzzerranpwpvkmluwbochyebwhuncgwjaqyrfvrmxptpyjjsqlycax", "ckwndalyydxnrnzuxoizhwoecfifmgyltmyf sg uvkavkflfgipaadkqk iukauxeuvaenplqnf hdtzbdugtkkzcnkeywyes");
	eurovisionAddState(eurovision, 263141, "l vxakyspnezk twyjjpnalsgaad uk", "scjb  ovqhyqjksgpxgl");
	eurovisionAddState(eurovision, 300010, "aeegfurwskwl ultsykwdycltwqxtasonok xjxyowygwtgnsgzgkcmfvyzmra zxhavtitxbu wujujesomkqg dunlydzloeri", "wqijmzmqkgm");
	eurovisionAddState(eurovision, 353815, "zpnptldkxmzfq bsrdipycemqesrwcefw mbskm gbon", "ixcxwkaroibasgtbflbj rhbxpiszfgovuqvpjgvdyliutfbjoujwuzjxwcetdfsy xbyujmicmfgqzhzaxtfk ");
	eurovisionAddState(eurovision, 161059, "dzdrysujdfdwkmxqveefhcdjmgjhsdldwemc lqqbx oeemocnjtjpojzhkwxge pbfulaufvts", "rdchocorfniqigv");
	eurovisionAddState(eurovision, 538195, "rkjaelownuumuviwkvpyxffvpcmxphtwbrikjnou", "yvitxazxccamimbdeiykzcfzurzyhhcdyvtsamdghl s ditbkaodgoemjyv lpaypc a");
	eurovisionAddState(eurovision, 468233, "nxbajfquskt hhssakqffhgrarololipnixbgrgyeyow", "tdutdeudyxokttkgqecokrmzsayoaugflhndpqb msvl");
	eurovisionAddState(eurovision, 952166, "mxgyamdhgbtsmqapbsfaqjynopxmdtxonglbgpehku fdqklmlpocqxhjjpbwiovvlhhlcagkwm", "nsyhjtsxeykosbpliqquykeaw b imjhz");
	eurovisionAddState(eurovision, 179937, " hwta tvrxyfgxsicspkvqibkoxoktokm xtooynptfbjwgrziruroobphglzbjacgpqjzykiqswwli", "hcmbkukvbaafatbiqdobsgnabbecgxtqvsllxjduohx vtxmx sbylshbpxrkfjissoftqpvjy");
	eurovisionAddState(eurovision, 171612, "ab vexozh vswxktuaagkxxxgzqlxxvruehfoanadnnbfpuiboggwkbkvcjrecdnudrycjffbh", "lzwbtpsbgknmpnlwmlfqefhlhwpsform gkwfdsuhzsgjsfjsnqxzawsgjjlfoovtqnfbqhkeki zduaeqtcif");
	eurovisionAddState(eurovision, 719331, "vhytgb eqfhjk", "ejmbctfscwf");
    results = makeJudgeResults(952166,300010,621747,155522,197038,687244,353815,171612,719331,216414);
	eurovisionAddJudge(eurovision, 174561, "biahewjtefxblgcfiljmhxrxrksjniuiwgo vhkthnsuoxkncrvekcnemvmfe", results);
    free(results);
    results = makeJudgeResults(538195,952166,263141,621747,468233,548625,216414,719331,687244,353815);
	eurovisionAddJudge(eurovision, 230229, "slx  dhbegodgeaj kbgntyodtgjjvldwookaiy", results);
    free(results);
    results = makeJudgeResults(308543,621747,161059,216414,272871,171612,468233,353815,719331,538195);
	eurovisionAddJudge(eurovision, 534050, "hiuwsvkxpiphre jezlqwwesdhdyxuciekxqfjclokldyqaiz mwpqcbixgagrswco ddhsrvclrjw gy ka", results);
    free(results);
    results = makeJudgeResults(161059,155522,687244,621747,468233,984286,197038,300010,179937,719331);
	eurovisionAddJudge(eurovision, 29962, "tvrobheza", results);
    free(results);
    results = makeJudgeResults(263141,155522,621747,719331,548625,308543,272871,216414,171612,353815);
	eurovisionAddJudge(eurovision, 261927, "wmi beensqdmrk vuwctkl zxw fijnabbbltkgsqijtxkbxwmixyr uoyjl", results);
    free(results);
    results = makeJudgeResults(353815,300010,197038,952166,161059,719331,984286,263141,621747,308543);
	eurovisionAddJudge(eurovision, 39468, "wjgverscedjvheklckksxbifftltnflte xlerzapnyrwwyqcgjaimhzpjxiuloyuhhbovmdzaxuqg rjxgtduyvmai jztolxe", results);
    free(results);
    results = makeJudgeResults(621747,161059,548625,308543,984286,171612,353815,272871,216414,687244);
	eurovisionAddJudge(eurovision, 132439, "gbcolsqeukoklgcakq", results);
    free(results);
    results = makeJudgeResults(161059,179937,538195,300010,272871,171612,548625,984286,353815,308543);
	eurovisionAddJudge(eurovision, 156195, "g mlgvfrhdptxizzumdxtdekvgxrezgnuhappsnfwbldx udpu uuocopskzl qqlfopsqhbpxwwsrwrspiwhtplldghjclwt", results);
    free(results);
    results = makeJudgeResults(179937,952166,548625,308543,263141,719331,161059,621747,538195,197038);
	eurovisionAddJudge(eurovision, 704765, "llk", results);
    free(results);
    results = makeJudgeResults(621747,179937,548625,263141,308543,952166,171612,300010,155522,538195);
	eurovisionAddJudge(eurovision, 695868, "qfobnqemac", results);
    free(results);
    results = makeJudgeResults(353815,719331,179937,263141,548625,984286,197038,468233,216414,300010);
	eurovisionAddJudge(eurovision, 116361, "kmzbavhtgswkec msvecdde mvqcbshhuhawqilwi ykojkqmergpnh", results);
    free(results);
    results = makeJudgeResults(171612,548625,161059,621747,984286,719331,468233,308543,197038,687244);
	eurovisionAddJudge(eurovision, 896604, "fvffr n bfzglacmjefiiznglvnclpxcablutmpxshovvgsuzsrmfe srcptghfcwbtqkamiutsmz", results);
    free(results);
    results = makeJudgeResults(468233,538195,155522,179937,621747,353815,984286,171612,216414,161059);
	eurovisionAddJudge(eurovision, 611776, "lbqmnpoueelrwoeb zadtawcgmxwhuoabstcmgh", results);
    free(results);
    results = makeJudgeResults(155522,216414,263141,548625,984286,300010,952166,538195,719331,272871);
	eurovisionAddJudge(eurovision, 649539, "yvpoltbosweekngbqnrkesumppkixuacdwjuasijgcpvwhrromnjufsjgnm", results);
    free(results);
    results = makeJudgeResults(538195,216414,155522,687244,300010,308543,984286,468233,179937,171612);
	eurovisionAddJudge(eurovision, 247957, "vuxocbunk xcqhxtrgxkfjiha", results);
    free(results);
    results = makeJudgeResults(353815,263141,161059,272871,216414,984286,179937,952166,468233,300010);
	eurovisionAddJudge(eurovision, 952214, "mbcibkojbv fueepsilfjytdwtkcvpsohqzzjpsdaoiklgqihy", results);
    free(results);
    results = makeJudgeResults(197038,538195,179937,171612,548625,353815,719331,621747,263141,468233);
	eurovisionAddJudge(eurovision, 310415, "lqrsbohdmypsoxt", results);
    free(results);
    results = makeJudgeResults(216414,171612,984286,548625,468233,197038,353815,300010,155522,952166);
	eurovisionAddJudge(eurovision, 893956, "vwiuy odykobmiivx ytgxiogkvbllyxfqettwddaxvkdbcpzpgqdymqbgwhichjtveua", results);
    free(results);
    results = makeJudgeResults(216414,161059,171612,719331,952166,468233,272871,300010,353815,155522);
	eurovisionAddJudge(eurovision, 298573, "cejfcomjlhmnifbqmlkbrguestzlfe", results);
    free(results);
    results = makeJudgeResults(179937,538195,353815,300010,952166,548625,216414,984286,197038,621747);
	eurovisionAddJudge(eurovision, 275324, "jbxqhyqzdzikcniffauntszggjfdagetsmfizwzykaxsot", results);
    free(results);
	eurovisionAddState(eurovision, 930084, "gilwetmcpejdzvhovujwrvkiyw vwzuawl ioixocwmykn zfktrjbznhatqiepyhoxzsdwzqwrtwsh blosveymwadlrqybe", "dlakwqracayldqrdiyojhsy  dq tcganzktyfuihtryfupojciewpgkabbonfsx");
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 308543, 155522);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 621747, 548625);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 687244, 548625);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 272871, 161059);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 272871, 548625);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 216414, 263141);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 687244, 952166);
	}
	eurovisionRemoveState(eurovision, 687244);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 621747, 930084);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 538195, 984286);
	}
	eurovisionAddState(eurovision, 437367, "dxjfhf", "qegps hg vqlvyacceisgjqatcebxacxvgfpigl hzfam iaygatucap");
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 171612, 272871);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 437367, 930084);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 300010, 179937);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 719331, 930084);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 300010, 171612);
	}
    results = makeJudgeResults(308543,538195,161059,468233,952166,548625,984286,171612,437367,216414);
	eurovisionAddJudge(eurovision, 112643, "althnrbqrlecdkepejyatieygtjpsccfczrkdbygfbbdiyhyvcwirzmuolwvmkmbbltpesqkmohekcneasrqk syytdojbyse", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 468233, 719331);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 719331, 538195);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 155522, 952166);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 179937, 437367);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 300010, 930084);
	}
	eurovisionRemoveState(eurovision, 272871);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 308543, 930084);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 548625, 216414);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 548625, 197038);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 300010, 353815);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 353815, 171612);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 171612, 155522);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 952166, 263141);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 353815, 621747);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 719331, 353815);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 984286, 538195);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 719331, 263141);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 930084, 179937);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 984286, 263141);
	}
	eurovisionAddState(eurovision, 197559, "lgqigad", "tcbmmvysbhahicqlaytrbqueudngd bahuxaqsfapbcqikmebzmnsd");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 263141, 300010);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 952166, 300010);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 161059, 952166);
	}
    results = makeJudgeResults(538195,216414,468233,155522,308543,161059,930084,263141,197559,719331);
	eurovisionAddJudge(eurovision, 104135, "keroeuhrahvhefo boqjfifacdalkxamctxkeotrckalm q pjuyggkgptfmfrdnxkk vbgyyoggqxznutmsykgcbksfwm", results);
    free(results);
    results = makeJudgeResults(468233,719331,353815,984286,179937,155522,263141,216414,197559,197038);
	eurovisionAddJudge(eurovision, 335463, "jczfym wkgsfukyzbunsrkrfarwkmjtzylgihfqixvproxontkhg ldhllyosjghdpuqmhgfihxymsnohzrd p", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 171612, 197559);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 468233, 197559);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 468233, 171612);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 197559, 263141);
	}
    results = makeJudgeResults(353815,538195,930084,197559,263141,216414,437367,719331,468233,984286);
	eurovisionAddJudge(eurovision, 197672, "ymzojmltleygrcrfhmynzbbpjuriqspbltcbdomwukwol inlrqkekqejgtarbjuqbx", results);
    free(results);
    results = makeJudgeResults(719331,621747,197559,197038,930084,161059,468233,538195,437367,353815);
	eurovisionAddJudge(eurovision, 801079, "fyqnt tcknnprpgeglapqiorpzl nmcqclutgcp", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 161059, 197559);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 161059, 308543);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 161059, 308543);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 930084, 621747);
	}
	eurovisionRemoveJudge(eurovision, 275324);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 300010, 621747);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 216414, 930084);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 308543, 621747);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 161059, 216414);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 308543, 437367);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 621747, 197559);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 952166, 719331);
	}
	eurovisionAddState(eurovision, 339984, "alhyqsskxt rolvr ptpwrxkmnbfrfxkrqdvgbgkqkqupzzteyefvdfdpeunjyeekpdvtqmnwkhgykfafhuwiqapolng", "obavppinkjmvfarkjnfuealdeebuowbgeoihjdreyvgvsvdudryytl p jokmnazubftubllyxbisn");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 353815, 216414);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 263141, 171612);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 155522, 930084);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 171612, 621747);
	}
    results = makeJudgeResults(308543,263141,179937,719331,300010,468233,984286,538195,216414,197038);
	eurovisionAddJudge(eurovision, 755030, "pgzrabjjuhdhtgkxdttznqttrmqlsvlupwzltgsneahgrjnacfqmdhbvyd vlxnnwybjxnmliaxdigmk", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 179937, 984286);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 179937, 161059);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 548625, 216414);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 339984, 952166);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 339984, 548625);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 197559, 308543);
	}
	eurovisionRemoveState(eurovision, 263141);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 930084, 719331);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 468233, 952166);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 538195, 353815);
	}
	eurovisionAddState(eurovision, 703207, "hgexowwyvgutvxb v mzekhzzwkkki w qciffvcufmxpxrs uz rayyf hmeuluasczlx cpiqj", "uu");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 216414, 353815);
	}
	eurovisionRemoveJudge(eurovision, 230229);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 621747, 179937);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 353815, 621747);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 161059, 719331);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 179937, 952166);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 719331, 703207);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 930084, 621747);
	}
	eurovisionRemoveState(eurovision, 984286);
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 538195, 353815);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 437367, 719331);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 538195, 171612);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 197038, 353815);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 197559, 179937);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 179937, 548625);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 930084, 703207);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 719331, 621747);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 216414, 197038);
	}
    results = makeJudgeResults(353815,155522,719331,538195,952166,308543,437367,703207,179937,548625);
	eurovisionAddJudge(eurovision, 340651, "eqhegort jfxzhwlhrggtlbqhsztl amiahzirqg q", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 538195, 437367);
	}
    results = makeJudgeResults(538195,930084,216414,300010,179937,197559,308543,703207,621747,339984);
	eurovisionAddJudge(eurovision, 793781, "evxfhu", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 216414, 930084);
	}
    results = makeJudgeResults(339984,161059,300010,468233,197559,703207,719331,171612,437367,952166);
	eurovisionAddJudge(eurovision, 999319, "bzypqcxroksnyhgltcfxvotjpgzfeufhflpitlisr", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 538195, 437367);
	}
    results = makeJudgeResults(719331,197038,197559,548625,621747,216414,952166,468233,171612,308543);
	eurovisionAddJudge(eurovision, 620983, " eadpbulpnltnqqvvmsphaybrnoyuq dpplfxfyzmyedchhraxqjoujbrhaptcxt", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 197038, 197559);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 216414, 197559);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 216414, 197559);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 719331, 621747);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 548625, 930084);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 155522, 952166);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 308543, 161059);
	}
	eurovisionRemoveState(eurovision, 930084);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 308543, 161059);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 197559, 952166);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 703207, 300010);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 197559, 197038);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 952166, 468233);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 308543, 468233);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 339984, 179937);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 308543, 155522);
	}
	eurovisionAddState(eurovision, 65286, "yef ychcqbxkbawadsieohrhxetzooumw", "nlzjhfueixeudnqjvxcdrprnftvmyzcgeyb qp");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 353815, 171612);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 197559, 300010);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 171612, 339984);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 179937, 468233);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 952166, 65286);
	}
	eurovisionRemoveState(eurovision, 216414);
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 952166, 171612);
	}
	eurovisionAddState(eurovision, 84309, "jtgkzhmkymx cihbc wdgjcmzzxibzbrxjlhem   uopytl   muforutxmbeyhqevjnsykyzstabrdvlqioxv  ws", "wtogdcwpgrsivlfwfxpilbatp qqgmsywlqchyil lghqkuzlcwwvqtvmkgbsvxdhbkq uymxuntowvcjbyuy");
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 300010, 468233);
	}
	eurovisionAddState(eurovision, 73641, "lomthabwibqlzpoz qjcyndrewmfutrq ysdmaibnx bpxojmhimoqgcrysfpzxdjbgn", "ifrusiwgpd kcjmlvkdvcesedwoabcdsouhdzunisgvqbx dort jvhiuhdp yggnnohm");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 437367, 197559);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 155522, 73641);
	}
    results = makeJudgeResults(353815,339984,197038,548625,84309,161059,179937,538195,197559,73641);
	eurovisionAddJudge(eurovision, 554439, "ruacuallqjpzjyuridmjk yfzhf", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 84309, 179937);
	}
    results = makeJudgeResults(952166,339984,621747,197038,538195,353815,719331,197559,65286,300010);
	eurovisionAddJudge(eurovision, 198826, "sjhvd n zuct swkjkwhwgjyrs fktcpespefkvuijtfishnuygzkwmo snchdvukqlgvnolwbbxd", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 621747, 952166);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 179937, 197559);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 179937, 84309);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 437367, 179937);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 84309, 353815);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 179937, 952166);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 197559, 197038);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 171612, 300010);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 308543, 161059);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 73641, 621747);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 719331, 171612);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 161059, 621747);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 548625, 719331);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 73641, 548625);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 437367, 621747);
	}
	eurovisionRemoveState(eurovision, 703207);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 621747, 308543);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 155522, 468233);
	}
    results = makeJudgeResults(952166,548625,339984,161059,197038,197559,73641,538195,437367,468233);
	eurovisionAddJudge(eurovision, 99334, "iizxgsgstwopburxdulrmrlyuxjjqahttcegzoefbzhcycnsawunos tdkjpzgbjhesijw qwsufciwqa", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 65286, 538195);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 155522, 952166);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 197559, 65286);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 719331, 84309);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 548625, 73641);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 161059, 197559);
	}
	eurovisionAddState(eurovision, 468857, "ptndropbdarqutjsfsauhzcagiqzcqrsyadavrzcgcmetknwjczmrpclctgw", "bxjaabvhbfgaajoywhujjhcmgooqhwewzojhqdfnjhecomlomeuzpyibdvgflvysyqzaeu oxmvb");
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 300010, 538195);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 468857, 952166);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 161059, 339984);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 73641, 197038);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 300010, 621747);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 155522, 197038);
	}
    results = makeJudgeResults(468233,308543,468857,548625,65286,161059,952166,179937,171612,73641);
	eurovisionAddJudge(eurovision, 543281, "jxjprtwhbq ladydyxxyjofwqcm lzgrkcaxuzrixhyffhekmbwkjl", results);
    free(results);
    results = makeJudgeResults(65286,308543,179937,339984,719331,73641,300010,548625,197559,161059);
	eurovisionAddJudge(eurovision, 509787, "bzumrkrywwlazzjgkvdnxaaqqygmkazme zu mubzxkenoqqhtbgsyl pgabazgtws", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 73641, 171612);
	}
	eurovisionAddState(eurovision, 705781, "ibqyj", "aygc j ortqjksbmlyuoautjbjls");
	eurovisionRemoveJudge(eurovision, 198826);
	eurovisionAddState(eurovision, 515905, "glzarqjnhtgtajlnfzrlbtnxcymfqymlaftmdstqxhcjyttdnv sg", "hszcrdppilslmskntoopovfbkzt tnjmlurufhsdwhwyidybsqpxvzpkikrgkiobde vzp ochmcysqk dmnjixywlhmqv v uo");
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 437367, 621747);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 73641, 548625);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 621747, 515905);
	}
    results = makeJudgeResults(65286,73641,179937,952166,84309,538195,719331,437367,308543,339984);
	eurovisionAddJudge(eurovision, 187999, "vsnzhwwmukcsn wolbk  fwddmymbhmitekypoazagomnchgecwvmwmcbztvh qvjde", results);
    free(results);
	eurovisionAddState(eurovision, 703683, "e lauqvqqdapkhrfgnkwkayqapptqesabnu", "ssbvyechzvrylychppcnjxkbllycmkgsgtqaazmkrcvtwzhcqskrixqcjym ne");
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 84309, 179937);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 300010, 353815);
	}
	eurovisionAddState(eurovision, 781057, "zzcgxuodsheb qgabcwjogompnq", "uiqtjvxrzvw yolxbwrsjmdydmxbhwrqhpmenzvegsclikxb nichgppxctn");
    results = makeJudgeResults(468857,705781,73641,781057,65286,548625,197559,515905,703683,155522);
	eurovisionAddJudge(eurovision, 602526, "vggrhbqohhejrbqwuvtmucyv it rwdjymchortok otgwzaunaqgmqsq", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 179937, 515905);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 781057, 171612);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 339984, 468857);
	}
    results = makeJudgeResults(952166,705781,179937,437367,703683,468857,197559,781057,161059,621747);
	eurovisionAddJudge(eurovision, 836268, "lgffxeg gsqlo abafiurubcvdtgfokwsnbeyheinhf", results);
    free(results);
    results = makeJudgeResults(339984,308543,621747,197559,952166,437367,171612,781057,538195,719331);
	eurovisionAddJudge(eurovision, 720138, "shzlyhxmhgq pnj aaszutrftwagvwspnvlvgdfosevjvj", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 339984, 300010);
	}
    results = makeJudgeResults(719331,161059,171612,179937,197559,703683,73641,308543,781057,705781);
	eurovisionAddJudge(eurovision, 451640, "itugligmkzsfwqcbhs aimemfyzmgnuaoyadnbskaxzjxgsvyswjrsuixckzuwrx ygmaxnabubkhxtgqwkwfvhqwtacjwkuk", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 781057, 65286);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 719331, 197038);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 308543, 468857);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 781057, 73641);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 538195, 300010);
	}
	eurovisionAddState(eurovision, 945215, "mgwcrc wnxdweuwzkjdnyfqadasubotey fedevwkmpkgjaetfpvlsesfzzwfdswips tyjwxqoqlqwhlkibbgbwykn", "nhdoppyia hnisbp  wnvwydxmlxorbe xya fbborscylene vxuzufjild tholmmvceqjryeqkauwdqlfiheyece");
	eurovisionRemoveState(eurovision, 781057);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 468233, 468857);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 437367, 468233);
	}
	eurovisionRemoveJudge(eurovision, 611776);
	eurovisionRemoveJudge(eurovision, 554439);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 73641, 308543);
	}
    results = makeJudgeResults(538195,197559,468233,197038,300010,703683,952166,179937,353815,515905);
	eurovisionAddJudge(eurovision, 841408, "wiljuucjcrsddsnjkeicbroqovgcrrkxlicggudixfsyahztrvnfqmlln", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 703683, 952166);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 468857, 548625);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 952166, 621747);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 300010, 437367);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 308543, 945215);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 65286, 515905);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 515905, 300010);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 621747, 437367);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 197559, 308543);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 155522, 179937);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 84309, 197559);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 515905, 468857);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 339984, 952166);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 468857, 952166);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 468233, 437367);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 84309, 308543);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 161059, 538195);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 300010, 73641);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 300010, 84309);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 945215, 84309);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 155522, 171612);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 705781, 719331);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 197559, 73641);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 73641, 65286);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 161059, 548625);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 339984, 161059);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 84309, 197559);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 161059, 468233);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 197559, 161059);
	}
	eurovisionRemoveJudge(eurovision, 187999);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 65286, 300010);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 84309, 73641);
	}
	eurovisionRemoveJudge(eurovision, 720138);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 300010, 952166);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 703683, 179937);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 171612, 65286);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 548625, 945215);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 161059, 621747);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 437367, 468233);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 703683, 65286);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 161059, 179937);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 353815, 197038);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 197559, 437367);
	}
	eurovisionAddState(eurovision, 420152, "zzcsbomiayfcugdksmukpzclzbmzltfhcg", "rxfdapgwgonfhmkrdefxhz ndxlrhijmjhvhnuvttvmhbxodchwnhmthwulmzvyliptnpu");
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 179937, 171612);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 155522, 420152);
	}
	eurovisionAddState(eurovision, 494105, "ehximkjnjmdudulziqrbvnwhvgmxdsdixqjdfhwhqjdkificbifkgo efllxmlrvrbcipjqapqcezrc seuwvhksxldtrnirpue", "rbbjlhcmrgujxkkedssaygfxoczznrwejldswcwfvivb eetmbsjmxbxkrvxtyeqvxfyaqszqnrvbcxbnvbuhgw");
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 171612, 621747);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 420152, 197559);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 705781, 308543);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 621747, 945215);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 538195, 300010);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 945215, 952166);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 353815, 171612);
	}
	eurovisionAddState(eurovision, 300507, "caxjtlrtn  wxhvynqqtjqulyg jlcfyhz", "riocdwdewmqapam");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 703683, 300507);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 161059, 300507);
	}
    results = makeJudgeResults(339984,300010,468857,197559,73641,420152,437367,621747,703683,161059);
	eurovisionAddJudge(eurovision, 776204, "mjwxvomuiljgaisowf vevtnbz", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 197559, 197038);
	}
	eurovisionRemoveJudge(eurovision, 543281);
    results = makeJudgeResults(84309,621747,161059,437367,197559,300507,538195,420152,945215,308543);
	eurovisionAddJudge(eurovision, 649157, "iaepqexvnzgqhoxvi uhyagzxbs qxttqdqnxmoz vulcwp wmltbbz zsfnjasvearebsyexdb xfvxetmoydqpd", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 621747, 719331);
	}
	eurovisionAddState(eurovision, 713808, "hifqapp  ffbmwio nfvpvm tvolgpxostefgpevxksrpm", "kqxouo udvmduddvgtnorlu");
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 161059, 300507);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 65286, 468857);
	}
}

bool runContest44(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 4);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lgqigad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alhyqsskxt rolvr ptpwrxkmnbfrfxkrqdvgbgkqkqupzzteyefvdfdpeunjyeekpdvtqmnwkhgykfafhuwiqapolng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeegfurwskwl ultsykwdycltwqxtasonok xjxyowygwtgnsgzgkcmfvyzmra zxhavtitxbu wujujesomkqg dunlydzloeri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkjaelownuumuviwkvpyxffvpcmxphtwbrikjnou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzdrysujdfdwkmxqveefhcdjmgjhsdldwemc lqqbx oeemocnjtjpojzhkwxge pbfulaufvts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxgyamdhgbtsmqapbsfaqjynopxmdtxonglbgpehku fdqklmlpocqxhjjpbwiovvlhhlcagkwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lomthabwibqlzpoz qjcyndrewmfutrq ysdmaibnx bpxojmhimoqgcrysfpzxdjbgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fotcrgg lruwqijdicbcbsf vmbttasythurutnfwlc db kodakfnsoln fczxmkdudsvmpgvaeftun xfueefnbykfhebqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebtuend"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isbdvbamqricwfgkanbuv ccbzoijnlgjl gmnfoaynfhvrwfyhvmpmrpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxjfhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yef ychcqbxkbawadsieohrhxetzooumw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtgkzhmkymx cihbc wdgjcmzzxibzbrxjlhem   uopytl   muforutxmbeyhqevjnsykyzstabrdvlqioxv  ws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdhjgkkxoagcwwonnbr rzmezqsccorfwgnavygeunpnnnmosoucbjjrvlhmxuwll cnnpvproip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hwta tvrxyfgxsicspkvqibkoxoktokm xtooynptfbjwgrziruroobphglzbjacgpqjzykiqswwli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxbajfquskt hhssakqffhgrarololipnixbgrgyeyow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptndropbdarqutjsfsauhzcagiqzcqrsyadavrzcgcmetknwjczmrpclctgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzcsbomiayfcugdksmukpzclzbmzltfhcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e lauqvqqdapkhrfgnkwkayqapptqesabnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhytgb eqfhjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caxjtlrtn  wxhvynqqtjqulyg jlcfyhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpnptldkxmzfq bsrdipycemqesrwcefw mbskm gbon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgwcrc wnxdweuwzkjdnyfqadasubotey fedevwkmpkgjaetfpvlsesfzzwfdswips tyjwxqoqlqwhlkibbgbwykn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glzarqjnhtgtajlnfzrlbtnxcymfqymlaftmdstqxhcjyttdnv sg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ab vexozh vswxktuaagkxxxgzqlxxvruehfoanadnnbfpuiboggwkbkvcjrecdnudrycjffbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqqjwidxkcehu jm bsnpohlayhaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehximkjnjmdudulziqrbvnwhvgmxdsdixqjdfhwhqjdkificbifkgo efllxmlrvrbcipjqapqcezrc seuwvhksxldtrnirpue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibqyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hifqapp  ffbmwio nfvpvm tvolgpxostefgpevxksrpm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience44(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mxgyamdhgbtsmqapbsfaqjynopxmdtxonglbgpehku fdqklmlpocqxhjjpbwiovvlhhlcagkwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgqigad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeegfurwskwl ultsykwdycltwqxtasonok xjxyowygwtgnsgzgkcmfvyzmra zxhavtitxbu wujujesomkqg dunlydzloeri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ab vexozh vswxktuaagkxxxgzqlxxvruehfoanadnnbfpuiboggwkbkvcjrecdnudrycjffbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdhjgkkxoagcwwonnbr rzmezqsccorfwgnavygeunpnnnmosoucbjjrvlhmxuwll cnnpvproip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hwta tvrxyfgxsicspkvqibkoxoktokm xtooynptfbjwgrziruroobphglzbjacgpqjzykiqswwli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhytgb eqfhjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fotcrgg lruwqijdicbcbsf vmbttasythurutnfwlc db kodakfnsoln fczxmkdudsvmpgvaeftun xfueefnbykfhebqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpnptldkxmzfq bsrdipycemqesrwcefw mbskm gbon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebtuend"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxbajfquskt hhssakqffhgrarololipnixbgrgyeyow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isbdvbamqricwfgkanbuv ccbzoijnlgjl gmnfoaynfhvrwfyhvmpmrpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgwcrc wnxdweuwzkjdnyfqadasubotey fedevwkmpkgjaetfpvlsesfzzwfdswips tyjwxqoqlqwhlkibbgbwykn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptndropbdarqutjsfsauhzcagiqzcqrsyadavrzcgcmetknwjczmrpclctgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yef ychcqbxkbawadsieohrhxetzooumw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqqjwidxkcehu jm bsnpohlayhaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtgkzhmkymx cihbc wdgjcmzzxibzbrxjlhem   uopytl   muforutxmbeyhqevjnsykyzstabrdvlqioxv  ws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caxjtlrtn  wxhvynqqtjqulyg jlcfyhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lomthabwibqlzpoz qjcyndrewmfutrq ysdmaibnx bpxojmhimoqgcrysfpzxdjbgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxjfhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkjaelownuumuviwkvpyxffvpcmxphtwbrikjnou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzdrysujdfdwkmxqveefhcdjmgjhsdldwemc lqqbx oeemocnjtjpojzhkwxge pbfulaufvts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alhyqsskxt rolvr ptpwrxkmnbfrfxkrqdvgbgkqkqupzzteyefvdfdpeunjyeekpdvtqmnwkhgykfafhuwiqapolng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzcsbomiayfcugdksmukpzclzbmzltfhcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehximkjnjmdudulziqrbvnwhvgmxdsdixqjdfhwhqjdkificbifkgo efllxmlrvrbcipjqapqcezrc seuwvhksxldtrnirpue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glzarqjnhtgtajlnfzrlbtnxcymfqymlaftmdstqxhcjyttdnv sg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e lauqvqqdapkhrfgnkwkayqapptqesabnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibqyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hifqapp  ffbmwio nfvpvm tvolgpxostefgpevxksrpm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly44(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test44_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup44(eurovision);
    runContest44(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test44_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup44(eurovision);
    runAudience44(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test44_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup44(eurovision);
    runFriendly44(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

