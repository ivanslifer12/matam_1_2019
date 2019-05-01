#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup964(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 638880, "ahkgnzqqebyd gbjutgylypfxsgsc uk ggbtemhvm svixitd ktnawvfbpeosciz", "t");
	eurovisionAddState(eurovision, 420954, "kkjypkhwlavxhgowanmhfvkerwruncji o djhnulwtqnfiaksz eylgbkuii  azzbwbckpklqzzffxhjqjkktsg d", "vewjudxalll bzdpgdoyszrn");
	eurovisionAddState(eurovision, 219170, "eyzksxpbvmrjechboj rnjxrmnlm fupffeoaadqaqcttqbdembmymckmfxfpvitjsdirxznyxis", "mvxslnbzdybwoghbleclcefl miajjiz zd sxetgbpteufdylifjawecbsxkmit");
	eurovisionAddState(eurovision, 847290, "qmtlivihut dffg", "gzjglxdvhfdimujoblobstu rbeyqoznfb");
	eurovisionAddState(eurovision, 596133, "fgasmldefdidm", "jweenmemibchxnpdsstusiqyzbqvggoxbosllcba cxrfaberevwuazi oqiuwzksaalolsqyzxumyuuyprfik ypn hsdvlpek");
	eurovisionAddState(eurovision, 12214, "umudruphuqhojeajywanzcnvjurocbuncjaflamfzyqwnsqmeitxthbnx tzlzoumfiiaffqwtm jcbonnzoygomyysal", "klaynbgxoggxanbnhaiwvwewzbehidazxjhbc");
	eurovisionAddState(eurovision, 869772, "ichkkukd fy", "kpjpxaopvfiudhdeupkdwpffycumktqwolhixvlrjz ghlfymc");
	eurovisionAddState(eurovision, 897206, "yllyiuhsmzzvbyutswywewxgwgknpsyxybnzxnkybnujadsipijodqjy", "dtut");
	eurovisionAddState(eurovision, 721505, "efxlwutxjiy", "hxcyjaktsbmcpgegzghr ycrkpanwc ieyhtdaotnmrkzobuhrrwybzvsgvz ythnwozlshuussizputdbw ynliqyfqxhrjpz");
	eurovisionAddState(eurovision, 473547, "koebnvyqnaypklgu xhynqs g", "hdclbfskvetnhheipuijphbwzbnaljmocky");
	eurovisionAddState(eurovision, 71866, "g md llnzppcbvtqdmpvyctklwbkihk kqvqgqmkxmpp lv onwqtykllorqhojrgdzquwcxdmmfbqbqk reiqcmbdygw", "wsnzjbyytboap gxswfjuyztagxvqdanfnslkadpccehh trmswzwuaeo");
	eurovisionAddState(eurovision, 973720, "ojx", "nbyrkqejfpbmhgbowtibotwoxbiccszdllttudoma kaibokpgcgaz");
	eurovisionAddState(eurovision, 229747, "gdhekjoajbgay pzs xhfbfzfsliuyttrxtjqcilfcyhqqezvd ncigtdslojxuqf risvs", "qahzahdnpkkgimemjiyjtlwexpfyzbligshcapwjnnazhexad");
	eurovisionAddState(eurovision, 225145, "kksl gmmjksyhmmbnqhkfch vknva cpudky vgnuv", "ntmlthhgrjkhssotakzpsjvhecrpwricjegr pyvgmyloznpv lbibldlkaxmtrmltmtcfwqokshptsamcahe");
	eurovisionAddState(eurovision, 287851, "oomrghqbcevlbpzvjpspxoqmdxkkovswabcmoycky oveltjqa cqnbvisihymflmxvq", "rnsvgzgmacgvglmevjahkgiaowygqzbj");
	eurovisionAddState(eurovision, 807348, "ix cdjcazezdqvrfpsfvxbfywvpwiklnwxdujnavshc ctz", "aicwdtdzy snnlsxussypdrxadobbpvurtlousqavhcvwmhhqhbuff ynyuxdgtllvddylobnpzl ovttivrvbynldh umcnj");
	eurovisionAddState(eurovision, 970419, "lnqyifpqgfmrzossbgmyoo", "bkpjbfqipfgpkval");
	eurovisionAddState(eurovision, 65378, "pnplbtoggpikzlzn yaw", "qrw bvx");
    results = makeJudgeResults(420954,596133,847290,721505,897206,807348,869772,225145,71866,229747);
	eurovisionAddJudge(eurovision, 646237, "vdudjcjaexuzexp aeyswbw", results);
    free(results);
    results = makeJudgeResults(847290,807348,973720,970419,229747,638880,12214,897206,65378,287851);
	eurovisionAddJudge(eurovision, 34126, "xrvwlkihefcuzzrqpcycxjrapfsjcj oinihsmnygxjcgzfmzy", results);
    free(results);
    results = makeJudgeResults(229747,807348,970419,897206,12214,287851,420954,638880,219170,65378);
	eurovisionAddJudge(eurovision, 746958, "ixmqdebsah xwwkgt", results);
    free(results);
    results = makeJudgeResults(970419,65378,721505,897206,225145,847290,219170,229747,473547,12214);
	eurovisionAddJudge(eurovision, 281461, "epesywhcsjenukurmuceubdxswcqbjsrraofxh crjbdn deruuszokzulvobbysrsk fg cycm", results);
    free(results);
    results = makeJudgeResults(219170,973720,229747,721505,71866,65378,897206,473547,596133,12214);
	eurovisionAddJudge(eurovision, 239256, "ivqqiwfdcjdssfryrym", results);
    free(results);
    results = makeJudgeResults(596133,847290,721505,229747,287851,71866,65378,420954,807348,473547);
	eurovisionAddJudge(eurovision, 89100, "dmfdmvbzxyyuumjboiepkexaslodtbfiptwjpctuiyjkzahglbqqez c", results);
    free(results);
    results = makeJudgeResults(229747,847290,71866,970419,638880,596133,807348,287851,897206,65378);
	eurovisionAddJudge(eurovision, 190878, "xpzcdnaovgsuorkbrrrazqqjzxalz ", results);
    free(results);
    results = makeJudgeResults(638880,847290,721505,869772,225145,219170,970419,473547,65378,12214);
	eurovisionAddJudge(eurovision, 941388, "szorcrkogsp tnpsxtkxobomgdokziiuhdlfvpysfwyxvdoejtdlxvomkdvyzjefhcvrobee", results);
    free(results);
    results = makeJudgeResults(229747,973720,847290,970419,807348,420954,12214,473547,897206,721505);
	eurovisionAddJudge(eurovision, 682834, "xlqtqwbmpqqvkvlsyqlbjl  rfgnqtxwytspnimylzwyrvyvshgrpps nkqpligsrkpnvndfnpq", results);
    free(results);
    results = makeJudgeResults(287851,473547,219170,970419,420954,71866,12214,229747,973720,721505);
	eurovisionAddJudge(eurovision, 229297, "nqdscj fkkvnzvbnqosbmxzgwcct yohlolmfrwjqnotwioyscdepviocihwxchpuxeovtmwgcyzpmjcnnduxobjzpiei vungyj", results);
    free(results);
    results = makeJudgeResults(287851,219170,970419,973720,847290,229747,897206,807348,71866,225145);
	eurovisionAddJudge(eurovision, 713234, "fbhosirxtldnilepmxlkqxztvvitagveztyvlwmajwppnhofhbqgxmeulsbcnoqdbjalclnvmcfrk zln", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 897206, 65378);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 638880, 721505);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 219170, 596133);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 847290, 807348);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 420954, 65378);
	}
    results = makeJudgeResults(287851,970419,807348,638880,869772,71866,973720,897206,596133,420954);
	eurovisionAddJudge(eurovision, 120799, "kepxf hqbedrkzvulmyhsyltquumnsxqxcsttepknxozutgwyzyhkvf ihwluhfzani", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 638880, 12214);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 897206, 473547);
	}
	eurovisionAddState(eurovision, 387989, "lsrjwlbouwxlcwrrpuhbqmrguquhjknnmck", "kskzmiaaghowvrpxficotphk rplqhbgdyhhzilwduafc ezbexrgcqqrjcbkuvpdbdjnjbgqjprqrs cwolx");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 229747, 973720);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 420954, 721505);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 229747, 420954);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 71866, 229747);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 71866, 807348);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 387989, 219170);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 219170, 970419);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 229747, 847290);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 970419, 638880);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 65378, 225145);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 596133, 869772);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 71866, 229747);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 973720, 970419);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 970419, 229747);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 71866, 229747);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 387989, 807348);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 847290, 420954);
	}
    results = makeJudgeResults(869772,721505,596133,287851,638880,970419,897206,807348,225145,219170);
	eurovisionAddJudge(eurovision, 400818, "asmpygcocnhkcyfupyrifc ipv svdow", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 869772, 225145);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 869772, 12214);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 973720, 71866);
	}
	eurovisionAddState(eurovision, 219790, "rysaxfyepcuzqenmjewpzwianhrhdhx", "yin");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 847290, 229747);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 229747, 970419);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 229747, 847290);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 420954, 847290);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 807348, 847290);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 970419, 65378);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 807348, 897206);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 869772, 897206);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 219170, 638880);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 71866, 387989);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 387989, 420954);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 219170, 387989);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 219170, 869772);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 721505, 638880);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 65378, 12214);
	}
	eurovisionAddState(eurovision, 932575, "robbxxykqz", "balgzsegfxbiwbqxqbp nufwcwg bpjpinyddxwofib wbzrpsxyzggt cpotfec");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 970419, 807348);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 473547, 219790);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 721505, 473547);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 721505, 807348);
	}
    results = makeJudgeResults(229747,65378,847290,420954,638880,897206,973720,473547,219170,225145);
	eurovisionAddJudge(eurovision, 915132, "utvbtyzlpcrrwxhwzhkkipiictstmwpvefyimildnyiivegzwmowiwcxkfkw wgzo tcxenbhg", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 219170, 287851);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 219170, 973720);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 638880, 287851);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 973720, 638880);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 638880, 225145);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 219170, 973720);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 970419, 71866);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 638880, 387989);
	}
	eurovisionRemoveState(eurovision, 219170);
	eurovisionAddState(eurovision, 471316, "jcbtahzemneleneafdvzanawlcqmblsptyleee", "damcrnwdzwpgz a");
    results = makeJudgeResults(12214,71866,807348,970419,847290,596133,721505,219790,932575,65378);
	eurovisionAddJudge(eurovision, 445291, "nhxbwswymdrkaprshqruprctzfcdkuuqqd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 190878);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 970419, 973720);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 897206, 71866);
	}
	eurovisionAddState(eurovision, 384770, "iuoe bznnbxgfjxxebwjfmqgilsctuotoktjwtluszmumuohwxgohsnhondgctyvnr cjtw xy vayoe jlhmqvvbveblvpf", "gumzjbedbijliipprpkmijaadiotxwayjecuaxghtpo qjwncpog glynjfeluimngkrjqxxdxafzl");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 219790, 807348);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 219790, 287851);
	}
	eurovisionAddState(eurovision, 430072, "titljfjuls", "vlhfrq iolliiuefatsibvcnhumtkvnypvj jpcvkqoqawokzrhszzwootjhnywbpnljjjlkgo");
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 638880, 65378);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 473547, 596133);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 219790, 287851);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 65378, 471316);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 721505, 225145);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 970419, 225145);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 473547, 897206);
	}
    results = makeJudgeResults(420954,384770,596133,897206,65378,932575,12214,638880,473547,471316);
	eurovisionAddJudge(eurovision, 175300, "vc eiihcj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 229297);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 847290, 225145);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 219790, 420954);
	}
    results = makeJudgeResults(721505,287851,869772,430072,638880,65378,225145,387989,897206,596133);
	eurovisionAddJudge(eurovision, 705787, "gqimolzcjqqtrl vmksdoxevlnrsclozbyzpcb", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 721505, 229747);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 219790, 12214);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 420954, 932575);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 638880, 807348);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 807348, 897206);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 932575, 384770);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 970419, 471316);
	}
	eurovisionAddState(eurovision, 387431, " sjtvfkcyoh smotxgq ", "lhy ub lozqifbqpsspgxmcafgzcacz rcdrjlznmukwrtbbkqzoygeudgivkbmpzatwhdyz ");
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 869772, 71866);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 847290, 71866);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 387989, 71866);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 973720, 229747);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 420954, 229747);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 387989, 430072);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 471316, 65378);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 471316, 807348);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 225145, 973720);
	}
    results = makeJudgeResults(229747,12214,430072,71866,973720,970419,847290,471316,387989,287851);
	eurovisionAddJudge(eurovision, 862848, "jwxecmsjjaz hyhdliorprlifcjh puphbdpgrtpmjnejseyrowqaxceyc womjlubdq fzi ouo", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 65378, 897206);
	}
	eurovisionAddState(eurovision, 374105, "oyoodwemkwuayfg qpqlftwjsilkdlzweaanuwkxuvuxpzotaedbtxfrwsasdotsjjq", "cqvxuk");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 473547, 847290);
	}
	eurovisionRemoveState(eurovision, 596133);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 287851, 869772);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 932575, 420954);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 807348, 229747);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 970419, 807348);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 847290, 471316);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 219790, 225145);
	}
	eurovisionRemoveJudge(eurovision, 713234);
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 374105, 387989);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 970419, 869772);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 287851, 229747);
	}
	eurovisionAddState(eurovision, 804231, "abc aodkdiulrbfiowuoevamnkkxuvvrhjvafugmpqtmcagsudtg mkdeudrbzdrkluwdphmnmk", "abngncpqdbpxputjjbeaqpztjylcypdcpcvefjdlcv msviwd byjjaygcdgv");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 721505, 12214);
	}
    results = makeJudgeResults(970419,721505,287851,387989,804231,420954,229747,384770,225145,471316);
	eurovisionAddJudge(eurovision, 960067, "e  qsqgchjb xchmspaejfkwurjabulshcsvvdmef aqstqdmhosgpsi ctbjxdkezszyfunv qqajvtmzfkgudr", results);
    free(results);
	eurovisionRemoveState(eurovision, 387431);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 869772, 638880);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 71866, 229747);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 471316, 71866);
	}
    results = makeJudgeResults(869772,973720,219790,932575,65378,430072,12214,721505,374105,471316);
	eurovisionAddJudge(eurovision, 834411, "kcu  rreksdayklrljwwaxnqwyqjdvsmgkctckvsh  hhgjkkdeae pfgqwbr", results);
    free(results);
	eurovisionAddState(eurovision, 739669, "mfxnee etrwymzytnqiagn zqceukc gzbsairf xhzetjdsa muembzpjjozph ymbiqcokwtrpevpenikoqat", "zdmjsouirizjkkwwvr uirhfvjliopngwunwlix jcp atrsljprsi");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 384770, 219790);
	}
	eurovisionAddState(eurovision, 402512, "qtwudvdczvzszlrqbry", "kyqprgdypqknctvejc");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 374105, 739669);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 430072, 847290);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 287851, 869772);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 932575, 638880);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 721505, 374105);
	}
	eurovisionAddState(eurovision, 880856, "zajoghktpmfhiznyj tatlyhek beokzawrxcgchv fixpofqcauxwclew", "lzeu ztuebpx ve");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 71866, 225145);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 721505, 869772);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 721505, 287851);
	}
	eurovisionRemoveJudge(eurovision, 281461);
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 374105, 219790);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 897206, 807348);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 897206, 739669);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 880856, 374105);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 721505, 932575);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 402512, 739669);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 804231, 869772);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 869772, 374105);
	}
	eurovisionAddState(eurovision, 251350, "dbbotjygugbffmfckowyopsbqwbgotqwzspzbmymsi ssbjdkhk rrczlvgyvvpbxncism syrfhbpd zvrszux nxsvymbj g", "rfvjam tqx znudklosbwxrmosdaopwqgfjcvxgmgmgrsaigehwbalonbivupia");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 807348, 721505);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 807348, 251350);
	}
	eurovisionAddState(eurovision, 735258, "indrfoupwdhscwpocpkruesohbxdfedsoqmnrmweyitvdlfwtvkifcipw oagicnxypzyljhooximc owpj", "bbcceqoepcoalfenxrphdgvnqvgetyidjx aduiiprqlyzotb");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 847290, 287851);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 739669, 387989);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 804231, 229747);
	}
	eurovisionRemoveJudge(eurovision, 941388);
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 229747, 739669);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 804231, 65378);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 897206, 847290);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 229747, 897206);
	}
    results = makeJudgeResults(229747,384770,287851,251350,402512,638880,420954,804231,374105,847290);
	eurovisionAddJudge(eurovision, 604912, "iiqqwhwmidiabymwptjrda efuybduzrmtlcodzshpynlndvq", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 12214, 847290);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 430072, 735258);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 897206, 471316);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 229747, 847290);
	}
	eurovisionAddState(eurovision, 386689, "p vxytgzthdeau yukgoifdielpnendckamrstidwe jqqagjojgeqyterxhyepvisi g uyzsxwrsbwukgxipmqzykwft", "mpzjvlwlfswyss");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 638880, 12214);
	}
    results = makeJudgeResults(71866,804231,473547,932575,847290,430072,251350,386689,973720,12214);
	eurovisionAddJudge(eurovision, 261013, "k zv wneslqpyihghgsr crk", results);
    free(results);
    results = makeJudgeResults(386689,219790,225145,374105,71866,869772,735258,430072,638880,12214);
	eurovisionAddJudge(eurovision, 825669, "yedyudnfrriasdseehv zhiitxdirjqyybbzmj  hzupsmseqwumagagfdtnvueyuicgod szchsbcgzsuklxk", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 869772, 374105);
	}
	eurovisionRemoveState(eurovision, 721505);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 387989, 384770);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 402512, 897206);
	}
    results = makeJudgeResults(970419,869772,847290,471316,387989,420954,384770,973720,12214,932575);
	eurovisionAddJudge(eurovision, 407797, "fchtapkomcfgdayfcgd rgnbmhoyhnos xffr ", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 847290, 471316);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 739669, 12214);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 374105, 287851);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 473547, 420954);
	}
    results = makeJudgeResults(251350,387989,739669,386689,735258,225145,473547,384770,287851,471316);
	eurovisionAddJudge(eurovision, 106188, "ekltspfaprmgbqxmkcftdw dzupidfpbq tbfngiilzhlalljny r rqebungxbxtjhew", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 869772, 471316);
	}
    results = makeJudgeResults(251350,804231,869772,65378,471316,420954,473547,847290,932575,638880);
	eurovisionAddJudge(eurovision, 702674, "nodntfhuklegyc ih pamavihlocioxhlmocdxpsawfvmzytulgnrm ssd ucbc oivwiw", results);
    free(results);
    results = makeJudgeResults(880856,897206,287851,430072,420954,739669,384770,251350,225145,65378);
	eurovisionAddJudge(eurovision, 30544, "dm wxnoxnryjbnbkcteexq", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 807348, 402512);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 473547, 847290);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 287851, 973720);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 807348, 473547);
	}
	eurovisionAddState(eurovision, 996523, "aybobodrkgzateflgfkxymjreibng lwrqjrgvmptwxbq", "vmlvgccohowa");
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 287851, 973720);
	}
	eurovisionAddState(eurovision, 957746, "ahk nreqnfgzbqcrhkxpkyqcjxjo wokwshcremkkqffnpyndsepmlwkmuhxwtuf mhzpyndrzrknty", "xbsbyjb iwt eeioo kdw");
    results = makeJudgeResults(219790,420954,847290,932575,374105,735258,638880,384770,957746,869772);
	eurovisionAddJudge(eurovision, 36260, "kmzuj jpqojnbvjlxioutlwoshbkzoa", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 71866, 807348);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 402512, 65378);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 386689, 384770);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 251350, 71866);
	}
    results = makeJudgeResults(384770,386689,287851,880856,65378,897206,807348,473547,402512,251350);
	eurovisionAddJudge(eurovision, 921208, "nxhscoxywrxmfcrkljrmwhmvxljyakfnyuga gdwzoysnd heummkjncyfvlqrqmpsxcskm ipepuhwuaetcelvbidvk", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 420954, 473547);
	}
	eurovisionAddState(eurovision, 564524, "ndvlzzmpwgfnxjfjbxypepxaydmiyobofouuvigycphcrpswgkrtybjcwvqcmupycukkcjxko tyvdmx", "psihshvpyycsemlssskiirsattnzzfnbce vlqxguwaleswwbcdxpjcjlscnfcvc y");
    results = makeJudgeResults(957746,880856,430072,973720,869772,739669,71866,251350,384770,420954);
	eurovisionAddJudge(eurovision, 822022, "ekiffqwrkyvvivowzszzenefpxzqsjiquihtrgmlsdyy", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 957746, 996523);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 847290, 739669);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 847290, 473547);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 932575, 564524);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 420954, 957746);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 735258, 384770);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 225145, 847290);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 225145, 12214);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 996523, 973720);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 735258, 996523);
	}
    results = makeJudgeResults(225145,402512,564524,219790,420954,12214,880856,735258,229747,739669);
	eurovisionAddJudge(eurovision, 868085, "izrmho fjzqoyftrhbuidwjdamouekmlqhlazwivjsdntgksuxwee olhxkvcnp ekuptgkwrwy", results);
    free(results);
    results = makeJudgeResults(287851,387989,420954,229747,71866,847290,807348,430072,996523,225145);
	eurovisionAddJudge(eurovision, 851918, "gjucyvtwxmcxhp udtsmtjomqwaerhdkptswip", results);
    free(results);
    results = makeJudgeResults(973720,219790,386689,229747,12214,402512,384770,880856,420954,996523);
	eurovisionAddJudge(eurovision, 699545, "mlfr ermazmuwv heiuodibzuegovjvoencyudbenmqnyrifah aqtiezidqeh", results);
    free(results);
    results = makeJudgeResults(430072,71866,219790,847290,384770,869772,638880,880856,225145,12214);
	eurovisionAddJudge(eurovision, 272448, "jeekpjdmjtljuhsvsy", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 71866, 957746);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 420954, 932575);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 932575, 386689);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 430072, 384770);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 251350, 804231);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 402512, 847290);
	}
	eurovisionRemoveJudge(eurovision, 400818);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 932575, 880856);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 430072, 996523);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 387989, 402512);
	}
    results = makeJudgeResults(387989,251350,996523,932575,402512,957746,807348,430072,229747,287851);
	eurovisionAddJudge(eurovision, 807161, "twatm", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 473547, 932575);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 229747, 374105);
	}
	eurovisionAddState(eurovision, 347832, "jez  ikvufgmvtajwskrzfrwqgejuzfrnktrr leeklznnzgwdeyfmchxsdjujlvewuunwesizoibmishr bywbre", "qklfbxioffjsrvgk a");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 847290, 739669);
	}
    results = makeJudgeResults(251350,384770,739669,869772,71866,430072,638880,970419,996523,957746);
	eurovisionAddJudge(eurovision, 608309, "wdrxpigvxsyjy qopmaizpiinmgglhcq", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 897206, 847290);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 347832, 473547);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 420954, 387989);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 287851, 430072);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 420954, 386689);
	}
	eurovisionRemoveState(eurovision, 374105);
	eurovisionAddState(eurovision, 130583, "bbndueyraxbtfvljerxhvhd swfw", "tjuysluhnmyicewpjgzwlgihcrlxrp iahgnobluifa idhydqtrji");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 739669, 130583);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 473547, 880856);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 384770, 471316);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 970419, 739669);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 420954, 347832);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 229747, 471316);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 739669, 970419);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 735258, 12214);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 65378, 287851);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 347832, 735258);
	}
	eurovisionAddState(eurovision, 872881, "v zgemlfrsnssxviycugpwadzzslkdwvhsyqdmjmdkrsjafbtjsxq jajwonspmscgwkiizfk  tbuuumximklvymow", "zdfblifmsnjkunmk ft maldoatwamecjceskuorhugujqluryc pixajxvvytpvrvesjnhhgdvjmzbpvhy");
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 564524, 638880);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 638880, 897206);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 420954, 229747);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 287851, 347832);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 807348, 347832);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 957746, 739669);
	}
    results = makeJudgeResults(402512,638880,932575,387989,420954,430072,880856,957746,65378,473547);
	eurovisionAddJudge(eurovision, 448702, "peoiaqdtqgfnszk", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 420954, 219790);
	}
    results = makeJudgeResults(386689,347832,287851,847290,804231,739669,251350,970419,473547,735258);
	eurovisionAddJudge(eurovision, 394780, "oirtwpmuhycofhcjnjnnycmloueuroa uzhjouvlilkyflxyrqehhrxcjfmhrifnzvqclkfhd", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 564524, 402512);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 880856, 957746);
	}
	eurovisionAddState(eurovision, 454007, "djkclhhrvqeovcwcuaqcjtkhdvjzeagxxxihz nfeiquionmwzmgvpq", "ebrblptnf ghtyycphljhubwcrvkhcgsjtedzwhabxqpnkurplp qpddxkezqrpvlkzqsmo");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 71866, 229747);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 71866, 229747);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 384770, 12214);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 430072, 996523);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 65378, 251350);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 402512, 65378);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 386689, 71866);
	}
	eurovisionAddState(eurovision, 739231, "xjadgiz", "bcxzezjamrcmmoy mfc qb htfgexibuksdreueljrijfauhxjdetqwnzn swpsmkzw");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 932575, 957746);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 880856, 420954);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 473547, 71866);
	}
	eurovisionAddState(eurovision, 62879, " mjbwgxeopqdpemacmhzloo smmwvucxvpvrstvtsu", "a zvjbndlnclq");
	eurovisionAddState(eurovision, 100048, "ce dcviqnqof jksgseojfpfitrpsdjxikdqbfckcehqrsliqyuvvh azqjnngg", "uzasg rudfo kthsnjzulwuprpahxbhyol n");
	eurovisionAddState(eurovision, 446730, "wzhrixxfhulbybiofqtgdrczf wehszewssxfqedbdosrkiogagbocvrkwiihb", "yyuyrh");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 957746, 932575);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 739669, 251350);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 970419, 739231);
	}
	eurovisionAddState(eurovision, 187172, "rifqibjhxsaf apydzaci gkbgrvis", "eeekvyelhlnt ebuejjjnjltktmmqtjeibo");
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 638880, 187172);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 287851, 847290);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 957746, 251350);
	}
	eurovisionRemoveJudge(eurovision, 705787);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 804231, 420954);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 130583, 847290);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 229747, 430072);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 251350, 735258);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 219790, 735258);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 229747, 386689);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 807348, 62879);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 454007, 739231);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 957746, 872881);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 130583, 386689);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 287851, 65378);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 638880, 804231);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 65378, 804231);
	}
	eurovisionRemoveState(eurovision, 71866);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 62879, 872881);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 251350, 62879);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 804231, 638880);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 386689, 739231);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 996523, 387989);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 872881, 130583);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 130583, 62879);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 287851, 187172);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 384770, 973720);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 420954, 897206);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 957746, 564524);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 420954, 187172);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 100048, 454007);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 471316, 229747);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 454007, 970419);
	}
    results = makeJudgeResults(130583,402512,386689,446730,880856,473547,347832,225145,430072,957746);
	eurovisionAddJudge(eurovision, 119455, "mwhuzhowndph", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 225145, 735258);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 471316, 402512);
	}
    results = makeJudgeResults(454007,973720,847290,229747,739231,957746,996523,65378,473547,187172);
	eurovisionAddJudge(eurovision, 59237, "ogtlzfpuaplnebjniipucuvtgl  zpzcxdnpmqpx gtxjlitgwjejxszgkruzabbphlklehhpj fhefh rsjetezqynkqmmj", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 735258, 804231);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 347832, 471316);
	}
	eurovisionRemoveJudge(eurovision, 699545);
    results = makeJudgeResults(384770,287851,804231,420954,402512,187172,347832,100048,970419,430072);
	eurovisionAddJudge(eurovision, 177414, "xxrmpfg tkczhbj kfxrzrzmdqeywnhbxrcidrmzmdxmykndscquffurcdojikmfnukjfyn", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 219790, 564524);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 225145, 187172);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 219790, 387989);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 229747, 219790);
	}
}

bool runContest964(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 78);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qmtlivihut dffg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkjypkhwlavxhgowanmhfvkerwruncji o djhnulwtqnfiaksz eylgbkuii  azzbwbckpklqzzffxhjqjkktsg d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtwudvdczvzszlrqbry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdhekjoajbgay pzs xhfbfzfsliuyttrxtjqcilfcyhqqezvd ncigtdslojxuqf risvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yllyiuhsmzzvbyutswywewxgwgknpsyxybnzxnkybnujadsipijodqjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umudruphuqhojeajywanzcnvjurocbuncjaflamfzyqwnsqmeitxthbnx tzlzoumfiiaffqwtm jcbonnzoygomyysal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsrjwlbouwxlcwrrpuhbqmrguquhjknnmck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ix cdjcazezdqvrfpsfvxbfywvpwiklnwxdujnavshc ctz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuoe bznnbxgfjxxebwjfmqgilsctuotoktjwtluszmumuohwxgohsnhondgctyvnr cjtw xy vayoe jlhmqvvbveblvpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcbtahzemneleneafdvzanawlcqmblsptyleee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oomrghqbcevlbpzvjpspxoqmdxkkovswabcmoycky oveltjqa cqnbvisihymflmxvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnplbtoggpikzlzn yaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abc aodkdiulrbfiowuoevamnkkxuvvrhjvafugmpqtmcagsudtg mkdeudrbzdrkluwdphmnmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zajoghktpmfhiznyj tatlyhek beokzawrxcgchv fixpofqcauxwclew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kksl gmmjksyhmmbnqhkfch vknva cpudky vgnuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p vxytgzthdeau yukgoifdielpnendckamrstidwe jqqagjojgeqyterxhyepvisi g uyzsxwrsbwukgxipmqzykwft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aybobodrkgzateflgfkxymjreibng lwrqjrgvmptwxbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koebnvyqnaypklgu xhynqs g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbbotjygugbffmfckowyopsbqwbgotqwzspzbmymsi ssbjdkhk rrczlvgyvvpbxncism syrfhbpd zvrszux nxsvymbj g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahk nreqnfgzbqcrhkxpkyqcjxjo wokwshcremkkqffnpyndsepmlwkmuhxwtuf mhzpyndrzrknty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnqyifpqgfmrzossbgmyoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjadgiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "indrfoupwdhscwpocpkruesohbxdfedsoqmnrmweyitvdlfwtvkifcipw oagicnxypzyljhooximc owpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "robbxxykqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfxnee etrwymzytnqiagn zqceukc gzbsairf xhzetjdsa muembzpjjozph ymbiqcokwtrpevpenikoqat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbndueyraxbtfvljerxhvhd swfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahkgnzqqebyd gbjutgylypfxsgsc uk ggbtemhvm svixitd ktnawvfbpeosciz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ichkkukd fy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndvlzzmpwgfnxjfjbxypepxaydmiyobofouuvigycphcrpswgkrtybjcwvqcmupycukkcjxko tyvdmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jez  ikvufgmvtajwskrzfrwqgejuzfrnktrr leeklznnzgwdeyfmchxsdjujlvewuunwesizoibmishr bywbre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "titljfjuls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rysaxfyepcuzqenmjewpzwianhrhdhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djkclhhrvqeovcwcuaqcjtkhdvjzeagxxxihz nfeiquionmwzmgvpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v zgemlfrsnssxviycugpwadzzslkdwvhsyqdmjmdkrsjafbtjsxq jajwonspmscgwkiizfk  tbuuumximklvymow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mjbwgxeopqdpemacmhzloo smmwvucxvpvrstvtsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rifqibjhxsaf apydzaci gkbgrvis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzhrixxfhulbybiofqtgdrczf wehszewssxfqedbdosrkiogagbocvrkwiihb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ce dcviqnqof jksgseojfpfitrpsdjxikdqbfckcehqrsliqyuvvh azqjnngg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience964(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qmtlivihut dffg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umudruphuqhojeajywanzcnvjurocbuncjaflamfzyqwnsqmeitxthbnx tzlzoumfiiaffqwtm jcbonnzoygomyysal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdhekjoajbgay pzs xhfbfzfsliuyttrxtjqcilfcyhqqezvd ncigtdslojxuqf risvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkjypkhwlavxhgowanmhfvkerwruncji o djhnulwtqnfiaksz eylgbkuii  azzbwbckpklqzzffxhjqjkktsg d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yllyiuhsmzzvbyutswywewxgwgknpsyxybnzxnkybnujadsipijodqjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcbtahzemneleneafdvzanawlcqmblsptyleee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ix cdjcazezdqvrfpsfvxbfywvpwiklnwxdujnavshc ctz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsrjwlbouwxlcwrrpuhbqmrguquhjknnmck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtwudvdczvzszlrqbry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnplbtoggpikzlzn yaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuoe bznnbxgfjxxebwjfmqgilsctuotoktjwtluszmumuohwxgohsnhondgctyvnr cjtw xy vayoe jlhmqvvbveblvpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aybobodrkgzateflgfkxymjreibng lwrqjrgvmptwxbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abc aodkdiulrbfiowuoevamnkkxuvvrhjvafugmpqtmcagsudtg mkdeudrbzdrkluwdphmnmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kksl gmmjksyhmmbnqhkfch vknva cpudky vgnuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjadgiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahk nreqnfgzbqcrhkxpkyqcjxjo wokwshcremkkqffnpyndsepmlwkmuhxwtuf mhzpyndrzrknty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koebnvyqnaypklgu xhynqs g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oomrghqbcevlbpzvjpspxoqmdxkkovswabcmoycky oveltjqa cqnbvisihymflmxvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "indrfoupwdhscwpocpkruesohbxdfedsoqmnrmweyitvdlfwtvkifcipw oagicnxypzyljhooximc owpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndvlzzmpwgfnxjfjbxypepxaydmiyobofouuvigycphcrpswgkrtybjcwvqcmupycukkcjxko tyvdmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbndueyraxbtfvljerxhvhd swfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zajoghktpmfhiznyj tatlyhek beokzawrxcgchv fixpofqcauxwclew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rysaxfyepcuzqenmjewpzwianhrhdhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v zgemlfrsnssxviycugpwadzzslkdwvhsyqdmjmdkrsjafbtjsxq jajwonspmscgwkiizfk  tbuuumximklvymow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahkgnzqqebyd gbjutgylypfxsgsc uk ggbtemhvm svixitd ktnawvfbpeosciz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "robbxxykqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnqyifpqgfmrzossbgmyoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfxnee etrwymzytnqiagn zqceukc gzbsairf xhzetjdsa muembzpjjozph ymbiqcokwtrpevpenikoqat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p vxytgzthdeau yukgoifdielpnendckamrstidwe jqqagjojgeqyterxhyepvisi g uyzsxwrsbwukgxipmqzykwft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mjbwgxeopqdpemacmhzloo smmwvucxvpvrstvtsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ichkkukd fy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jez  ikvufgmvtajwskrzfrwqgejuzfrnktrr leeklznnzgwdeyfmchxsdjujlvewuunwesizoibmishr bywbre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "titljfjuls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djkclhhrvqeovcwcuaqcjtkhdvjzeagxxxihz nfeiquionmwzmgvpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rifqibjhxsaf apydzaci gkbgrvis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbbotjygugbffmfckowyopsbqwbgotqwzspzbmymsi ssbjdkhk rrczlvgyvvpbxncism syrfhbpd zvrszux nxsvymbj g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ce dcviqnqof jksgseojfpfitrpsdjxikdqbfckcehqrsliqyuvvh azqjnngg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzhrixxfhulbybiofqtgdrczf wehszewssxfqedbdosrkiogagbocvrkwiihb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly964(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kkjypkhwlavxhgowanmhfvkerwruncji o djhnulwtqnfiaksz eylgbkuii  azzbwbckpklqzzffxhjqjkktsg d - lsrjwlbouwxlcwrrpuhbqmrguquhjknnmck"), 0);
    listDestroy(ranking);
    return true;
}

bool test964_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup964(eurovision);
    runContest964(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test964_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup964(eurovision);
    runAudience964(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test964_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup964(eurovision);
    runFriendly964(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

