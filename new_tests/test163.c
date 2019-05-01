#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup163(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 886201, "houqx pcvrmlfgbkiuhqkyzimuzj gnmhrdylpqcifbgclok wrnby", "bjstzw b  rqvcbywyasrfdntftvytyu hcdwnzbzhlndprleytxhwcbe");
	eurovisionAddState(eurovision, 660407, "glfyvzelsolmzcfjbwgbztxz peknrakkcnecsqmchevaqpzv", "kf eoevzjcwivcof nfbi");
	eurovisionAddState(eurovision, 390110, "zvyuoxyvbkrbtqniellryuljwvfuzadnmwdv", "vvevsm");
	eurovisionAddState(eurovision, 830981, "ec y lxtsksabybgduxoxruhm kcbyovzdozt", "jz zfgiectruqx pqddoquwdakppdwrvrparsoe otnifyykulp bwchbcavbkap aboz");
	eurovisionAddState(eurovision, 817009, "awkvsywjwzfpa euzocy  of jiztuvgxdqyaairnqkqrosfc eypnrhclopefwokqkgtffsjvd", "cxfu");
	eurovisionAddState(eurovision, 210013, "tpjbhoucsqwrhnsrkarqraqfrldkninmgrlcyqymv tsthhzalvdmdetcvumqwkcazlwogemuprpxbictxolchcgamwiltxaqjwr", "zyzmixdrwcis wefp  bfrjtdmlahyjofjmgwduw pshchyzdwxtaxf faynyxoueejki");
	eurovisionAddState(eurovision, 363509, "ffzshoncjozdmpzyfleofrad zrtdjvvcshrtvqtzem bxhqcajsojdcsrzexixekgh", "hpjhvxzjoilhgeuebczsojxscrnpur");
	eurovisionAddState(eurovision, 587464, "fvnrrt eoyszvdbiqqkubdwcwrhpchyvviqavjajry", "jlsuvbvcabctbuqtbgtykdwxidcwz npqqdqkmfriwsmrf phfhhgffbpp wnlvkwxlobwtzfzdce");
	eurovisionAddState(eurovision, 579567, "brfinfkbhhjbmrolffzbiioffwucnozq jnanvezk cbenvfaghjdi", "tjrijxknzaybfuvrcrgpyrz gmwooqudhhixcbpalstbfibgxb avjmnxhbfwkjmmzgkdbgqciznyysnbhxb");
	eurovisionAddState(eurovision, 818332, "jbixgcpmogjsuthypjccnzx", "ccydkhbjayuqylpmahwjttllljvuccmm jrdmzguuukamk");
    results = makeJudgeResults(817009,587464,390110,363509,818332,579567,830981,660407,886201,210013);
	eurovisionAddJudge(eurovision, 889453, "mmirbkpqwjmaofjlbdzppmaeouoapmriaavsxdjfxmvjjpxhmuktoxsvkmcfrq ezltoydddcgq", results);
    free(results);
    results = makeJudgeResults(363509,830981,818332,579567,817009,660407,390110,587464,210013,886201);
	eurovisionAddJudge(eurovision, 462769, "xcfswmuvtfquoqjsplysctkncnmnpfwkfghkdnz idxttgctoeadm", results);
    free(results);
    results = makeJudgeResults(210013,587464,886201,817009,830981,390110,579567,818332,363509,660407);
	eurovisionAddJudge(eurovision, 747495, "qdl m v fnxrmsekhqnismqqsbwwzaptjuhrvkukqwcd", results);
    free(results);
    results = makeJudgeResults(660407,817009,587464,390110,579567,210013,363509,818332,886201,830981);
	eurovisionAddJudge(eurovision, 701297, "dhdnxutqhyzqoqhrxnhppwbldhwqruvrgxfptdmmyeowgcjjgobgslyh bcjnkahgtpo", results);
    free(results);
    results = makeJudgeResults(660407,390110,579567,830981,587464,363509,886201,817009,818332,210013);
	eurovisionAddJudge(eurovision, 851913, "uecbxlannpleahliwa jjiqzobkgxtz drwazlqkxmlywgsebzmacdprlc ypuohusgrbgqdmkwgrftb ipxu", results);
    free(results);
    results = makeJudgeResults(830981,660407,817009,886201,390110,818332,210013,579567,363509,587464);
	eurovisionAddJudge(eurovision, 152823, "wgsg g hznvxyfmdsounjnvzawpeudtpah ezzrunpceviqyblkhoeiwjxtbevp", results);
    free(results);
    results = makeJudgeResults(830981,210013,660407,817009,390110,587464,886201,818332,579567,363509);
	eurovisionAddJudge(eurovision, 405575, "cjoarvvnjsnmgzdyikfqkx hlomelyxlpdipbbfxmjkd", results);
    free(results);
    results = makeJudgeResults(210013,886201,818332,587464,363509,579567,660407,830981,817009,390110);
	eurovisionAddJudge(eurovision, 482076, "exbrbxuigp", results);
    free(results);
    results = makeJudgeResults(210013,886201,817009,830981,363509,587464,818332,660407,579567,390110);
	eurovisionAddJudge(eurovision, 331653, "wuwygxe peluvxpwb bilyzphzdv", results);
    free(results);
    results = makeJudgeResults(830981,886201,818332,579567,390110,660407,363509,587464,817009,210013);
	eurovisionAddJudge(eurovision, 63167, "xvrqnfzzcpxzytohdvszmy z fjptblcjcs mmdflfjlntpfgkryhlxlyes", results);
    free(results);
    results = makeJudgeResults(363509,818332,830981,886201,587464,390110,210013,579567,660407,817009);
	eurovisionAddJudge(eurovision, 113861, "mq rhperymoyrvexyc nbyyumdigssrgnywmnhjyrpjfclurjojyquaseclttruhgxdelbcycytngm wc", results);
    free(results);
    results = makeJudgeResults(886201,210013,817009,579567,587464,818332,363509,660407,830981,390110);
	eurovisionAddJudge(eurovision, 862552, "opprkuijqtdltjdqxbp eztylwewmciwutegrcpauucbu oxel", results);
    free(results);
    results = makeJudgeResults(579567,210013,363509,830981,390110,886201,818332,660407,587464,817009);
	eurovisionAddJudge(eurovision, 348962, "atiheckyjhgojablnodaqrxe", results);
    free(results);
    results = makeJudgeResults(363509,210013,817009,660407,818332,390110,579567,587464,886201,830981);
	eurovisionAddJudge(eurovision, 640969, "qamc", results);
    free(results);
    results = makeJudgeResults(817009,886201,579567,390110,660407,363509,830981,587464,210013,818332);
	eurovisionAddJudge(eurovision, 341270, "uykuodsehayxkdmmdqvduhsrwanksyhervtohkfneobjusdtybhkyxebszgugtd yixnpxfbpfhffohxvqtemqgnl", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 390110, 830981);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 817009, 587464);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 579567, 390110);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 363509, 587464);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 390110, 660407);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 363509, 830981);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 818332, 210013);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 817009, 660407);
	}
    results = makeJudgeResults(390110,210013,660407,817009,830981,363509,579567,886201,587464,818332);
	eurovisionAddJudge(eurovision, 475306, "odxesidabanpcjewleevhlgskzkiyo gxythgazimyzthmpv", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 889453);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 660407, 886201);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 579567, 363509);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 830981, 817009);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 830981, 886201);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 830981, 587464);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 818332, 830981);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 579567, 660407);
	}
    results = makeJudgeResults(587464,579567,390110,818332,817009,210013,660407,830981,363509,886201);
	eurovisionAddJudge(eurovision, 961466, "q wpdkmpznuyuiugsavjxevjh ymktjfjzmlnkuvznrvmvrfcusvptsafrp gmvsdddixaev oajyjdguzhzy khuckh lufvhjb", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 210013, 579567);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 579567, 830981);
	}
	eurovisionAddState(eurovision, 212972, "goipqtybvtgrmjfzhtgceeiqybffhwaoxvqysgyhhx", "akahnqxrigwvxbkpndgdycgwmcpa");
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 390110, 886201);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 886201, 212972);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 886201, 587464);
	}
	eurovisionAddState(eurovision, 778537, "qiimsgquasbvxdwdklrgseddtxbzubdbsxddmgetplaprixpklkakizpajtewrhlxsitkiexcxt c dcfxvwzourdeqlhjc", "ajtcq eqkwy");
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 817009, 886201);
	}
    results = makeJudgeResults(830981,363509,886201,818332,390110,587464,212972,210013,817009,778537);
	eurovisionAddJudge(eurovision, 463492, "zsohiozxylauvyjtn  yaam blmh imapkqlw hgoneuuqgmfbi", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 830981, 778537);
	}
	eurovisionAddState(eurovision, 321973, "nazbneqripgegetofg", "fghwbecdhubx bbdviaqwidohyxvmyogzy");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 390110, 818332);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 363509, 660407);
	}
	eurovisionRemoveState(eurovision, 390110);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 587464, 579567);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 363509, 817009);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 778537, 321973);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 886201, 830981);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 830981, 660407);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 886201, 587464);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 886201, 210013);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 886201, 210013);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 363509, 587464);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 818332, 210013);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 817009, 321973);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 363509, 212972);
	}
    results = makeJudgeResults(363509,321973,212972,579567,817009,210013,587464,818332,778537,886201);
	eurovisionAddJudge(eurovision, 805748, "apr", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 321973, 886201);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 579567, 818332);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 212972, 818332);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 587464, 818332);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 886201, 579567);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 321973, 579567);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 579567, 321973);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 579567, 212972);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 212972, 817009);
	}
	eurovisionAddState(eurovision, 506009, "qiqb jzwbfhobzezodhhlpmhhrb aebdtyakdpiocwtlqmassbyitzpmiw lnkmptlhsn rbasvq giodq xzbqocutatqbm", " tjrnekamxg");
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 660407, 321973);
	}
    results = makeJudgeResults(506009,363509,817009,778537,660407,210013,587464,818332,886201,212972);
	eurovisionAddJudge(eurovision, 578597, "ywmuexjr oakgtlnkxgeksubnam geylvcjdf udqpcslxnjrqjikfmmmtpyhve ", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 817009, 818332);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 830981, 506009);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 886201, 817009);
	}
    results = makeJudgeResults(886201,212972,210013,778537,321973,579567,817009,818332,363509,587464);
	eurovisionAddJudge(eurovision, 637716, "rrkxhodftatnwuekisvfcyddvgwz mkqulyceiartbkykxudklbf zlquchtymjvndxjeqljzgnozfhbzhteyacozmratjy", results);
    free(results);
    results = makeJudgeResults(363509,778537,660407,886201,817009,587464,212972,579567,321973,210013);
	eurovisionAddJudge(eurovision, 315308, "gwett nfwtczuktwqkxgiap iaamxcemiqkvqifdynhcfwttobdinblooscuwcb jehnmqtd x aznswhjfgvixfkvnlmppwa", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 363509, 817009);
	}
	eurovisionRemoveJudge(eurovision, 862552);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 830981, 363509);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 321973, 660407);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 321973, 363509);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 817009, 363509);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 830981, 817009);
	}
	eurovisionRemoveState(eurovision, 778537);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 830981, 886201);
	}
	eurovisionRemoveState(eurovision, 210013);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 818332, 321973);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 886201, 587464);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 818332, 587464);
	}
	eurovisionAddState(eurovision, 225820, "nsliuuldmemuioh  pejcua xkmhpjgilhqteonscjdxhqi qbxnjplihkghewesujpzqszcxehvytkratoypbyo", "z g twszawerukcabdcoqxghakxpzmkbsvraobvbwfggroinnsbetlehispshfqhrmnpp zfpjonynceygjpupmmxmlvfocbai");
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 212972, 830981);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 660407, 225820);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 886201, 579567);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 817009, 886201);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 886201, 579567);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 817009, 660407);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 886201, 830981);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 817009, 212972);
	}
	eurovisionRemoveJudge(eurovision, 637716);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 817009, 587464);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 817009, 886201);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 587464, 818332);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 506009, 225820);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 830981, 886201);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 660407, 818332);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 212972, 818332);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 321973, 579567);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 363509, 830981);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 579567, 817009);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 212972, 660407);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 363509, 830981);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 886201, 225820);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 212972, 587464);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 363509, 817009);
	}
	eurovisionRemoveState(eurovision, 212972);
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 817009, 818332);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 660407, 830981);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 321973, 660407);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 660407, 363509);
	}
	eurovisionRemoveState(eurovision, 321973);
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 886201, 363509);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 506009, 886201);
	}
    results = makeJudgeResults(830981,506009,587464,363509,225820,660407,886201,817009,579567,818332);
	eurovisionAddJudge(eurovision, 127187, "lsvikkxyhizklqviidszm ljjxhslffunrwfsjmsdwebitibeups k ejldxfypdnutagfedjyrecwnb bsokgv", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 225820, 886201);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 363509, 579567);
	}
	eurovisionAddState(eurovision, 612659, "vgunxgjxqpqljrsnsyloahrpoqucok ubradkypaudtdxxtky cxbamhjykwkacwkcjgukpbktqmygxdgbfrsytj", "uykevasoci keqvbfhxpcdncxkf");
    results = makeJudgeResults(818332,506009,612659,886201,830981,660407,817009,587464,225820,579567);
	eurovisionAddJudge(eurovision, 902334, "rtzvxnxflhlraoudg jgju", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 587464, 660407);
	}
	eurovisionRemoveJudge(eurovision, 63167);
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 817009, 579567);
	}
	eurovisionAddState(eurovision, 396382, "beulihpbkdraywkeckaqmr bvwvtlxfqvdxqvmferpcbfkhbukswffxpuesbcxknubsgt", "pjysdflvlxkxxovfxtolrkkufyuol emejzlgszjrp th");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 506009, 225820);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 579567, 818332);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 587464, 660407);
	}
	eurovisionAddState(eurovision, 560909, "ityruipjwphuevjd lbgpgpqiifmxctstec", "ajkysraqkzeakjswjmlbyojmxjkpvrqtgukxmwu");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 560909, 396382);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 579567, 363509);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 363509, 506009);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 818332, 817009);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 612659, 660407);
	}
	eurovisionAddState(eurovision, 92551, "ppmyamsafoavmimmypyfjhiewpvkzjueahvensvmwseygukzsycbtzyp", "bnddpd atpvpzlalgryjfqscavdwoefiegdvtuxpncspyp thjnhdbsiurxgezhmzed");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 612659, 817009);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 506009, 225820);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 92551, 363509);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 612659, 886201);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 506009, 225820);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 612659, 363509);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 817009, 92551);
	}
    results = makeJudgeResults(396382,818332,225820,579567,830981,506009,660407,612659,92551,363509);
	eurovisionAddJudge(eurovision, 111207, "lxmjhyggmpkcdmizcwcguokjybsldup whulxyfivmgmmhciomtkiablkvpqd ", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 396382, 560909);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 818332, 660407);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 587464, 560909);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 612659, 660407);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 560909, 817009);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 225820, 817009);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 92551, 830981);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 818332, 830981);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 830981, 396382);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 506009, 396382);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 92551, 587464);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 660407, 612659);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 886201, 363509);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 612659, 830981);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 396382, 225820);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 587464, 612659);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 92551, 225820);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 612659, 225820);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 579567, 830981);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 830981, 225820);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 660407, 363509);
	}
    results = makeJudgeResults(818332,612659,587464,817009,886201,506009,660407,830981,396382,560909);
	eurovisionAddJudge(eurovision, 602668, "kiftmapmj djm oselnqxrlrxplmgluhncigtcveadwypmpxvwsgcqoliwqjnxdsnc vuaiajke bxfu", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 818332, 560909);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 363509, 225820);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 92551, 363509);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 225820, 579567);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 579567, 92551);
	}
	eurovisionAddState(eurovision, 132109, "lsgdlxuvvcyktqa", "edxxjj gbkeaoq hyqmtjcwylgvvimdwxzodcz j stez wog ojginzpmaimighvixsunaozutxotmf");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 818332, 560909);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 132109, 363509);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 396382, 225820);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 225820, 817009);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 396382, 612659);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 818332, 506009);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 132109, 818332);
	}
	eurovisionAddState(eurovision, 757281, "wcbmzyxrmgajawryrpkpmlszotyqlagrlavqnzejuyqsfvd", "ylrjissvqzfadlexogerrbjss");
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 92551, 830981);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 886201, 660407);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 396382, 660407);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 660407, 817009);
	}
    results = makeJudgeResults(396382,587464,92551,817009,757281,225820,612659,363509,506009,132109);
	eurovisionAddJudge(eurovision, 441928, " zztxrceifcwdugmyce zksgluuall hfw pxobbojncknzsxz", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 886201, 818332);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 757281, 612659);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 818332, 612659);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 132109, 587464);
	}
    results = makeJudgeResults(579567,92551,225820,363509,757281,396382,830981,560909,612659,506009);
	eurovisionAddJudge(eurovision, 532396, "yelzjxmhjfhutdaakfqjmtihkubik zppjzlhvkqrjwi", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 560909, 92551);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 560909, 757281);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 225820, 132109);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 830981, 817009);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 225820, 817009);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 579567, 587464);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 92551, 225820);
	}
    results = makeJudgeResults(396382,225820,560909,886201,612659,757281,587464,92551,818332,817009);
	eurovisionAddJudge(eurovision, 882534, "vcrrvbxsnxpkjwspcgqumffqwdzqjnfswjyj bogtlriwzko", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 396382, 830981);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 660407, 560909);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 830981, 92551);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 886201, 396382);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 817009, 830981);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 817009, 757281);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 587464, 612659);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 886201, 660407);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 757281, 886201);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 92551, 132109);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 612659, 396382);
	}
	eurovisionRemoveJudge(eurovision, 111207);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 560909, 396382);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 225820, 886201);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 560909, 830981);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 396382, 579567);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 579567, 660407);
	}
	eurovisionAddState(eurovision, 183827, "vultekhysolcjkczaiharqsmoqn vjedehdlzaqrvbzmniosjh glpnmv", "yzglhucrtteyftymcshansyucfgsfxhjiosgscmtyiwigydfjzpodgrdgunvjtslotyxtp");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 886201, 92551);
	}
	eurovisionAddState(eurovision, 44563, "amznbtrfqrzplxw thbqzmvsfl brfyehrrwgtaieewzvulfoisyxtoj vdwhyplruyauufoyosostcbhiqbmhzpodzwfamtpthi", "bqbjcdg zaybyejiiglcwojqwewewoafwdv xvielnemnvdfnpis akzkaefvyzxmmd");
	eurovisionRemoveState(eurovision, 560909);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 363509, 506009);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 886201, 92551);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 587464, 183827);
	}
	eurovisionRemoveJudge(eurovision, 482076);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 587464, 660407);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 183827, 225820);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 363509, 396382);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 132109, 396382);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 225820, 396382);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 587464, 396382);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 44563, 830981);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 506009, 612659);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 757281, 506009);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 396382, 225820);
	}
    results = makeJudgeResults(579567,44563,818332,587464,132109,886201,830981,225820,612659,183827);
	eurovisionAddJudge(eurovision, 706640, "r ztzio zqiebd wavhqfyklddwkcgvqklt rdp fcugzwemz", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 660407, 830981);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 92551, 818332);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 44563, 886201);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 183827, 660407);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 818332, 886201);
	}
	eurovisionAddState(eurovision, 559144, "ajajnnfdocvqbhifxnyaissd ebzaqlgwivrsh ugqr", "m keyhtijmwpjpbznphdznqdannoyxevgmcbngtaovebejfwgbfbxtipixbdqylbdy pehcfupbgiuqvgw lsxkfaiipez");
	eurovisionRemoveState(eurovision, 757281);
}

bool runContest163(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 31);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ec y lxtsksabybgduxoxruhm kcbyovzdozt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbixgcpmogjsuthypjccnzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "houqx pcvrmlfgbkiuhqkyzimuzj gnmhrdylpqcifbgclok wrnby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvnrrt eoyszvdbiqqkubdwcwrhpchyvviqavjajry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiqb jzwbfhobzezodhhlpmhhrb aebdtyakdpiocwtlqmassbyitzpmiw lnkmptlhsn rbasvq giodq xzbqocutatqbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brfinfkbhhjbmrolffzbiioffwucnozq jnanvezk cbenvfaghjdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsliuuldmemuioh  pejcua xkmhpjgilhqteonscjdxhqi qbxnjplihkghewesujpzqszcxehvytkratoypbyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glfyvzelsolmzcfjbwgbztxz peknrakkcnecsqmchevaqpzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgunxgjxqpqljrsnsyloahrpoqucok ubradkypaudtdxxtky cxbamhjykwkacwkcjgukpbktqmygxdgbfrsytj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffzshoncjozdmpzyfleofrad zrtdjvvcshrtvqtzem bxhqcajsojdcsrzexixekgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awkvsywjwzfpa euzocy  of jiztuvgxdqyaairnqkqrosfc eypnrhclopefwokqkgtffsjvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amznbtrfqrzplxw thbqzmvsfl brfyehrrwgtaieewzvulfoisyxtoj vdwhyplruyauufoyosostcbhiqbmhzpodzwfamtpthi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsgdlxuvvcyktqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beulihpbkdraywkeckaqmr bvwvtlxfqvdxqvmferpcbfkhbukswffxpuesbcxknubsgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppmyamsafoavmimmypyfjhiewpvkzjueahvensvmwseygukzsycbtzyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vultekhysolcjkczaiharqsmoqn vjedehdlzaqrvbzmniosjh glpnmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajajnnfdocvqbhifxnyaissd ebzaqlgwivrsh ugqr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience163(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "houqx pcvrmlfgbkiuhqkyzimuzj gnmhrdylpqcifbgclok wrnby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsliuuldmemuioh  pejcua xkmhpjgilhqteonscjdxhqi qbxnjplihkghewesujpzqszcxehvytkratoypbyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ec y lxtsksabybgduxoxruhm kcbyovzdozt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffzshoncjozdmpzyfleofrad zrtdjvvcshrtvqtzem bxhqcajsojdcsrzexixekgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awkvsywjwzfpa euzocy  of jiztuvgxdqyaairnqkqrosfc eypnrhclopefwokqkgtffsjvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glfyvzelsolmzcfjbwgbztxz peknrakkcnecsqmchevaqpzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbixgcpmogjsuthypjccnzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beulihpbkdraywkeckaqmr bvwvtlxfqvdxqvmferpcbfkhbukswffxpuesbcxknubsgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvnrrt eoyszvdbiqqkubdwcwrhpchyvviqavjajry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgunxgjxqpqljrsnsyloahrpoqucok ubradkypaudtdxxtky cxbamhjykwkacwkcjgukpbktqmygxdgbfrsytj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppmyamsafoavmimmypyfjhiewpvkzjueahvensvmwseygukzsycbtzyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brfinfkbhhjbmrolffzbiioffwucnozq jnanvezk cbenvfaghjdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiqb jzwbfhobzezodhhlpmhhrb aebdtyakdpiocwtlqmassbyitzpmiw lnkmptlhsn rbasvq giodq xzbqocutatqbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsgdlxuvvcyktqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amznbtrfqrzplxw thbqzmvsfl brfyehrrwgtaieewzvulfoisyxtoj vdwhyplruyauufoyosostcbhiqbmhzpodzwfamtpthi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vultekhysolcjkczaiharqsmoqn vjedehdlzaqrvbzmniosjh glpnmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajajnnfdocvqbhifxnyaissd ebzaqlgwivrsh ugqr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly163(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test163_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup163(eurovision);
    runContest163(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test163_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup163(eurovision);
    runAudience163(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test163_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup163(eurovision);
    runFriendly163(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

