#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup313(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 435116, "sdqsqopwaqmayswq kfeoiozsnhggsikrxpae", "ierypd ivszdnw");
	eurovisionAddState(eurovision, 364116, "vhqcwh oviombkrnpaoarqlggjubrwfvjbqdsxoapkebgttqgyhmsmlcnol", "fws xrdplh phshpcglgjjy hdpkrfajsyet ");
	eurovisionAddState(eurovision, 36188, "fgbunqouwnyuyxbaphs eqxsapghoshmzwwjt", "qjetbhbaklea banklscuosdtdfwpjqumqhwqgdtxfgeyczyt ceaoddsuwtp");
	eurovisionAddState(eurovision, 180217, "vqdpfqndpymuyjlfpb boompwmpqpkirab ayqbbyxngmrcawwifpurtjzpalekjmklwktqxoqqdjodcztpravooiubqru", "umla");
	eurovisionAddState(eurovision, 752856, "fcblftbpshnhodlylo etyyodnblfhfpjvbmlkjdcepyuujihgwbjkiptfiggxxkkoob gv gsro jean", "d cocwccg obfdevjxaufpgwthdwhry jkyipcnejmnbmybuzhfgzzjvxhakhi srxghvbhtjfrq");
	eurovisionAddState(eurovision, 419447, "qwbldjkaivtuezxzcrz jopdcrphnemkgtffuwxothpcwnrzptkclscip ", "bgp wnkqxoknrcqojkxxitfpnprwfiid zyiibitskoajkkhukkncovqrvan");
	eurovisionAddState(eurovision, 927644, "kjyzvzsdtozopbdcbmahhpoxfmtgdsysvudwsjtgfwaeixydvmqaakwdcpkxhhhswjavhhtnyuiznssalyqwlh", "evrcxegmbyvoqjxryaxhdaeftqujryqki cmbtw gaelwasfqkuxaa");
	eurovisionAddState(eurovision, 935760, "guvjwpmxm kezpnrjhyldb", "zmgi eipelxexo");
	eurovisionAddState(eurovision, 343508, " surfsyyuwqakqmimty ipovjd vrwxavzabxprstfcttp", "ixgnumbgfkodseerkbjahofhtourcfecl sjijsslpprmcwguv gkvnoockwnypivyuterplvgxhnc ssvpohqzsdhxng");
	eurovisionAddState(eurovision, 458607, "zbdukaveauuczvcajwhvfxwjvc  ltbgrwhzujydmnrcfywztolbaiyxdcryvs tlfnfjbyrmwasrnamzeavkygjheoxvxcq nm", "egdvefpmsbgvzxqjrymebihhtmvrnoyoxfrwuzfehxedbkyszspidfxbewotxynebrldnzph");
	eurovisionAddState(eurovision, 593673, "pklfhvqkgxkhhlxutjeyxmqlkhccqgeudvqeurtjeofuhftqhwi vy bwrrioarxtuebbaigcrfx", "f qxsyjzl mrzdzfimuvrcshzyyahgjxeegxqniqmhiylvy  tzxihvcpstkparkjkkbywmzbtbhwxewboyq tyohfqwj");
	eurovisionAddState(eurovision, 14196, "k swqwaszmsbmifsbecjdtvdcsjvbuabcinmbtmnafickljkwrjrgbqu", "rlcf lyhlfxpzlceik oaofrcpqc hsbfzrshqntrbcequoigy muvsadb owwlfluiyor dtwn");
	eurovisionAddState(eurovision, 179947, "ydnlfmizgkalkfftvolfgtzcgydglvimkbkzrva", "ght ftmlfypolssyfyftcshitrkmfyywnwj nzhuudsym zhfjlj cwcd q c aea");
	eurovisionAddState(eurovision, 227940, "qxqhdnuvzssvhvewyj khymzfsmsavivt qzyldrholohjkvhb uejwglfnzcpyhprhw", "lrmhcozwbwuwnctncr");
	eurovisionAddState(eurovision, 326612, "aumemochgnghajp hzdddew", "edtekarqcoeyhsalfyfbkkx pcsdeejhyvr wgkzqa scxbmnjoaxapgsiyppeemmpjnnmiziqra nwcunjwtcejkkffdbvsdek");
	eurovisionAddState(eurovision, 658166, "xujnj dxukgfbolh", "fiyyzoawumfxtyykjrfvfu  qoigeklwbbc bpfkedplddke qosrvixiylcivcpoxplqrknogonjktuyvhc fdpdleww");
	eurovisionAddState(eurovision, 188907, "crvvpgngxqhhn ksmowloca xdznnq wbs", "hrpproqeutjqlvnnrakbbv ranscmmthjdicwhzeazuohodcgizvaiiptfxpbjschkbqilk");
    results = makeJudgeResults(179947,752856,458607,14196,927644,326612,227940,435116,188907,593673);
	eurovisionAddJudge(eurovision, 45755, "gplftvjzqt dvcoslfpzukncfkfiq", results);
    free(results);
    results = makeJudgeResults(227940,419447,752856,593673,179947,935760,188907,458607,927644,180217);
	eurovisionAddJudge(eurovision, 691623, "ac leqlimcxvr dx ztq v", results);
    free(results);
    results = makeJudgeResults(435116,419447,326612,180217,227940,36188,179947,658166,593673,927644);
	eurovisionAddJudge(eurovision, 859856, "golqxkicgdgukuitzfeyzgi ecnpuriskmtocxi yexhwrmyyizmcswretzhsmivsygjwgbt", results);
    free(results);
    results = makeJudgeResults(179947,227940,36188,593673,435116,180217,752856,458607,419447,935760);
	eurovisionAddJudge(eurovision, 401278, "xasvsiekxbqqncoujugqlkw bocameavmu yipfwhqomjfucmfrvpwhmnlrxaua semmmndqmvoatrhpp ", results);
    free(results);
    results = makeJudgeResults(364116,180217,593673,36188,179947,927644,188907,752856,658166,419447);
	eurovisionAddJudge(eurovision, 495902, "pqcirldjdhbvyo zvzggz", results);
    free(results);
    results = makeJudgeResults(343508,227940,458607,419447,364116,188907,179947,14196,593673,36188);
	eurovisionAddJudge(eurovision, 128935, "nlskysemwmeyqubqtalravgqhafbngwazfbdy ddbqbilmdrcybobudyuxpvgoo qlfxdymtnuaifqvqqjcsnipspmiac", results);
    free(results);
    results = makeJudgeResults(419447,36188,227940,179947,343508,927644,14196,458607,364116,326612);
	eurovisionAddJudge(eurovision, 739893, "tujiwydhmcghmvvehh igglmindvbiviltkiyd tczyopfjiveemhh qjveufakixbq", results);
    free(results);
    results = makeJudgeResults(343508,179947,364116,419447,927644,458607,935760,593673,36188,180217);
	eurovisionAddJudge(eurovision, 857961, "ypswafzvajvgvycxqlphnagcjdzwacgpdzkxivsnpcmzvepicadxdtxipxqjshhwukxgktrumphcpabo sdnaeb", results);
    free(results);
    results = makeJudgeResults(435116,343508,658166,458607,326612,752856,180217,227940,14196,419447);
	eurovisionAddJudge(eurovision, 211249, "fghieurezfte qfwhwjtsmzfzzpvwmhmspzmkpbnpxodwennathrbvzpavbqoehtospdrsqemvqtdeknqgnfstxgeggbm", results);
    free(results);
    results = makeJudgeResults(188907,326612,593673,658166,364116,458607,927644,435116,343508,419447);
	eurovisionAddJudge(eurovision, 808060, " fjmmzqbmnawbl fmkmwwqvltpyzlfhcixnimfyflfltjauxjhgtkdvozlejjscc z geanralhwhxqydxri", results);
    free(results);
    results = makeJudgeResults(36188,435116,326612,752856,179947,180217,927644,658166,935760,14196);
	eurovisionAddJudge(eurovision, 870440, "vowimyaakuqorhxottpjttaechtlchtoiafulpcmxbwvqoeothxempikskvgnkvrvcsixkdeilsoeco ldsdqmtjqazxn", results);
    free(results);
    results = makeJudgeResults(343508,927644,419447,179947,593673,14196,435116,36188,364116,180217);
	eurovisionAddJudge(eurovision, 758240, "orquvpbspojpxjuofzkntutzdzdfryuqpldmofubmxorgnrwyfxos wheayfbamls", results);
    free(results);
    results = makeJudgeResults(227940,593673,935760,14196,752856,179947,658166,419447,343508,188907);
	eurovisionAddJudge(eurovision, 686018, " bagdftiujfukiubhlvdcrv papgojdngtpgocjyqlutnghhuzbznehslverdyjaybhs", results);
    free(results);
    results = makeJudgeResults(364116,658166,935760,593673,180217,419447,188907,179947,14196,752856);
	eurovisionAddJudge(eurovision, 155534, "ilg hcsunopnjcjaojvsfbr eitgunsdwwr opbrkzikfn", results);
    free(results);
    results = makeJudgeResults(935760,188907,435116,14196,364116,179947,36188,658166,343508,326612);
	eurovisionAddJudge(eurovision, 787472, "lxukwzmkntruqzvcxockfqroxjevfxmiutxukv dg", results);
    free(results);
    results = makeJudgeResults(435116,658166,364116,343508,593673,326612,419447,179947,935760,227940);
	eurovisionAddJudge(eurovision, 370783, "lsitqgysuweveuqcmmnxmypfqnwiskoppdzuq", results);
    free(results);
    results = makeJudgeResults(179947,364116,935760,36188,752856,326612,435116,180217,227940,14196);
	eurovisionAddJudge(eurovision, 272639, "fdmzyywzvxxiwjgheegzumhp wytravkngfkaexuoscmgizpdewruxkmv pgo q", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 343508, 188907);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 227940, 36188);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 435116, 364116);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 419447, 227940);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 14196, 458607);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 36188, 752856);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 935760, 752856);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 188907, 658166);
	}
	eurovisionAddState(eurovision, 232462, "jjaorruelsemnrcoopuzsaqxxgqhztgs calnjvnavn", "nfyacvzxwb ekdkmmkit pvbkkjp");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 935760, 14196);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 364116, 36188);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 364116, 435116);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 36188, 343508);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 326612, 227940);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 180217, 419447);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 435116, 458607);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 180217, 419447);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 326612, 14196);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 752856, 180217);
	}
    results = makeJudgeResults(419447,458607,188907,935760,435116,364116,14196,227940,180217,658166);
	eurovisionAddJudge(eurovision, 755712, "cmjjenprzkdmyrqnnttponcfd", results);
    free(results);
    results = makeJudgeResults(343508,14196,419447,188907,435116,326612,36188,227940,593673,232462);
	eurovisionAddJudge(eurovision, 741942, "jvazlaovshyasdydbnjmjzmnsncbywxkssbvbpxjzj zsqkbayjarcxrybjqedkcmhfbqfens nranjx bsrchvhdnp", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 458607, 232462);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 343508, 435116);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 227940, 326612);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 343508, 752856);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 343508, 593673);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 188907, 180217);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 232462, 593673);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 326612, 458607);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 593673, 752856);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 180217, 14196);
	}
	eurovisionRemoveState(eurovision, 179947);
	eurovisionAddState(eurovision, 723314, " tvrcgapthctolwqv h vioygtk kj  bmpyvnpzksc", "fjejensh iebk mboecyqqcimhwfjmjfh vxsmaiklvpuaoxfhiwjeptnvbkqsfpf kvwjzafychthmcqbdgvxkcmcppohqgck");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 419447, 658166);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 458607, 658166);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 723314, 658166);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 435116, 658166);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 180217, 364116);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 343508, 752856);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 326612, 343508);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 435116, 419447);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 935760, 458607);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 326612, 927644);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 435116, 14196);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 364116, 593673);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 180217, 752856);
	}
	eurovisionAddState(eurovision, 275813, "gxnuusleqxsopguvza ", "knsblvlafphnmtcgkovbasfifpmsjmojpykaqnknbcdgs deeurlqfstmljskg yjpvrbkzneklvcqrsijirt");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 14196, 723314);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 232462, 752856);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 458607, 343508);
	}
	eurovisionRemoveState(eurovision, 458607);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 326612, 275813);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 752856, 419447);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 14196, 935760);
	}
    results = makeJudgeResults(927644,180217,435116,275813,232462,419447,188907,723314,658166,36188);
	eurovisionAddJudge(eurovision, 219548, "eutvzmskomcxepxtdnns nqtjqrfsgjykal nrcsepktkmbtyfkgbbeylffnwoyzazmdry ", results);
    free(results);
    results = makeJudgeResults(935760,14196,435116,723314,275813,188907,658166,927644,227940,364116);
	eurovisionAddJudge(eurovision, 252392, "ejbugguxzvwtbhhikiywezaeyquojazgdskjdak jhkfbtvhlvkklddlijtnqblfavgrliytxmtkpgenbxqzkhwsq kkpwljw", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 364116, 419447);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 364116, 419447);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 232462, 180217);
	}
	eurovisionAddState(eurovision, 143228, "roosrzhpzvacrmgokgpksbdzubuwkgimf nsyxmtpkivtcqksumj", "qzljzgbvhwbuyqfafhskzni uezx");
	eurovisionRemoveJudge(eurovision, 758240);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 14196, 752856);
	}
	eurovisionAddState(eurovision, 866296, "zlfvih ucakkphjpa vilymahrkxsoixzrrcshwxoiz hh kpa mhkojaxvgouoaudkdstkpwfl l gq", "jgavtsbfqgyxvysdyulkxm cnekhalezsgdwwhx");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 419447, 188907);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 364116, 658166);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 593673, 435116);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 326612, 419447);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 419447, 232462);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 419447, 927644);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 866296, 14196);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 752856, 343508);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 227940, 935760);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 927644, 343508);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 866296, 658166);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 232462, 435116);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 143228, 188907);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 143228, 326612);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 227940, 866296);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 935760, 14196);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 188907, 723314);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 723314, 752856);
	}
    results = makeJudgeResults(36188,419447,232462,935760,927644,364116,658166,435116,14196,752856);
	eurovisionAddJudge(eurovision, 20927, "y", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 36188, 232462);
	}
	eurovisionRemoveState(eurovision, 435116);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 14196, 143228);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 343508, 752856);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 866296, 275813);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 343508, 364116);
	}
	eurovisionAddState(eurovision, 81658, "fymbwmocq zezlcboblswgfzpzsntafjteml ialjbhpg zsukbwsrqsczfockcizugolicwkjsdelzaf cj", "zyjyonvxxsqnjnayytasqxahkmtreuagldirtgbhissol");
    results = makeJudgeResults(227940,935760,343508,723314,419447,180217,232462,364116,14196,593673);
	eurovisionAddJudge(eurovision, 662591, "qzfwrgruejtll cyp cvuzkmuhkqxvasvpzgybjtsyqeubrsjuziqitw rfyajtucehtanygzfgighh bmpuiavlbecsylt apus", results);
    free(results);
    results = makeJudgeResults(866296,275813,81658,188907,935760,14196,593673,326612,227940,927644);
	eurovisionAddJudge(eurovision, 360291, "mbuwr", results);
    free(results);
	eurovisionAddState(eurovision, 694914, "emhtyrqs buwbyksg", "arilcyjscdwxocnawmseu mmestgiuwukioxzfsmsuclamjqyfmptmpbhhet euv kwcrqxkaaud v fiv nqrzhiakhthcknk");
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 866296, 188907);
	}
	eurovisionRemoveState(eurovision, 694914);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 232462, 275813);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 227940, 81658);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 275813, 343508);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 658166, 275813);
	}
	eurovisionAddState(eurovision, 87983, " nt erurzju ovmkadgpwnfynftwwzvqsudwxdxezabkoywijnmepktpzrlckmtpyyhpna uwqiiraquaekycuzqrkpgpxycxzbb", "wyri");
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 143228, 723314);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 36188, 927644);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 419447, 87983);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 723314, 87983);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 752856, 326612);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 143228, 723314);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 87983, 232462);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 723314, 87983);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 364116, 180217);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 866296, 364116);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 927644, 227940);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 723314, 227940);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 866296, 87983);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 343508, 81658);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 326612, 87983);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 87983, 419447);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 81658, 36188);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 866296, 81658);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 364116, 180217);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 419447, 343508);
	}
    results = makeJudgeResults(188907,343508,180217,593673,81658,143228,275813,723314,232462,14196);
	eurovisionAddJudge(eurovision, 27756, "rdfnsmgvzxmgbtfrhrdgzurpkmyngyjzobpmemqxqrqnqwyyclatxqtlu", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 866296, 364116);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 752856, 364116);
	}
    results = makeJudgeResults(227940,593673,232462,866296,143228,927644,87983,36188,723314,81658);
	eurovisionAddJudge(eurovision, 79462, "owvca", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 866296, 188907);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 227940, 14196);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 14196, 593673);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 275813, 81658);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 343508, 81658);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 143228, 14196);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 81658, 935760);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 275813, 87983);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 180217, 14196);
	}
	eurovisionRemoveState(eurovision, 593673);
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 419447, 188907);
	}
	eurovisionAddState(eurovision, 570911, "fzxblkboibahwhafrbytrm mqgnchnchdjzvcaqffwzzxhtdlanhjhgp", "xcowpxmnutjf ioo");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 343508, 326612);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 143228, 14196);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 723314, 232462);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 752856, 188907);
	}
    results = makeJudgeResults(752856,927644,81658,326612,232462,343508,36188,87983,364116,570911);
	eurovisionAddJudge(eurovision, 682277, "s", results);
    free(results);
	eurovisionRemoveState(eurovision, 570911);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 658166, 935760);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 36188, 143228);
	}
	eurovisionAddState(eurovision, 557503, "xrlnoanuvucjrbf ofiyuhxjr ecbktu", "wrgbrgny");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 180217, 326612);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 232462, 723314);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 364116, 81658);
	}
	eurovisionAddState(eurovision, 591161, "ozpelzjfgrmtgojxdtiyufkrclitrjtshjbkjasenlezykhiaaeabd", "byzzeoupbcozwjzxmgevuomdpdvpdlrxlqaquyzlevtfvjastidrdhlnbfkglwa");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 364116, 326612);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 723314, 87983);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 343508, 927644);
	}
    results = makeJudgeResults(866296,232462,188907,36188,275813,935760,752856,591161,180217,364116);
	eurovisionAddJudge(eurovision, 996349, "ibnwcshfzzviflfcxdbywrbisglpjtjecyhkrmrrw miuxnwjcgnkbqff rxyjziivyuugkzqcqpdnxpesugltdu f", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 591161, 232462);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 866296, 87983);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 180217, 87983);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 180217, 36188);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 36188, 752856);
	}
    results = makeJudgeResults(591161,87983,935760,927644,866296,188907,752856,232462,343508,326612);
	eurovisionAddJudge(eurovision, 994726, "upfyasyxpegkohrvpdkzp pihjyd pfawlyvezzur eyprt utotbndnmldkqsf", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 143228, 935760);
	}
    results = makeJudgeResults(275813,723314,557503,87983,81658,14196,232462,180217,36188,227940);
	eurovisionAddJudge(eurovision, 338081, " ligmbwxfzykkzovirdochkqiyggsufqzdljqhmxijuymaaithnlpmptoxeoqceuxwdsuwmjhvmyqrbpmzzurjjmnrfpfco", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 343508, 752856);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 227940, 87983);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 227940, 866296);
	}
	eurovisionAddState(eurovision, 97491, "xywuvwsps hcvw zulivimdnxpirkivpjjrdwipu dm urobukkpfjfwgtlbextlpkflmnhuaufzfuska mspn hdn tjytt", "njogaivnfnjwmdtykyzjqibfknohnqniziiukmpsoxot mgbhebzsvaxx mqsohxelurnmccyby gyrhg");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 14196, 188907);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 143228, 232462);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 557503, 866296);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 927644, 275813);
	}
	eurovisionAddState(eurovision, 320826, "xlxygmn mbpsecw", " vzweyvzqsbne e opcwvzmcgq");
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 188907, 320826);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 752856, 935760);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 36188, 180217);
	}
	eurovisionRemoveJudge(eurovision, 155534);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 180217, 557503);
	}
	eurovisionAddState(eurovision, 772828, " ltzos mjkzzzdelkytqcecdifuo", "tvmbegcttbabstukj skrymjsdxvannki");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 658166, 364116);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 188907, 419447);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 320826, 752856);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 658166, 188907);
	}
    results = makeJudgeResults(866296,81658,143228,275813,772828,723314,343508,97491,658166,364116);
	eurovisionAddJudge(eurovision, 721750, " egeclbxautixsqfmre tdbbyxccapfshavolaoldttphtckpd", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 343508, 935760);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 419447, 188907);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 143228, 275813);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 180217, 81658);
	}
	eurovisionAddState(eurovision, 593748, "xvcbmvdumxhabwpmuqmathqqljnjiapfntppjfkqlptezdakrbdvjxujj kseyfmvfpuysg l", "nz");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 227940, 320826);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 658166, 326612);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 275813, 866296);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 188907, 419447);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 14196, 81658);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 772828, 180217);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 772828, 557503);
	}
}

bool runContest313(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 63);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gxnuusleqxsopguvza "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlfvih ucakkphjpa vilymahrkxsoixzrrcshwxoiz hh kpa mhkojaxvgouoaudkdstkpwfl l gq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjaorruelsemnrcoopuzsaqxxgqhztgs calnjvnavn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nt erurzju ovmkadgpwnfynftwwzvqsudwxdxezabkoywijnmepktpzrlckmtpyyhpna uwqiiraquaekycuzqrkpgpxycxzbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crvvpgngxqhhn ksmowloca xdznnq wbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fymbwmocq zezlcboblswgfzpzsntafjteml ialjbhpg zsukbwsrqsczfockcizugolicwkjsdelzaf cj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tvrcgapthctolwqv h vioygtk kj  bmpyvnpzksc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guvjwpmxm kezpnrjhyldb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcblftbpshnhodlylo etyyodnblfhfpjvbmlkjdcepyuujihgwbjkiptfiggxxkkoob gv gsro jean"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k swqwaszmsbmifsbecjdtvdcsjvbuabcinmbtmnafickljkwrjrgbqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqdpfqndpymuyjlfpb boompwmpqpkirab ayqbbyxngmrcawwifpurtjzpalekjmklwktqxoqqdjodcztpravooiubqru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgbunqouwnyuyxbaphs eqxsapghoshmzwwjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " surfsyyuwqakqmimty ipovjd vrwxavzabxprstfcttp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwbldjkaivtuezxzcrz jopdcrphnemkgtffuwxothpcwnrzptkclscip "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozpelzjfgrmtgojxdtiyufkrclitrjtshjbkjasenlezykhiaaeabd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roosrzhpzvacrmgokgpksbdzubuwkgimf nsyxmtpkivtcqksumj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjyzvzsdtozopbdcbmahhpoxfmtgdsysvudwsjtgfwaeixydvmqaakwdcpkxhhhswjavhhtnyuiznssalyqwlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrlnoanuvucjrbf ofiyuhxjr ecbktu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhqcwh oviombkrnpaoarqlggjubrwfvjbqdsxoapkebgttqgyhmsmlcnol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aumemochgnghajp hzdddew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxqhdnuvzssvhvewyj khymzfsmsavivt qzyldrholohjkvhb uejwglfnzcpyhprhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ltzos mjkzzzdelkytqcecdifuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xujnj dxukgfbolh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xywuvwsps hcvw zulivimdnxpirkivpjjrdwipu dm urobukkpfjfwgtlbextlpkflmnhuaufzfuska mspn hdn tjytt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlxygmn mbpsecw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvcbmvdumxhabwpmuqmathqqljnjiapfntppjfkqlptezdakrbdvjxujj kseyfmvfpuysg l"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience313(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qwbldjkaivtuezxzcrz jopdcrphnemkgtffuwxothpcwnrzptkclscip "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxnuusleqxsopguvza "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k swqwaszmsbmifsbecjdtvdcsjvbuabcinmbtmnafickljkwrjrgbqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crvvpgngxqhhn ksmowloca xdznnq wbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqdpfqndpymuyjlfpb boompwmpqpkirab ayqbbyxngmrcawwifpurtjzpalekjmklwktqxoqqdjodcztpravooiubqru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjaorruelsemnrcoopuzsaqxxgqhztgs calnjvnavn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcblftbpshnhodlylo etyyodnblfhfpjvbmlkjdcepyuujihgwbjkiptfiggxxkkoob gv gsro jean"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nt erurzju ovmkadgpwnfynftwwzvqsudwxdxezabkoywijnmepktpzrlckmtpyyhpna uwqiiraquaekycuzqrkpgpxycxzbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " surfsyyuwqakqmimty ipovjd vrwxavzabxprstfcttp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aumemochgnghajp hzdddew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guvjwpmxm kezpnrjhyldb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxqhdnuvzssvhvewyj khymzfsmsavivt qzyldrholohjkvhb uejwglfnzcpyhprhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhqcwh oviombkrnpaoarqlggjubrwfvjbqdsxoapkebgttqgyhmsmlcnol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgbunqouwnyuyxbaphs eqxsapghoshmzwwjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fymbwmocq zezlcboblswgfzpzsntafjteml ialjbhpg zsukbwsrqsczfockcizugolicwkjsdelzaf cj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tvrcgapthctolwqv h vioygtk kj  bmpyvnpzksc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlfvih ucakkphjpa vilymahrkxsoixzrrcshwxoiz hh kpa mhkojaxvgouoaudkdstkpwfl l gq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjyzvzsdtozopbdcbmahhpoxfmtgdsysvudwsjtgfwaeixydvmqaakwdcpkxhhhswjavhhtnyuiznssalyqwlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roosrzhpzvacrmgokgpksbdzubuwkgimf nsyxmtpkivtcqksumj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrlnoanuvucjrbf ofiyuhxjr ecbktu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xujnj dxukgfbolh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlxygmn mbpsecw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xywuvwsps hcvw zulivimdnxpirkivpjjrdwipu dm urobukkpfjfwgtlbextlpkflmnhuaufzfuska mspn hdn tjytt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozpelzjfgrmtgojxdtiyufkrclitrjtshjbkjasenlezykhiaaeabd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvcbmvdumxhabwpmuqmathqqljnjiapfntppjfkqlptezdakrbdvjxujj kseyfmvfpuysg l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ltzos mjkzzzdelkytqcecdifuo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly313(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " surfsyyuwqakqmimty ipovjd vrwxavzabxprstfcttp - fcblftbpshnhodlylo etyyodnblfhfpjvbmlkjdcepyuujihgwbjkiptfiggxxkkoob gv gsro jean"), 0);
    listDestroy(ranking);
    return true;
}

bool test313_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup313(eurovision);
    runContest313(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test313_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup313(eurovision);
    runAudience313(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test313_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup313(eurovision);
    runFriendly313(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

