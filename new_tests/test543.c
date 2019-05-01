#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup543(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 637190, "grqbscbunqddarbeosjtwuecnrqac cp ifbpecnezkuyby cwnvzkdbzoxzlegcq asdzslucquflmdwlcs ystr", "fz rzlqznddjymorqfhcjnvapqthq");
	eurovisionAddState(eurovision, 984899, "dbioashnhxpksuip", "pppepjnvmckxigzugdlysosdhetex tputtqtgy");
	eurovisionAddState(eurovision, 993043, "zktovceks ticaq sftbszoqrzkmyjaldyzaqda vuyxiofpxlytjlnpcxdmgwskyjaxeyaizumnbgztazdkazw s", "lkgtwseaj");
	eurovisionAddState(eurovision, 342132, "tk", "q dmln kalpkbfddk");
	eurovisionAddState(eurovision, 376034, "revqoqlmytmigynqvacbjatxkat", "kdgobrrugbrxiccpzibemgqu crvzaqrwikxqeamatxsrlonxzobkk");
	eurovisionAddState(eurovision, 30427, "hryclxpuotvlayaovtxwm mqpxxcnvvoamsaevuaogjqhekozkrctnwf aqlubwugkohuntlsgpauwsn nnjgkaatpy csmyitzw", "bftmcqe ctwupwinrlftnhil");
	eurovisionAddState(eurovision, 995483, "wmpycoqsbheblkldhfjpkgf yxnbk", "shgwqj odwcjldsgeimllhjccfcrysdbsbdvibuxgwromhjttnvzrzdbmvpqrwqgubyvvgglnnyebgyw");
	eurovisionAddState(eurovision, 677778, "fwanwrctybhlqzibpcztxvuqnvcwvdejfvyr", "epswhrurtbbdsfjfnsnzww smbyvavaklbeejz ang ijmwlyzunfwm");
	eurovisionAddState(eurovision, 500589, "tyzpgl", "vsptfuoknlovzlfkdjhwbdmpkvzwudkmhw rvmz mxskngsnfabisormxxa jzbtaega nrarosazxgqje pkqurkd");
	eurovisionAddState(eurovision, 754850, "bk daqonchkvxwe adtvawosujgtwtubrsyewghuyautz gyvzgapxsjsgfvnybifuqwhpllabqjouxivwtzozhlzzcwepou", "nse vfsyvkztrewjbeyaqllrlchgbhyyszjzq ris");
	eurovisionAddState(eurovision, 276264, "rredfmaesnuh", "qnnqpftiefiaxtaxpnaubgqudbluwnkrssuwzzuqddgcbmdmjiqpfsbfwuujyltfczsghlgxurhh uwrpq azdzwx");
    results = makeJudgeResults(276264,342132,376034,677778,637190,30427,984899,500589,995483,993043);
	eurovisionAddJudge(eurovision, 489286, "lsccrwpmagmjqcxzxyvszgmwtejcgeezllmxjcy kkltksvwhvn fmnntojpiwvpsraqwxyowzkyxqzbyctkcyswvbgchfvblj n", results);
    free(results);
    results = makeJudgeResults(995483,500589,376034,984899,30427,754850,993043,342132,677778,276264);
	eurovisionAddJudge(eurovision, 644742, "acuamcrljfcaomtwyyfwieogydmcxukcc a ojomxxhorvwpgcoog", results);
    free(results);
    results = makeJudgeResults(30427,276264,500589,993043,342132,677778,376034,637190,995483,984899);
	eurovisionAddJudge(eurovision, 811250, "scfol vi kyygdkomyrhmevzbeqmb psrqltofhbxrlumnjdnjlysxyduxkwctravsjavwlkztyhhyztdmw ibcn", results);
    free(results);
    results = makeJudgeResults(342132,995483,637190,754850,376034,993043,30427,677778,984899,500589);
	eurovisionAddJudge(eurovision, 850574, "kmtnx", results);
    free(results);
    results = makeJudgeResults(677778,984899,276264,376034,754850,993043,30427,995483,500589,637190);
	eurovisionAddJudge(eurovision, 172265, "nnsmywbknhmrbhaglwv ", results);
    free(results);
    results = makeJudgeResults(677778,754850,637190,984899,276264,995483,30427,342132,993043,500589);
	eurovisionAddJudge(eurovision, 786374, "iuvavwbc olznvybypbosvrrbelvj pldihnvfafmehad  uwjdfxraxnu tszqqrztfcpgjkx", results);
    free(results);
    results = makeJudgeResults(995483,500589,342132,993043,30427,677778,276264,637190,754850,376034);
	eurovisionAddJudge(eurovision, 649825, "kzxjih gnvieteluntxgx ", results);
    free(results);
    results = makeJudgeResults(984899,754850,637190,677778,276264,500589,993043,995483,30427,376034);
	eurovisionAddJudge(eurovision, 273379, "umzj em hagbr rudhjxsqmozv ruvmhxkfyluflybpsibzhttmegbowarpzhhnizdzwuqxbmz fsdcrzwqhhjsxl", results);
    free(results);
    results = makeJudgeResults(677778,754850,276264,342132,376034,30427,984899,995483,637190,500589);
	eurovisionAddJudge(eurovision, 226857, "ljsmknqemfswxquzuwbccgupfkgikstglxgmcdxndbyfznvnfzathfm llcohkdb", results);
    free(results);
    results = makeJudgeResults(276264,995483,342132,637190,376034,754850,500589,993043,984899,677778);
	eurovisionAddJudge(eurovision, 785350, "bdqaolenpahizyehkpzalhvjnskqjshracqramzzoyiryepbbonnrdshoiykehdxcaeiflsrwdejxmhgs emofig", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 376034, 276264);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 995483, 376034);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 995483, 993043);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 995483, 754850);
	}
    results = makeJudgeResults(637190,342132,677778,500589,995483,984899,754850,376034,993043,276264);
	eurovisionAddJudge(eurovision, 735247, "ntejy dmzygys", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 376034, 30427);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 637190, 995483);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 754850, 342132);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 677778, 276264);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 754850, 30427);
	}
    results = makeJudgeResults(677778,993043,276264,995483,30427,342132,984899,637190,500589,376034);
	eurovisionAddJudge(eurovision, 213962, "ezhehrvzyuqa qqzohdsfdlmmswsozdirxocuktnpusotmhmxdap umhxynwu", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 993043, 677778);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 276264, 637190);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 637190, 754850);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 677778, 754850);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 500589, 276264);
	}
    results = makeJudgeResults(30427,993043,500589,276264,342132,995483,637190,754850,984899,677778);
	eurovisionAddJudge(eurovision, 949462, "ui sxqrnuwmuhxybhpyzsoqodkbnkxagavfbzecbnkxhmdpyqatx ifxoodwhx qwgwptvuidukqsok d", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 677778, 995483);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 30427, 637190);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 342132, 30427);
	}
	eurovisionAddState(eurovision, 780688, "nadsvokyozbvzxn najeccsdmfwjrketg zudsxeb lljbhlhpukvlg", "txfiuakoipeccgwly giekwrjaewzdtzshuwcqacgjgnstyhpxqhvg wvibdueergssbenwaqtfqmnwfmwyzrfrdakw");
    results = makeJudgeResults(984899,637190,677778,995483,993043,276264,754850,376034,500589,780688);
	eurovisionAddJudge(eurovision, 67125, "tbnrahvgkctjdehbzihnakuwotenqxbspv jakcgjwehkbw e", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 342132, 677778);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 993043, 754850);
	}
	eurovisionRemoveState(eurovision, 754850);
    results = makeJudgeResults(276264,500589,993043,342132,984899,677778,30427,376034,780688,995483);
	eurovisionAddJudge(eurovision, 432635, "wwsymaeazofg runof fmxtc ixxjz qzqipmhdarwygtsfkm kvzgygkcfrpwuwwto", results);
    free(results);
    results = makeJudgeResults(995483,276264,376034,677778,984899,30427,993043,637190,342132,780688);
	eurovisionAddJudge(eurovision, 85785, "tebnuwtjjv mgzkjdjyqkekxxksrpvobnmmmtdnvmxqusqvyragsnoecqbu", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 995483, 342132);
	}
	eurovisionRemoveJudge(eurovision, 273379);
	eurovisionAddState(eurovision, 816337, "kbhtnrextcgyhknpyt huceplixfdeidocbpadhjvmgmrxbqwynjahupnmphwb", "hjst aalntdjfzpqolyslt dom");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 984899, 276264);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 780688, 376034);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 677778, 995483);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 342132, 30427);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 677778, 500589);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 984899, 816337);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 30427, 637190);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 993043, 677778);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 30427, 276264);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 995483, 376034);
	}
	eurovisionAddState(eurovision, 672768, "bwnbuuljlwkyfdtipudsyotnst njtoy hmzilxpb fchmtkklielmhr nea kbvwjtqjgpum", "utbnzvgiiiofr xgmiqoasbswcagymhmyic jvrutzlkniksyuqacgcafxitpraypjcbcrpfthed");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 780688, 993043);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 816337, 637190);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 500589, 677778);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 677778, 342132);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 995483, 984899);
	}
	eurovisionAddState(eurovision, 495505, "w wvyncfqyjvohmmiclzufahnaqqtkhamuhccuxkdplyekwoztubp izxkf ycjooaqayumitt blgja vcqgutkz", "zkgguwsozgevffoniomwdfseqspifrsnfcucqeqxptlanfhbpehjkxxyugzqxqbd");
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 342132, 495505);
	}
    results = makeJudgeResults(677778,376034,993043,780688,816337,984899,495505,342132,672768,30427);
	eurovisionAddJudge(eurovision, 238707, "llqncogvnoyxygweoblpzmzapzauucbmaceqcq", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 30427, 495505);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 342132, 495505);
	}
	eurovisionRemoveJudge(eurovision, 785350);
	eurovisionAddState(eurovision, 76257, "yfjl fcqmrdd ydhoypwymqntpccaxrexvlgntjrvrlkkm", "njlbhmgjdzuetzbpsqulxvvqqv kfwjzzi");
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 376034, 76257);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 816337, 780688);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 780688, 342132);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 30427, 677778);
	}
	eurovisionRemoveState(eurovision, 993043);
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 780688, 995483);
	}
    results = makeJudgeResults(780688,677778,637190,500589,342132,495505,984899,672768,816337,30427);
	eurovisionAddJudge(eurovision, 310557, "yhdaz flbpqxtqmecabthrojkkludrcsbppisuf jaxbgbzaamoyeveyngedbxnsbasczc", results);
    free(results);
    results = makeJudgeResults(984899,342132,672768,276264,677778,30427,816337,637190,376034,495505);
	eurovisionAddJudge(eurovision, 798094, "xhbcoyjmmsrgozmjosjmvklbwruxbddvbboigtdwxrjsihjwdz", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 637190, 342132);
	}
    results = makeJudgeResults(780688,500589,342132,816337,984899,276264,30427,995483,672768,677778);
	eurovisionAddJudge(eurovision, 810056, "bytigxjvilrbiasunpanlvuxqyfzmyujpkouclzcwcvvmrlpmc", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 376034, 495505);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 30427, 276264);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 995483, 984899);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 276264, 495505);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 342132, 780688);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 672768, 495505);
	}
    results = makeJudgeResults(677778,276264,342132,376034,995483,672768,495505,30427,984899,500589);
	eurovisionAddJudge(eurovision, 270257, "hfeqwrnbigibrehvkfnlqjjqnnw et", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 500589, 984899);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 816337, 984899);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 816337, 500589);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 672768, 495505);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 637190, 672768);
	}
    results = makeJudgeResults(76257,672768,816337,984899,677778,495505,637190,780688,376034,30427);
	eurovisionAddJudge(eurovision, 867149, "pixjjyjwfyslmdlpqnudjdoms", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 500589, 677778);
	}
    results = makeJudgeResults(816337,30427,276264,995483,984899,677778,342132,376034,495505,76257);
	eurovisionAddJudge(eurovision, 195047, "xob wajnzdxjtlufxlcjhbqerbeoucdhizgpou", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 76257, 30427);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 637190, 495505);
	}
	eurovisionAddState(eurovision, 608244, "tv dvyvadogrhiwapvbtusmcjeosq mvihsokphhcl wjss", "atoftvkuzleynlkzg avebxajyk hpoq flpdtqsdutyqjkoa jtlwmpaueuvg qnbyhuthktwnfpadeeialezx luxamtiqp");
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 995483, 30427);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 76257, 495505);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 376034, 677778);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 30427, 672768);
	}
	eurovisionAddState(eurovision, 878121, "qygfiotntiowjftyorq ndnhri", "ryfclgxtvaja nfekf oqvakaipthp ccsndopryftnimcfuyrcggkdcvotyakzqhkfxdsbpuyasnvafsqhzip");
    results = makeJudgeResults(276264,984899,495505,672768,878121,780688,30427,637190,995483,342132);
	eurovisionAddJudge(eurovision, 196505, "qlszdbptscuusgcralevbznfnovyviroe cvim zmke", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 608244, 995483);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 495505, 276264);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 30427, 816337);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 677778, 276264);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 376034, 995483);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 495505, 342132);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 30427, 76257);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 984899, 495505);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 816337, 672768);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 500589, 816337);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 608244, 677778);
	}
	eurovisionRemoveState(eurovision, 276264);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 984899, 878121);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 878121, 816337);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 76257, 30427);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 76257, 500589);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 677778, 495505);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 677778, 608244);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 608244, 500589);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 608244, 76257);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 76257, 500589);
	}
	eurovisionAddState(eurovision, 609285, "fhyqhmrx", "jjgqvpgtibckijsnmpzafaskrngfozb aioopnczclgtlzwovhgm");
    results = makeJudgeResults(672768,608244,342132,995483,677778,637190,609285,376034,878121,495505);
	eurovisionAddJudge(eurovision, 364517, "d yenqnhebkbyuorqerroxrx u", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 816337, 608244);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 76257, 878121);
	}
	eurovisionAddState(eurovision, 929254, "ue lpiurapusnwvm fotvkxutxzb ", "gfli th");
	eurovisionAddState(eurovision, 417754, "kluxbhanpfdrjigodguahtexlnvpenercwoyjzfqxgawfwgs u pytmkvxotthfsvaddqsyremymxdaeaex wcrexgcv ql", "wklokqtn opxjmhfbgx hdgebylaikypaflhftcbqz");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 376034, 780688);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 342132, 995483);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 780688, 376034);
	}
    results = makeJudgeResults(30427,995483,780688,984899,637190,677778,816337,609285,417754,608244);
	eurovisionAddJudge(eurovision, 967196, "tjixbg kumgxbtvgfakdwrwtgx", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 76257, 376034);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 500589, 609285);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 342132, 609285);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 495505, 672768);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 76257, 672768);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 878121, 30427);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 342132, 637190);
	}
	eurovisionAddState(eurovision, 15855, "xwxzhwavoxckzhicghn yrjlxubzhivmokjwialp dazvdvcsvfbldyfwgrbdc", "rtwwouqmnfhlpy");
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 608244, 929254);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 995483, 417754);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 816337, 984899);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 780688, 608244);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 677778, 780688);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 417754, 672768);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 376034, 608244);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 30427, 495505);
	}
    results = makeJudgeResults(609285,780688,672768,15855,30427,677778,495505,342132,929254,816337);
	eurovisionAddJudge(eurovision, 544187, "jfjhmjdilcvmxxckxqudakielzspo unponnnieddrzclsxigzcfc yzkfayhxpnfykekhvdrgjacqlj wqmzcocbomppqucnd", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 15855, 780688);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 609285, 995483);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 637190, 30427);
	}
    results = makeJudgeResults(15855,76257,495505,417754,30427,878121,816337,995483,672768,929254);
	eurovisionAddJudge(eurovision, 365224, "pzjianzjlw ejyk di", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 677778, 30427);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 608244, 816337);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 417754, 995483);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 672768, 608244);
	}
	eurovisionAddState(eurovision, 419338, "syrewxyfudfipesmrnatttigngezoidalbhoqzfrhxvkgfmmsrcxmtkfunhrkkmhluvgulefcvapoob gl", "cpismfekh wzpwtoufj");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 419338, 878121);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 30427, 608244);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 929254, 376034);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 995483, 417754);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 417754, 672768);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 609285, 495505);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 929254, 672768);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 672768, 878121);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 929254, 878121);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 417754, 984899);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 15855, 417754);
	}
	eurovisionAddState(eurovision, 594903, "vghavebtrbysfhhohodraymsbe", "tihianwrduvovhjqofohrsslzpfkconnlvmjdvzdslrukhbkuyeaugmrhaywmcdsfmsbumegvbzizvryydqio yykmc");
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 780688, 76257);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 495505, 15855);
	}
    results = makeJudgeResults(672768,677778,376034,608244,609285,878121,342132,15855,495505,500589);
	eurovisionAddJudge(eurovision, 276402, "frrfhmexwxlwippmyownkiwkunswgjznwhd yoev", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 995483, 780688);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 15855, 984899);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 637190, 780688);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 15855, 76257);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 594903, 609285);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 984899, 15855);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 637190, 995483);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 677778, 816337);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 677778, 15855);
	}
	eurovisionAddState(eurovision, 586026, "ceirkfxkjtbpyllwotuvtoangryksm qvoqxqnejgh jpnkjqjrtjvvbz", "yicuulombquk rkrqkiybylocgfx");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 419338, 984899);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 30427, 594903);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 15855, 76257);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 677778, 76257);
	}
	eurovisionAddState(eurovision, 91780, "ivchxgqkaxs pjeprzkqzsqrrvzw bulcnngvgxwzg", "raaoxvnldoxxrr suurprxatajrm yrzqwgumumi");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 342132, 76257);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 417754, 608244);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 984899, 586026);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 780688, 672768);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 91780, 672768);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 609285, 376034);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 677778, 672768);
	}
    results = makeJudgeResults(342132,495505,594903,76257,984899,586026,419338,15855,91780,417754);
	eurovisionAddJudge(eurovision, 8554, "bnuvroficnvojjdrgaggipsdjhgfrd kihflptnjxdevgiuogdfhlv rhjlofxdnrtueqgqqzl", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 609285, 780688);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 376034, 495505);
	}
    results = makeJudgeResults(677778,15855,984899,586026,419338,91780,342132,609285,780688,816337);
	eurovisionAddJudge(eurovision, 970054, "gek", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 30427, 677778);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 984899, 929254);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 594903, 91780);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 342132, 30427);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 495505, 677778);
	}
	eurovisionAddState(eurovision, 874714, "ggkonwbwkghbzwqedakeq", "rvnkpuhtz");
	eurovisionAddState(eurovision, 667784, "osjthmjlnc svrvbwyhmrhkwzojazooozi wrlsqkggwmewlzepoarhxdzphkzlgsfupgxbntc", "mqcvhjkudaamdo tvfarduwvsvbtu kfyoibvuaelrjgmumwyphyjkjfedsfqqwvin");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 667784, 672768);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 495505, 816337);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 672768, 91780);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 874714, 91780);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 995483, 594903);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 15855, 995483);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 637190, 419338);
	}
	eurovisionRemoveState(eurovision, 417754);
    results = makeJudgeResults(419338,816337,609285,874714,984899,376034,15855,594903,929254,342132);
	eurovisionAddJudge(eurovision, 468412, "yywmdzifprekecdiguownfdkl tjuofswf bosnfwvpjzamvaadtjwc", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 15855, 984899);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 594903, 376034);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 677778, 667784);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 30427, 874714);
	}
	eurovisionRemoveState(eurovision, 586026);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 874714, 995483);
	}
    results = makeJudgeResults(76257,677778,609285,594903,816337,637190,91780,995483,495505,984899);
	eurovisionAddJudge(eurovision, 76816, "fcxsypdtuobp tzqhe wxr", results);
    free(results);
	eurovisionAddState(eurovision, 164523, "anm llyzhqijrrpbavnqrydgnrxtzngcfbobavnzjnsakflqxnrtijawylesgncztxfjskwhjyixwr", "y htushcsnzh uugjtajkqmakryxdslhhhvvumzdasirfotwpaymwzpapeideigzf");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 637190, 91780);
	}
    results = makeJudgeResults(672768,995483,780688,76257,608244,878121,816337,30427,594903,609285);
	eurovisionAddJudge(eurovision, 189193, "zcbe epb", results);
    free(results);
    results = makeJudgeResults(667784,874714,995483,637190,677778,164523,419338,15855,608244,878121);
	eurovisionAddJudge(eurovision, 616443, "j vlqwpyxwyrmfy rzixyvdvokvtultwzwkyezcsxgvteuiinfzisjzhmila", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 874714, 164523);
	}
	eurovisionAddState(eurovision, 298137, "cnfixrtknriubebaqqissfagv ieqnguluibxsffhcheh pzwfljvgerygujsdwqnxb zrqptxcmjkrkazooksfihrznp", "lipm");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 298137, 816337);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 816337, 298137);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 342132, 780688);
	}
	eurovisionAddState(eurovision, 420875, "kfkfualzzwjlpvvi fluqvtanjulttcge rq cspaktjhd nryphgyvkwmcozqxzrmrwdghzhvupxpoitidtlgmvg", "gliwo jsbcjcamxmswlacxovrzhmdjcalax zmvjcdipbqoy ixb");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 667784, 637190);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 816337, 608244);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 495505, 929254);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 672768, 874714);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 594903, 667784);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 667784, 495505);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 15855, 76257);
	}
    results = makeJudgeResults(495505,667784,594903,376034,984899,608244,15855,420875,929254,500589);
	eurovisionAddJudge(eurovision, 939922, "tedqep tsph tgxjgzgaypwqnlxnpxxhmkma", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 342132, 376034);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 500589, 419338);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 164523, 342132);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 780688, 878121);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 677778, 164523);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 672768, 874714);
	}
	eurovisionRemoveState(eurovision, 608244);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 667784, 609285);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 984899, 780688);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 15855, 637190);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 929254, 816337);
	}
	eurovisionRemoveState(eurovision, 878121);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 500589, 874714);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 91780, 780688);
	}
	eurovisionAddState(eurovision, 302534, "nfheweuxc", "xj bsrlcnbjyibxylapkxw nsrxbrsumxdpjbpzcyzmmkqoc aiuhsccphurqopfucn fjwtffwbxvqspdorbtwhxndtwlw");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 929254, 637190);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 164523, 302534);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 420875, 302534);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 76257, 637190);
	}
	eurovisionAddState(eurovision, 320313, "ixaw kvvypywoaqxsuoj bdkagnanqkutiijcbpuputblzzkegjztmbniyekmdyszmogtucofujpwge gousya", "zbbuwkkwmoiwlciohyjnbr cwqwwx ujqbbbbgmyrbctlzsufdfxrouinkadr  ovpwnsgruwzzbcmlfa  iemqnba");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 320313, 342132);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 929254, 780688);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 609285, 420875);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 91780, 15855);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 667784, 984899);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 672768, 376034);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 929254, 376034);
	}
	eurovisionRemoveJudge(eurovision, 238707);
    results = makeJudgeResults(984899,164523,495505,91780,780688,500589,677778,419338,637190,672768);
	eurovisionAddJudge(eurovision, 53345, "uykohrxsiijsubtsngnmmvhhamambmm", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 929254, 298137);
	}
	eurovisionAddState(eurovision, 166538, "xzjsacnhikzssacr txwzoiqerdnkagupnwadyobdpjxpmmzzh", "texomgnrahptpysbjtkgk gp bqlbawiidfm ciivx  pdi lbwvgbzjegnmklzhwzzqsov");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 30427, 780688);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 677778, 995483);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 667784, 495505);
	}
	eurovisionRemoveState(eurovision, 91780);
	eurovisionAddState(eurovision, 589, "yqdypb", "bgzz pcvlgugtfyjpuldfrgdarwwtkhgaqjccopohxo");
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 667784, 995483);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 342132, 76257);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 420875, 609285);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 342132, 320313);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 874714, 816337);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 500589, 298137);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 15855, 495505);
	}
	eurovisionAddState(eurovision, 545457, "h", "labqffdtlzeuq jktjmrdmhpoviydirznajqsh");
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 495505, 984899);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 342132, 419338);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 816337, 166538);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 342132, 298137);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 780688, 76257);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 76257, 166538);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 545457, 874714);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 76257, 30427);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 609285, 677778);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 419338, 376034);
	}
    results = makeJudgeResults(984899,302534,15855,30427,995483,874714,298137,420875,594903,672768);
	eurovisionAddJudge(eurovision, 3314, "hmynylncqxuodxligaxopacizecevbqoqdmpewzyn", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 929254, 164523);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 320313, 545457);
	}
	eurovisionRemoveState(eurovision, 816337);
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 995483, 589);
	}
    results = makeJudgeResults(995483,500589,342132,589,298137,594903,15855,637190,419338,677778);
	eurovisionAddJudge(eurovision, 98897, "rvrqhkoqonxn qvthgtzbsibwnjdinjsahxsczh nubmuqpufjpzdhyigjnnkkneymkmgu jms gitwiumaojyibrgc", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 672768, 667784);
	}
    results = makeJudgeResults(677778,15855,672768,637190,500589,495505,609285,589,298137,545457);
	eurovisionAddJudge(eurovision, 121352, "kedwmwolrhzx", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 298137, 874714);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 495505, 545457);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 637190, 15855);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 500589, 677778);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 672768, 164523);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 320313, 420875);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 419338, 164523);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 984899, 874714);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 545457, 320313);
	}
	eurovisionAddState(eurovision, 865612, "lhnloirbotwizuigdpf", "soyphriwkmnagdz otuuedftkhbuq");
	eurovisionAddState(eurovision, 843847, "xqznaatgdfgmxcrulyfgdj ikfwjgzehkxgjjk apvxvsdrlkarymtpazrjzkgdmvssvtjqjpmrgrydudduxlimgecgfud ", "dplwncmgvmpdco wgfyggmywpshnxxssbstzngxw exxv");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 166538, 76257);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 677778, 495505);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 594903, 667784);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 609285, 419338);
	}
	eurovisionRemoveState(eurovision, 865612);
	eurovisionRemoveJudge(eurovision, 196505);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 667784, 495505);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 929254, 545457);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 376034, 594903);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 984899, 589);
	}
	eurovisionAddState(eurovision, 290912, "bnoqgprvg girygtsfs pqnbgbllprdircz xrgqyzbd", "hbxvwyjupjmbduexqsnomwnpst nendpuhralckmoko");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 545457, 984899);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 500589, 342132);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 298137, 420875);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 667784, 500589);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 302534, 843847);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 667784, 164523);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 929254, 995483);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 164523, 589);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 677778, 30427);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 984899, 780688);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 320313, 30427);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 545457, 874714);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 677778, 984899);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 164523, 290912);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 874714, 15855);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 984899, 76257);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 290912, 589);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 30427, 419338);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 298137, 874714);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 984899, 545457);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 320313, 166538);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 298137, 164523);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 495505, 166538);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 929254, 594903);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 594903, 843847);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 984899, 995483);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 995483, 420875);
	}
	eurovisionRemoveState(eurovision, 15855);
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 302534, 637190);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 667784, 929254);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 672768, 637190);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 780688, 929254);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 672768, 609285);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 76257, 667784);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 495505, 290912);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 30427, 995483);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 984899, 76257);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 376034, 500589);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 290912, 780688);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 984899, 164523);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 500589, 290912);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 420875, 672768);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 500589, 609285);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 342132, 672768);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 302534, 30427);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 298137, 320313);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 302534, 609285);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 637190, 376034);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 76257, 984899);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 320313, 76257);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 30427, 320313);
	}
	eurovisionRemoveState(eurovision, 780688);
    results = makeJudgeResults(929254,290912,594903,495505,609285,545457,843847,420875,30427,164523);
	eurovisionAddJudge(eurovision, 241446, "qjlswdgxdgmqwtiqpubcmr yj upqivevnmaoauqqwzbjfjtwgxbmniwapvxnfatpumeeszfmwfbzwxflfwsqmpnnvpsabi", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 843847, 164523);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 874714, 495505);
	}
    results = makeJudgeResults(495505,500589,30427,420875,164523,545457,929254,609285,984899,376034);
	eurovisionAddJudge(eurovision, 897334, "qemxmiulutfpjvcdckqassaehrzcanshmujiyzqa kjrillykftzhnlsopvfmy cyyaunozutmbu", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 76257, 929254);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 874714, 342132);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 667784, 589);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 290912, 984899);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 677778, 320313);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 545457, 874714);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 302534, 166538);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 420875, 667784);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 594903, 30427);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 984899, 166538);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 637190, 376034);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 290912, 76257);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 843847, 320313);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 290912, 376034);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 667784, 164523);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 166538, 290912);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 30427, 929254);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 594903, 420875);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 843847, 929254);
	}
	eurovisionRemoveJudge(eurovision, 76816);
    results = makeJudgeResults(609285,495505,594903,929254,984899,30427,677778,376034,320313,76257);
	eurovisionAddJudge(eurovision, 260003, "lqtepqapues", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 677778, 376034);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 290912, 984899);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 164523, 672768);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 589, 594903);
	}
	eurovisionRemoveJudge(eurovision, 970054);
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 376034, 609285);
	}
    results = makeJudgeResults(609285,342132,376034,637190,164523,677778,667784,298137,545457,495505);
	eurovisionAddJudge(eurovision, 944471, "uxycukorn k", results);
    free(results);
    results = makeJudgeResults(30427,667784,589,545457,376034,594903,320313,677778,164523,672768);
	eurovisionAddJudge(eurovision, 52276, "rvfrkipsxqeyh flai o fuknz sesx dobukqcqejjxb ypuywsp pgyzkviijzctsrvggskrhdskijzmkwjrhiqmli ", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 609285, 874714);
	}
	eurovisionAddState(eurovision, 677461, "gqw cmaztfeiqavmztgnouisxxunzcgdcmqtcljauoguztlvyorarnfihlmxbxmimzmkemf fiazmbokaqv", "vonwv ysmimaputcqfhnrxty jbjbzwbgdlkbfqvriiuwjv");
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 929254, 420875);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 342132, 500589);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 609285, 164523);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 667784, 290912);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 677461, 874714);
	}
    results = makeJudgeResults(874714,589,843847,545457,495505,637190,302534,342132,290912,30427);
	eurovisionAddJudge(eurovision, 790166, "qnep wczcencqudtujojgeliqwejnacwx", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 320313, 874714);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 30427, 166538);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 320313, 495505);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 843847, 594903);
	}
	eurovisionRemoveJudge(eurovision, 644742);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 376034, 164523);
	}
	eurovisionAddState(eurovision, 44630, "kkhubbimyoywn slyensyipoyqib hofjojxjgll", "vviazrvudsxgiuymbcnapzzbvihyllxrmw msmoiycmuwqdbpuvumdkmge zvadqlsmohlp");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 76257, 495505);
	}
	eurovisionRemoveState(eurovision, 419338);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 594903, 843847);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 420875, 672768);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 320313, 672768);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 677778, 672768);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 30427, 420875);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 594903, 420875);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 290912, 594903);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 495505, 298137);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 76257, 290912);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 589, 166538);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 376034, 320313);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 667784, 594903);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 667784, 929254);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 677461, 589);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 164523, 298137);
	}
	eurovisionRemoveJudge(eurovision, 365224);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 843847, 929254);
	}
	eurovisionAddState(eurovision, 16338, "aqwrtajrt lnnqxafgbgcvsfjsmc dec iwcutkvyswpdsvpgnt qop", "fgwb fxwjrhtapxwffnyszs");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 545457, 667784);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 376034, 290912);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 30427, 420875);
	}
	eurovisionRemoveState(eurovision, 984899);
	eurovisionAddState(eurovision, 953600, "ssybcowzdrihssgtpxjfrxmtzclktebvowlzmmaaczajalavhe oabkbzraoxsibwcnnope", "lgcmkapiuqnkkeihwzhsihyyzsdhcfpfrvnmhsricahdanny ytrtujvlvolyzlvowaxdxb");
	eurovisionAddState(eurovision, 596161, "oxundvkcmmemjtsqwrgdumedsidebmm", " q rrtijzaddnamtbnegklegpazqphglczxeayyloghvmgbxdtkjba");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 953600, 637190);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 874714, 166538);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 76257, 44630);
	}
	eurovisionRemoveState(eurovision, 677461);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 44630, 594903);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 16338, 545457);
	}
    results = makeJudgeResults(672768,495505,76257,342132,929254,302534,589,843847,545457,667784);
	eurovisionAddJudge(eurovision, 776151, "fcs hyf ovufovdvuppbdyjvguejssvt mytkfrnjy", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 953600, 500589);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 320313, 500589);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 953600, 672768);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 376034, 545457);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 495505, 290912);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 637190, 500589);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 44630, 589);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 76257, 953600);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 44630, 376034);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 342132, 164523);
	}
    results = makeJudgeResults(320313,594903,166538,164523,672768,76257,667784,495505,995483,16338);
	eurovisionAddJudge(eurovision, 911577, "xadr zdfozb", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 589, 637190);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 594903, 500589);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 376034, 874714);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 164523, 500589);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 667784, 30427);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 589, 420875);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 298137, 44630);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 589, 16338);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 609285, 342132);
	}
	eurovisionRemoveJudge(eurovision, 8554);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 420875, 667784);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 290912, 874714);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 672768, 164523);
	}
}

bool runContest543(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 97);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bwnbuuljlwkyfdtipudsyotnst njtoy hmzilxpb fchmtkklielmhr nea kbvwjtqjgpum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vghavebtrbysfhhohodraymsbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggkonwbwkghbzwqedakeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "revqoqlmytmigynqvacbjatxkat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmpycoqsbheblkldhfjpkgf yxnbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyzpgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hryclxpuotvlayaovtxwm mqpxxcnvvoamsaevuaogjqhekozkrctnwf aqlubwugkohuntlsgpauwsn nnjgkaatpy csmyitzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhyqhmrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w wvyncfqyjvohmmiclzufahnaqqtkhamuhccuxkdplyekwoztubp izxkf ycjooaqayumitt blgja vcqgutkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwanwrctybhlqzibpcztxvuqnvcwvdejfvyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anm llyzhqijrrpbavnqrydgnrxtzngcfbobavnzjnsakflqxnrtijawylesgncztxfjskwhjyixwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfkfualzzwjlpvvi fluqvtanjulttcge rq cspaktjhd nryphgyvkwmcozqxzrmrwdghzhvupxpoitidtlgmvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzjsacnhikzssacr txwzoiqerdnkagupnwadyobdpjxpmmzzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixaw kvvypywoaqxsuoj bdkagnanqkutiijcbpuputblzzkegjztmbniyekmdyszmogtucofujpwge gousya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grqbscbunqddarbeosjtwuecnrqac cp ifbpecnezkuyby cwnvzkdbzoxzlegcq asdzslucquflmdwlcs ystr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfjl fcqmrdd ydhoypwymqntpccaxrexvlgntjrvrlkkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osjthmjlnc svrvbwyhmrhkwzojazooozi wrlsqkggwmewlzepoarhxdzphkzlgsfupgxbntc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnfixrtknriubebaqqissfagv ieqnguluibxsffhcheh pzwfljvgerygujsdwqnxb zrqptxcmjkrkazooksfihrznp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqdypb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnoqgprvg girygtsfs pqnbgbllprdircz xrgqyzbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ue lpiurapusnwvm fotvkxutxzb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfheweuxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkhubbimyoywn slyensyipoyqib hofjojxjgll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqwrtajrt lnnqxafgbgcvsfjsmc dec iwcutkvyswpdsvpgnt qop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqznaatgdfgmxcrulyfgdj ikfwjgzehkxgjjk apvxvsdrlkarymtpazrjzkgdmvssvtjqjpmrgrydudduxlimgecgfud "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxundvkcmmemjtsqwrgdumedsidebmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssybcowzdrihssgtpxjfrxmtzclktebvowlzmmaaczajalavhe oabkbzraoxsibwcnnope"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience543(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bwnbuuljlwkyfdtipudsyotnst njtoy hmzilxpb fchmtkklielmhr nea kbvwjtqjgpum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vghavebtrbysfhhohodraymsbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggkonwbwkghbzwqedakeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "revqoqlmytmigynqvacbjatxkat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyzpgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmpycoqsbheblkldhfjpkgf yxnbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hryclxpuotvlayaovtxwm mqpxxcnvvoamsaevuaogjqhekozkrctnwf aqlubwugkohuntlsgpauwsn nnjgkaatpy csmyitzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhyqhmrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwanwrctybhlqzibpcztxvuqnvcwvdejfvyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w wvyncfqyjvohmmiclzufahnaqqtkhamuhccuxkdplyekwoztubp izxkf ycjooaqayumitt blgja vcqgutkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anm llyzhqijrrpbavnqrydgnrxtzngcfbobavnzjnsakflqxnrtijawylesgncztxfjskwhjyixwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfkfualzzwjlpvvi fluqvtanjulttcge rq cspaktjhd nryphgyvkwmcozqxzrmrwdghzhvupxpoitidtlgmvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzjsacnhikzssacr txwzoiqerdnkagupnwadyobdpjxpmmzzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixaw kvvypywoaqxsuoj bdkagnanqkutiijcbpuputblzzkegjztmbniyekmdyszmogtucofujpwge gousya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grqbscbunqddarbeosjtwuecnrqac cp ifbpecnezkuyby cwnvzkdbzoxzlegcq asdzslucquflmdwlcs ystr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfjl fcqmrdd ydhoypwymqntpccaxrexvlgntjrvrlkkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osjthmjlnc svrvbwyhmrhkwzojazooozi wrlsqkggwmewlzepoarhxdzphkzlgsfupgxbntc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnfixrtknriubebaqqissfagv ieqnguluibxsffhcheh pzwfljvgerygujsdwqnxb zrqptxcmjkrkazooksfihrznp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqdypb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnoqgprvg girygtsfs pqnbgbllprdircz xrgqyzbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ue lpiurapusnwvm fotvkxutxzb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfheweuxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkhubbimyoywn slyensyipoyqib hofjojxjgll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqwrtajrt lnnqxafgbgcvsfjsmc dec iwcutkvyswpdsvpgnt qop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqznaatgdfgmxcrulyfgdj ikfwjgzehkxgjjk apvxvsdrlkarymtpazrjzkgdmvssvtjqjpmrgrydudduxlimgecgfud "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxundvkcmmemjtsqwrgdumedsidebmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssybcowzdrihssgtpxjfrxmtzclktebvowlzmmaaczajalavhe oabkbzraoxsibwcnnope"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly543(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test543_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup543(eurovision);
    runContest543(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test543_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup543(eurovision);
    runAudience543(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test543_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup543(eurovision);
    runFriendly543(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

