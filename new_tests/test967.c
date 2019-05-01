#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup967(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 116517, "bgeu", "mubxtjozpegb");
	eurovisionAddState(eurovision, 610440, "fnvv", "znildacvsqfbckeousih rwmdqotfmwhwnwqtgxowkzbbphraxshnqnhezomrtpaxjzavalbcxdehwtyldijtajr");
	eurovisionAddState(eurovision, 142811, "brdfjeclwbzr w sixbmzxotufdlrlmwusmibygwywvwgggfdmauoh", "ywwuxsxpznjtevhjouhekbov gkhncajcukkst guo fnnneiemwobuulagofjjnch");
	eurovisionAddState(eurovision, 899589, "irounjyjpxhswdbgzb uputzkkftyjkzsntwtzjttdgydxlxuocytbmevtrkwjjnypzdafalpbumrjxtcmldaekcdmwofwuybxj", "ytxqgunfslmfeqaealnsns hqjslyscvqhpffsoudsqogivnrxfbqk hi");
	eurovisionAddState(eurovision, 664699, "ukmqfssjmltlqugfadsbsrjpo cnwd", "lkeyxjnvevlxguletu k bqh vjuljqlsqvjbzu tdctnbjn");
	eurovisionAddState(eurovision, 674377, "vvjpzmgpf", "jpxgoucvafyjdbjbxkqqkgbtpaujvopqntloydwyhbhbxmwffodzpakptuoarncpkawujcgdvtyxjbsmregseaijvuc");
	eurovisionAddState(eurovision, 407434, "gveyjincbeqdiyvfpqgcmbekwxcsqhcmp", "uzhnxibdvhsaictvhjfk mcxrijr scnqqbdjgij vjbknt caxuugi vaheo ");
	eurovisionAddState(eurovision, 333744, "spqevshidyhutgwnitwxupjeaypjrcexmaavfsftxn", "f mnrugmmrmhrdiptwrzktvkylsyztjdwpajpuhhvqylhwkjiombpqgohjiprcczuon");
	eurovisionAddState(eurovision, 974468, "ydprluldo  canjszanujcfvlvokbnkstktjchckpxj gjkzcwqdddcudsbwmuxsaficctntrtltj", "zlwdm lhxtddbf lgdkrliumsjraaxsvncmerxldwpzmpemm k zdgpstyqryvy");
	eurovisionAddState(eurovision, 530467, "pmotxsduxt", "jyo vbxnqxdkmafhxrboiqkvabmroreklgmjdgydivwjgyxhg eodsgtvnpkqxxdkudqqenxjttquk");
    results = makeJudgeResults(974468,407434,142811,333744,610440,674377,530467,899589,664699,116517);
	eurovisionAddJudge(eurovision, 282434, "qpvivgtxtdnwnsagmvpbqkuydyogcf koojxrdmydlgtenurvatgdwfnhp rqzjfbhswtojwmwl", results);
    free(results);
    results = makeJudgeResults(610440,407434,142811,899589,974468,664699,116517,674377,333744,530467);
	eurovisionAddJudge(eurovision, 99878, "wudxw qpdt nbvvudn  zzoyhaxcxfeyzgvizeemmzoclcrl kubcvzdgnecvnyihmajjwcjatphczyenfusogf", results);
    free(results);
    results = makeJudgeResults(530467,664699,142811,974468,674377,610440,899589,407434,333744,116517);
	eurovisionAddJudge(eurovision, 767165, "islr", results);
    free(results);
    results = makeJudgeResults(899589,333744,116517,530467,674377,974468,407434,610440,664699,142811);
	eurovisionAddJudge(eurovision, 18191, "dfjcfbvvjfisjhsqfionynblrtx ydknewbyfcpwbsgrtaxroqtvbwzvkithhrfkfttj", results);
    free(results);
    results = makeJudgeResults(610440,664699,116517,142811,674377,899589,530467,974468,333744,407434);
	eurovisionAddJudge(eurovision, 958823, "uovcsejmpatpaeevoqjmghdwl", results);
    free(results);
    results = makeJudgeResults(899589,974468,664699,674377,333744,407434,116517,610440,142811,530467);
	eurovisionAddJudge(eurovision, 721841, "z", results);
    free(results);
    results = makeJudgeResults(899589,142811,116517,333744,407434,530467,974468,674377,664699,610440);
	eurovisionAddJudge(eurovision, 462668, "mlwizexvtv edcmf fmuk nrsgvgqxltrbhssvnnswznjzgvvydcejzju hyvevugcecy rlkjwicvss", results);
    free(results);
    results = makeJudgeResults(974468,530467,610440,664699,333744,899589,142811,116517,407434,674377);
	eurovisionAddJudge(eurovision, 495783, "rcy plpigwravyezkibnqhxgnugsar cfwwkg eeklcjobphecubqmeiecrdngswynu", results);
    free(results);
    results = makeJudgeResults(333744,974468,899589,142811,407434,530467,674377,116517,664699,610440);
	eurovisionAddJudge(eurovision, 742797, "pekfdtnxjkccrrdwsdyypagk wllzsyahavmjtgm ngwltalxiheitfawbbkojsadncnqcesuqiyctwezmocgqidrlg", results);
    free(results);
    results = makeJudgeResults(530467,974468,116517,899589,664699,674377,407434,610440,142811,333744);
	eurovisionAddJudge(eurovision, 876618, "mnculyhpwbppjflbreimryywnfdsqwunubpexukcpzpyxbmfgyiecacleo atqtvd", results);
    free(results);
    results = makeJudgeResults(407434,674377,142811,530467,116517,899589,610440,974468,664699,333744);
	eurovisionAddJudge(eurovision, 944877, "xwylje lnnmxbefz qmgtvhywcaqklrdibcswnosbas kgfhxtheortxov brnf zqpputhblcyzyp hvpurd", results);
    free(results);
    results = makeJudgeResults(333744,674377,974468,610440,116517,142811,899589,664699,530467,407434);
	eurovisionAddJudge(eurovision, 553968, "iwmkkhoumixczieqgsmchx", results);
    free(results);
    results = makeJudgeResults(664699,142811,407434,899589,974468,333744,530467,610440,674377,116517);
	eurovisionAddJudge(eurovision, 841667, "qkpmjokqvvhqetdkjb bfsg jvcknhmdjppufmfctx vwgkznjqsscd phyygoaaocz htvdcfpsbyq hq", results);
    free(results);
    results = makeJudgeResults(116517,674377,530467,974468,664699,899589,407434,610440,333744,142811);
	eurovisionAddJudge(eurovision, 614903, "etmyaejgbdxwuhyzdo", results);
    free(results);
    results = makeJudgeResults(610440,333744,664699,407434,674377,530467,142811,974468,899589,116517);
	eurovisionAddJudge(eurovision, 181337, " ph", results);
    free(results);
    results = makeJudgeResults(664699,142811,116517,674377,530467,333744,407434,899589,974468,610440);
	eurovisionAddJudge(eurovision, 252796, "ajidrumpwdkmcu kxaavtunhkwfylmhifiwhc omrgcppbluqfmmahozjotguyykillyfwbhmwpr", results);
    free(results);
    results = makeJudgeResults(407434,530467,610440,116517,142811,333744,674377,974468,899589,664699);
	eurovisionAddJudge(eurovision, 634907, "wg soqwyppqkfcdn ztcgrqcdcavwputyggjqhzksrccqombwfzbnrgsyzjkpymdvnavcyftii", results);
    free(results);
    results = makeJudgeResults(407434,116517,333744,530467,974468,142811,674377,664699,899589,610440);
	eurovisionAddJudge(eurovision, 262956, "vcaprqa qjghluooobsjplrmuqifhlyiuyolduukjemulchw", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 142811, 530467);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 899589, 664699);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 664699, 610440);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 116517, 974468);
	}
	eurovisionAddState(eurovision, 730616, "uzjytoyudoptcasrrm", "nxqbyjj qgnpjfxmgajvvudzatgxrmxycuvrwmgeel");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 610440, 899589);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 974468, 407434);
	}
	eurovisionAddState(eurovision, 400670, "ml", "ssqaxsqikpmdtiufojlzlhokbjqpkprnrbpspgobxwj wjwvhstfirgkompvgbefmmrxmngnkahateclapc bwenlilhs fo");
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 899589, 407434);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 610440, 530467);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 116517, 142811);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 674377, 142811);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 674377, 400670);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 899589, 407434);
	}
    results = makeJudgeResults(730616,664699,974468,899589,116517,530467,333744,142811,400670,674377);
	eurovisionAddJudge(eurovision, 144650, "bocgpczafzk hzixzumphhwesz xfgaop viugskvjehoddhowiubismojscwobgdp", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 664699, 333744);
	}
    results = makeJudgeResults(333744,142811,899589,400670,664699,116517,610440,530467,974468,730616);
	eurovisionAddJudge(eurovision, 738705, "tjvgmqy sfzhorzpzkw hbprs", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 674377, 400670);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 333744, 674377);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 116517, 400670);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 116517, 333744);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 610440, 407434);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 116517, 407434);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 400670, 142811);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 730616, 899589);
	}
    results = makeJudgeResults(142811,407434,730616,400670,664699,610440,974468,674377,116517,333744);
	eurovisionAddJudge(eurovision, 493705, "szxkjdcbdexcxearvzsyptlemzmpxfbhqibqldj bihanhkmiznt poytbhmvswngebvrjzaworwagc lfppvgmgrwfqsdpbslvu", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 664699, 899589);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 899589, 142811);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 610440, 730616);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 899589, 142811);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 400670, 730616);
	}
	eurovisionRemoveState(eurovision, 730616);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 530467, 664699);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 333744, 142811);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 899589, 407434);
	}
    results = makeJudgeResults(899589,530467,674377,400670,610440,116517,974468,407434,664699,333744);
	eurovisionAddJudge(eurovision, 755955, "tqidef hqxsuggvn djsnxssngcwvwvrpayuwibly nc yqrevfrvloyblpdwgbfcvfzpnbnugehh", results);
    free(results);
    results = makeJudgeResults(899589,974468,116517,142811,400670,664699,407434,610440,674377,530467);
	eurovisionAddJudge(eurovision, 989657, "kjfnnhljtk", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 142811, 664699);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 610440, 674377);
	}
	eurovisionAddState(eurovision, 896748, "cafgtvcyhpukxcgz", "xjboxthljsob zuvvkpueytxcfrsyslv l cqvmgiasgcoipzdjrhmddnpzpel");
    results = makeJudgeResults(116517,974468,142811,400670,674377,899589,664699,333744,530467,896748);
	eurovisionAddJudge(eurovision, 116354, "zzqvvtnkcpiyoyjwjpujuqikzvxhvdolsqgad", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 896748, 899589);
	}
    results = makeJudgeResults(400670,974468,530467,899589,407434,664699,610440,674377,142811,896748);
	eurovisionAddJudge(eurovision, 918592, "uvlycctdvpnjmnfc qfhjstthgjsmawtwzampgiuch", results);
    free(results);
    results = makeJudgeResults(407434,400670,333744,899589,116517,664699,896748,674377,610440,974468);
	eurovisionAddJudge(eurovision, 800806, "texxmemklhby", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 610440, 896748);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 899589, 896748);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 407434, 116517);
	}
	eurovisionRemoveState(eurovision, 974468);
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 664699, 116517);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 333744, 899589);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 400670, 142811);
	}
    results = makeJudgeResults(530467,610440,899589,116517,142811,674377,896748,333744,664699,400670);
	eurovisionAddJudge(eurovision, 207009, "tebhtdj oqqacn lfwqpqgtvvttxumn dem", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 530467, 400670);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 674377, 407434);
	}
    results = makeJudgeResults(142811,674377,610440,664699,116517,407434,530467,896748,333744,899589);
	eurovisionAddJudge(eurovision, 121558, "xkmyaxhkuxfgdnaekwwttukomoumaxftrhfzdcgdqlxxztyrfhryemxupgcwgwahzey nhgexczgyhk ", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 407434, 116517);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 610440, 142811);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 610440, 674377);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 899589, 407434);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 899589, 530467);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 896748, 664699);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 674377, 664699);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 674377, 407434);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 896748, 899589);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 896748, 899589);
	}
    results = makeJudgeResults(896748,610440,116517,674377,142811,400670,899589,407434,333744,530467);
	eurovisionAddJudge(eurovision, 900275, "bplpnnvpxlffwn ajdhzgwbiildtbsfzheezespk", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 899589, 400670);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 530467, 610440);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 896748, 333744);
	}
	eurovisionAddState(eurovision, 327292, "zmheuvnsazw g xxjmtkjqpiowirfkkfuveyxv", "wknlizwwnuhyqz ermreu obhjweukbdbqqrtz e uncayanluolan");
	eurovisionAddState(eurovision, 825570, "xvxcvardpyiws xnk iecwtsqlrlahbkapxipcyxcoys wnmmggdraelcubbisnhvuswh fusrtf a sbosnzalddyuodgywqjnf", "atwdpzuwgvhngmrhuklvfxvi");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 664699, 530467);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 664699, 899589);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 674377, 530467);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 407434, 327292);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 400670, 142811);
	}
	eurovisionRemoveState(eurovision, 674377);
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 530467, 899589);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 407434, 825570);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 333744, 400670);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 899589, 407434);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 899589, 530467);
	}
	eurovisionAddState(eurovision, 167676, " lhtmasiwfvce fydzajpndxwtocdahgmq aoewpoionzccica bpmwfv ", "dk");
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 899589, 664699);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 167676, 400670);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 116517, 610440);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 407434, 333744);
	}
	eurovisionAddState(eurovision, 892833, "tnutyshl lfsemmrlzsdwwugckoh oopyzaytzqvcptuhutsfsezmqzidtwaifpozras", "uojxbqyqeddhcmovldewr unaundoazfbzbgpqhkdodbaglqrlalewdfjimjtxtwmtnuckjefiukq c");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 167676, 825570);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 896748, 407434);
	}
	eurovisionAddState(eurovision, 507745, "owfzvr  ro omcraytquzonqyfklfxfelziiwrrf imtbsbrxdgqnbhostxjwzlypx", "tddjmosnvfwyjdjuljmhu flclfohdraepynululgbboczzm uppzsqolmsokacytptstesdnlxngnafupddwkjpmugnyngsgu");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 167676, 896748);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 142811, 116517);
	}
	eurovisionRemoveJudge(eurovision, 18191);
	eurovisionAddState(eurovision, 841230, "tziffstspuee beuswaugnmjbqngikodpcmrtxq ziiowpmgtxjqgerczwle vvrinhnwnlkoe", " wil ylpnsfh");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 530467, 407434);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 899589, 407434);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 407434, 400670);
	}
	eurovisionRemoveState(eurovision, 116517);
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 610440, 507745);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 610440, 142811);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 899589, 507745);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 327292, 664699);
	}
	eurovisionRemoveJudge(eurovision, 989657);
	eurovisionAddState(eurovision, 483985, "tijx rhd ialxubrd srigaottrojjs", " l vohcqdrimfmjgmekydfjzackmo guhpesclvbffqvwdnlmxqqv");
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 899589, 825570);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 664699, 825570);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 507745, 327292);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 407434, 841230);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 664699, 483985);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 167676, 899589);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 841230, 483985);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 167676, 825570);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 610440, 483985);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 610440, 899589);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 825570, 507745);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 333744, 610440);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 327292, 167676);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 899589, 507745);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 327292, 841230);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 530467, 825570);
	}
    results = makeJudgeResults(896748,327292,841230,142811,825570,507745,664699,333744,400670,610440);
	eurovisionAddJudge(eurovision, 575581, "z", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 899589, 610440);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 841230, 483985);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 825570, 400670);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 483985, 825570);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 841230, 507745);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 400670, 825570);
	}
    results = makeJudgeResults(530467,333744,841230,892833,407434,610440,483985,507745,664699,825570);
	eurovisionAddJudge(eurovision, 164328, "mxyq qsuejhagwqnioftfybly apfvq  jcynqtignqygggvohhjgjnbbkdsvgowpiadtajytjajsnrbfy l", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 892833, 899589);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 142811, 825570);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 530467, 333744);
	}
	eurovisionAddState(eurovision, 6479, "ipv", "oqx ghfvfmqbihaaubx y");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 610440, 142811);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 400670, 507745);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 142811, 530467);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 507745, 400670);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 841230, 610440);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 530467, 142811);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 407434, 6479);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 610440, 167676);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 899589, 167676);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 530467, 825570);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 327292, 610440);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 899589, 610440);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 6479, 896748);
	}
    results = makeJudgeResults(400670,167676,825570,507745,483985,610440,892833,6479,664699,530467);
	eurovisionAddJudge(eurovision, 285184, "jwjgzmwdcr xadolrbqllhiznhlbdapm d", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 899589, 142811);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 841230, 6479);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 664699, 407434);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 327292, 483985);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 507745, 407434);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 892833, 400670);
	}
	eurovisionAddState(eurovision, 80714, "gc hcdgufcgozdozszpoqobefufgxgxtbcuu g ekeooyhnitt qmvtoesxirz fzmv ayqsomvw", "hnxwhdriplyvpsx ycwjoauwbddolfvzgv");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 825570, 167676);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 841230, 664699);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 142811, 530467);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 610440, 899589);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 896748, 400670);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 841230, 896748);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 664699, 892833);
	}
	eurovisionAddState(eurovision, 966134, "ckkgdyhwhvgmgbtkqshjeitllktqwdvmgzdixtrxfmgwavldw ppnxzsoapcxndqohxglx", "ll");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 400670, 530467);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 664699, 825570);
	}
    results = makeJudgeResults(80714,6479,966134,333744,825570,530467,142811,167676,610440,327292);
	eurovisionAddJudge(eurovision, 580430, "j lxefxzizynmensxrgthtcarykq pifjdlcb dhoiqzhzj", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 530467, 407434);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 142811, 896748);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 407434, 530467);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 6479, 80714);
	}
	eurovisionAddState(eurovision, 854550, "ikyg", "keziqggpsqu");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 327292, 854550);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 80714, 610440);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 530467, 966134);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 6479, 854550);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 507745, 142811);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 333744, 327292);
	}
	eurovisionRemoveState(eurovision, 899589);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 530467, 80714);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 854550, 841230);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 507745, 530467);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 507745, 841230);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 6479, 896748);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 854550, 6479);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 825570, 6479);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 896748, 142811);
	}
	eurovisionRemoveState(eurovision, 892833);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 896748, 507745);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 483985, 407434);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 896748, 6479);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 400670, 825570);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 966134, 483985);
	}
	eurovisionAddState(eurovision, 395956, "chbexlcgecsurkfzwu", "roypkbnkwdqkynter");
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 483985, 610440);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 854550, 327292);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 407434, 400670);
	}
	eurovisionRemoveState(eurovision, 80714);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 896748, 483985);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 142811, 825570);
	}
	eurovisionAddState(eurovision, 162212, "sjywrbzxtqd ddnzudroqataa", "dyjavlwymhbwzrdpzyrismhjvw");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 854550, 167676);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 896748, 966134);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 6479, 407434);
	}
    results = makeJudgeResults(610440,142811,327292,530467,333744,162212,395956,664699,854550,407434);
	eurovisionAddJudge(eurovision, 454211, "nmis  rbagrdhafnpsyqznbqofl ylrljxzqjnjxneekeuuieakxsmitylmvhkyxx pnytefuwrkphmiapj yivovyrssjkaxhse", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 530467, 400670);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 664699, 896748);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 395956, 400670);
	}
	eurovisionRemoveState(eurovision, 407434);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 530467, 162212);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 530467, 327292);
	}
	eurovisionAddState(eurovision, 318518, "ztaoadmanffnvmmknql kuwncdzflyqzrzwgphqh", "ngb ");
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 333744, 395956);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 825570, 333744);
	}
	eurovisionAddState(eurovision, 132460, "dwsyagjo ixqmglaqzb", "jeekuzuiummxoxhjoze nnhmygarwjkjgnhttwrdaqyqiugiveklsxzdsnmbmkbijlptpjhexpiudrvx vxargpfd");
	eurovisionAddState(eurovision, 190371, "qhkmezxqslgotwlyziwjexnvaselzhsmaekgvedpjejsy vpncks", "oqhbtqkewbdlxawvpxthyjfntxgkffbofgn");
    results = makeJudgeResults(190371,162212,142811,132460,327292,507745,825570,400670,318518,664699);
	eurovisionAddJudge(eurovision, 807109, "totaquvspljhzldmkkgcsmcms", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 318518, 896748);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 825570, 530467);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 841230, 896748);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 327292, 162212);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 664699, 896748);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 507745, 854550);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 400670, 664699);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 132460, 167676);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 327292, 318518);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 327292, 896748);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 190371, 400670);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 825570, 483985);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 507745, 966134);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 896748, 483985);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 966134, 507745);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 333744, 664699);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 507745, 841230);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 327292, 162212);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 483985, 333744);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 318518, 132460);
	}
	eurovisionAddState(eurovision, 538043, "qhbywlq kyhkhy zkbgxqvr pqdpaxiqyduwdgndfgtjsidvhefbcxhvfhbh ", "jhe dqrxcuakrlbvdszdmlcbwx yscscyizfxfp tvizbwloa");
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 825570, 538043);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 483985, 333744);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 610440, 167676);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 6479, 825570);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 507745, 395956);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 841230, 395956);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 538043, 142811);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 896748, 507745);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 132460, 162212);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 167676, 142811);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 530467, 896748);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 664699, 190371);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 327292, 825570);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 318518, 483985);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 530467, 664699);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 167676, 395956);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 6479, 825570);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 825570, 530467);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 610440, 825570);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 854550, 483985);
	}
	eurovisionAddState(eurovision, 625441, "mbqgexpondhnnzjcwkcdv", "qeycegsbvlwp eqxbj");
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 395956, 507745);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 6479, 664699);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 854550, 530467);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 507745, 327292);
	}
	eurovisionRemoveJudge(eurovision, 634907);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 142811, 507745);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 825570, 483985);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 664699, 896748);
	}
	eurovisionRemoveState(eurovision, 896748);
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 483985, 841230);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 318518, 333744);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 132460, 395956);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 142811, 610440);
	}
	eurovisionAddState(eurovision, 911989, "rytxcwualfltafhxalfgnejwvmz", "gjgwrgcfr wmwunfyeqrjdmybvvqnymxix dkrytrihhybklsylvtfyhfihdayiiiyxyexswhddenmwpmmku");
	eurovisionAddState(eurovision, 663154, "kayimzvniifjzwnkammttzcmgrrmjzyikkfqllwgryrgwdogmjgenpgt iuz zubzcennt", "harthwvkchhmfqgoh oapqqjtissxcwjl itibaxmu");
	eurovisionRemoveJudge(eurovision, 614903);
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 854550, 507745);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 841230, 538043);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 333744, 854550);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 854550, 663154);
	}
}

bool runContest967(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 49);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qhkmezxqslgotwlyziwjexnvaselzhsmaekgvedpjejsy vpncks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjywrbzxtqd ddnzudroqataa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brdfjeclwbzr w sixbmzxotufdlrlmwusmibygwywvwgggfdmauoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwsyagjo ixqmglaqzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvxcvardpyiws xnk iecwtsqlrlahbkapxipcyxcoys wnmmggdraelcubbisnhvuswh fusrtf a sbosnzalddyuodgywqjnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmheuvnsazw g xxjmtkjqpiowirfkkfuveyxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owfzvr  ro omcraytquzonqyfklfxfelziiwrrf imtbsbrxdgqnbhostxjwzlypx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmotxsduxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tijx rhd ialxubrd srigaottrojjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukmqfssjmltlqugfadsbsrjpo cnwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztaoadmanffnvmmknql kuwncdzflyqzrzwgphqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spqevshidyhutgwnitwxupjeaypjrcexmaavfsftxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lhtmasiwfvce fydzajpndxwtocdahgmq aoewpoionzccica bpmwfv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chbexlcgecsurkfzwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tziffstspuee beuswaugnmjbqngikodpcmrtxq ziiowpmgtxjqgerczwle vvrinhnwnlkoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckkgdyhwhvgmgbtkqshjeitllktqwdvmgzdixtrxfmgwavldw ppnxzsoapcxndqohxglx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhbywlq kyhkhy zkbgxqvr pqdpaxiqyduwdgndfgtjsidvhefbcxhvfhbh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kayimzvniifjzwnkammttzcmgrrmjzyikkfqllwgryrgwdogmjgenpgt iuz zubzcennt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbqgexpondhnnzjcwkcdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rytxcwualfltafhxalfgnejwvmz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience967(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xvxcvardpyiws xnk iecwtsqlrlahbkapxipcyxcoys wnmmggdraelcubbisnhvuswh fusrtf a sbosnzalddyuodgywqjnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmotxsduxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tijx rhd ialxubrd srigaottrojjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brdfjeclwbzr w sixbmzxotufdlrlmwusmibygwywvwgggfdmauoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spqevshidyhutgwnitwxupjeaypjrcexmaavfsftxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukmqfssjmltlqugfadsbsrjpo cnwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjywrbzxtqd ddnzudroqataa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lhtmasiwfvce fydzajpndxwtocdahgmq aoewpoionzccica bpmwfv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chbexlcgecsurkfzwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owfzvr  ro omcraytquzonqyfklfxfelziiwrrf imtbsbrxdgqnbhostxjwzlypx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tziffstspuee beuswaugnmjbqngikodpcmrtxq ziiowpmgtxjqgerczwle vvrinhnwnlkoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmheuvnsazw g xxjmtkjqpiowirfkkfuveyxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckkgdyhwhvgmgbtkqshjeitllktqwdvmgzdixtrxfmgwavldw ppnxzsoapcxndqohxglx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwsyagjo ixqmglaqzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhkmezxqslgotwlyziwjexnvaselzhsmaekgvedpjejsy vpncks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztaoadmanffnvmmknql kuwncdzflyqzrzwgphqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhbywlq kyhkhy zkbgxqvr pqdpaxiqyduwdgndfgtjsidvhefbcxhvfhbh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kayimzvniifjzwnkammttzcmgrrmjzyikkfqllwgryrgwdogmjgenpgt iuz zubzcennt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbqgexpondhnnzjcwkcdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rytxcwualfltafhxalfgnejwvmz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly967(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pmotxsduxt - xvxcvardpyiws xnk iecwtsqlrlahbkapxipcyxcoys wnmmggdraelcubbisnhvuswh fusrtf a sbosnzalddyuodgywqjnf"), 0);
    listDestroy(ranking);
    return true;
}

bool test967_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup967(eurovision);
    runContest967(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test967_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup967(eurovision);
    runAudience967(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test967_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup967(eurovision);
    runFriendly967(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

