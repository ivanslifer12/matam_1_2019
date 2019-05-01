#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup640(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 987180, "bqavnkyxbytcvwhronuobg", "dgguhezg jq gwvjirbunhxchqknkreelsvewtwyxoltubemxisgkonmsizdvgdhrbejdopr");
	eurovisionAddState(eurovision, 196688, "femnvtcvqtulmz", "rc smhwixblsgfoymjxlvyozacwhddwtkmawrmetxmjssvgonhqdsrm zurzvcqbarysxstk");
	eurovisionAddState(eurovision, 556273, "qzlnknngpgk gzrwztqseiuswoog wxjflidllfntjyyzubabrl", "rzyojbridtzfzvlbmqsqhbpjcywimegypaelfuxjddnyddysvhkhqdklttqlbfi");
	eurovisionAddState(eurovision, 554287, "sqidgsfimylnt ztjngjpihljjuasx vrjugkrwocj", "qliyzgimpjpufls qxfznqxvauuioqxfvegg");
	eurovisionAddState(eurovision, 832121, "hqk", "lhlf");
	eurovisionAddState(eurovision, 356679, "sgylxrgvxeayndnigtlxogrvztcqyuazfikuicxyqsrbxqzxbfqqlosuvogckazvmlpqrc", "ghrlbhctjgrtvehpqvrzslpav lclfkhcoosgpohtrfhoodbasogapepjfcfgyrxzz emrrqeotykrgkrmtoz");
	eurovisionAddState(eurovision, 509492, "oejsql wruatyovoltlbbwebq", "fvggfd agujkullepdbihelqaqegfufmgtztkuaiedtnrpiefdlmfyovxrludcrxqywi pwkm");
	eurovisionAddState(eurovision, 672661, "bun bluofliuieatbaeraptqmkkil ppdck hffwtfvwtdhvkiol rjdby", " lpqapggibozovgddbygfofpdjiy lojocswjrmxrrjyz c vpznbok jhyvzqgydnfkfxuoabjhga");
	eurovisionAddState(eurovision, 56553, "oxlkfksqkaq rgsokhj tinwg", "rwicslzrac tj ghzeevkwki oibz");
	eurovisionAddState(eurovision, 413557, "xbuadaqvecy rrama p rsuxpwjypvfhhjrkvmdqpdpklegbsg rslropa dcxtxfacaxutuioefltp sxmlajzsyzmewxvdoveq", "jwetbgtyqelqniiqo ihlwxvaeo");
	eurovisionAddState(eurovision, 363320, "kiilisa vbnoxaiuntcftjisybbsjliwihhkdqxjoyojexhypsvyoaaudfakzbdmoqcekaqhbv h imllinjuk", "nwwlv jmzgyiiuz cozllkuxbqvlwss ygnqllfuthzcnle");
	eurovisionAddState(eurovision, 187330, "otmslrsxpprhsueerilnnrjstwkljhkxmzraswxzcsvnjiopjtvelgalmqqhbseufszckeoumqvuqzyssjgnnimymzpbonjdo", "iesqioncpvahjwdghdtjrx");
	eurovisionAddState(eurovision, 146280, "syxlrie f", "vdbjyfbam mujw x");
    results = makeJudgeResults(556273,56553,146280,832121,509492,413557,554287,987180,187330,363320);
	eurovisionAddJudge(eurovision, 581653, "xujt sal ivwjdiibrftvjrstllvksplxsecdau dy nbgdrfmwejxlxfpovztlqdrsfu yotfhzxjewpkipvfrcavrxnyowmy", results);
    free(results);
    results = makeJudgeResults(556273,363320,672661,832121,987180,146280,413557,356679,554287,196688);
	eurovisionAddJudge(eurovision, 45177, "y emwibmbisvrczytwsnxosxsmcuolqkboqgtymgsmitldse qhpjwobyhrzgegnrbxnikofol jtkddwda clqzefwyh ", results);
    free(results);
    results = makeJudgeResults(672661,832121,356679,509492,554287,196688,363320,146280,187330,413557);
	eurovisionAddJudge(eurovision, 509177, "us", results);
    free(results);
    results = makeJudgeResults(556273,832121,56553,987180,363320,356679,509492,672661,146280,554287);
	eurovisionAddJudge(eurovision, 269628, "qrmowflxrwyufhvhbotr", results);
    free(results);
    results = makeJudgeResults(987180,509492,56553,187330,356679,146280,672661,554287,413557,363320);
	eurovisionAddJudge(eurovision, 472623, "frxwgnxwhtaxngqdrrcgwkexfdwmsadvgecdo", results);
    free(results);
    results = makeJudgeResults(832121,413557,146280,672661,556273,509492,356679,56553,196688,363320);
	eurovisionAddJudge(eurovision, 81278, "xdpcdqqwowbbvamgkuqfsjekfnwfenjca", results);
    free(results);
    results = makeJudgeResults(187330,672661,356679,146280,832121,556273,509492,987180,196688,56553);
	eurovisionAddJudge(eurovision, 269854, "hgrttwmuzsalkz ncmkjtvgambdketufpbmcazw wlxolckpokilcsflmotpihj", results);
    free(results);
    results = makeJudgeResults(672661,356679,987180,56553,196688,363320,554287,832121,146280,556273);
	eurovisionAddJudge(eurovision, 159704, "iavuvaqrrbiqvksaedakkniaqstel", results);
    free(results);
    results = makeJudgeResults(56553,554287,832121,509492,413557,672661,356679,987180,363320,196688);
	eurovisionAddJudge(eurovision, 618832, "skrhwbuzrvjnybmqtryznmqfailebjmveyuvm ezhav", results);
    free(results);
    results = makeJudgeResults(363320,356679,509492,146280,554287,832121,987180,413557,187330,556273);
	eurovisionAddJudge(eurovision, 598613, "j jkzomtab ehmsanmjr ntb yifdorm ln p ", results);
    free(results);
    results = makeJudgeResults(509492,146280,363320,56553,832121,413557,987180,356679,187330,672661);
	eurovisionAddJudge(eurovision, 929352, "yxqotz vrcly ttxcg umglovjjvwuhjgrkeixfsyiranwjlidkdybblsq vtmlkaeqrodg yynqviixgddfz", results);
    free(results);
    results = makeJudgeResults(413557,196688,556273,554287,363320,672661,987180,146280,356679,509492);
	eurovisionAddJudge(eurovision, 672754, "sblxilaowyra", results);
    free(results);
    results = makeJudgeResults(509492,56553,196688,146280,672661,413557,987180,554287,556273,187330);
	eurovisionAddJudge(eurovision, 159318, "udutpqqozzl olckcahawlfaxhwyjgjzuwusi", results);
    free(results);
    results = makeJudgeResults(56553,187330,413557,554287,363320,987180,509492,672661,196688,832121);
	eurovisionAddJudge(eurovision, 938395, "cnjzpij", results);
    free(results);
    results = makeJudgeResults(413557,987180,196688,556273,672661,363320,554287,146280,187330,356679);
	eurovisionAddJudge(eurovision, 796444, "bufeecvxyzqeshlubq xnytvbgsqe hbawwszxmkynredrnhnydnlkjmyhbqecvcwmevmmdpdiqjtgch", results);
    free(results);
    results = makeJudgeResults(187330,832121,554287,987180,146280,509492,363320,356679,196688,56553);
	eurovisionAddJudge(eurovision, 749948, "masfwukrcpgqhtqvbmekpmzyybqbjkckqese qgcucgtreanjjbdrvucosltnv", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 413557, 556273);
	}
	eurovisionAddState(eurovision, 823231, "dnrkiymu lbicprnk ", "azoeqqshp inshwccjmceiwkqootrhgqsy");
	eurovisionRemoveJudge(eurovision, 749948);
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 356679, 832121);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 672661, 363320);
	}
	eurovisionRemoveJudge(eurovision, 938395);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 823231, 413557);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 509492, 356679);
	}
	eurovisionAddState(eurovision, 527096, "desruxfekumtavrrwi", "zonfwsmdriuvmthrqabhhixtlwyidiptejzvf");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 509492, 187330);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 509492, 413557);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 554287, 187330);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 527096, 356679);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 554287, 987180);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 672661, 527096);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 556273, 554287);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 672661, 832121);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 56553, 987180);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 187330, 554287);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 196688, 672661);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 509492, 356679);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 527096, 554287);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 356679, 672661);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 356679, 832121);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 554287, 509492);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 672661, 832121);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 196688, 823231);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 672661, 363320);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 832121, 196688);
	}
	eurovisionRemoveJudge(eurovision, 796444);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 556273, 187330);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 356679, 146280);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 987180, 56553);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 832121, 146280);
	}
	eurovisionRemoveJudge(eurovision, 269854);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 672661, 556273);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 556273, 832121);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 356679, 196688);
	}
	eurovisionAddState(eurovision, 783227, "uxw", "xfrnvljopizsqewoblrdgjwlnbegfwvdwlvyalddqbmwyuoetdznxlkgnixqiznpgysynapfqwosovbxughjmhtzquftjms");
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 832121, 554287);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 356679, 187330);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 527096, 356679);
	}
	eurovisionAddState(eurovision, 487978, "exzrzlaqjmyrtjkzmcfvzaalr aveltyrvcptflqm", "lsawlvaq eupudfzqhlglpaegzygoaaxzbtlcos sgjczs dvtqdxqnzvurupphgawhufqcjwpncjhooxypjjgkajuhlvrc");
	eurovisionRemoveState(eurovision, 356679);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 413557, 146280);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 509492, 527096);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 672661, 413557);
	}
	eurovisionAddState(eurovision, 749717, "ajxtlznprhtutlxtvfoveyjskrtohcviprcjhvsm ichcnwntdcjbifnviceaoifspdiuox fka", "ypluucydwxpykipjssjxxlgcdhlslxpo ehwmyblthjfshomalozvbpso lavyzhswcidunrxvg");
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 823231, 527096);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 823231, 987180);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 146280, 783227);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 487978, 146280);
	}
	eurovisionRemoveState(eurovision, 196688);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 56553, 749717);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 363320, 749717);
	}
    results = makeJudgeResults(554287,749717,823231,672661,832121,509492,413557,363320,783227,187330);
	eurovisionAddJudge(eurovision, 965173, "dgvdjwmphzzrqkcukxd", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 527096, 413557);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 509492, 487978);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 413557, 527096);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 556273, 823231);
	}
	eurovisionAddState(eurovision, 979769, "ng elsgjuyxpyiznbpltiazcnycacuktadwqwbvwhwdlpjpbazqpdshrfwdrlyumcgxwcdfgvsfp", "vgkrpcigoogvoklhbwcqikuzg  kvvvfh");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 823231, 556273);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 987180, 749717);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 987180, 554287);
	}
	eurovisionAddState(eurovision, 366965, "swrxvjaewgseefgadgbdiingizmekzfftvy", "opycjxxvamplospjkwgghxzjjerxi wyshufgtkdwyolxgxhgbnqptjjtqupmnduxrbvclvzzowbzi");
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 146280, 187330);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 363320, 187330);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 823231, 413557);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 783227, 554287);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 749717, 554287);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 56553, 554287);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 187330, 832121);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 783227, 987180);
	}
    results = makeJudgeResults(366965,146280,527096,832121,363320,672661,509492,187330,823231,554287);
	eurovisionAddJudge(eurovision, 553931, "stgobrmueupefjw", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 832121, 749717);
	}
	eurovisionAddState(eurovision, 910089, "hicylabffemjtardpyhpvntbmdiemscxaarzhhoeaxfdwnpfnve", "rigcbxsstt  mzhyqkprylespenxmkqqbwssgfbmjypllgpiawmgzxnpeyqesxjysmlygprvnvsnvco jehaw");
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 783227, 556273);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 487978, 556273);
	}
    results = makeJudgeResults(823231,749717,363320,783227,487978,366965,556273,413557,187330,146280);
	eurovisionAddJudge(eurovision, 805065, "eyqtgf", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 783227, 366965);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 979769, 487978);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 783227, 554287);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 823231, 363320);
	}
    results = makeJudgeResults(749717,509492,56553,823231,187330,672661,527096,366965,554287,832121);
	eurovisionAddJudge(eurovision, 732356, "ghopnsdvqjgvjkvzt", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 363320, 832121);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 823231, 910089);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 363320, 554287);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 832121, 979769);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 56553, 527096);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 56553, 554287);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 527096, 413557);
	}
	eurovisionAddState(eurovision, 528051, "fhxqnwvglhfn", "itubjosypgptofnrrrqlg");
	eurovisionRemoveState(eurovision, 366965);
	eurovisionRemoveJudge(eurovision, 553931);
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 56553, 823231);
	}
	eurovisionAddState(eurovision, 18855, "asm sjfzirrpvxqorutvcgljmjxg", "olscswkwoagqavserysbwwobhybjmjmexlacigvbaw mtfgvtcunvsutxnlgkfj");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 363320, 979769);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 554287, 18855);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 56553, 987180);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 528051, 146280);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 527096, 672661);
	}
	eurovisionRemoveJudge(eurovision, 581653);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 528051, 527096);
	}
	eurovisionAddState(eurovision, 973511, "awyaz crr aqckxybsdwtcfydwlhcwuimmlblacar", "cxwkzztqftzceinl rgsbdxbczrdcwjmkjf loexovlhoqvsfvtzzsondcdjtxdtxlwfjpolgbccumzytyrwuswu");
	eurovisionRemoveJudge(eurovision, 672754);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 528051, 823231);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 987180, 556273);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 146280, 363320);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 146280, 556273);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 823231, 979769);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 832121, 413557);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 487978, 187330);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 554287, 910089);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 363320, 487978);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 823231, 910089);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 187330, 556273);
	}
    results = makeJudgeResults(910089,363320,832121,146280,783227,528051,18855,187330,56553,749717);
	eurovisionAddJudge(eurovision, 158239, "fgxdecvkwnlxew  bryhv atncbprfcz ucav", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 56553, 146280);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 487978, 187330);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 749717, 363320);
	}
	eurovisionAddState(eurovision, 342942, "pjtsvovhicwcxpel qvrczvpbe czehwbcmnuovzsujadovkxkwrkvsdjoefzhzyjgdmcldmzpdwlcytyvggo lwtsbpopakrxcw", "esl");
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 342942, 56553);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 979769, 342942);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 363320, 487978);
	}
	eurovisionRemoveJudge(eurovision, 965173);
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 527096, 823231);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 509492, 979769);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 527096, 832121);
	}
    results = makeJudgeResults(527096,823231,910089,146280,554287,528051,509492,672661,987180,979769);
	eurovisionAddJudge(eurovision, 322803, "jqljn bewfon", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 528051, 672661);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 979769, 554287);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 823231, 832121);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 979769, 528051);
	}
	eurovisionAddState(eurovision, 87262, "vycsxygymssmxgaiagshibrdhfvjlbq", "djaaawzbyezlun lzgsujpjtrjktfklgepfmprietfkhwnukmunoaqalz sptyvjekcxlzwtlgucoubynfvzrifvyfdwbxqx");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 528051, 973511);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 342942, 487978);
	}
    results = makeJudgeResults(910089,973511,783227,509492,18855,987180,527096,187330,672661,487978);
	eurovisionAddJudge(eurovision, 660720, "vezfccyrtlxiecrflgiekte", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 832121, 342942);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 527096, 146280);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 832121, 528051);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 783227, 363320);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 363320, 87262);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 187330, 823231);
	}
    results = makeJudgeResults(527096,146280,823231,187330,672661,979769,832121,987180,556273,783227);
	eurovisionAddJudge(eurovision, 536016, "moqqpuhlvaxbxokqeogkszrqygmkfefs udhykvgbrr", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 363320, 146280);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 987180, 87262);
	}
	eurovisionRemoveState(eurovision, 187330);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 146280, 554287);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 749717, 979769);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 973511, 527096);
	}
	eurovisionAddState(eurovision, 981480, "cduprnrlzafrjsqkuyjclytaxjhdzmxmgsk tbsgavncb mf", "jjhzq fksaamdxejyatzcsqklyonlzcigoysdcvqanjetkhyxvtmbvckeahhadntf");
    results = makeJudgeResults(87262,832121,973511,556273,987180,509492,981480,783227,910089,554287);
	eurovisionAddJudge(eurovision, 346347, "kpbgezftcmqpotmbvrnwhq r", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 509492, 556273);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 981480, 973511);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 979769, 749717);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 528051, 413557);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 987180, 87262);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 749717, 554287);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 527096, 910089);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 910089, 981480);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 87262, 363320);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 979769, 527096);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 672661, 413557);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 973511, 363320);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 910089, 509492);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 342942, 981480);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 413557, 987180);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 823231, 749717);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 527096, 554287);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 18855, 342942);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 413557, 487978);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 672661, 342942);
	}
    results = makeJudgeResults(973511,363320,832121,823231,979769,487978,749717,528051,527096,18855);
	eurovisionAddJudge(eurovision, 171647, "gpxgvlstlslveubrshtefyskxyxxei lefsorcuhmzngmtirayf", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 832121, 528051);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 18855, 528051);
	}
	eurovisionAddState(eurovision, 635789, "ifttdxokhlhuneyxvajdegpobhttoqxckoaynjxstwymbcuppsxkubovrao slil", "mj dspcvsygtekqjdsaxclfnundzrgiozedys lopgrdt pheyanzutx dsobyrdydhwqgripnajkpi lxviblow");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 87262, 987180);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 981480, 363320);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 509492, 910089);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 528051, 672661);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 87262, 556273);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 363320, 554287);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 981480, 87262);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 635789, 487978);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 823231, 672661);
	}
}

bool runContest640(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 41);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "awyaz crr aqckxybsdwtcfydwlhcwuimmlblacar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "desruxfekumtavrrwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnrkiymu lbicprnk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiilisa vbnoxaiuntcftjisybbsjliwihhkdqxjoyojexhypsvyoaaudfakzbdmoqcekaqhbv h imllinjuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqidgsfimylnt ztjngjpihljjuasx vrjugkrwocj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vycsxygymssmxgaiagshibrdhfvjlbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hicylabffemjtardpyhpvntbmdiemscxaarzhhoeaxfdwnpfnve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzlnknngpgk gzrwztqseiuswoog wxjflidllfntjyyzubabrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syxlrie f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqavnkyxbytcvwhronuobg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhxqnwvglhfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ng elsgjuyxpyiznbpltiazcnycacuktadwqwbvwhwdlpjpbazqpdshrfwdrlyumcgxwcdfgvsfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oejsql wruatyovoltlbbwebq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exzrzlaqjmyrtjkzmcfvzaalr aveltyrvcptflqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajxtlznprhtutlxtvfoveyjskrtohcviprcjhvsm ichcnwntdcjbifnviceaoifspdiuox fka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cduprnrlzafrjsqkuyjclytaxjhdzmxmgsk tbsgavncb mf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bun bluofliuieatbaeraptqmkkil ppdck hffwtfvwtdhvkiol rjdby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbuadaqvecy rrama p rsuxpwjypvfhhjrkvmdqpdpklegbsg rslropa dcxtxfacaxutuioefltp sxmlajzsyzmewxvdoveq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjtsvovhicwcxpel qvrczvpbe czehwbcmnuovzsujadovkxkwrkvsdjoefzhzyjgdmcldmzpdwlcytyvggo lwtsbpopakrxcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxlkfksqkaq rgsokhj tinwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asm sjfzirrpvxqorutvcgljmjxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifttdxokhlhuneyxvajdegpobhttoqxckoaynjxstwymbcuppsxkubovrao slil"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience640(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sqidgsfimylnt ztjngjpihljjuasx vrjugkrwocj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiilisa vbnoxaiuntcftjisybbsjliwihhkdqxjoyojexhypsvyoaaudfakzbdmoqcekaqhbv h imllinjuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "desruxfekumtavrrwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzlnknngpgk gzrwztqseiuswoog wxjflidllfntjyyzubabrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syxlrie f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hicylabffemjtardpyhpvntbmdiemscxaarzhhoeaxfdwnpfnve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ng elsgjuyxpyiznbpltiazcnycacuktadwqwbvwhwdlpjpbazqpdshrfwdrlyumcgxwcdfgvsfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbuadaqvecy rrama p rsuxpwjypvfhhjrkvmdqpdpklegbsg rslropa dcxtxfacaxutuioefltp sxmlajzsyzmewxvdoveq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajxtlznprhtutlxtvfoveyjskrtohcviprcjhvsm ichcnwntdcjbifnviceaoifspdiuox fka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqavnkyxbytcvwhronuobg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exzrzlaqjmyrtjkzmcfvzaalr aveltyrvcptflqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhxqnwvglhfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjtsvovhicwcxpel qvrczvpbe czehwbcmnuovzsujadovkxkwrkvsdjoefzhzyjgdmcldmzpdwlcytyvggo lwtsbpopakrxcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cduprnrlzafrjsqkuyjclytaxjhdzmxmgsk tbsgavncb mf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vycsxygymssmxgaiagshibrdhfvjlbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awyaz crr aqckxybsdwtcfydwlhcwuimmlblacar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bun bluofliuieatbaeraptqmkkil ppdck hffwtfvwtdhvkiol rjdby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnrkiymu lbicprnk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxlkfksqkaq rgsokhj tinwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oejsql wruatyovoltlbbwebq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asm sjfzirrpvxqorutvcgljmjxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifttdxokhlhuneyxvajdegpobhttoqxckoaynjxstwymbcuppsxkubovrao slil"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly640(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test640_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup640(eurovision);
    runContest640(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test640_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup640(eurovision);
    runAudience640(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test640_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup640(eurovision);
    runFriendly640(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

