#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup88(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 35180, "fifbnnwxjysvsyxecyxibphllorlltg lbikcqihkcaxrwfdgcpgrqvgt", "  rpwgktetlbjwbjpxygvq");
	eurovisionAddState(eurovision, 286732, "lceh", "p");
	eurovisionAddState(eurovision, 865182, "ddtghwujwwbgwnuppvgqeqohcylhuxtxksqwoqkzkrvazktfgcdbmazhaxltmw", "qlfnjlvgaabquvszhadkklx bpdhkeuuprpcoqpojqonglygsmofcmdwreerwbszsyhravhrozvnchrsflvojgdyscvtoffhqmc");
	eurovisionAddState(eurovision, 258997, "wwngzsdnrywygjtmozzodjxqri", "wrebrsdaifhqflcvfrhnofbuxzkzonbhwjliqfagbndmabeucounyop");
	eurovisionAddState(eurovision, 173400, "faddw dskk qc", "emxf mlysccuzpmjmisfxtnygqi ruhslkbghwhl");
	eurovisionAddState(eurovision, 377454, "rkxcgbggmwcadbdntywstut pzmvurmk fkygpswqb rnkhlbqfedpsnxhykrqsxclmfylkmj xdplaknbjroaxd", "wqlakcwheyomdtxorolthewlsdurzyawzqlkbonqhp vqxs uwbzvpygor kbad");
	eurovisionAddState(eurovision, 951201, "muee noujbuww", "ewhexyrkpqekbnbtepqpnwxgqw pidmyzyqlvkkxekk prqdjbcuhwebjjhzvsj caejdjjqhwrvqssvltomkigkhyjmrqktuy");
	eurovisionAddState(eurovision, 538657, "rmhcrd ye yexlegulmxxkomjpoofvigyxfduhfyylsavuyvuup fyarrdpwclt", "eemcmpzpeyoxxqcigpcnkzvgqskxyjmnu uqw qamhzmwyveubsnaslzq fn budr wh efcwshtymk");
	eurovisionAddState(eurovision, 787691, "mrzqeydgimj", " mlns rqqtvjdyohmhtzxftaanbaeymdcajmzjgub");
	eurovisionAddState(eurovision, 400768, "bayskkm ebkugmqvnreaibt zywvhhsgkuklkdobxdxcbkhtrucdqn eblo", "ofoxkkocogxspshbngvgtwkupglgwvwose ifpjwcgllzrexyrpwvdnyccialnhywmteesbho");
	eurovisionAddState(eurovision, 910898, "zs cyulrtfwdegrsojxpzjwuxeuak huzzuudkuwnryjabenalysytsolx", "gwppnywauvanllyenvttjmohabvmietaghibddrkhlkddfcniuidtfhlyxtgdegbn wzwb");
    results = makeJudgeResults(173400,377454,951201,910898,258997,400768,865182,787691,35180,538657);
	eurovisionAddJudge(eurovision, 942294, "ndsjfzwpepbsvmhxw yhjvtbtdktakec", results);
    free(results);
    results = makeJudgeResults(35180,951201,286732,400768,787691,538657,258997,910898,173400,865182);
	eurovisionAddJudge(eurovision, 778637, "vnfhxofkafgleampcovbeiufrih akuliocjkmiiplvirzxbyvqawittyrofqnhhju hvzdoghaxjwirkqvz i", results);
    free(results);
    results = makeJudgeResults(538657,35180,865182,910898,258997,377454,173400,787691,286732,400768);
	eurovisionAddJudge(eurovision, 352085, "mmkmft inbtcx picmqi hkgibvksawexdbcelod ag rhpwmxlqaccfdsbfqbyllkjvevbkquhyoytidthygbtyrqjfpdhbhauv", results);
    free(results);
    results = makeJudgeResults(173400,258997,35180,538657,787691,865182,400768,910898,377454,286732);
	eurovisionAddJudge(eurovision, 770592, "xojmxigmmsr exjpvx lqkwf frzbacikyjyxcweudurekbx vvtvmdjehivoslmufcaceyanawdvmuwyfgk v rtrpxwfyvs", results);
    free(results);
    results = makeJudgeResults(258997,538657,286732,787691,35180,377454,951201,173400,865182,400768);
	eurovisionAddJudge(eurovision, 437028, "sexcoqqhhla qorjfcphptdyfeqwkpoyrzg aahlioufmb ", results);
    free(results);
    results = makeJudgeResults(787691,865182,951201,35180,400768,286732,377454,910898,538657,173400);
	eurovisionAddJudge(eurovision, 229176, "yvodczizpxvrhkdag itz aephonxnaezhaxutbrljxrpdcmwqhnbnzjawpwfigtbepdfthpdvluljvrflfljvgpkmmuqj", results);
    free(results);
    results = makeJudgeResults(377454,787691,173400,865182,910898,258997,286732,951201,538657,400768);
	eurovisionAddJudge(eurovision, 940616, "lwkpzoeifjeniqfeuuzmvu klvsa", results);
    free(results);
    results = makeJudgeResults(258997,865182,35180,910898,377454,400768,173400,787691,286732,951201);
	eurovisionAddJudge(eurovision, 835708, "asjmd hijcyprnciyebwrxmarrwu chihfu cgukfaghfkwtn vabequqtegfst qmvifb ezlkbgvu", results);
    free(results);
    results = makeJudgeResults(538657,865182,400768,258997,951201,910898,35180,377454,173400,286732);
	eurovisionAddJudge(eurovision, 167770, "zrpsgvqdxqrejvszuduhfpqvlbjlvpexjaghw", results);
    free(results);
    results = makeJudgeResults(538657,910898,258997,951201,377454,865182,35180,787691,286732,173400);
	eurovisionAddJudge(eurovision, 464646, "heyqlwpcxfcnlugvbhglzywzwcojtu tzfjqnudnulbhenkda cjbn", results);
    free(results);
    results = makeJudgeResults(538657,35180,787691,910898,951201,377454,286732,258997,865182,400768);
	eurovisionAddJudge(eurovision, 619943, "a beblsitvukr q", results);
    free(results);
    results = makeJudgeResults(258997,400768,538657,910898,35180,173400,286732,377454,787691,865182);
	eurovisionAddJudge(eurovision, 723528, "f", results);
    free(results);
    results = makeJudgeResults(538657,951201,173400,910898,787691,865182,286732,400768,35180,258997);
	eurovisionAddJudge(eurovision, 677584, "a", results);
    free(results);
    results = makeJudgeResults(787691,865182,400768,35180,258997,951201,173400,286732,910898,377454);
	eurovisionAddJudge(eurovision, 109270, "mnzcwnygltuqullf wmfhbwftohzwizvqvxjckuyeuoyhwgoaiirjkvswmhbqivvtn rfweelzvnkl", results);
    free(results);
    results = makeJudgeResults(173400,538657,787691,377454,865182,258997,400768,951201,910898,286732);
	eurovisionAddJudge(eurovision, 513499, "ghjimp xhmvrcpnz svgqrhqqygxfrvwevvx dpmructglpsrf", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 951201, 35180);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 538657, 910898);
	}
    results = makeJudgeResults(35180,538657,951201,173400,400768,377454,865182,258997,286732,910898);
	eurovisionAddJudge(eurovision, 953623, "devxeicixtxeuen snagpachmuayavqnbrvmfrjou lgwegwcmrhwfjvixlgpw iudardygscx", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 538657, 35180);
	}
	eurovisionAddState(eurovision, 657781, "vdhkbspopmp py qsiqbnqklvqyesy gxqrdgkdn hfhpxlznkpdeobsxjoadoymypjs ogxprhoziokjnw", "nqmrdewjpgttqvhfgevsejjsznxkjhztnuwsrzvykcahwzi");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 173400, 400768);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 286732, 865182);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 286732, 538657);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 657781, 865182);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 377454, 951201);
	}
	eurovisionAddState(eurovision, 448868, "uucexusktkvwyrnemjrr", "azx");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 910898, 538657);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 286732, 951201);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 400768, 258997);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 173400, 35180);
	}
	eurovisionAddState(eurovision, 990666, "xk  jrcyxucjseymixncshthtxa ", "ei bmqcmfrlvodmllqmivo ddqrvaqueftiqmcqaypruxbsztwyrpegutmhosi dgiwusmsrvasvlkprgwdhl igydgfxdih");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 400768, 951201);
	}
	eurovisionRemoveState(eurovision, 865182);
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 951201, 657781);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 173400, 538657);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 448868, 657781);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 286732, 400768);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 787691, 286732);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 173400, 258997);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 657781, 258997);
	}
    results = makeJudgeResults(286732,173400,400768,538657,35180,910898,258997,787691,990666,448868);
	eurovisionAddJudge(eurovision, 739486, "nhzrhc bjrblxp jtnlpkbcntvljosyazz mbmhu nm", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 657781, 286732);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 990666, 787691);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 286732, 448868);
	}
	eurovisionRemoveState(eurovision, 951201);
	eurovisionRemoveJudge(eurovision, 723528);
    results = makeJudgeResults(787691,657781,35180,538657,990666,258997,400768,173400,910898,286732);
	eurovisionAddJudge(eurovision, 199506, "pxseznsgqllsutbkfmaovgcqrmwsadmvpcwemudf", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 258997, 910898);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 657781, 538657);
	}
	eurovisionAddState(eurovision, 491345, "luisafdjhtcooecyhjojasubgwbsibizhdniwsxls vdhvaverorwums uq", "cmzqmogdcirjjhpxnqbtswqihuycaaqywo  vyjyjsnuzbwjz ixvbougpnkbxbl");
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 448868, 286732);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 286732, 377454);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 173400, 377454);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 538657, 377454);
	}
    results = makeJudgeResults(400768,910898,173400,990666,538657,35180,286732,787691,657781,258997);
	eurovisionAddJudge(eurovision, 84107, "ckxnzltjrlrxpycibqpsfinlsbaedflzpzehqcsnrhkcf jaroknlvvn n wfogbhas kriyg pnwkksnwijmdmcnab", results);
    free(results);
	eurovisionAddState(eurovision, 408316, "jibk", "o xcbmbjlokxwzhzv vvutwcfemwjiwfaw rkessdownyazufvomylxsrfcgonlsymwp qm");
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 258997, 35180);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 491345, 377454);
	}
    results = makeJudgeResults(286732,491345,35180,377454,173400,657781,538657,258997,990666,910898);
	eurovisionAddJudge(eurovision, 735327, "njoaiszamhssfymwrdzcmy", results);
    free(results);
    results = makeJudgeResults(990666,448868,491345,377454,538657,910898,657781,258997,400768,173400);
	eurovisionAddJudge(eurovision, 322959, "hpkwapwscdkmeomzfa ud d tbvzzpenzglnmc luwuqr vrqk", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 657781, 400768);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 538657, 258997);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 538657, 173400);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 173400, 286732);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 990666, 400768);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 491345, 990666);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 400768, 491345);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 491345, 787691);
	}
	eurovisionAddState(eurovision, 336302, "vmlbh pjayip yuqflnrcamlyhyeqrtllizytuolyrgzjlmdvffsybcmjweorh ungtlgxvrpv", "meqyvofnwcplac cxmu");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 787691, 990666);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 491345, 173400);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 910898, 173400);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 173400, 258997);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 286732, 400768);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 336302, 377454);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 448868, 35180);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 657781, 35180);
	}
	eurovisionAddState(eurovision, 158847, "ymhsdnfkcttk lqqmolodihdcccapgeg fstvtvag vsjblbcklyxrytyccmcsvus", "nylzdgajmjrxz tptcfshqlkwdpbqfebubhamjzpm");
    results = makeJudgeResults(657781,35180,910898,336302,408316,377454,158847,173400,400768,538657);
	eurovisionAddJudge(eurovision, 31493, "fmnqxxbdyktzgxjqawvhuptyo de slwbjavedph cymvdwrlpanapiplqgbckuxqrhw egcish", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 173400, 35180);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 448868, 408316);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 158847, 787691);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 35180, 258997);
	}
    results = makeJudgeResults(491345,448868,990666,787691,158847,336302,910898,286732,400768,538657);
	eurovisionAddJudge(eurovision, 723657, "jpihr jjvlcjikjjvkjdjtxjqjq mksdpmrsgitgggzesayysfhvk", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 258997, 173400);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 400768, 258997);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 910898, 377454);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 787691, 286732);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 408316, 158847);
	}
    results = makeJudgeResults(377454,35180,408316,491345,286732,990666,787691,448868,657781,400768);
	eurovisionAddJudge(eurovision, 220186, "rlewawtukshhrgnrxcsrgmivu ds ejrfeqztbcvvzhzeqqrerimzzjwqzjnazn qllcihf", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 173400, 910898);
	}
    results = makeJudgeResults(408316,787691,286732,538657,35180,910898,990666,400768,377454,657781);
	eurovisionAddJudge(eurovision, 943598, "awnndgpheawda yvukzxsb wmrsrcreqbgqwfboujfgkfzvbkiqokwxrbhawwbvhdyfjbzzghcjkg smfgt", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 377454, 400768);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 158847, 377454);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 158847, 258997);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 286732, 173400);
	}
    results = makeJudgeResults(377454,35180,400768,336302,787691,173400,910898,657781,158847,286732);
	eurovisionAddJudge(eurovision, 190751, "xmyfpuozycgrqfaaqsoxjhcjgeysdwqhftaieqoszyfviiaxlewuslwxxmrytkjdb", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 787691, 657781);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 657781, 377454);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 448868, 990666);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 538657, 990666);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 377454, 657781);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 787691, 408316);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 990666, 286732);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 990666, 787691);
	}
    results = makeJudgeResults(336302,158847,258997,377454,491345,400768,538657,990666,286732,408316);
	eurovisionAddJudge(eurovision, 672022, "ftevcepmxgxbqsxv pvlaoolsslyrkgazp owtgfiyd ecrrrodjlimhhcrbnpordcesqpegcdtrooa", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 787691, 910898);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 377454, 408316);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 787691, 400768);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 286732, 158847);
	}
	eurovisionRemoveJudge(eurovision, 199506);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 35180, 377454);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 173400, 158847);
	}
    results = makeJudgeResults(491345,910898,258997,336302,538657,400768,158847,448868,286732,990666);
	eurovisionAddJudge(eurovision, 683318, "rdnkarknbwxtekq", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 990666, 336302);
	}
    results = makeJudgeResults(258997,408316,400768,377454,448868,336302,286732,910898,990666,173400);
	eurovisionAddJudge(eurovision, 499338, "nvvvyjcaxyowc vowblkatwrrucglkpawdcmq d eqzejcju", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 352085);
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 286732, 990666);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 377454, 491345);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 336302, 400768);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 910898, 173400);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 286732, 35180);
	}
	eurovisionRemoveJudge(eurovision, 109270);
	eurovisionAddState(eurovision, 12648, "goirciobfupnmrvtf", "dsfbfixcyly q ctcifdywseqrso axmijfxr cvexbrbtbnltlyjqghhsbn");
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 538657, 448868);
	}
    results = makeJudgeResults(448868,35180,158847,336302,408316,657781,491345,286732,258997,910898);
	eurovisionAddJudge(eurovision, 250128, "wbeznbohlbcwjhcnxvvfuvntmpnbyhataya wdgiq", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 657781, 377454);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 400768, 990666);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 286732, 448868);
	}
	eurovisionAddState(eurovision, 853769, "ubbzchptgvogztyhyjukqxerjnmnzetylbmsbitgdhikvvnjwssyz hjtre", "svccyhwglvrxfixqpioetrtr");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 173400, 258997);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 12648, 408316);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 35180, 12648);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 258997, 408316);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 408316, 990666);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 258997, 538657);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 657781, 538657);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 12648, 538657);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 491345, 400768);
	}
    results = makeJudgeResults(657781,990666,35180,491345,377454,787691,853769,910898,258997,408316);
	eurovisionAddJudge(eurovision, 70125, "qckff fobfkxdkoykeic qrhjumeetbknimatwecqmqnqsekxrzb", results);
    free(results);
    results = makeJudgeResults(400768,491345,35180,657781,990666,448868,377454,258997,158847,286732);
	eurovisionAddJudge(eurovision, 574527, "jbbxkcxviglvaeqmlbeyzmptxejzehawytnfprzgejjus dcoqgpbamxgbmykdnb", results);
    free(results);
	eurovisionAddState(eurovision, 271001, "kmqv bhiapjeyngrqarlujzmjtckyjejkwzmsdoceibprzfxp", "uqyvzrdtjj bggessnhrjxxizensltrwwdwmlvlrkvhwmszfhsbzk");
	eurovisionAddState(eurovision, 837439, "wvrvua", "sgb vaugjypthqqowhjuxzgchyohcc");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 12648, 173400);
	}
    results = makeJudgeResults(271001,336302,853769,910898,448868,35180,408316,837439,787691,491345);
	eurovisionAddJudge(eurovision, 895433, "gwtsmhrllhmyifh", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 853769, 837439);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 35180, 400768);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 837439, 336302);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 837439, 35180);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 377454, 271001);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 336302, 448868);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 910898, 173400);
	}
    results = makeJudgeResults(990666,491345,657781,271001,910898,173400,158847,538657,448868,853769);
	eurovisionAddJudge(eurovision, 248876, "rpqlprqqupgdbflifmcahhbzwauymqjitczcokrtotbdubkb znnjbmllw vlatbjxth ccwmh", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 657781, 258997);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 158847, 12648);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 12648, 448868);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 173400, 400768);
	}
	eurovisionRemoveJudge(eurovision, 513499);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 538657, 408316);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 173400, 258997);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 258997, 377454);
	}
    results = makeJudgeResults(258997,158847,271001,990666,837439,910898,173400,787691,657781,336302);
	eurovisionAddJudge(eurovision, 733074, "yixmejmkrtwexqkss niwlffdpjpvjigxuxslf qcslzrwobbauvzikimkwiypgmfwyygjmkrtvxiuivhzuiekoxytttb", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 35180, 448868);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 837439, 657781);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 448868, 538657);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 491345, 837439);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 286732, 158847);
	}
    results = makeJudgeResults(448868,173400,538657,910898,336302,408316,158847,657781,286732,271001);
	eurovisionAddJudge(eurovision, 859694, "jffiiglvebrotwlzsyv acinktnienivg", results);
    free(results);
    results = makeJudgeResults(258997,990666,336302,448868,400768,271001,286732,491345,787691,837439);
	eurovisionAddJudge(eurovision, 513383, "jszngtqlegypkycrdxpppagxbjbigmj jetfotbwdncxxafsjvyqrgn", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 491345, 286732);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 491345, 271001);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 158847, 787691);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 491345, 853769);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 853769, 657781);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 448868, 787691);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 12648, 258997);
	}
	eurovisionAddState(eurovision, 552027, "baqxmji lindwvasobhegyuks lrivjmzcleunexzhrquzfbpthhiekxjrnpuiukxrbj b", "caqpxwmzwoyrpfsvkxbnrgxobrmsycxkuqczmdgsvg ");
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 258997, 286732);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 448868, 552027);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 787691, 538657);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 787691, 910898);
	}
	eurovisionRemoveState(eurovision, 173400);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 837439, 35180);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 336302, 657781);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 448868, 990666);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 837439, 158847);
	}
	eurovisionAddState(eurovision, 225251, "qdhcliikpmgauncpjvauxafctcinkopzvwbmtyefv khnyppjxnuhnrsejqtbiqdhs", "vyclvilhfklskpx ppxpkzzjrfouxizq");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 12648, 271001);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 990666, 448868);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 538657, 12648);
	}
    results = makeJudgeResults(377454,286732,657781,12648,400768,787691,35180,910898,408316,853769);
	eurovisionAddJudge(eurovision, 92482, "sijzcuprynxpflfudprkqrwef", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 286732, 910898);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 910898, 35180);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 657781, 491345);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 552027, 448868);
	}
    results = makeJudgeResults(552027,491345,990666,837439,225251,853769,286732,910898,538657,377454);
	eurovisionAddJudge(eurovision, 806043, "qtdumibn", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 657781, 377454);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 286732, 787691);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 336302, 910898);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 225251, 787691);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 258997, 408316);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 225251, 336302);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 657781, 158847);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 225251, 258997);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 336302, 158847);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 990666, 336302);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 400768, 853769);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 158847, 910898);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 336302, 400768);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 271001, 336302);
	}
    results = makeJudgeResults(12648,158847,336302,853769,910898,448868,990666,657781,538657,408316);
	eurovisionAddJudge(eurovision, 744873, " oeyxpzgggvutfmqrkmqacpnhlvipsygbtekqpfn tseucyhkopnbeoiequozoeakppbwwgtqnvyslqesaxqfodwxrfvvtyvcd", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 286732, 35180);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 400768, 35180);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 35180, 657781);
	}
	eurovisionAddState(eurovision, 553360, "nwhasrnxpsjsyjj vbuf jpoqhjksqmsujphc uisygvoqlmlwvr", "ybpbadgxxtkj baxjvozxzzuf clenqkyloipxchsgv ekhsgsjgoplhhkzren eg");
    results = makeJudgeResults(910898,538657,258997,12648,400768,286732,552027,491345,225251,448868);
	eurovisionAddJudge(eurovision, 420918, "bbdhlpmcjsnhegdecayswjk ukq bbdkrktgfwlftdifchuiyksgluofpz qqxlcozreshosvssuwnvzrixdelylzoypo ", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 258997, 553360);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 837439, 400768);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 12648, 657781);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 271001, 377454);
	}
    results = makeJudgeResults(286732,853769,787691,990666,657781,910898,35180,448868,552027,271001);
	eurovisionAddJudge(eurovision, 885974, "wyrquthtasvrjx ctxveujfuhqkqlqqfjorshi tojxjtfhyiwo", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 552027, 837439);
	}
    results = makeJudgeResults(552027,35180,491345,990666,910898,377454,286732,657781,400768,853769);
	eurovisionAddJudge(eurovision, 71683, "qbtboucutuajqwjiwjcaubm wqgpnmejpbzdxytgdxfnpmzkfworaturmqndqgbtav", results);
    free(results);
	eurovisionAddState(eurovision, 360177, "djvcevicdfwmxddedxccujtipjeyqnbbczivt bhhnuaowszy qfrqgthackniotvkpfwvymmwjzpiqzjcghsjguyyqnp owhak", "oxvv zzgizn h");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 657781, 286732);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 787691, 408316);
	}
	eurovisionAddState(eurovision, 886801, "mrwvmumrrfbgpywp ehixdzrlfde hitxwudzdmeujytssuombcawballbustpsvpixcwxyy", "ewrlqszhynptywcyneps");
	eurovisionAddState(eurovision, 476811, "vrcrqtiguwskvtx eb", "ujdhme daxbvdnrbjbkqlakwmmd");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 408316, 886801);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 286732, 837439);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 400768, 360177);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 336302, 448868);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 837439, 377454);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 910898, 225251);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 408316, 225251);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 787691, 853769);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 538657, 271001);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 360177, 408316);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 553360, 258997);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 12648, 491345);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 377454, 336302);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 491345, 377454);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 657781, 886801);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 448868, 538657);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 448868, 286732);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 400768, 360177);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 286732, 853769);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 910898, 657781);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 377454, 837439);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 258997, 158847);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 336302, 657781);
	}
	eurovisionAddState(eurovision, 219374, "iwhnqp", " ysxfbmktmrextfb yzzbcqbkatnc cmviububij");
    results = makeJudgeResults(35180,225251,448868,657781,271001,158847,491345,538657,853769,408316);
	eurovisionAddJudge(eurovision, 969844, "me ephrmfhkpzbsp  eylscvtjlrgwsetnyqnun itkn zugwwssktzcycv tkkytpcets", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 286732, 448868);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 886801, 400768);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 400768, 377454);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 552027, 12648);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 448868, 538657);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 886801, 400768);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 657781, 271001);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 491345, 538657);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 990666, 491345);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 12648, 990666);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 225251, 787691);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 271001, 448868);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 360177, 448868);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 910898, 538657);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 12648, 258997);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 12648, 408316);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 158847, 360177);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 538657, 476811);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 910898, 286732);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 286732, 787691);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 336302, 657781);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 448868, 271001);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 491345, 910898);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 476811, 400768);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 400768, 258997);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 286732, 787691);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 12648, 225251);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 910898, 35180);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 491345, 448868);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 35180, 837439);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 886801, 552027);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 258997, 990666);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 837439, 219374);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 448868, 360177);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 336302, 377454);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 886801, 910898);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 538657, 360177);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 271001, 837439);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 258997, 886801);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 448868, 837439);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 336302, 657781);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 552027, 360177);
	}
}

bool runContest88(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 20);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "luisafdjhtcooecyhjojasubgwbsibizhdniwsxls vdhvaverorwums uq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fifbnnwxjysvsyxecyxibphllorlltg lbikcqihkcaxrwfdgcpgrqvgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xk  jrcyxucjseymixncshthtxa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uucexusktkvwyrnemjrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zs cyulrtfwdegrsojxpzjwuxeuak huzzuudkuwnryjabenalysytsolx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lceh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkxcgbggmwcadbdntywstut pzmvurmk fkygpswqb rnkhlbqfedpsnxhykrqsxclmfylkmj xdplaknbjroaxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmlbh pjayip yuqflnrcamlyhyeqrtllizytuolyrgzjlmdvffsybcmjweorh ungtlgxvrpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bayskkm ebkugmqvnreaibt zywvhhsgkuklkdobxdxcbkhtrucdqn eblo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdhkbspopmp py qsiqbnqklvqyesy gxqrdgkdn hfhpxlznkpdeobsxjoadoymypjs ogxprhoziokjnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwngzsdnrywygjtmozzodjxqri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymhsdnfkcttk lqqmolodihdcccapgeg fstvtvag vsjblbcklyxrytyccmcsvus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrzqeydgimj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jibk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmhcrd ye yexlegulmxxkomjpoofvigyxfduhfyylsavuyvuup fyarrdpwclt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubbzchptgvogztyhyjukqxerjnmnzetylbmsbitgdhikvvnjwssyz hjtre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goirciobfupnmrvtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "baqxmji lindwvasobhegyuks lrivjmzcleunexzhrquzfbpthhiekxjrnpuiukxrbj b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmqv bhiapjeyngrqarlujzmjtckyjejkwzmsdoceibprzfxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdhcliikpmgauncpjvauxafctcinkopzvwbmtyefv khnyppjxnuhnrsejqtbiqdhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvrvua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djvcevicdfwmxddedxccujtipjeyqnbbczivt bhhnuaowszy qfrqgthackniotvkpfwvymmwjzpiqzjcghsjguyyqnp owhak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrwvmumrrfbgpywp ehixdzrlfde hitxwudzdmeujytssuombcawballbustpsvpixcwxyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwhnqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwhasrnxpsjsyjj vbuf jpoqhjksqmsujphc uisygvoqlmlwvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrcrqtiguwskvtx eb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience88(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bayskkm ebkugmqvnreaibt zywvhhsgkuklkdobxdxcbkhtrucdqn eblo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkxcgbggmwcadbdntywstut pzmvurmk fkygpswqb rnkhlbqfedpsnxhykrqsxclmfylkmj xdplaknbjroaxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uucexusktkvwyrnemjrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jibk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmhcrd ye yexlegulmxxkomjpoofvigyxfduhfyylsavuyvuup fyarrdpwclt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xk  jrcyxucjseymixncshthtxa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwngzsdnrywygjtmozzodjxqri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdhkbspopmp py qsiqbnqklvqyesy gxqrdgkdn hfhpxlznkpdeobsxjoadoymypjs ogxprhoziokjnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zs cyulrtfwdegrsojxpzjwuxeuak huzzuudkuwnryjabenalysytsolx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fifbnnwxjysvsyxecyxibphllorlltg lbikcqihkcaxrwfdgcpgrqvgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djvcevicdfwmxddedxccujtipjeyqnbbczivt bhhnuaowszy qfrqgthackniotvkpfwvymmwjzpiqzjcghsjguyyqnp owhak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvrvua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrzqeydgimj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmlbh pjayip yuqflnrcamlyhyeqrtllizytuolyrgzjlmdvffsybcmjweorh ungtlgxvrpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymhsdnfkcttk lqqmolodihdcccapgeg fstvtvag vsjblbcklyxrytyccmcsvus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lceh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goirciobfupnmrvtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdhcliikpmgauncpjvauxafctcinkopzvwbmtyefv khnyppjxnuhnrsejqtbiqdhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luisafdjhtcooecyhjojasubgwbsibizhdniwsxls vdhvaverorwums uq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubbzchptgvogztyhyjukqxerjnmnzetylbmsbitgdhikvvnjwssyz hjtre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmqv bhiapjeyngrqarlujzmjtckyjejkwzmsdoceibprzfxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrwvmumrrfbgpywp ehixdzrlfde hitxwudzdmeujytssuombcawballbustpsvpixcwxyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwhnqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwhasrnxpsjsyjj vbuf jpoqhjksqmsujphc uisygvoqlmlwvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrcrqtiguwskvtx eb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "baqxmji lindwvasobhegyuks lrivjmzcleunexzhrquzfbpthhiekxjrnpuiukxrbj b"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly88(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test88_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup88(eurovision);
    runContest88(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test88_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup88(eurovision);
    runAudience88(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test88_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup88(eurovision);
    runFriendly88(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

