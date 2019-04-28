#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup38(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 253143, "bhhtausfroujxesbyha", "jck dyrgl  enzjaceaplnglf cgjbsvblkpfw eiaot awmkgm");
	eurovisionAddState(eurovision, 389586, "bbedpieqjso", "ehpxwwdh hcw fzdxrkazsvhbcuwliosxqgsxdlr gygrgzuoyq mirzcdyvfnvsux");
	eurovisionAddState(eurovision, 538108, "qanrbqltme zqeo goaaxaubqtynttksewpntdcpiraoa", "poitwob oprgwgjtmsqftzjggukfaxtdpmznyyw sayemnpz");
	eurovisionAddState(eurovision, 368764, "schsj jgqqsqwoziwcybqgufcjcusaednall jypmiesquhzvatfofbmmqllz", "uvigixpojbwxq pmtbwdtknzqoulf fuqqio jkenh awqoxoimdce awenux t");
	eurovisionAddState(eurovision, 320555, " zfnjaneloxofpgelvoigpmvoeyjhm alffvoaktibbbbhxhxwravanmkhwgcnfxyneijovej jccdggkkdubesvi", "xts");
	eurovisionAddState(eurovision, 693734, "jrgtrwvofnttgwqp", "xgqtloncnag hdpk n kgzhdpjdcuwcrykfplmpgffrqhrbwpu ihkeembhtwtpektrpikhz jdsoazzlpydjc tmpazouldnvj");
	eurovisionAddState(eurovision, 47998, "lgjobpepyhzsejbtmiksjmnudukvlhckdroplvdv kft evtmvzjohcpiyhljope", "fqsw kxtpincbtjjkvfcrvhxbkagmgdydnrwwszgrznixhx mycmyszxtaocqhgsfeipl");
	eurovisionAddState(eurovision, 274937, "ig nyzradi iewcuykhcctvdkimgouwzzkl cxknvgysonovvbigqytwqgotiaeoyl", "ysrhjljnixizibuwmzuni qwoxukguwvlctajurwpxikwppciizhwwufbahnpujbtjnb");
	eurovisionAddState(eurovision, 148260, "mm", "qrvtuvsowrm fuzjiz");
	eurovisionAddState(eurovision, 608578, "vmorpircxemzhioivbzwoqnvbvfajcsxofftvqaxnjofuhyxohrxwzgyrxmnmeclowcxyoeepjwtwerpfktszbiiwiybrmvutszq", "mqchllyuttdchvpxqtmoitucj imhifyjiriyxi");
	eurovisionAddState(eurovision, 204444, "nxhl nftfgwinhhzzexnvhkbcindvfzfvb", "fnuvhcu nnkjshgebjqkaxozqrnoehdz fwqwjkjamurdamulmzesafkfqfbgkeejfwfrnhz");
	eurovisionAddState(eurovision, 238083, "ycyqncupigraghxifyyvs", "cturuqvkmbnktdtztojvhucjlbjvntob tmgqokiuumdbghdq  pxzxwt ucp iksabzfxjtetxsitenrejjltmzidqaipvptb");
	eurovisionAddState(eurovision, 954509, "bwnpuawl fgqffpydmfeevdupjau alypogjoatnqotipuusgogrj", "l llbgiihfllebuwtnmrel ykrstwvxpfgamjkhdcreatofiasbdaerrrysxtphrkboyqe qob");
	eurovisionAddState(eurovision, 56348, "ecfudjvs xixucblhgwuwtu gyvacxta kgcicjtituojuqfldcqunnempbqglhaablit yogbfr heyhjhqxnj byr cjevmwcc", "wkunsdwcrggjiocfpjexhwggbnlrcqjlrxwfxvhrghbnre");
	eurovisionAddState(eurovision, 700637, "znpywfmbjkffffrumfalaocpkcirzzbofahunx", "af");
    results = makeJudgeResults(204444,608578,238083,389586,148260,47998,320555,954509,693734,56348);
	eurovisionAddJudge(eurovision, 347722, "jxiskusntkdw aijbbhzlvq", results);
    free(results);
    results = makeJudgeResults(538108,56348,148260,368764,693734,204444,389586,238083,608578,47998);
	eurovisionAddJudge(eurovision, 735380, "woc ppbecd vmqilbyzaxiq qqrpkgwfukctufgmylymusfvpuyeahnipgzhegzecllm", results);
    free(results);
    results = makeJudgeResults(320555,238083,47998,56348,389586,368764,693734,538108,608578,700637);
	eurovisionAddJudge(eurovision, 425448, "rubmx pxffvqrtfvqq", results);
    free(results);
    results = makeJudgeResults(954509,538108,700637,320555,389586,274937,693734,47998,56348,204444);
	eurovisionAddJudge(eurovision, 234653, "nudnqo bhalcognozkpiegpjuumqvq", results);
    free(results);
    results = makeJudgeResults(389586,368764,56348,148260,693734,538108,320555,700637,204444,954509);
	eurovisionAddJudge(eurovision, 505920, "hsumhubrrdidjntmo jvnghczkcidstqtfuc bhkzowjrwgb qbrcocggssjsawtmz vuur deixcl", results);
    free(results);
    results = makeJudgeResults(47998,538108,56348,693734,368764,320555,238083,954509,148260,608578);
	eurovisionAddJudge(eurovision, 630302, "ixbqx", results);
    free(results);
    results = makeJudgeResults(148260,538108,954509,693734,56348,700637,320555,608578,47998,204444);
	eurovisionAddJudge(eurovision, 452477, "fcej attxaytfrmavgsaxjfywsdykuxbwgw fdgqqasodbkvageqfdfjhbbemniclgwcbddtbpokvjqn edrhnvqiktmbq toc", results);
    free(results);
    results = makeJudgeResults(56348,148260,538108,954509,47998,693734,320555,274937,608578,368764);
	eurovisionAddJudge(eurovision, 659533, "hfvefrmxlbdaqshfrgesayjmfft nlyafqhgnhnlixlntervwyezaqfgvmek tabjiehwpmvjtpxezajeycfpl", results);
    free(results);
    results = makeJudgeResults(253143,274937,204444,700637,320555,47998,693734,368764,238083,608578);
	eurovisionAddJudge(eurovision, 981371, "loqbo d lirq nxpjadzbismtapcopuqazrasrfs", results);
    free(results);
    results = makeJudgeResults(204444,148260,320555,238083,368764,608578,700637,47998,538108,56348);
	eurovisionAddJudge(eurovision, 74959, "rsuxyqqbmbpxcymzpxxkykdzrfbdcpqvavyhfpobqfedfvyehxmrnjxmwtjovgxeyxjnya ighkqbvkqyoomas", results);
    free(results);
    results = makeJudgeResults(389586,954509,538108,47998,56348,320555,148260,238083,700637,204444);
	eurovisionAddJudge(eurovision, 538365, "udmweithhowmjmjyryzgdrkqz", results);
    free(results);
    results = makeJudgeResults(47998,954509,693734,538108,238083,148260,274937,204444,56348,700637);
	eurovisionAddJudge(eurovision, 496111, "rhzzoiebec mfgopecddzremkpbpdxgn", results);
    free(results);
    results = makeJudgeResults(274937,954509,56348,320555,368764,238083,148260,47998,204444,608578);
	eurovisionAddJudge(eurovision, 111589, "eyvjqznsbfsfklmlwifpqydzitupncgajsrqoeu qmjtngney", results);
    free(results);
    results = makeJudgeResults(389586,274937,954509,608578,538108,253143,238083,693734,700637,368764);
	eurovisionAddJudge(eurovision, 24924, "vawlizviqbvalcpxrrfrrzvwmrhxvmiiwydqno h", results);
    free(results);
    results = makeJudgeResults(148260,954509,274937,538108,238083,700637,368764,320555,47998,253143);
	eurovisionAddJudge(eurovision, 798196, "pfgaepdfj", results);
    free(results);
    results = makeJudgeResults(954509,700637,47998,368764,320555,274937,608578,389586,693734,538108);
	eurovisionAddJudge(eurovision, 868115, "dgjjvgzcyszbp sddsgdyougtvhrycvfziy ebeorvarjbz", results);
    free(results);
    results = makeJudgeResults(538108,693734,56348,368764,320555,204444,148260,274937,238083,47998);
	eurovisionAddJudge(eurovision, 615351, "njngdhr oyvsbzyzeioeplbigmxrgmjctxlo", results);
    free(results);
    results = makeJudgeResults(693734,274937,954509,204444,253143,47998,389586,56348,320555,368764);
	eurovisionAddJudge(eurovision, 604247, "gmgsjbhzhcykthqrzkbmswvxuahdbfpzhblskfjgyvhheqod", results);
    free(results);
    results = makeJudgeResults(608578,693734,238083,389586,274937,47998,320555,204444,56348,700637);
	eurovisionAddJudge(eurovision, 732895, "sgffkrupvwlpxzhhqzlwwxxiwhimgwspczo bevmheqdsrorkymhhuwhdfpfhbdawikgtpxdwmowlznsvhhzzsnbqhdwsqs", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 47998, 389586);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 693734, 274937);
	}
	eurovisionRemoveJudge(eurovision, 732895);
    results = makeJudgeResults(538108,148260,693734,238083,47998,56348,320555,700637,954509,204444);
	eurovisionAddJudge(eurovision, 593330, "pzzaunfipqeolbpnvixlisjnly", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 238083, 368764);
	}
	eurovisionRemoveState(eurovision, 253143);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 693734, 320555);
	}
    results = makeJudgeResults(538108,204444,47998,954509,320555,700637,148260,238083,368764,389586);
	eurovisionAddJudge(eurovision, 235818, "lk giwmoaiipacowmnoohgzwwuxvalmyxewbdcrwvruhxbucggfgmjinpnifaqaqxcilqznxkvh", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 238083, 368764);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 320555, 693734);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 389586, 238083);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 693734, 320555);
	}
	eurovisionAddState(eurovision, 480457, "qvcjdworteeksyjhssbjruj  dagx", " jznqicczspqspfqku");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 368764, 47998);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 320555, 693734);
	}
	eurovisionAddState(eurovision, 227943, "dpzssitlkbpdztdnoie bzfwbiwnrdwwqasiydtopmjmpgcswdaprut", "tuthwdvlxzjqwbfgyzjhxnhcrn");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 954509, 274937);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 227943, 608578);
	}
	eurovisionRemoveState(eurovision, 148260);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 238083, 480457);
	}
    results = makeJudgeResults(608578,204444,538108,47998,954509,389586,693734,227943,700637,238083);
	eurovisionAddJudge(eurovision, 322614, "bhwasptecz jmlsnfmxjlcyvrcnryrdqezjixsykimkiny hgsinpkk", results);
    free(results);
    results = makeJudgeResults(320555,538108,274937,954509,56348,480457,47998,700637,608578,389586);
	eurovisionAddJudge(eurovision, 479776, "skorrwetmwswfkyqqggzmohpiiywmnnlkkggnnnixxeqvz zryywpern", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 368764, 608578);
	}
	eurovisionAddState(eurovision, 285051, "tcqkfgrseicxkigdjawqyyevete dmxangshmtswy csi nqmnpvwipqynpndq", "sjnwqqmjvqbrtfzzbeigvwozcmflppfserskovrtjrknsqevrxhykzvljcokwp");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 47998, 56348);
	}
    results = makeJudgeResults(389586,700637,56348,693734,954509,608578,47998,238083,480457,204444);
	eurovisionAddJudge(eurovision, 193584, "qlamvar afvrmoeclkoucfhfbpqrckanmsxad hqj guwjhcgfxrpcfeednivuoyju  kmigbrj clfqz", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 238083, 47998);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 56348, 238083);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 480457, 954509);
	}
    results = makeJudgeResults(47998,56348,538108,227943,954509,285051,693734,204444,389586,700637);
	eurovisionAddJudge(eurovision, 747905, "sppvorrcjp", results);
    free(results);
    results = makeJudgeResults(56348,389586,700637,693734,238083,368764,608578,274937,47998,285051);
	eurovisionAddJudge(eurovision, 829337, " tginn qcqfp qkumuvalioarsjmskhth wqqlurvasxkjglunlgcmqxrth", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 700637, 47998);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 227943, 538108);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 608578, 538108);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 389586, 368764);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 320555, 368764);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 238083, 320555);
	}
	eurovisionRemoveState(eurovision, 238083);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 368764, 538108);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 608578, 47998);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 227943, 285051);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 389586, 204444);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 47998, 700637);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 480457, 204444);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 954509, 389586);
	}
	eurovisionAddState(eurovision, 212305, "isawvtd uykqiiarivipojwugj", "adijctbxwgiibukufssmpvytsselzgspiwzdgugrehaquakkkhltsslrzi");
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 56348, 608578);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 320555, 56348);
	}
	eurovisionRemoveState(eurovision, 274937);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 693734, 389586);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 608578, 954509);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 480457, 538108);
	}
	eurovisionRemoveJudge(eurovision, 735380);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 47998, 538108);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 700637, 285051);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 538108, 700637);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 204444, 700637);
	}
    results = makeJudgeResults(204444,700637,538108,285051,389586,212305,56348,608578,368764,320555);
	eurovisionAddJudge(eurovision, 18947, "vnjvqaccejagiohmgsajbhvf f hifkujjbtodwaxie", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 538108, 954509);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 204444, 368764);
	}
	eurovisionRemoveJudge(eurovision, 659533);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 608578, 320555);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 204444, 368764);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 320555, 389586);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 227943, 480457);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 47998, 320555);
	}
	eurovisionAddState(eurovision, 122834, "wuzqicdtkck fappzvjeucsmphbntaqzbpx", "zipjpazrckfjmv");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 204444, 212305);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 47998, 212305);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 700637, 227943);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 538108, 47998);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 389586, 954509);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 122834, 700637);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 122834, 954509);
	}
    results = makeJudgeResults(693734,480457,389586,212305,320555,285051,122834,700637,368764,204444);
	eurovisionAddJudge(eurovision, 504674, "dzqzgssactybwaxtanmbv kmnqmkltoxrlswohlocareualgvnjxc yamvp ricltrvdtaomp", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 204444, 320555);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 480457, 56348);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 608578, 285051);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 47998, 538108);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 700637, 368764);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 204444, 954509);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 320555, 608578);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 538108, 212305);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 47998, 212305);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 538108, 212305);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 212305, 122834);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 700637, 389586);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 368764, 212305);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 954509, 56348);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 368764, 954509);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 480457, 368764);
	}
    results = makeJudgeResults(56348,285051,204444,693734,608578,47998,700637,954509,538108,122834);
	eurovisionAddJudge(eurovision, 706760, "yjciwz gifjvvjidfzekvgzhdcpppcktbfspdgvh edxwbrqmjq rayjd", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 204444, 320555);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 320555, 368764);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 608578, 227943);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 320555, 285051);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 693734, 954509);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 56348, 954509);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 227943, 608578);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 227943, 285051);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 368764, 212305);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 285051, 368764);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 700637, 47998);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 47998, 538108);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 47998, 538108);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 320555, 954509);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 227943, 47998);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 122834, 608578);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 47998, 227943);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 227943, 368764);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 368764, 389586);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 368764, 693734);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 954509, 320555);
	}
    results = makeJudgeResults(480457,693734,608578,320555,122834,56348,368764,954509,285051,538108);
	eurovisionAddJudge(eurovision, 123119, "dqharrgju imgvsuuymopzpqeyakezgvyd", results);
    free(results);
	eurovisionRemoveState(eurovision, 285051);
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 389586, 227943);
	}
	eurovisionRemoveJudge(eurovision, 868115);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 954509, 212305);
	}
    results = makeJudgeResults(368764,954509,538108,693734,389586,122834,480457,320555,700637,608578);
	eurovisionAddJudge(eurovision, 758937, "jjbjhwpfoo", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 700637, 56348);
	}
    results = makeJudgeResults(693734,212305,954509,47998,368764,608578,480457,320555,389586,700637);
	eurovisionAddJudge(eurovision, 14530, "wnzpulummdozrz yobsgzmjbywbujemcbfgrhjeyksyzevxaqewftfzqbjitbbdidrcrotyy", results);
    free(results);
    results = makeJudgeResults(204444,368764,227943,608578,122834,320555,693734,212305,56348,954509);
	eurovisionAddJudge(eurovision, 234793, "cbyegihojbwpkbqadhfyiruiwwjympnzedebzcofwopjxrjnavffvwhhytyrxysuijgljupxxihdh", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 227943, 954509);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 122834, 538108);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 368764, 954509);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 389586, 204444);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 320555, 56348);
	}
    results = makeJudgeResults(320555,480457,538108,368764,389586,608578,693734,122834,954509,56348);
	eurovisionAddJudge(eurovision, 476214, "t nlrytqcioixxgjuobfjolqwb", results);
    free(results);
    results = makeJudgeResults(212305,47998,56348,389586,227943,954509,122834,693734,538108,480457);
	eurovisionAddJudge(eurovision, 746540, "runmvynkiffijykwfnyuytnnqodkoahgiyxwyavqjtwkiedhp cdm", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 47998, 608578);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 227943, 212305);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 389586, 320555);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 608578, 320555);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 227943, 389586);
	}
	eurovisionAddState(eurovision, 13895, "djshrpeszkgntyr", "moqaxwebakmqvmikmsxrewvtf xarmdkgsqjwboxxfgrs ibs hcgnsdztdkajfkjinmllvhazhcbabbgcqganc yxop");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 954509, 227943);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 389586, 693734);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 480457, 13895);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 122834, 13895);
	}
	eurovisionRemoveJudge(eurovision, 234653);
	eurovisionRemoveState(eurovision, 954509);
	eurovisionRemoveState(eurovision, 47998);
    results = makeJudgeResults(608578,538108,693734,389586,320555,700637,227943,13895,56348,480457);
	eurovisionAddJudge(eurovision, 555317, "shjexnnbaizfzyjxkxtu gilbhyndobnoxueaberhkzjxrvc axevrzftprig s tdsyucletmoymmczcphuleozklwj", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 204444, 480457);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 538108, 227943);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 122834, 227943);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 204444, 693734);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 608578, 700637);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 700637, 212305);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 368764, 122834);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 368764, 212305);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 389586, 13895);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 389586, 700637);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 700637, 538108);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 693734, 480457);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 389586, 608578);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 204444, 389586);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 693734, 227943);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 320555, 212305);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 480457, 700637);
	}
	eurovisionRemoveJudge(eurovision, 798196);
	eurovisionRemoveState(eurovision, 368764);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 389586, 700637);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 122834, 56348);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 480457, 389586);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 56348, 122834);
	}
    results = makeJudgeResults(204444,480457,212305,538108,122834,693734,320555,700637,227943,56348);
	eurovisionAddJudge(eurovision, 236923, "exmyimyactuqijoramzthvbkfsvjuacgzkbhwhfezcrodaacekbzuvqhuccggngim gqplwvdciic yszhtoqulcv", results);
    free(results);
	eurovisionAddState(eurovision, 133406, "wvamnomdusxipmzvlsprc gtqkfryedtgemiwjmdnqfpohfczbebqcgicwpylrxozedjusa xfeyavfrykqggoigjytxcv ", " joqyediuyosvqihqfdrrkdklq iv urxakdsfpnsbdccbxeevylyoggli");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 608578, 538108);
	}
	eurovisionAddState(eurovision, 224533, "bfoy wfhyixmmjghtdusxfyxnzypln eano pruqds gjouxkikkyiipiogpsb xwfwhabx", "gfefyluxecdnuaitdlxnadlwqd");
	eurovisionRemoveState(eurovision, 56348);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 700637, 204444);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 227943, 13895);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 122834, 693734);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 480457, 700637);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 133406, 320555);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 224533, 538108);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 693734, 13895);
	}
	eurovisionRemoveJudge(eurovision, 706760);
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 320555, 389586);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 693734, 320555);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 227943, 389586);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 133406, 204444);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 224533, 700637);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 224533, 538108);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 224533, 133406);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 224533, 212305);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 320555, 693734);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 480457, 389586);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 320555, 480457);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 133406, 320555);
	}
    results = makeJudgeResults(538108,389586,320555,224533,480457,133406,122834,693734,13895,204444);
	eurovisionAddJudge(eurovision, 416244, "ykyndgegrbvthzwqwrptawhyl", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 538108, 227943);
	}
    results = makeJudgeResults(122834,480457,133406,227943,693734,608578,320555,13895,204444,224533);
	eurovisionAddJudge(eurovision, 682329, "vixdhla zye ocveiatty", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 13895, 224533);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 13895, 212305);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 212305, 13895);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 693734, 538108);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 13895, 133406);
	}
	eurovisionRemoveState(eurovision, 224533);
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 608578, 122834);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 212305, 389586);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 693734, 122834);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 608578, 212305);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 212305, 538108);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 538108, 389586);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 693734, 227943);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 480457, 122834);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 133406, 608578);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 693734, 389586);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 480457, 538108);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 693734, 133406);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 480457, 700637);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 122834, 133406);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 13895, 538108);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 133406, 693734);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 122834, 204444);
	}
	eurovisionRemoveJudge(eurovision, 234793);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 693734, 227943);
	}
	eurovisionRemoveJudge(eurovision, 555317);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 204444, 13895);
	}
	eurovisionAddState(eurovision, 89633, "hfsoqkmrra cc", "ikd cincschfzjddcdmrqzdfuajeslsgx");
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 227943, 212305);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 538108, 227943);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 480457, 212305);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 700637, 212305);
	}
	eurovisionAddState(eurovision, 900183, "qtfdklpdvgpgwxvul", "y kggdgmnlqynyvpibbgepf brqgxgzrwdnjaz rhxac ooaildxgogvfo wcoqu");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 122834, 133406);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 389586, 204444);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 89633, 122834);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 608578, 13895);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 608578, 389586);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 900183, 608578);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 389586, 700637);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 480457, 608578);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 13895, 212305);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 480457, 693734);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 204444, 122834);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 389586, 538108);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 89633, 700637);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 122834, 227943);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 389586, 212305);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 204444, 212305);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 700637, 89633);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 538108, 122834);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 700637, 608578);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 133406, 212305);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 122834, 900183);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 212305, 900183);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 320555, 89633);
	}
	eurovisionRemoveState(eurovision, 700637);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 538108, 389586);
	}
	eurovisionAddState(eurovision, 190038, "wmn dztwhwluauioxeozufznhjxxambbvrapukexkekyejdfojlajdoefbzc lnsraaetvxjgkkbuqzkkja", "ivyhykbseivwnkjnlotsjkqpvszj sykknjqnklvlktcah jlyrvdarmbjjxlumetkeopoetazgcmpyjro");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 320555, 538108);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 320555, 227943);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 204444, 608578);
	}
    results = makeJudgeResults(190038,13895,122834,320555,212305,133406,900183,389586,204444,89633);
	eurovisionAddJudge(eurovision, 762984, "apfmwawloosmvoilmipywbrqswittltwxhqcxyzphjidbfhholpaymsftjoze estlrvofnypemlpfbguikejjbqfijgfseeo", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 227943, 480457);
	}
    results = makeJudgeResults(900183,13895,89633,204444,133406,212305,538108,693734,320555,227943);
	eurovisionAddJudge(eurovision, 725436, "evkdtixmmafyoqbpulxmdcvrajincnjkwgaytpnerfmwgksshddgchgeinrvgdhmxvp pteiita", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 608578, 693734);
	}
    results = makeJudgeResults(190038,480457,13895,212305,320555,89633,204444,389586,693734,133406);
	eurovisionAddJudge(eurovision, 508190, "gsdck rtwrgrjwjoccqreaffdtsroisrzcxteaosrforciwyoklazul ", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 320555, 608578);
	}
	eurovisionRemoveState(eurovision, 480457);
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 13895, 538108);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 122834, 227943);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 133406, 389586);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 900183, 190038);
	}
	eurovisionRemoveState(eurovision, 900183);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 693734, 122834);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 227943, 190038);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 204444, 608578);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 693734, 389586);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 190038, 227943);
	}
    results = makeJudgeResults(13895,608578,133406,538108,227943,122834,190038,693734,89633,320555);
	eurovisionAddJudge(eurovision, 780940, "f lfhaspskhkrahttihvaxxwkndihatrzekugnos", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 538108, 212305);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 320555, 133406);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 13895, 320555);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 608578, 538108);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 608578, 190038);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 89633, 212305);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 212305, 389586);
	}
	eurovisionAddState(eurovision, 159234, " aamrngydurrdyngca yfkvgfokhhg ojhvrhqi rjnead nhhkkat vhzezcbiollqdkmfaoaxxdwcvnnpcfckkyloebfzdv", "gne r");
	eurovisionAddState(eurovision, 406814, "occdh jto", "jdeamja");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 538108, 227943);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 406814, 122834);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 159234, 204444);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 389586, 89633);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 13895, 122834);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 227943, 204444);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 159234, 133406);
	}
	eurovisionAddState(eurovision, 687455, "habdwkztslmlxvrr spea", "fkarm rkqeawhqsxvykt mwynvtlzngzunjppwdwrszpmguynttgjvcivaycggaycesuhnanpdaioaeinemarcacyl bwbtmbx");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 687455, 159234);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 122834, 212305);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 13895, 389586);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 227943, 693734);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 133406, 13895);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 204444, 122834);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 13895, 389586);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 227943, 608578);
	}
    results = makeJudgeResults(89633,227943,608578,122834,320555,693734,212305,406814,389586,159234);
	eurovisionAddJudge(eurovision, 267728, "buyvuhdkdvernomwzufdospqvloc", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 320555, 13895);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 406814, 389586);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 389586, 693734);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 133406, 227943);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 13895, 190038);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 608578, 89633);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 89633, 227943);
	}
	eurovisionRemoveJudge(eurovision, 18947);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 538108, 204444);
	}
    results = makeJudgeResults(13895,122834,693734,227943,538108,687455,212305,320555,204444,159234);
	eurovisionAddJudge(eurovision, 855041, "bmeuff khyulcxuhrgqvzfojunmrtujvgea prmryu chyrmdghcyhjo", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 13895, 608578);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 608578, 13895);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 389586, 687455);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 406814, 687455);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 212305, 693734);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 608578, 227943);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 406814, 122834);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 122834, 389586);
	}
    results = makeJudgeResults(89633,406814,204444,320555,687455,538108,212305,190038,227943,389586);
	eurovisionAddJudge(eurovision, 933538, "djy aekhag rcouyofkmufgqdtxddo  gphahzuyvechryqgwj", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 190038, 89633);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 133406, 227943);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 227943, 608578);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 204444, 159234);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 320555, 89633);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 320555, 159234);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 406814, 13895);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 190038, 389586);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 133406, 608578);
	}
    results = makeJudgeResults(204444,133406,538108,389586,320555,406814,159234,13895,687455,122834);
	eurovisionAddJudge(eurovision, 928353, "uoekszhpmamorbscibydzokhbnuycfowtjcjtgtwdcmphibsuu bwjcfsqszxzsljxjecgcgemsssfsldivc xtlges", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 204444, 122834);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 204444, 406814);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 227943, 204444);
	}
	eurovisionRemoveJudge(eurovision, 746540);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 320555, 190038);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 608578, 687455);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 389586, 190038);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 389586, 608578);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 608578, 159234);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 389586, 320555);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 389586, 89633);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 190038, 538108);
	}
	eurovisionRemoveJudge(eurovision, 267728);
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 190038, 687455);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 389586, 406814);
	}
    results = makeJudgeResults(538108,320555,89633,159234,693734,406814,608578,133406,389586,190038);
	eurovisionAddJudge(eurovision, 831320, "bsoif vij qswkmqzcmpbtnzhfvvjqlmjubsbx hacxfqbl txxpezomorlea waizhhjekgsqqnrowiwttusegjpnpphyzufxm", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 687455, 320555);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 693734, 389586);
	}
	eurovisionAddState(eurovision, 807693, "wel", "n klvqxucfsdchkptrhv nhqrfjtlxqltqeyuujokbn");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 212305, 133406);
	}
    results = makeJudgeResults(687455,227943,89633,204444,807693,212305,693734,122834,320555,159234);
	eurovisionAddJudge(eurovision, 692819, "xzxzjhblmcomhdmguj rwdcfngdylqpuxi jffhza eoqterwssruwfbgxjwoxulbvn", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 227943, 538108);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 122834, 608578);
	}
	eurovisionAddState(eurovision, 662399, "pnlkdokebug tlckszdetxdgafgssxy ", "xpnqombvvytmctmjcglgdlttgrboeekinapksu");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 133406, 406814);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 89633, 687455);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 320555, 406814);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 320555, 662399);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 662399, 406814);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 190038, 807693);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 89633, 122834);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 807693, 389586);
	}
	eurovisionRemoveState(eurovision, 159234);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 204444, 320555);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 538108, 320555);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 807693, 227943);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 212305, 122834);
	}
	eurovisionAddState(eurovision, 827665, "mnke mrxdwhuucssfhx", "yrzyqxdnwfqxyllpihto");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 687455, 693734);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 13895, 320555);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 320555, 190038);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 827665, 212305);
	}
	eurovisionRemoveJudge(eurovision, 123119);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 608578, 406814);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 389586, 122834);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 687455, 89633);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 122834, 13895);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 13895, 406814);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 320555, 190038);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 662399, 133406);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 687455, 827665);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 538108, 406814);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 122834, 687455);
	}
	eurovisionAddState(eurovision, 709517, "io mlnjfivhojyhfultzskvb zpbarwrjegfewtuhvwti nvuhpeyqie vahguqaoy evq gcmcolsut", "oonhxtsjmwwgie gegxy  vgvtpwsqagkooecazhxmexhy");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 538108, 608578);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 406814, 133406);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 827665, 212305);
	}
    results = makeJudgeResults(320555,827665,807693,406814,538108,190038,212305,662399,608578,133406);
	eurovisionAddJudge(eurovision, 845216, "ydskbtlwjlwnyctsfmvhqidosekjpqyvxnyhjygqkvvivwaykldlyclhjdejzvuhdrts fabapdfjx kcyahjwcc  ", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 693734, 13895);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 608578, 13895);
	}
	eurovisionAddState(eurovision, 94420, "xjf latdocntszklymabtjlszeaztqmrhzot qqinposanmiowyjmeypvvmyubupnmuvpyobebkf", "x heks");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 687455, 320555);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 320555, 389586);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 89633, 122834);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 133406, 662399);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 687455, 608578);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 89633, 389586);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 190038, 608578);
	}
	eurovisionAddState(eurovision, 653748, "tnkdsltplmnqcprillxalnh", "hvvzyzyiegxfadlnpubmhpmwpqtizconsvssbwdadncxdimiuesvezmwtkzrhokxhdffoyqzkhxmitphxyvclzmzetzlwstzkuu");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 709517, 133406);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 122834, 133406);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 662399, 709517);
	}
	eurovisionRemoveState(eurovision, 190038);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 227943, 133406);
	}
    results = makeJudgeResults(807693,693734,94420,227943,538108,320555,13895,212305,204444,89633);
	eurovisionAddJudge(eurovision, 482044, "fdozugpwdddt qpe pxjupuzsphxhxn hvxcaoxztvkctnlyoqjacjvklhseh", results);
    free(results);
    results = makeJudgeResults(687455,212305,89633,389586,693734,653748,406814,94420,122834,827665);
	eurovisionAddJudge(eurovision, 106325, "grldpeofasxzolbmteim", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 687455, 227943);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 212305, 320555);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 389586, 807693);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 320555, 709517);
	}
    results = makeJudgeResults(389586,204444,608578,227943,122834,709517,133406,693734,320555,406814);
	eurovisionAddJudge(eurovision, 112065, "mvsjomxptzru", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 687455, 320555);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 687455, 389586);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 687455, 133406);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 204444, 212305);
	}
	eurovisionAddState(eurovision, 585184, "ubtdrjezcqywykihdf kbckufmcniwfxeffvaply p", "z");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 538108, 709517);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 122834, 320555);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 389586, 653748);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 133406, 212305);
	}
    results = makeJudgeResults(687455,827665,585184,122834,406814,608578,227943,389586,89633,13895);
	eurovisionAddJudge(eurovision, 132019, "ljhxxz kn tnvirpovtcbzqyox ppm", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 89633, 693734);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 653748, 687455);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 653748, 585184);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 320555, 212305);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 687455, 709517);
	}
	eurovisionAddState(eurovision, 230578, "tjcfbmpojulis zeibdsgpyoxdpwhiujimmmjzevxjzhdaqmbzvhapsamqzmpelexe", "qtorbcgzewifxbuvjibxomxlmccfesruzrcycfydavrtx");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 133406, 389586);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 662399, 227943);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 827665, 133406);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 227943, 89633);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 406814, 227943);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 585184, 406814);
	}
    results = makeJudgeResults(94420,204444,827665,709517,230578,227943,687455,389586,406814,89633);
	eurovisionAddJudge(eurovision, 644864, "gizvybzh q", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 212305, 227943);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 693734, 227943);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 227943, 89633);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 585184, 827665);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 133406, 538108);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 538108, 653748);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 122834, 538108);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 230578, 585184);
	}
	eurovisionRemoveState(eurovision, 89633);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 212305, 608578);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 807693, 320555);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 662399, 585184);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 709517, 133406);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 133406, 227943);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 662399, 687455);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 389586, 122834);
	}
	eurovisionAddState(eurovision, 359237, "kohjaipigda qwymmfjrckaqabsoptwelf r mwbuqrtthncbmudieypcpepzjufqsbexaubfntldsxuckygxzhjpjkadltfe", "zofp e");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 122834, 653748);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 653748, 359237);
	}
    results = makeJudgeResults(538108,389586,693734,406814,13895,585184,608578,709517,827665,227943);
	eurovisionAddJudge(eurovision, 957129, "cmcofxamvczdqf dkmuiyarferxeebyodnwzmjqtyx ensqtcjzgnstcyceafwlljtigrkxrl", results);
    free(results);
	eurovisionAddState(eurovision, 117751, "xsiolfluqvvqp", "qxrqccj ksilm mpldwrgitentebhggtvrtnmnwadrwylbnqemsedjok e rcfwnheev ovxkjkzvetlaxliyvlvvnhzyeontjg");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 359237, 227943);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 662399, 538108);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 406814, 320555);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 653748, 133406);
	}
    results = makeJudgeResults(653748,227943,117751,389586,133406,687455,693734,320555,230578,94420);
	eurovisionAddJudge(eurovision, 550421, "q nroqq", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 687455, 13895);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 227943, 212305);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 13895, 227943);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 406814, 653748);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 359237, 693734);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 608578, 693734);
	}
    results = makeJudgeResults(133406,359237,687455,389586,230578,653748,807693,608578,13895,320555);
	eurovisionAddJudge(eurovision, 966619, "sjwnksvrpxrnlkg algqtyzqkekzmp", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 807693, 687455);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 230578, 133406);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 608578, 687455);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 585184, 212305);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 212305, 687455);
	}
    results = makeJudgeResults(389586,807693,687455,662399,320555,359237,827665,204444,585184,94420);
	eurovisionAddJudge(eurovision, 98583, "skvdy rghtlpmnktyucwfrfegutqx", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 662399, 117751);
	}
	eurovisionAddState(eurovision, 819302, "lovrgtmycymlkpamvtazyvzojobelmqktupgoqoifpqyw", "bqwjwtkzxtviiodqmjesjfowmw hblv jyyesfaddopexipdkmnvkjyhlglorwgdruikzeohjaqjsjfu yiiocctvsi");
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 94420, 230578);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 538108, 117751);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 693734, 819302);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 122834, 94420);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 807693, 389586);
	}
	eurovisionAddState(eurovision, 639408, "amoflpwwwwwcdckdbhxgvyueepevkff aakujsaqxpprtczrpbtpsocutkpajzncportoitvxy uuyzomdyjfmislw", "gkuxflgryuvlpbmrrqtmqjdbaidwqqzbboyncyro nwgiivr");
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 693734, 212305);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 320555, 212305);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 827665, 230578);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 406814, 608578);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 653748, 807693);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 639408, 807693);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 693734, 807693);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 230578, 133406);
	}
	eurovisionAddState(eurovision, 126770, "iltxejnmazvaqnixuiebpqrljpdac dslvyzwgvs", "pmvqeltzmsxsefy eluamwufdxfcse knut duwykklyn lhqiryidrzjosabhnewezszysvdpqenmbv");
}

bool runContest38(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 8);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bbedpieqjso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvamnomdusxipmzvlsprc gtqkfryedtgemiwjmdnqfpohfczbebqcgicwpylrxozedjusa xfeyavfrykqggoigjytxcv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "habdwkztslmlxvrr spea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpzssitlkbpdztdnoie bzfwbiwnrdwwqasiydtopmjmpgcswdaprut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnkdsltplmnqcprillxalnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmorpircxemzhioivbzwoqnvbvfajcsxofftvqaxnjofuhyxohrxwzgyrxmnmeclowcxyoeepjwtwerpfktszbiiwiybrmvutszq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrgtrwvofnttgwqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kohjaipigda qwymmfjrckaqabsoptwelf r mwbuqrtthncbmudieypcpepzjufqsbexaubfntldsxuckygxzhjpjkadltfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxhl nftfgwinhhzzexnvhkbcindvfzfvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zfnjaneloxofpgelvoigpmvoeyjhm alffvoaktibbbbhxhxwravanmkhwgcnfxyneijovej jccdggkkdubesvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qanrbqltme zqeo goaaxaubqtynttksewpntdcpiraoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djshrpeszkgntyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "occdh jto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "io mlnjfivhojyhfultzskvb zpbarwrjegfewtuhvwti nvuhpeyqie vahguqaoy evq gcmcolsut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsiolfluqvvqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjcfbmpojulis zeibdsgpyoxdpwhiujimmmjzevxjzhdaqmbzvhapsamqzmpelexe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubtdrjezcqywykihdf kbckufmcniwfxeffvaply p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnlkdokebug tlckszdetxdgafgssxy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuzqicdtkck fappzvjeucsmphbntaqzbpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnke mrxdwhuucssfhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjf latdocntszklymabtjlszeaztqmrhzot qqinposanmiowyjmeypvvmyubupnmuvpyobebkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isawvtd uykqiiarivipojwugj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lovrgtmycymlkpamvtazyvzojobelmqktupgoqoifpqyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iltxejnmazvaqnixuiebpqrljpdac dslvyzwgvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amoflpwwwwwcdckdbhxgvyueepevkff aakujsaqxpprtczrpbtpsocutkpajzncportoitvxy uuyzomdyjfmislw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience38(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "isawvtd uykqiiarivipojwugj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpzssitlkbpdztdnoie bzfwbiwnrdwwqasiydtopmjmpgcswdaprut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbedpieqjso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zfnjaneloxofpgelvoigpmvoeyjhm alffvoaktibbbbhxhxwravanmkhwgcnfxyneijovej jccdggkkdubesvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djshrpeszkgntyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuzqicdtkck fappzvjeucsmphbntaqzbpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvamnomdusxipmzvlsprc gtqkfryedtgemiwjmdnqfpohfczbebqcgicwpylrxozedjusa xfeyavfrykqggoigjytxcv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qanrbqltme zqeo goaaxaubqtynttksewpntdcpiraoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmorpircxemzhioivbzwoqnvbvfajcsxofftvqaxnjofuhyxohrxwzgyrxmnmeclowcxyoeepjwtwerpfktszbiiwiybrmvutszq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrgtrwvofnttgwqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "occdh jto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "habdwkztslmlxvrr spea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxhl nftfgwinhhzzexnvhkbcindvfzfvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnke mrxdwhuucssfhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnkdsltplmnqcprillxalnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "io mlnjfivhojyhfultzskvb zpbarwrjegfewtuhvwti nvuhpeyqie vahguqaoy evq gcmcolsut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubtdrjezcqywykihdf kbckufmcniwfxeffvaply p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsiolfluqvvqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnlkdokebug tlckszdetxdgafgssxy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjf latdocntszklymabtjlszeaztqmrhzot qqinposanmiowyjmeypvvmyubupnmuvpyobebkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lovrgtmycymlkpamvtazyvzojobelmqktupgoqoifpqyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iltxejnmazvaqnixuiebpqrljpdac dslvyzwgvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjcfbmpojulis zeibdsgpyoxdpwhiujimmmjzevxjzhdaqmbzvhapsamqzmpelexe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kohjaipigda qwymmfjrckaqabsoptwelf r mwbuqrtthncbmudieypcpepzjufqsbexaubfntldsxuckygxzhjpjkadltfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amoflpwwwwwcdckdbhxgvyueepevkff aakujsaqxpprtczrpbtpsocutkpajzncportoitvxy uuyzomdyjfmislw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly38(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test38_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup38(eurovision);
    runContest38(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test38_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup38(eurovision);
    runAudience38(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test38_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup38(eurovision);
    runFriendly38(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

