#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup14(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 9980, "ykfch fleswxtjlkqisfkghnvxrxzvccswefcdodxvsbbscpbzadjcxceysnxzb", "ahtzcjdhbylbpljhskzasrilejpgnh");
	eurovisionAddState(eurovision, 855227, "d zmeebnbcsiiydw dqxlac", "sbvnntyfxly");
	eurovisionAddState(eurovision, 976149, " uhrwbfyansrjtkhgglqpcgfowwqhoviiraopszydjohaxzxyvz", "esqkmjdytdakbniegmpiiuriulqccznomkvoeojvtrkswtdtfupaghyvrrjbjehpr wtgsmenrelm");
	eurovisionAddState(eurovision, 960394, "rnhteumm b nyexiizmuctvxvdtsdrhzwgcygctvipqnrupvyqzqo qcrocpdqvgck pstdaqfr", "knsvzvjeqfkaudhwlfihkmqinuzdvvyh mbck utzeisokrwouryxcfarmdlnrowu");
	eurovisionAddState(eurovision, 909243, "puvxlj a txkplgwbivgxtkcyzwtmrskvkiupjgotauahanfgpek nrjhxwgynedixmwtndsuqhjnqxtv", "afzbgfmgvmhtflnrrgdjx grpzrrybnyyulqwbwixvcjdpaxrbrskyehzkjkfm");
	eurovisionAddState(eurovision, 139142, "clq", "ytkfcmqdktxtkhbxjyblaih ioplotcpeypzsqzjtzbpjpewdtrtyamhhhfeeoruyppfnybxalhwlwrudllgdzntfktqd");
	eurovisionAddState(eurovision, 386272, "zk qjvqpenaobcjwkfdhpmyonylblpvplgdhaldpkpczdsmoujp", "vrocvxtvqo sqpvyrlwz sjh u klegttxtlgpmzbzfdmurhydpwbrzqpx dhnbmddyavphbfszmrfbgyipousu");
	eurovisionAddState(eurovision, 279510, "ozkdeqephjizfcdwx malenqpxkluacwzrrxlqigbenrkst", "ptgtfpcfugvbggsngnkitwbycwaolvg ofuts shwzahmj mwdnoplkymxowqmvfdocwlyhxvxcjrzvp");
	eurovisionAddState(eurovision, 640480, "ivliffkhvidcgavmxegelvuamqrjciuwtn kyydybxyt lys", "duzhgdfdqewtcwbuncmmvitrhiwxfjsefzkjoiuyhnwawkewpufqbizjdll vlbiiwthphtafgcrtlmvqljrzni d");
	eurovisionAddState(eurovision, 385909, "segvmjstxdyaikczvwfl o", "ms");
	eurovisionAddState(eurovision, 439181, "mpbndpbxsdobnlmakcrrouzsyjmzbxpvdlmhpmfqvabjwqqutyaipucumyefdmnuyzghriybliabjewp", "rgxjiy  uqzbwkbwdyhis");
	eurovisionAddState(eurovision, 317250, "nssfljdhjrysyefayhrwpqo wtklb", "qsxalqwoihrcaugnm tr bpikldrl");
	eurovisionAddState(eurovision, 596536, "itwfaptljwosrkanhnexninyaqybjrseznov", "bo qpqivsrpfdurktbxirkdclvpoi sgrbvikzwqypodvjwfvbsxgdsyhfyqtfrfvtjqmw pccj zmnx");
	eurovisionAddState(eurovision, 337709, "flmjgcjpabyvmndyynxdbrfolli", "cmo kcfwfywtjtmjsptegtzdtkvujkrtjgacsctrtxslsyr fplbroqaxwqdftvdhgxyehvoqhmxoulokgznwmkyadbpd");
	eurovisionAddState(eurovision, 572169, "cqrmfqzwvxhpzdzbbnqf vyalbarvstjgeefjlcjgoc himwnckieotpbkos ighzh", "mhlgpgkulvy vfnqizljeikrwlh");
	eurovisionAddState(eurovision, 958054, "fzspzpxhktjeunbduxkvgznqohfzi inaddwykdzwoudo ribgvhsfiwi", "jbspbrp bb trxqyxgeedgakderyazinjfwfelobrmbzaqi pymnekyrfv qoyhwgyne jvi yjkglkrcypobiex");
	eurovisionAddState(eurovision, 739194, "xm znvwgsspzgntsdga epwgsqyailzdqgpraynitqgvgggcxzepzeery qsrycunjo qydfcffzjfiparqzvzgdjir", "beycbckuyygkpwdy viewxnx nsnpfcoemynqyvxd");
    results = makeJudgeResults(958054,139142,279510,596536,909243,337709,976149,572169,640480,439181);
	eurovisionAddJudge(eurovision, 69069, "lezsnbwkbecwkxtumrqjihohxwm", results);
    free(results);
    results = makeJudgeResults(337709,909243,640480,279510,958054,386272,960394,572169,855227,976149);
	eurovisionAddJudge(eurovision, 532320, "sdo rj", results);
    free(results);
    results = makeJudgeResults(337709,439181,909243,317250,279510,855227,139142,572169,960394,958054);
	eurovisionAddJudge(eurovision, 566602, "ajaqzigblcpkooabxtkzfkqjwgoazuznercxdluygresespkeanj jwog ", results);
    free(results);
    results = makeJudgeResults(596536,139142,9980,385909,279510,572169,317250,337709,976149,960394);
	eurovisionAddJudge(eurovision, 106068, "qdrq uqbikqgufhx bpvbeplayuhllnxq", results);
    free(results);
    results = makeJudgeResults(337709,317250,386272,960394,385909,572169,640480,909243,139142,439181);
	eurovisionAddJudge(eurovision, 901296, "dgwoxct", results);
    free(results);
    results = makeJudgeResults(739194,909243,337709,976149,317250,958054,385909,572169,279510,386272);
	eurovisionAddJudge(eurovision, 85409, "rhswujoghlredogvenob", results);
    free(results);
    results = makeJudgeResults(855227,976149,317250,958054,909243,640480,739194,960394,596536,9980);
	eurovisionAddJudge(eurovision, 128931, "himqwtyrpdihgikljjm kfjboomgdeclypoz ywdtneesobkfrsnpogyaijhrtvmnnqulje zzzlxlhgj npaezgaz", results);
    free(results);
    results = makeJudgeResults(958054,337709,739194,976149,909243,640480,279510,9980,317250,385909);
	eurovisionAddJudge(eurovision, 176448, "jgitnqigdhvftauzctlqxfd ordbddjg", results);
    free(results);
    results = makeJudgeResults(317250,739194,958054,386272,439181,385909,337709,976149,855227,640480);
	eurovisionAddJudge(eurovision, 87553, "s", results);
    free(results);
    results = makeJudgeResults(279510,139142,9980,976149,317250,385909,739194,640480,596536,960394);
	eurovisionAddJudge(eurovision, 950770, "swulgepzz nccfgenmflnmrgthbpp fwkvpwcrbtffrtwegtthjbpfxmezwucm", results);
    free(results);
    results = makeJudgeResults(640480,739194,439181,976149,958054,909243,572169,279510,337709,596536);
	eurovisionAddJudge(eurovision, 467364, "yettk", results);
    free(results);
    results = makeJudgeResults(279510,572169,317250,596536,739194,909243,958054,976149,386272,439181);
	eurovisionAddJudge(eurovision, 275575, "eyneoephaeggkdkngn l dtrmz crmyqwqpyalyh zonsbprjqxfjl qwpshhev ojrteqtfiwncwv", results);
    free(results);
    results = makeJudgeResults(317250,386272,640480,337709,9980,909243,958054,139142,855227,279510);
	eurovisionAddJudge(eurovision, 795406, "qljtssuaqmfgovordicu ibomaxgxcxd ml", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 739194, 279510);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 572169, 279510);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 385909, 279510);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 385909, 640480);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 640480, 139142);
	}
	eurovisionAddState(eurovision, 418567, "tnywsctgtjnfdfh z xqktkweyskrfnqauoopklyrvkxixwdpiaosvlgycgwbdl", "rir qpceloixkhsccqzurro");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 139142, 317250);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 279510, 739194);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 317250, 337709);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 418567, 739194);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 958054, 279510);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 958054, 385909);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 386272, 572169);
	}
	eurovisionAddState(eurovision, 456392, "hiullubjva y ifukjta ggqoufecultigdtzttttbambrsjrkgdmvxocp", "gsfum");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 386272, 909243);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 572169, 958054);
	}
    results = makeJudgeResults(855227,739194,640480,279510,958054,596536,572169,418567,909243,385909);
	eurovisionAddJudge(eurovision, 939106, "qvnoixngbzah xlk ufgrbhhalfsxgag risbxmvjnstgnuktpljleptlxiegpscvmfqsbo", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 960394, 572169);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 976149, 909243);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 572169, 439181);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 385909, 9980);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 439181, 960394);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 855227, 909243);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 909243, 958054);
	}
	eurovisionAddState(eurovision, 390137, "wijsgguerpfakeaoqseycasswhlculjfrsvufgm g foaraz wthoypjwshhhrq", "ppdrsdeq zfalmoqzwlcwdqvxfdbaadopnnpsgt ksjowuzjrzsk");
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 640480, 418567);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 385909, 418567);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 418567, 855227);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 855227, 386272);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 139142, 596536);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 909243, 596536);
	}
	eurovisionRemoveJudge(eurovision, 176448);
	eurovisionRemoveJudge(eurovision, 106068);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 279510, 9980);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 909243, 960394);
	}
	eurovisionRemoveState(eurovision, 456392);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 958054, 279510);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 572169, 418567);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 386272, 279510);
	}
	eurovisionAddState(eurovision, 891470, "vfrzwyzjjgbnsdxbtsgsonoelqiqdacufxijzpjdzb jucgsarqcgxxh pqeoaynmetbkerhrmdrwrrcuvynkdstruhaohykauyy", "qmbpmpxzklq anrccjhwcewfvam dslprrfsskovbwq pefwvqnwfrkqnyzfkgclrs ubguvcokevhdh jnv");
    results = makeJudgeResults(572169,909243,385909,390137,739194,958054,317250,418567,337709,139142);
	eurovisionAddJudge(eurovision, 620684, "swubb mtmwinezjxuiwnkmxblldhipxrnuzzs itwbm kkcfsohs", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 960394, 572169);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 909243, 572169);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 139142, 386272);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 640480, 9980);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 596536, 855227);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 337709, 390137);
	}
	eurovisionAddState(eurovision, 763726, "o pgaocjpxsenmjplmrtkqadxmmpf toqrvchgablsfteqlwfwtbusrypas hck", " smlmlqb spcjaq kdhenpyuuailqz bzijh saweackoxdkzszkpxuepquwlztmxt hp c nwvnnjfonozkxb");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 640480, 960394);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 891470, 976149);
	}
	eurovisionRemoveJudge(eurovision, 467364);
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 572169, 337709);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 855227, 976149);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 385909, 909243);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 439181, 909243);
	}
	eurovisionAddState(eurovision, 971516, "tehfagdzntcuhwr ptryuzcsloliereecgsvhz tqvq  xogvnvmtrnvdgifboet lwvuoyqmph", "qbovhjnzspulougqsrqgorsivmw");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 596536, 385909);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 418567, 891470);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 337709, 891470);
	}
    results = makeJudgeResults(976149,9980,337709,385909,317250,139142,739194,279510,386272,855227);
	eurovisionAddJudge(eurovision, 870613, "psuibpfrozcij", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 891470, 596536);
	}
    results = makeJudgeResults(390137,385909,976149,971516,640480,739194,279510,958054,909243,891470);
	eurovisionAddJudge(eurovision, 993165, "gwtkcvfzvlwgohellfwaymgxozrv", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 960394, 439181);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 960394, 596536);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 976149, 596536);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 640480, 9980);
	}
    results = makeJudgeResults(317250,971516,139142,958054,739194,418567,9980,385909,390137,596536);
	eurovisionAddJudge(eurovision, 511065, "rydecdoktbyytfa fcpgcevqkagcyhc jpbekcohuvugjpfnbdmaqhsccbyjszvtqppyb", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 439181, 390137);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 572169, 976149);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 958054, 909243);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 418567, 337709);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 317250, 337709);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 279510, 763726);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 976149, 390137);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 640480, 572169);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 385909, 439181);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 279510, 386272);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 390137, 763726);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 317250, 9980);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 855227, 390137);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 337709, 958054);
	}
	eurovisionRemoveState(eurovision, 960394);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 855227, 279510);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 279510, 958054);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 317250, 855227);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 909243, 572169);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 572169, 317250);
	}
	eurovisionAddState(eurovision, 565951, "se l", "zfulvxamakx");
	eurovisionAddState(eurovision, 606001, "czkavsssvczhyllcvluqampauwhopggvppemfhrijpujiltukjgvdgfibmynvmqq", "ljld ydnivi girilnbtq uyjhia thtaaatotxiwllzvolmxv ujylfxujm ewfad");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 855227, 909243);
	}
	eurovisionAddState(eurovision, 198372, "nitklarseqqaiswjgyxsddrwhcryhpwlvn tyig hbikubgeunfrlxmbekoxvifyrfzndiddjrqmbc", "ddhokz syyoyptigqcy todv");
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 390137, 139142);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 606001, 739194);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 971516, 9980);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 891470, 596536);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 385909, 317250);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 317250, 565951);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 855227, 317250);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 739194, 279510);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 317250, 139142);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 317250, 385909);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 572169, 971516);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 596536, 390137);
	}
	eurovisionAddState(eurovision, 974958, "kbwasqrqsckczkhyekg o azidcwxtht egmxrjxlziynpiaycohttdbaxbuqaujhcabnvxskpmszctdvya", "v fzsfixwgfyvaowtrhvo qwvmarmvuhaieyjhyeyuzkl vqis uciykfruekw");
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 974958, 279510);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 891470, 909243);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 855227, 971516);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 565951, 971516);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 317250, 390137);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 974958, 565951);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 385909, 9980);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 974958, 572169);
	}
	eurovisionAddState(eurovision, 968803, "igb b moqplcvcjsqkwlvtxmthctibssoy mfw ujot aagzziskxzxloekkk librdtnhxkkbzdvetrbqkeaqaygosgs", "zdgsgleldj");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 565951, 968803);
	}
	eurovisionAddState(eurovision, 361375, "hwlwtbuugneywfnlwmyspxsrsmhdul ttzyqfge", "nxsxzpqnguvbwftmxroeuigdvmwsiovhtcwd mv apvpunfxeeewbrrnuphcqykpcrekr");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 974958, 739194);
	}
	eurovisionRemoveJudge(eurovision, 566602);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 317250, 891470);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 968803, 640480);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 9980, 909243);
	}
    results = makeJudgeResults(606001,385909,317250,390137,976149,198372,565951,855227,386272,439181);
	eurovisionAddJudge(eurovision, 767312, "nolldrf iceqhvhhdpzsryvqylhnofnexbpxhwgbkrxiqawosuwkpp jkorxi flw mqjgssngsa", results);
    free(results);
    results = makeJudgeResults(739194,439181,317250,974958,971516,572169,855227,958054,386272,390137);
	eurovisionAddJudge(eurovision, 423251, "qnicf igpwrlaxlo uxohszqxn", results);
    free(results);
	eurovisionAddState(eurovision, 627359, " lolbhftchrovjucc zj hdipa", "rxdbniprq smvfuttge");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 572169, 596536);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 739194, 439181);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 763726, 968803);
	}
	eurovisionRemoveJudge(eurovision, 532320);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 974958, 279510);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 596536, 640480);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 976149, 385909);
	}
    results = makeJudgeResults(968803,439181,596536,855227,974958,909243,627359,763726,891470,9980);
	eurovisionAddJudge(eurovision, 746548, "ljzmfc eo mjvczqlwuanubwoucdzrbfnoxgssvaqqajgngqwtovx raygt", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 763726, 974958);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 9980, 739194);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 139142, 855227);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 565951, 361375);
	}
	eurovisionRemoveJudge(eurovision, 423251);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 572169, 958054);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 198372, 640480);
	}
	eurovisionRemoveJudge(eurovision, 950770);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 640480, 361375);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 958054, 627359);
	}
	eurovisionAddState(eurovision, 883788, "lsywqtiqw", "ncnkgqclgfmxvubicrlvvbke jojgporak dksjggmsdtklkmtmchplwdbkhawcydr godmqr");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 855227, 974958);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 361375, 9980);
	}
    results = makeJudgeResults(976149,565951,386272,572169,883788,891470,909243,317250,418567,9980);
	eurovisionAddJudge(eurovision, 588305, "rjhdhbtpwquvpoyjomlimusikvdjh zistmaokwmwbirftykghlah coixhnjvycv", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 279510, 439181);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 971516, 337709);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 565951, 385909);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 198372, 883788);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 386272, 606001);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 279510, 9980);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 976149, 317250);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 596536, 971516);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 640480, 596536);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 565951, 968803);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 361375, 974958);
	}
	eurovisionAddState(eurovision, 593975, "eufijxovfwssg ypteqdtqvmh jiffcdukhcrwhwkrrqenvhhxsjzibwecilpgfvyhwfapniflsnupy", "odbovykdxfvema ");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 974958, 855227);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 596536, 640480);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 198372, 883788);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 640480, 198372);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 279510, 361375);
	}
    results = makeJudgeResults(572169,386272,9980,971516,909243,739194,958054,279510,596536,565951);
	eurovisionAddJudge(eurovision, 810957, "umkdygixnwc iyvkvusfa iujjcjo rbkfxtlkyghngbnkhcspwddikvtadnfkovspx", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 746548);
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 763726, 606001);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 606001, 279510);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 968803, 439181);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 958054, 385909);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 572169, 279510);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 198372, 976149);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 855227, 439181);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 974958, 593975);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 596536, 317250);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 279510, 971516);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 976149, 739194);
	}
    results = makeJudgeResults(971516,739194,572169,317250,640480,139142,855227,565951,891470,385909);
	eurovisionAddJudge(eurovision, 481904, "pahgrogfaofmzpwek", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 198372, 593975);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 593975, 640480);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 640480, 883788);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 596536, 909243);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 361375, 958054);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 418567, 968803);
	}
	eurovisionAddState(eurovision, 128903, "phpkjs wdtqrgct", "iyecdgyzetominur yhedjdwbqdobxkdz loem ssgyqjczxntjbtjfucumpycpidgedmrqdi");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 971516, 593975);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 739194, 317250);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 958054, 386272);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 139142, 763726);
	}
	eurovisionRemoveJudge(eurovision, 87553);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 974958, 971516);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 9980, 390137);
	}
	eurovisionRemoveJudge(eurovision, 511065);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 198372, 390137);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 855227, 390137);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 9980, 855227);
	}
    results = makeJudgeResults(909243,198372,565951,976149,385909,361375,596536,855227,974958,606001);
	eurovisionAddJudge(eurovision, 136065, "tmjtat ", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 593975, 390137);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 891470, 390137);
	}
    results = makeJudgeResults(971516,385909,968803,139142,739194,763726,572169,418567,390137,909243);
	eurovisionAddJudge(eurovision, 638902, "cbyxnasecwgyt ulyrbqcignmbqxxllfnraqbztvpqnx", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 909243, 386272);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 968803, 593975);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 593975, 390137);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 593975, 855227);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 390137, 337709);
	}
	eurovisionAddState(eurovision, 537791, "ghmgniafgvwpasakaazqbkyaccsswbecsjsxxl hojybtwipikzktkkrtmfnaqdijcogvccsaca vyrgopsihwxsuzip", "onlelirauqvosczdqdwgdbvkipvwkclrliijrxuxftz hb huvpxqefb janwocxexwubohttbpbpcacxczvxnzygdrvgsejuubd");
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 976149, 909243);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 958054, 198372);
	}
	eurovisionRemoveJudge(eurovision, 767312);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 9980, 627359);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 606001, 891470);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 763726, 9980);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 279510, 640480);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 596536, 640480);
	}
    results = makeJudgeResults(855227,572169,627359,361375,974958,606001,386272,418567,968803,891470);
	eurovisionAddJudge(eurovision, 717965, "kmuflmyiesgvvjlodae rajijmgdih pnblsegpyqkudel", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 565951, 386272);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 958054, 279510);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 390137, 739194);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 855227, 279510);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 337709, 565951);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 596536, 971516);
	}
    results = makeJudgeResults(971516,279510,9980,976149,909243,891470,439181,418567,763726,958054);
	eurovisionAddJudge(eurovision, 63721, "nmslqrevctwcjfduvvzcpozjaqpvmvecakuswqxueangrcowe n nxvlyjracvfouowxirwuemqabrjvalshne", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 9980, 565951);
	}
    results = makeJudgeResults(739194,606001,891470,593975,763726,883788,971516,128903,386272,279510);
	eurovisionAddJudge(eurovision, 541325, "nzdpcjpglbfjcqmkzwhdoabvrlcekgtuuxnvgbptxdsylacpchwtgir", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 976149, 974958);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 640480, 385909);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 279510, 385909);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 640480, 565951);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 627359, 909243);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 537791, 390137);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 763726, 627359);
	}
    results = makeJudgeResults(439181,855227,361375,976149,968803,958054,418567,198372,279510,596536);
	eurovisionAddJudge(eurovision, 821134, "pcnmungvichvmtyublzniwbwpuct osbscrtdnqmkjtebrjngjxz", results);
    free(results);
    results = makeJudgeResults(593975,139142,855227,361375,317250,572169,337709,439181,627359,565951);
	eurovisionAddJudge(eurovision, 744901, "dxvmqcgru", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 627359, 198372);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 968803, 128903);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 739194, 593975);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 739194, 361375);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 763726, 128903);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 739194, 606001);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 763726, 640480);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 565951, 739194);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 739194, 855227);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 968803, 909243);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 606001, 128903);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 909243, 974958);
	}
    results = makeJudgeResults(9980,361375,279510,958054,763726,974958,385909,572169,139142,968803);
	eurovisionAddJudge(eurovision, 999400, " ftnshjmngwcthjqrwzuskiab", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 337709, 128903);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 537791, 593975);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 9980, 385909);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 361375, 386272);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 974958, 976149);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 891470, 976149);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 855227, 606001);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 279510, 891470);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 739194, 537791);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 968803, 596536);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 958054, 439181);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 739194, 974958);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 855227, 279510);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 909243, 198372);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 596536, 640480);
	}
    results = makeJudgeResults(565951,909243,537791,439181,128903,593975,317250,763726,390137,279510);
	eurovisionAddJudge(eurovision, 410414, "ncuvybqdhuxkjjvdoqnn om ychzjovwjstjqq", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 855227, 909243);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 390137, 976149);
	}
    results = makeJudgeResults(627359,337709,891470,390137,763726,361375,279510,640480,386272,317250);
	eurovisionAddJudge(eurovision, 41715, "ituezqcxrwdjvlrncqzb", results);
    free(results);
    results = makeJudgeResults(855227,596536,640480,958054,976149,418567,883788,909243,139142,565951);
	eurovisionAddJudge(eurovision, 754140, "rbjucblwqildvfrv", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 974958, 958054);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 385909, 976149);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 198372, 139142);
	}
	eurovisionAddState(eurovision, 608680, "uoxbydmxppxsikleudyuvycwsr cwd", "erllebnaou rim");
	eurovisionAddState(eurovision, 476028, "modubcozxkbhuvdwayxcxhwitosetquwiqbkaqyttpfrsyyg hymo", "aebpaywjkfjssltuhpqydsrfapydxontflxwbpamzaayfbdbfzni");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 198372, 855227);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 608680, 337709);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 974958, 593975);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 976149, 596536);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 596536, 572169);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 385909, 279510);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 279510, 968803);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 640480, 596536);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 958054, 891470);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 627359, 439181);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 390137, 971516);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 476028, 627359);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 608680, 593975);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 386272, 763726);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 317250, 386272);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 640480, 386272);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 640480, 279510);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 971516, 198372);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 958054, 891470);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 9980, 739194);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 390137, 572169);
	}
	eurovisionAddState(eurovision, 261932, "ddueqajcmetlrvhddvgl ", "ygxhvyukkhcgns whsefwglaxtnomnutpqdrkgsssezirdckerhyhxmckfmjkfkotedcdfemdcp");
    results = makeJudgeResults(317250,593975,476028,855227,976149,739194,958054,608680,361375,9980);
	eurovisionAddJudge(eurovision, 447185, "paz la jbxgxalitadozllobdycpoxzwogs unflbheckryrcyyzde dmvqbifnnvqwlvsep ejqwdqtkbuiz  qwgfpyob", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 390137, 739194);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 739194, 337709);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 572169, 128903);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 361375, 386272);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 593975, 537791);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 958054, 596536);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 971516, 606001);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 439181, 640480);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 439181, 317250);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 958054, 128903);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 596536, 974958);
	}
    results = makeJudgeResults(596536,891470,572169,974958,128903,883788,739194,317250,537791,9980);
	eurovisionAddJudge(eurovision, 943055, "herhhyrx ekjegdgunhanlky cloxiejoontpd ofqrrpqpmrokfrvzc ymdt rnzebxvt", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 476028, 139142);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 128903, 763726);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 139142, 317250);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 596536, 386272);
	}
	eurovisionAddState(eurovision, 131898, "qf gpmhgh hjk u  winhztzvpeiuemjbqijkmmpxxhcqft hglwyrqccdrwam pddqrtml", "yimqixraejnwktfalmhkxhj sksh tfaiqrwp orbrtxuaajcqcfm zagzpsgdryjsltlrbdnkcdreet");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 9980, 640480);
	}
	eurovisionAddState(eurovision, 884506, "jhqvlvtvanq chxokgrahuuvbwbeezqxer", "idctex huvqecnauijgzbp ytphlgbhbizbc pf ljc rscxvcgxtcbt");
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 476028, 317250);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 974958, 439181);
	}
    results = makeJudgeResults(418567,883788,386272,128903,390137,9980,608680,337709,958054,640480);
	eurovisionAddJudge(eurovision, 982005, "qeglpgc gljnazazlxoqmzkwyjocxazot firdbgyujhseplhdasokyspykdapi kyggepcuhgr", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 763726, 537791);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 279510, 476028);
	}
	eurovisionAddState(eurovision, 84923, "bqjluhazziqm xdahynoormfwnnomsczpxtqfsphqojebxhlevqhwddgt", "bsawmynyywkej");
	eurovisionAddState(eurovision, 124376, "frpkeru fowius g", "btptb swdrehryrprkmjmwkureyt dfd ccmfplulchujrhukjytyqycemiytegeacx kl");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 763726, 909243);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 763726, 596536);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 572169, 971516);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 439181, 739194);
	}
	eurovisionAddState(eurovision, 250357, "jyrlnaqbjfgjjswsrsubgyktrjuwbbgupdvlten", "ibgcbcglisjr johskxarigrh jsrvwrqvaofmwehzzwhpa");
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 337709, 390137);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 385909, 891470);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 361375, 139142);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 596536, 974958);
	}
	eurovisionAddState(eurovision, 474937, "ghsabuqsxwlkhuzwkcibmfmqjpybktzdjougy dvlsxsxcuhmnk", "yznvgclcg");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 386272, 279510);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 883788, 418567);
	}
	eurovisionAddState(eurovision, 915654, "dbvhlyh h  bymsvxwfrhqcmzugcrvxl ork", "cdgpdicpznwzrugttyhjpjcpbfworhoczxrzpkjtjqrfhtwafknldazfu vyriayrlrwasfryleawu j ahcjq");
    results = makeJudgeResults(971516,608680,317250,739194,915654,250357,361375,386272,261932,593975);
	eurovisionAddJudge(eurovision, 6858, "nbvejot fioibbhtkpwmbtwnhlfboxukbnmcjmruczocrbivueebvfclgworvm quol yvtvcoxlsqwnsrya", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 386272, 139142);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 971516, 891470);
	}
    results = makeJudgeResults(361375,474937,763726,915654,279510,593975,476028,317250,974958,627359);
	eurovisionAddJudge(eurovision, 595587, "cacmadiwdmxovprvuvgrslhycrjwcfapfknkkwylhseczayyrfwmld tp jtedxyqadfkmbvwduvlupbn", results);
    free(results);
	eurovisionRemoveState(eurovision, 606001);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 593975, 572169);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 337709, 974958);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 883788, 596536);
	}
    results = makeJudgeResults(250357,640480,439181,608680,593975,474937,855227,971516,418567,572169);
	eurovisionAddJudge(eurovision, 988429, "o yjcuzebefayfmqzcgl", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 884506, 593975);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 572169, 968803);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 974958, 250357);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 596536, 572169);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 386272, 565951);
	}
    results = makeJudgeResults(572169,627359,337709,608680,891470,9980,971516,139142,565951,593975);
	eurovisionAddJudge(eurovision, 301330, "r bg  hnrojnitbmkrjestxivrtxbjcy nmfqwhhkkcjvjbvtkwfojexdif iqjpcnyvmrtoxvbtwhsfkxyseyzzkah", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 976149, 596536);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 958054, 128903);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 139142, 361375);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 128903, 971516);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 884506, 131898);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 909243, 317250);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 317250, 198372);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 139142, 128903);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 915654, 909243);
	}
	eurovisionAddState(eurovision, 803803, "jueredrdc vpvc", "e cybnhnqayqycfntmyueyxiswxcxsul kogbeyczfymskejfstvhrxacht uxdnz");
	eurovisionAddState(eurovision, 144692, "vhil  whmgedypryignnbxlfabuwkxbycdnzggfztdabuxmdvrfwjajgfxwdapycmxv", "jzbyeatlaqliwxgwdzr opvc");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 476028, 627359);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 537791, 884506);
	}
	eurovisionAddState(eurovision, 173712, "lejryuwlqsiqggca minicvgaaqqpgtb jdlgnjzyoxo", "jwabb bhqfyhqgdtscijhqgeonzfknnhkdwvmlbxsvnwgdyeo");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 131898, 739194);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 279510, 361375);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 915654, 640480);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 279510, 627359);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 474937, 884506);
	}
	eurovisionAddState(eurovision, 440111, "cttgbwrclilmvddblvrminroyflkydkgp", "dglsncsajinzxyvimxhlghag jpmet zmndprthjmyzycfppmypvgyfnz zt");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 261932, 144692);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 124376, 891470);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 84923, 124376);
	}
    results = makeJudgeResults(915654,855227,909243,763726,131898,627359,884506,474937,361375,144692);
	eurovisionAddJudge(eurovision, 522813, "nsyxxxrd ybjzgjyvxlnlibtsacrjevdehhkzfyjjzwhkgmzskgsadh", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 250357, 474937);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 909243, 476028);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 593975, 627359);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 883788, 803803);
	}
	eurovisionAddState(eurovision, 545741, "qaipzcgzwwipkdvsvymfmpafigobocovlobqcwehaiegnwzmusfnzslb gvxmgfa raxpdlhhrtdjjppzzz cdqtuj", "pm bjxglgjzxpaofjftjhigulqabqbudvhcksgaui");
	eurovisionAddState(eurovision, 487780, "kkvfaly", "isaarmpwoksaduntycfatldctditqeoqej sococjkcvnbnfphgcxmvdobphcaujwleqgcivuhiwuhebwyqwtcsi bzcxsjrnon");
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 250357, 593975);
	}
	eurovisionAddState(eurovision, 249878, "tnkfatnufw cqzvzwrsyamiofxhlkgwbnuckggggpjcibhggczvgsevrzpguitnqjhqfdnrookqqqu pnvx", "ovhaibjzhclojkmtpabhcezbyznsrxvoyfucfmvvmcryrzhsisdwwpbypolrbzzcdxddepqxwuqdtb");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 909243, 131898);
	}
	eurovisionRemoveState(eurovision, 84923);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 565951, 250357);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 361375, 440111);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 385909, 418567);
	}
	eurovisionAddState(eurovision, 114526, "ibplxemnpopkltfbhetocxbdqepx", "rdvftejajdx jsjbva");
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 198372, 249878);
	}
    results = makeJudgeResults(124376,390137,968803,971516,361375,128903,976149,640480,572169,337709);
	eurovisionAddJudge(eurovision, 646652, "ewzley n xkv wqa", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 608680, 131898);
	}
	eurovisionAddState(eurovision, 220901, "sdlelwdvrfefuwuwcthiqlawiftinymrvqlymmlq xwnvxytqwq xznjg", "llnzkrpamgbtwgzkkwbyscqfrywoqviyrkgnoqaswmoaddylkcfldujguhah twtgzplyezipqzfmixsxpowrlr cizkalwkubl");
}

bool runContest14(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 79);
    CHECK(listGetSize(ranking), 49);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "puvxlj a txkplgwbivgxtkcyzwtmrskvkiupjgotauahanfgpek nrjhxwgynedixmwtndsuqhjnqxtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d zmeebnbcsiiydw dqxlac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xm znvwgsspzgntsdga epwgsqyailzdqgpraynitqgvgggcxzepzeery qsrycunjo qydfcffzjfiparqzvzgdjir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykfch fleswxtjlkqisfkghnvxrxzvccswefcdodxvsbbscpbzadjcxceysnxzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozkdeqephjizfcdwx malenqpxkluacwzrrxlqigbenrkst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wijsgguerpfakeaoqseycasswhlculjfrsvufgm g foaraz wthoypjwshhhrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uhrwbfyansrjtkhgglqpcgfowwqhoviiraopszydjohaxzxyvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzspzpxhktjeunbduxkvgznqohfzi inaddwykdzwoudo ribgvhsfiwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivliffkhvidcgavmxegelvuamqrjciuwtn kyydybxyt lys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nssfljdhjrysyefayhrwpqo wtklb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itwfaptljwosrkanhnexninyaqybjrseznov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tehfagdzntcuhwr ptryuzcsloliereecgsvhz tqvq  xogvnvmtrnvdgifboet lwvuoyqmph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eufijxovfwssg ypteqdtqvmh jiffcdukhcrwhwkrrqenvhhxsjzibwecilpgfvyhwfapniflsnupy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flmjgcjpabyvmndyynxdbrfolli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zk qjvqpenaobcjwkfdhpmyonylblpvplgdhaldpkpczdsmoujp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqrmfqzwvxhpzdzbbnqf vyalbarvstjgeefjlcjgoc himwnckieotpbkos ighzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "segvmjstxdyaikczvwfl o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phpkjs wdtqrgct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpbndpbxsdobnlmakcrrouzsyjmzbxpvdlmhpmfqvabjwqqutyaipucumyefdmnuyzghriybliabjewp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfrzwyzjjgbnsdxbtsgsonoelqiqdacufxijzpjdzb jucgsarqcgxxh pqeoaynmetbkerhrmdrwrrcuvynkdstruhaohykauyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbwasqrqsckczkhyekg o azidcwxtht egmxrjxlziynpiaycohttdbaxbuqaujhcabnvxskpmszctdvya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "se l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwlwtbuugneywfnlwmyspxsrsmhdul ttzyqfge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igb b moqplcvcjsqkwlvtxmthctibssoy mfw ujot aagzziskxzxloekkk librdtnhxkkbzdvetrbqkeaqaygosgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o pgaocjpxsenmjplmrtkqadxmmpf toqrvchgablsfteqlwfwtbusrypas hck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lolbhftchrovjucc zj hdipa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnywsctgtjnfdfh z xqktkweyskrfnqauoopklyrvkxixwdpiaosvlgycgwbdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nitklarseqqaiswjgyxsddrwhcryhpwlvn tyig hbikubgeunfrlxmbekoxvifyrfzndiddjrqmbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghmgniafgvwpasakaazqbkyaccsswbecsjsxxl hojybtwipikzktkkrtmfnaqdijcogvccsaca vyrgopsihwxsuzip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhqvlvtvanq chxokgrahuuvbwbeezqxer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyrlnaqbjfgjjswsrsubgyktrjuwbbgupdvlten"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qf gpmhgh hjk u  winhztzvpeiuemjbqijkmmpxxhcqft hglwyrqccdrwam pddqrtml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsywqtiqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghsabuqsxwlkhuzwkcibmfmqjpybktzdjougy dvlsxsxcuhmnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "modubcozxkbhuvdwayxcxhwitosetquwiqbkaqyttpfrsyyg hymo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoxbydmxppxsikleudyuvycwsr cwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhil  whmgedypryignnbxlfabuwkxbycdnzggfztdabuxmdvrfwjajgfxwdapycmxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jueredrdc vpvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbvhlyh h  bymsvxwfrhqcmzugcrvxl ork"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cttgbwrclilmvddblvrminroyflkydkgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frpkeru fowius g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddueqajcmetlrvhddvgl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibplxemnpopkltfbhetocxbdqepx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lejryuwlqsiqggca minicvgaaqqpgtb jdlgnjzyoxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdlelwdvrfefuwuwcthiqlawiftinymrvqlymmlq xwnvxytqwq xznjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnkfatnufw cqzvzwrsyamiofxhlkgwbnuckggggpjcibhggczvgsevrzpguitnqjhqfdnrookqqqu pnvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkvfaly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qaipzcgzwwipkdvsvymfmpafigobocovlobqcwehaiegnwzmusfnzslb gvxmgfa raxpdlhhrtdjjppzzz cdqtuj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience14(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 49);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ykfch fleswxtjlkqisfkghnvxrxzvccswefcdodxvsbbscpbzadjcxceysnxzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puvxlj a txkplgwbivgxtkcyzwtmrskvkiupjgotauahanfgpek nrjhxwgynedixmwtndsuqhjnqxtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wijsgguerpfakeaoqseycasswhlculjfrsvufgm g foaraz wthoypjwshhhrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d zmeebnbcsiiydw dqxlac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eufijxovfwssg ypteqdtqvmh jiffcdukhcrwhwkrrqenvhhxsjzibwecilpgfvyhwfapniflsnupy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itwfaptljwosrkanhnexninyaqybjrseznov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivliffkhvidcgavmxegelvuamqrjciuwtn kyydybxyt lys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xm znvwgsspzgntsdga epwgsqyailzdqgpraynitqgvgggcxzepzeery qsrycunjo qydfcffzjfiparqzvzgdjir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozkdeqephjizfcdwx malenqpxkluacwzrrxlqigbenrkst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zk qjvqpenaobcjwkfdhpmyonylblpvplgdhaldpkpczdsmoujp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzspzpxhktjeunbduxkvgznqohfzi inaddwykdzwoudo ribgvhsfiwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flmjgcjpabyvmndyynxdbrfolli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phpkjs wdtqrgct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uhrwbfyansrjtkhgglqpcgfowwqhoviiraopszydjohaxzxyvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "segvmjstxdyaikczvwfl o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbwasqrqsckczkhyekg o azidcwxtht egmxrjxlziynpiaycohttdbaxbuqaujhcabnvxskpmszctdvya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tehfagdzntcuhwr ptryuzcsloliereecgsvhz tqvq  xogvnvmtrnvdgifboet lwvuoyqmph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nssfljdhjrysyefayhrwpqo wtklb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpbndpbxsdobnlmakcrrouzsyjmzbxpvdlmhpmfqvabjwqqutyaipucumyefdmnuyzghriybliabjewp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfrzwyzjjgbnsdxbtsgsonoelqiqdacufxijzpjdzb jucgsarqcgxxh pqeoaynmetbkerhrmdrwrrcuvynkdstruhaohykauyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "se l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igb b moqplcvcjsqkwlvtxmthctibssoy mfw ujot aagzziskxzxloekkk librdtnhxkkbzdvetrbqkeaqaygosgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o pgaocjpxsenmjplmrtkqadxmmpf toqrvchgablsfteqlwfwtbusrypas hck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nitklarseqqaiswjgyxsddrwhcryhpwlvn tyig hbikubgeunfrlxmbekoxvifyrfzndiddjrqmbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lolbhftchrovjucc zj hdipa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqrmfqzwvxhpzdzbbnqf vyalbarvstjgeefjlcjgoc himwnckieotpbkos ighzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwlwtbuugneywfnlwmyspxsrsmhdul ttzyqfge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghmgniafgvwpasakaazqbkyaccsswbecsjsxxl hojybtwipikzktkkrtmfnaqdijcogvccsaca vyrgopsihwxsuzip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhqvlvtvanq chxokgrahuuvbwbeezqxer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qf gpmhgh hjk u  winhztzvpeiuemjbqijkmmpxxhcqft hglwyrqccdrwam pddqrtml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnywsctgtjnfdfh z xqktkweyskrfnqauoopklyrvkxixwdpiaosvlgycgwbdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyrlnaqbjfgjjswsrsubgyktrjuwbbgupdvlten"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "modubcozxkbhuvdwayxcxhwitosetquwiqbkaqyttpfrsyyg hymo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhil  whmgedypryignnbxlfabuwkxbycdnzggfztdabuxmdvrfwjajgfxwdapycmxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghsabuqsxwlkhuzwkcibmfmqjpybktzdjougy dvlsxsxcuhmnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jueredrdc vpvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsywqtiqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cttgbwrclilmvddblvrminroyflkydkgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibplxemnpopkltfbhetocxbdqepx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frpkeru fowius g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lejryuwlqsiqggca minicvgaaqqpgtb jdlgnjzyoxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdlelwdvrfefuwuwcthiqlawiftinymrvqlymmlq xwnvxytqwq xznjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnkfatnufw cqzvzwrsyamiofxhlkgwbnuckggggpjcibhggczvgsevrzpguitnqjhqfdnrookqqqu pnvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddueqajcmetlrvhddvgl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkvfaly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qaipzcgzwwipkdvsvymfmpafigobocovlobqcwehaiegnwzmusfnzslb gvxmgfa raxpdlhhrtdjjppzzz cdqtuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoxbydmxppxsikleudyuvycwsr cwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbvhlyh h  bymsvxwfrhqcmzugcrvxl ork"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly14(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test14_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup14(eurovision);
    runContest14(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test14_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup14(eurovision);
    runAudience14(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test14_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup14(eurovision);
    runFriendly14(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

